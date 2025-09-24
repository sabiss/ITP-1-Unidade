#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string palavras="";
    cin>> palavras;

    int numVogais=0;

    for(char letra : palavras){
        letra = tolower(letra);
        if(letra == 'a' || letra == 'e'|| letra == 'i' || letra =='o' || letra == 'u' || letra =='e' || letra =='y'){
            numVogais++;
        }
    }
    cout<<numVogais;

}