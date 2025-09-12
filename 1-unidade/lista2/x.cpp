#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    char caracter;

    cin>>n>>caracter;
    string espacoMeio = " ";
    string espacoLateral = ""; 

    bool impar = true;
    if(n%2==0) impar = false;
    int contador=0;

    for(int i = 1; i<n-3; i++){
        espacoMeio+=" ";
    }

    for(int i = 0; i <n-1; i++){
        if(i==(n/2) ||i==(n/2)-1 ){
            if(impar){
                cout<<espacoLateral<<caracter<<caracter<<espacoLateral<<endl;
                espacoMeio="";
            }else{
                if(contador<1){
                    cout<<espacoLateral<<caracter<<espacoLateral<<endl;
                    espacoMeio+=" ";
                    contador++;
                }else{
                    cout<<espacoLateral<<caracter<<espacoMeio<<caracter<<espacoLateral<<endl;
                    espacoMeio+=" ";
                }
            }
        }
        else if(i<n/2){
            cout<<espacoLateral<<caracter<<espacoMeio<<caracter<<espacoLateral<<endl;
            if(impar){
                espacoMeio.pop_back();
                espacoMeio.pop_back();
            }else{
                espacoMeio.pop_back();
            }
            
            espacoLateral+=" ";
        }else if(i>n/2){
            espacoLateral.pop_back();
            espacoMeio+="  ";
            cout<<espacoLateral<<caracter<<espacoMeio<<caracter<<espacoLateral<<endl;
        }
        else{
            espacoMeio+="  ";
            cout<<caracter<<espacoMeio<<caracter<<endl;
        }
        
    }
}