#include <bits/stdc++.h>

using namespace std;

int main(){
    int quantTrilhas = 0;
    cin >>quantTrilhas;

    string nivelPessoa = "";

    if(quantTrilhas>=0 && quantTrilhas <5){
        nivelPessoa = "Iniciante";
    }else if(quantTrilhas>=5 && quantTrilhas<20){
        nivelPessoa = "Vide avaliação #1 da saúde física";
    }else{
        nivelPessoa = "Vide avaliação #2 da saúde física";
    }

    int nivelSaude = 0;

    if(nivelPessoa == "Vide avaliação #1 da saúde física"){
        cin >> nivelSaude;

        switch (nivelSaude)
        {
        case 0:
            nivelPessoa = "Iniciante";
            break;
        case 1:
            nivelPessoa = "Intermediário";
            break;
        default:
            break;
        }
    }else if(nivelPessoa == "Vide avaliação #2 da saúde física"){
        cin >> nivelSaude;
        switch (nivelSaude)
        {
        case 0:
            nivelPessoa = "Intermediário";
            break;
        case 1:
            nivelPessoa = "Avançado";
            break;
        default:
            break;
        }
    }

    cout<<nivelPessoa;
}