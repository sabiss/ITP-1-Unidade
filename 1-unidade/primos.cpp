#include <iostream>

using namespace std;

int main(){
    
    int numero = 0;
    cin >>numero;
    int div = numero;
    int cont = 0;

    while(div>0){
        if(numero%div == 0){
            cont++;
        }
        div--;
    }

    if(cont == 2){
        cout<<"O número " << numero<< " é primo";
    }else{
        cout<<"O número " << numero<< " não é primo";
    }
}