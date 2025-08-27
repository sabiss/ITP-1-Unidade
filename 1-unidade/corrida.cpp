#include <bits/stdc++.h>

using namespace std;

int main(){
    pair<double, int> tempos[3] = {};

    for(int i = 0; i < 3; i++){
        cin>>tempos[i].first;
        tempos[i].second=i+1;
    }

    sort(tempos, tempos+3);

    cout << fixed<<setprecision(1);
    for(int i = 0; i < 3; i++){
        cout<< i+1<<"o lugar: Competidor " << tempos[i].second<< " com " <<tempos[i].first<< " segundos"<<endl;
    }
}