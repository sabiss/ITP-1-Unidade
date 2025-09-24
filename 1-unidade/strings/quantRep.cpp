#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main(){
    string texto;
    getline(cin, texto);

    for(int i =0; i<texto.size();i++){
        texto[i]=tolower(texto[i]);
    }
    string palavraPesquisa;
    cin>>palavraPesquisa;

    for(int i =0; i<palavraPesquisa.size();i++){
        palavraPesquisa[i]=tolower(palavraPesquisa[i]);
    }
    int pos = -1;
    int cont = 0;
    do{
        pos = texto.find(palavraPesquisa, pos+1);
        if(pos>=0){
            cont++;
        }
    }while(pos>=0);
    cout<<cont;

}