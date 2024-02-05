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
        podskup.push_back(1);
        return true;
    }

    if(podskup.back() < n){
        podskup.push_back(podskup.back() + 1);
        return true;
    }

    podskup.pop_back();

    if(podskup.empty())
        return false;
    
    podskup.back()++;

    return true;
}

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    if(sledeciPodskup(v,n))
        ispisi(v);
    else
        cout << "-" << endl;


    return 0;
}