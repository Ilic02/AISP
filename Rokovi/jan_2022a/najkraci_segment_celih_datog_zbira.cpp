#include <iostream>
#include <unordered_map>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, z;
    cin >> n >> z;

    int zbirPrefiksa = 0;
    unordered_map<int, int> maxPrefiks;
    maxPrefiks[0] = 0;
    
    int minDuzina = n+1, minPoc = -1;
    for(int j = 0; j<n; j++){
        int x;
        cin >> x;
         zbirPrefiksa += x;

         auto it = maxPrefiks.find(zbirPrefiksa - z);
         if(it != maxPrefiks.end()){
            int i = it -> second;

            int duzina = j - i + 1;

            if(duzina < minDuzina){
                minDuzina = duzina;
                minPoc = i;
            }
         }
         maxPrefiks[zbirPrefiksa] = j + 1;
    }

    if(minPoc != -1)
        cout << minPoc << ' ' << minPoc + minDuzina - 1 << endl;
    else
        cout << "nema" << endl;
    return 0;
}
