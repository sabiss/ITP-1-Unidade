#include <iostream>
#include <cmath>
#include<iomanip>

using namespace std;

int main(){
    float a = 1/2;
    float b = 0;
    float c = 0;

    cin >> a;
    cin >>b;
    cin >>c;
    float raizMais = 0;
    float raizMenos = 0;

    float delta = ((b*b) -(4*a*c));
    float denominador = 2*a;
    if(delta>=0){
        raizMais = sqrt(delta);
        raizMais = (-b+raizMais)/denominador;
        raizMenos = sqrt(delta);
        raizMenos = (-b-raizMenos)/denominador;

        cout<<fixed<<setprecision(2)<<"t1 = "<<raizMais<<endl;
        cout<<fixed<<setprecision(2)<<"t2 = "<<raizMenos<<endl;
    }else{
        cout<<"Não existem raízes reais (matematicamente o projétil não atingirá o solo)";
    }
        
}