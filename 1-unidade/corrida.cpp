#include <iostream>

using namespace std;

int main(){
    pair<double,int> tempos[3] = {};
    for(int i = 0; i < 3; i++){
        cin>>tempos[i].first;
        tempos[i].second=i+1;
    }
}