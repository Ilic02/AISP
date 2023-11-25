#include <iostream>
#include <set>

using namespace std;

int main (){
    int n;
    cin >> n;

    int x;
    set<int> brojevi;

    int ponovljeniElement = 0, maxPonovljeni = 0;

    while(n--){
        cin >> x;
        if(brojevi.find(x) != end(brojevi))
            ponovljeniElement = x;
        
        if(ponovljeniElement > maxPonovljeni)
            maxPonovljeni = ponovljeniElement;

        brojevi.insert(x);
    }

    if(maxPonovljeni > 0)
        cout << maxPonovljeni << endl;
    else
        cout << "nema\n";

    return 0;
}