#include<iostream>
#include<string>
using namespace std;
void llenarcaracol(string a, int clave){
    string aux[clave][clave];
    int paso=1;
    for(int i=0;i<clave;i++){
        for(int j=0;j<clave;j++){
            aux[i][j]='x';
        }
    }
    for(int i=clave-1;i>0;i--){
        if(paso==1){
            for(int j=0;j<clave;j++){
                if(a[j][i]=='x'){
                    a[j][i]='a';
                }
            }
        }
        paso++;
        if(paso==2){
            for(int j=clave-1;j>=0;j++){
                if(a[i][j-1]=='x'){
                    a[i][j-1]='b';
                }
            }
        }
        paso++;
        if(paso==3){
            for(int j=clave-1;j>=0;j++){
                if(a[j-1][i-(clave-1)]=='x'){
                   a[j-1][i-(clave-1)]='c'; 
                }
            }
        }
        paso++;
        if()

    }

int main(){
    string mensaje;
    cout<<"Ingrese el mensaje a cifrar"<<endl;
    int clave1;
    cout<<endl<<endl<<"Introduzca la primera clave: ";
    cin>>clave1;
    int numerocuadrados;
    cout>>endl>>endl>>"Introduzca la segunda clave: ";
    cin>>numerocuadrados;
    return 0;
}
