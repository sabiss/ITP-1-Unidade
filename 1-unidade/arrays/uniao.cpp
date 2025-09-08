#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin>>n>>m;

    vector<int> arrayA;
    vector<int> arrayB;

    for(int i = 0; i < n; i++){
        int g;
        cin>>g;
        arrayA.push_back(g);
    }
    for(int i = 0; i < m; i++){
        int g;
        cin>>g;
        arrayB.push_back(g);
    }

    if(n>m){
        for(int i = 0; i < arrayA.size(); i++){//vejo se tem algum igual e apago esse elemento do array de menor tamanho
            for(int e = 0; e<arrayB.size(); e++){
                if(arrayA[i] == arrayB[e]){
                    arrayB.erase(arrayB.begin()+e);
                }
            }
        }
        for(int i = 0; i<arrayB.size();i++){//adiciono o resto dos elementos ao maior array
            arrayA.push_back(arrayB[i]);
        }
        for(int num:arrayA){
            cout<<num<<" ";
        }
    }else{
        for(int i = 0; i < arrayB.size(); i++){
            for(int e = 0; e<arrayA.size(); e++){
                if(arrayB[i] == arrayA[e]){
                    arrayA.erase(arrayA.begin()+e);
                }
            }
        }
        for(int i = 0; i<arrayA.size();i++){
            arrayB.push_back(arrayA[i]);
        }
        for(int num:arrayB){
            cout<<num<<" ";
        }
    }

}