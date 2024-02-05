#include <iostream>
#include <vector>

using namespace std;

void ispisi(vector<int>& v){
    for(int x : v)
        cout << x << " ";
    cout << endl;
}

bool sledeciPodskup(vector<int>& podskup, int n){
    if(podskup.empty()){
        podskup.push_back(0);
        return true;
    }

    if(podskup.back() < n-1){
        podskup.push_back(podskup.back() + 1);
        return true;
    }

    podskup.pop_back();

    if(podskup.empty())
        return false;
    
    podskup.back()++;

    return true;
}

void svi_podskupovi(int n){
    vector<int> skup;
    do{
        ispisi(skup);
    }while(sledeciPodskup(skup,n));
}

int main(){
    int n;
    cin >> n;

    svi_podskupovi(n);


    return 0;
}