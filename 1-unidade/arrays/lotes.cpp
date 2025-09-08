#include <iostream>

using namespace std;

int main(){
    int n = 0;
    bool acheiMeuLote = false;
    int possoComprarADireita = 0;
    int possoComprarAEsquerda = 0;
    
    cin>>n;

    for(int i = 0; i<n; i++){
        int k;
        cin>>k;

        if(k == 2){
            acheiMeuLote = true;
        }

        if(acheiMeuLote){
            if(k==1){
                break;
            }else if(k!=2){
                possoComprarADireita++;
            }
        }else{
            if(k==1){
                possoComprarAEsquerda = 0;
            }else{
                possoComprarAEsquerda++;
            }
        }
    }
    cout<<possoComprarAEsquerda+possoComprarADireita;
}