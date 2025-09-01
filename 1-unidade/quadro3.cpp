#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int array[n];

   for(int i = 0; i < n; i++){
        cin>>array[i];
    }

    for(int i = 0; i < n; i++){
        int contador = 0;
        for(int e = 0; e < n; e++){
            if(array[i]==array[e]){
                contador++;
            }
        }
        if(contador==1){
            cout<<array[i];
        }
    }
}