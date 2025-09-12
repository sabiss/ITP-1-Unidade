#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    float array[n];

    for(int i = 0; i<n; i++){
        float g;
        cin>>g;
        array[i]=g;
    }

    int l=0;
    int r = n-1;

    bool ehUmVetorDeDobra = true;

    while(l<=r){
        if(array[l] == array[r]){
            l++;
            r--;
        }else{
            ehUmVetorDeDobra = false;
            break;
        }
    }
    if(ehUmVetorDeDobra){
        cout<<"Vetor de dobra";
    }else{
        cout<< "Vetor comum";    
    }
}