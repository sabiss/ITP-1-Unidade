#include <iostream>

using namespace std;

int main(){
    int idade = 0;
    bool vip = false;
    bool banido = false;

    cin >> idade>>vip>>banido;

    if(banido){
        cout<<"Acesso negado";
    }else if(idade >= 18 || vip){
        cout<<"Acesso permitido";
    }else{
        cout<<"Acesso negado";
    }
}