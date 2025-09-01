#include <bits/stdc++.h>

using namespace std;

int main(){
    int quantHerois = 0;
    int classeHerois = 0;
    int ameacaMonstros = 0;
    bool condicao = false;

    cin>>quantHerois>>classeHerois>>ameacaMonstros;

    switch (ameacaMonstros)
    {
    case 1:
        condicao = classeHerois>=2 && quantHerois>=1 || quantHerois >= 3 && classeHerois==1;
        break;
    case 2:
        condicao = classeHerois>=3 && quantHerois>=1 || quantHerois >= 3 && classeHerois==2;
        break;
    case 3:
        condicao = classeHerois>=4 && quantHerois>=1 || quantHerois >= 3 && classeHerois==3;
        break;
    case 4:
        condicao =classeHerois==5 && quantHerois>=1 || quantHerois >= 3 && classeHerois==4;
        break;
    case 5:
        condicao = classeHerois==5 && quantHerois>=1;
        break;
    
    default:
        condicao = false;
        break;
    }
    
    if(condicao){
        cout<< "Heróis vencerão!";
    }else{
        cout<<"Melhor chamar Saitama!";
    }
}