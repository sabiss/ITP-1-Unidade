#include <bits/stdc++.h>

using namespace std;

int main(){
    int numEquipes = 0;
    int atletas = 0;
    int corrida=0, salto=0, lancamento=0;

    cin>>numEquipes;
    for(int i =0; i<numEquipes; i++){
        char modalidade = 'a';
        cin>>modalidade;
        while(modalidade != 'F'){
            switch (modalidade)
            {
            case 'C':
                corrida++;
                break;
            case 'S':
                salto++;
                break;
            case 'L':
                lancamento++;
                break;
            default:
                break;
            }
            atletas++;
            cin>>modalidade;
        }
    }
    cout<<corrida <<" "<<salto<<" "<<lancamento<<" "<<atletas;
}