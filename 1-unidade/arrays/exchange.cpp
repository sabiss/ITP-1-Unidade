#include <iostream>

using namespace std;

int main(){
    int n = 0;
    cin>>n;
    int arrayA[n];

    for(int i = 0; i < n; i++){
        int a = 0;
        cin>>a;
        cout << a << " ";
        arrayA[i] = a;
    }
    cout<<endl;

    for(int i = 0; i <= n-2; i++){
        for(int j = i+1; j <= n-1; j++){
            if(arrayA[i]>arrayA[j]){
                int maior = arrayA[i];
                int menor = arrayA[j];
                arrayA[i] = menor;
                arrayA[j] = maior;
            }
        } 
        for(int a:arrayA){
            cout<< a<<" ";
        }
        cout<<endl;
    }
}