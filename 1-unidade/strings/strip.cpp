#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string texto;
    getline(cin, texto);

    int tamanho = texto.size();
    texto.c_str();

    for(int i = 0; i<tamanho;i++){
        if(i==0){
            if(texto[0] != ' '){
                cout<<texto[i];
            }
        }else if(i==tamanho-1){
            if(texto[tamanho-1]!= ' '){
                cout<<texto[i];
            }
        }else{
            cout<<texto[i];
        }
    }
}