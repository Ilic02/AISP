#include <iostream>
#include <vector>

using namespace std;

int main(){
    int k, n;
    cin >> k >> n;

    int x;
    vector<int> vrStek;
    vector<int> brStek;
    while(n--){
        cin >> x;
        if(!vrStek.empty() && vrStek.back() != x && brStek.back() >= k){
            vrStek.pop_back();
            brStek.pop_back();
        }
        if(!vrStek.empty() && vrStek.back() == x)
            brStek.back()++;
        else{
            vrStek.push_back(x);
            brStek.push_back(1);
        }
    }
    if(!vrStek.empty() && brStek.back() >= k){
        vrStek.pop_back();
        brStek.pop_back();
    }

    for(int i = 0; i<vrStek.size(); i++){
        while(brStek[i]--)
            cout << vrStek[i] << " ";
    }

    return 0;
}