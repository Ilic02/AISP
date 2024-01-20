#include <iostream>
#include <vector>

using namespace std;

struct trojka{
    int a, b, c;
};

int brojPozvanih(unsigned pozvani){
    return __builtin_popcount(pozvani);
}

bool pozvan(unsigned pozvani, int o){
    return pozvani & (1u << o);
}

int main(int argc, char const *argv[])
{
    int n, k;
    cin >> n >> k;

    vector<trojka> trojke(k);
    for(int i = 0; i<k; i++)
        cin >> trojke[i].a >> trojke[i].b >> trojke[i].c;

    int maxPodskup = 0, maxPozvanih = 0;
    for(int podskup = 0; podskup <(1 << n); podskup++){
        if(brojPozvanih(podskup) <= maxPozvanih)
            continue;
        bool sat = true;
        for(auto t : trojke){
            int count = 0;
            count += (int)pozvan(podskup, t.a-1);
            count += (int)pozvan(podskup, t.b-1);
            count += (int)pozvan(podskup, t.c-1);
            if(count != 1){
                sat = false;
                break;
            }
        }
        if(sat){
            maxPodskup = podskup;
            maxPozvanih = brojPozvanih(podskup);
        }
    }    

    cout << maxPozvanih << endl;
    if(maxPozvanih > 0)
        for(int o = 1; o<=n; o++)
            if(pozvan(maxPodskup, o-1))
                cout << o << " ";
            
    cout << endl;

    return 0;
}
