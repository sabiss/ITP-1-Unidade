#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    vector<int>arrayN, arrayM;

    for(int i = 0; i<n;i++){
        int g = 0;
        cin>>g;
        arrayN.push_back(g);
    }
    for(int i = 0; i<m;i++){
        int g = 0;
        cin>>g;
        arrayM.push_back(g);
    }

    for(int i = 0; i<n;i++){
        for(int e = 0; e<m; e++){
            if(arrayN[i]==arrayM[e]){
                arrayN.erase(arrayN.begin()+i);
                arrayM.erase(arrayM.begin()+e);
                n--;
                m--;
                e=-1;
            }
        }
    }
    
    for(int w :arrayN){//passo as vezes desnecessário, eu sei
        arrayM.push_back(w);
    }
    sort(arrayM.begin(), arrayM.end());

    for(int y : arrayM){
        cout<<y<<" ";
    }
    return 0;
}