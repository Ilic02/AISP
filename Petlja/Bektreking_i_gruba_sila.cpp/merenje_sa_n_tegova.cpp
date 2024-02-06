#include <iostream>
#include <vector>

using namespace std;

bool sledeciPodskup(vector<bool>& uSkupu){
    int i;
    for(i = uSkupu.size() - 1; i>=0 && uSkupu[i]; i--)
        uSkupu[i] = false;
    
    if(i<0)
        return false;
    
    uSkupu[i] = true;
    return true;
}

double merenje(vector<double>& v, double masa){
    int n = v.size();
    vector<bool> uSkupu(n, false);
    double minRazlika = masa;
    do{
        double tekucaMasa = 0;
        for(int i = 0; i<n; i++)
            if(uSkupu[i])
                tekucaMasa += v[i];

        double tekucaRazlika = abs(masa- tekucaMasa);
        if(tekucaRazlika < minRazlika)
            minRazlika = tekucaRazlika;
    }while(sledeciPodskup(uSkupu));
    return minRazlika;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    vector<double> v(n);
    for(int i = 0; i<n; i++)
        cin >> v[i];

    double masa;
    cin >> masa;

    cout << merenje(v, masa) << endl;

    return 0;
}