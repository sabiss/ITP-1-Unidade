#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int array[n];

    for(int i = 0; i<n; i++){
        int a = 0;
        cin>>a;
        array[i]=a;
    }

    for(int i:array){
        cout<<i<<" ";
    }
    cout<<endl;

    int contadorDeTrocas=1;

    while(contadorDeTrocas>0){
        contadorDeTrocas = 0;
        for(int i = 1; i<=n-1; i++){
            if(array[i-1]> array[i]){
                int maior = array[i-1];
                int menor = array[i];
                array[i-1] = menor;
                array[i] = maior;
                contadorDeTrocas++;
            }
        }
        if(contadorDeTrocas>0){
            for(int a:array){
                cout<<a<<" ";
            }
        }
        
        cout<<endl;
    }
}