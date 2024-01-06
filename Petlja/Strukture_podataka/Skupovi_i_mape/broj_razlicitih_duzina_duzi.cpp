#include <iostream>
#include <unordered_set>

using namespace std;

int main(){
    int n;
    cin >> n;

    unordered_set<int> s;

    int x1, y1, z1, x2, y2, z2;
    while(n--){
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        s.insert((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) + (z1-z2)*(z1-z2));
    }

    cout << s.size() << endl;


    return 0;
}