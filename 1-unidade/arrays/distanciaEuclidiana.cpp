#include <bits/stdc++.h>

using namespace std;

float distanciaEuclidiana(float x1, float x2, float y1, float y2){
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}

int main(){
    int limite = 3;
    int xClique,yClique;

    cin>>xClique>>yClique;

    int n=0;
    cin>>n;
    
    int x,y;
    char clique='N';

    for(int i=0; i<n; i++){
        cin>>x>>y;
        if(distanciaEuclidiana(xClique, x, yClique, y) < limite){
            clique='S';
        }
    }
    cout<<clique<<endl;
    return 0;
}

