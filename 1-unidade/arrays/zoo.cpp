#include <bits/stdc++.h>

using namespace std;

int main(){
    string animais[4];
    string animalParaVerificar = "";
    string ehVoador = "";
    string ehOnivoro = "";
    string ehCarnivoro = "";

    for(int i = 0; i < 4; i++){
        bool onivoro = false;
        bool voador = false;  
        bool carnivoro = false;      
        
        cin>>ehVoador;
        cin>>ehCarnivoro;
        cin>>ehOnivoro;

        if(ehVoador == "sim"){
            voador= true;
        }
        if(ehOnivoro == "sim"){
            onivoro =  true;
        }
        if(ehCarnivoro == "sim"){
            carnivoro = true;
        }
        
        if(voador && onivoro && !carnivoro){
            animais[i] = "pato";
        }else if(voador && carnivoro && !onivoro){
            animais[i] = "águia";
        }else if(!voador && onivoro && !carnivoro){
            animais[i] = "avestruz";
        }else if(!voador && carnivoro && !onivoro){
            animais[i] = "pinguim";
        }else{
            animais[i] = "desconhecido";
        }
    }

    cin>>animalParaVerificar;
    int contador = 0;
    int indexsDoAnimalVerificado[4];
    for(int w = 0; w<4; w++){
        indexsDoAnimalVerificado[w] = -1;
    }

    for(int e = 0; e<4;e++){
        cout<<animais[e];
        if(e<3){
            cout<<",";
        }else{
            cout<<endl;
        }
        if(animais[e] == animalParaVerificar){
            indexsDoAnimalVerificado[contador] = e;
            contador++;
        }
    }
    for(int i = 0; i < 4; i++){
        if(indexsDoAnimalVerificado[i] != -1){
            cout<<indexsDoAnimalVerificado[i];
            if(i+1!=4 && indexsDoAnimalVerificado[i+1]!=-1){
                cout<<",";
            }else{
                cout<<endl;
            }
        }

        
    }

}