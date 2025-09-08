#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> sequencia;
    int n = 0;
    int quantidade = 0;

    cin>>n;

    while(n>=0){
        if(quantidade==0){
            sequencia.push_back(0);
            quantidade++;
        }

        for(int i = 0; i<n;i++){
            quantidade++;
            sequencia.push_back(n);
        }
        n--;
    }

    sort(sequencia.begin(), sequencia.end());

    cout<< quantidade<<" números\n";

    for(int i : sequencia){
        cout<<i<<" ";
    }
    return 0;
}