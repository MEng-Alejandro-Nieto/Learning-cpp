/*
Correspodencia entre arreglos y punteros
*/
#include <iostream>
using std::cin; using std::cout; using std::endl;
//////////////////////////////////////////////////////////
/*
int main(){
    int n[]={1,2,3,4,5};
    int *dir_n,length;
    dir_n=n;
    length=sizeof(n)/sizeof(n[0]);
    for(int i=0;i<length;i++){
        cout<<i<<": "<<*dir_n++<<endl;
    }
    for(int i=0;i<length;i++){
        cout<<n[i]<<": "<<dir_n++<<endl;
    }
    return 0;
}
*/
int main(){
    int n[]={1,2,3,4,5};
    int *dir_n,length;
    dir_n=n;
    length=sizeof(n)/sizeof(n[0]);
    for(int i=0;i<length;i++){
        cout<<i<<": "<<*dir_n++<<" en "<<dir_n<<endl;
    }
    dir_n++;
    return 0;
}













