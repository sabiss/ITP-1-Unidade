#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    int arrayA[n];
    int arrayB[m];

    for(int i = 0; i<n; i++){
        int a;
        cin>>a;
        arrayA[i]= a;
    }
    for(int i = 0; i<m; i++){
        int a;
        cin>>a;
        arrayB[i] = a;
    }

    for(int i:arrayA){
        for(int e:arrayB){
            if(i==e){
                cout<<i<<" ";
            }
        }
    }

}