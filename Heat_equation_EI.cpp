#include <iostream>
#include <stdlib.h>
#include <math.h>

using std::cin; using std::cout; using std::endl;
//FUNCTION PROTOTYPE//////////////////////////////////////////////////////////////////////////////////////
float length{0},*dir_length=&length, tf{0}, *dir_tf=&tf, dx{0},*dir_dx=&dx, dt{0}, *dir_dt=&dt;
float k{0},*dir_k=&k, cfl={0},*dir_cfl=&cfl, **matriz1=NULL, **matriz2=NULL, *ni, *nf, *ic=NULL, *new_array=NULL,*arrayc=NULL;
int nodos{0}, *dir_nodos=&nodos, nt{0}, *dir_nt=&nt;
double pi = 3.14159265358979323846;
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void TimeSpace_grid();
void conditions(float *&ic);
void matriz_implicit(float **&matriz);
void matriz_Crank_Nicolson(float **&matriz);
void Gauss_Seidel_implicit(float **&matriz, float *&ic, float *&new_array,float *&arrayc);
void Gauss_Seidel_Crank_Nicolson(float **&matriz2, float *&ic, float *&new_array,float *&arrayc);
//////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(){
    TimeSpace_grid();
    conditions(ic);
    matriz_implicit(matriz1);
    matriz_Crank_Nicolson(matriz2);
    Gauss_Seidel_implicit(matriz1,ic,new_array,arrayc);
    conditions(ic);
    Gauss_Seidel_Crank_Nicolson(matriz2,ic,new_array,arrayc);
    return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////////
void TimeSpace_grid(){
    cout<<"Length: ";                 cin>>*dir_length;
    cout<<"Time step: ";              cin>>*dir_dt;
    cout<<"Grid step: ";              cin>>*dir_dx;
    cout<<"Thermal diffusivity: ";    cin>>*dir_k;
    cout<<"Final time: ";             cin>>*dir_tf; 
    *dir_cfl=*dir_k*(*dir_dt)/pow(*dir_dx,2);
    *dir_nodos=1+*dir_length/(*dir_dx);
    *dir_nt=*dir_tf/ *dir_dt;
}
void conditions(float *&ic){
    ic=new float(*dir_nodos);
    for(int i=0;i<*dir_nodos;i++){
        if(i==0){
            *(ic+i)=100;
        }
        else if(i==*dir_nodos-1){
            *(ic+i)=50;
        }
        else{
            *(ic+i)=0;
        }
    }
}
void matriz_implicit(float **&matriz1){
    matriz1=new float*[*dir_nodos-2];
    for(int i=0;i<*dir_nodos-2;i++){
        matriz1[i]=new float (*dir_nodos-2);
        for(int j=0;j<*dir_nodos-2;j++){
            if(i==j){
                *(*(matriz1+i)+j)=(1+2*(*dir_cfl));
            }
            else if(i==j-1){
                *(*(matriz1+i)+j)=-*dir_cfl;
            }
            else if(i==j+1){
                *(*(matriz1+i)+j)=-*dir_cfl;
            }
            else{
                *(*(matriz1+i)+j)=0;
            }
        }
        //cout<<endl;
    }
    //cout<<endl;    
}

void matriz_Crank_Nicolson(float **&matriz2){
    matriz2=new float*[*dir_nodos-2];
    for(int i=0;i<*dir_nodos-2;i++){
        matriz2[i]=new float (*dir_nodos-2);
        for(int j=0;j<*dir_nodos-2;j++){
            if(i==j){
                *(*(matriz2+i)+j)=2*(1+*dir_cfl);
            }
            else if(i==j-1){
                *(*(matriz2+i)+j)=-*dir_cfl;
            }
            else if(i==j+1){
                *(*(matriz2+i)+j)=-*dir_cfl;
            }
            else{
                *(*(matriz2+i)+j)=0;
            }
        }
        //cout<<endl;
    }
    //cout<<endl;
}

void Gauss_Seidel_implicit(float **&matriz,float *&ic, float *&new_array,float *&arrayc){
    new_array=new float[*dir_nodos-2];
    arrayc=new float[*dir_nodos-2];
    int contador=0;
    while(contador<*dir_nt){
        // Armando la matriz c 
        for(int i=0;i<*dir_nodos-2;i++){
            if(i==0){
                *(arrayc+i)=*(ic+i+1)+*dir_cfl* *(ic+i);
            }
            else if(i==*dir_nodos-3){
                *(arrayc+i)=*(ic+i+1)+*dir_cfl* *(ic+i+2);
            }
            else{
                *(arrayc+i)=*(ic+i);
            }
        }
        // Inicializando matrix auxiliar con 0
        for(int i=0;i<*dir_nodos-2;i++){
            *(new_array+i)=0;
        }
        // Aplicando Iteration de Gauss-Seidel     
        for(int iterador=0;iterador<5;iterador++){
            for(int i=0;i<*dir_nodos-2;i++){
                float aux=0;
                for(int j=0;j<*dir_nodos-2;j++){
                    if(j!=i){
                        aux=aux+*(*(matriz+i)+j)* (*(new_array+j));
                    }
                }
            new_array[i]=(arrayc[i]-aux)/matriz[i][i];
            }
            //cout<<endl;
        }
        // Actualizando el tiempo t+1
        for(int i=0;i<*dir_nodos;i++){
            if(i!=0 && i!=*dir_nodos-1 ){
                *(ic+i)=*(new_array+i-1);
            }
            cout<<*(ic+i)<<" ";
        }
        cout<<endl;
        contador++;
    }
    delete new_array;
    delete arrayc;
    //Mostrar temperaturas en nodos.
    for(int i=0;i<*dir_nodos;i++){
        cout<<*(ic+i)<<" ";
    }
    cout<<endl;
    cout<<endl;
}

void Gauss_Seidel_Crank_Nicolson(float **&matriz2, float *&ic, float *&new_array,float *&arrayc){
    new_array=new float[*dir_nodos-2];
    arrayc=new float[*dir_nodos-2];
    int contador=0;
    while(contador<*dir_nt){
        // Armando la matriz c 
        for(int i=0;i<*dir_nodos-2;i++){
            if(i==0){
                *(arrayc+i)=2 * (*dir_cfl) * *(ic+i) + 2 * (1-*dir_cfl) * *(ic+i+1) + (*dir_cfl) * *(ic+i+2);
            }
            else if(i==*dir_nodos-3){
                *(arrayc+i)= (*dir_cfl) * *(ic+i) + 2 * (1-*dir_cfl) * *(ic+i+1) + 2 * (*dir_cfl) * *(ic+i+2);
            }
            else{
                *(arrayc+i)=(*dir_cfl) * *(ic+i) + 2 * (1-*dir_cfl) * *(ic+i+1) + (*dir_cfl) * *(ic+i+2);
            }
        }
        // Inicializando matrix auxiliar con 0
        for(int i=0;i<*dir_nodos-2;i++){
            *(new_array+i)=0;
        }
        // Aplicando Iteration de Gauss-Seidel     
        for(int iterador=0;iterador<5;iterador++){
            for(int i=0;i<*dir_nodos-2;i++){
                float aux=0;
                for(int j=0;j<*dir_nodos-2;j++){
                    if(j!=i){
                        aux=aux+*(*(matriz2+i)+j)* (*(new_array+j));
                    }
                }
            new_array[i]=(arrayc[i]-aux)/matriz2[i][i];
            }
            //cout<<endl;
        }
        // Actualizando el tiempo t+1
        for(int i=0;i<*dir_nodos;i++){
            if(i!=0 && i!=*dir_nodos-1 ){
                *(ic+i)=*(new_array+i-1);
            }
            cout<<*(ic+i)<<" ";
        }
        cout<<endl;
        contador++;
    }
    delete new_array;
    delete arrayc;
    //Mostrar temperaturas en nodos.
    for(int i=0;i<*dir_nodos;i++){
        cout<<*(ic+i)<<" ";
    }
}
