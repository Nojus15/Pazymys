#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    string *vardas = new string[100000];
    string *pavarde = new string[100000];
    double *egz = new double[100000];
    double nd;
    int k;
    int x;
    double *ndsum = new double[100000];

    cout << "Iveskite studentu skaiciu ";
    cin >> k;
    if(k == 0) cout << "Ivedete studentu skaiciu 0, perkraukite programa";
    else cout << "Iveskite namu darbu skaiciu ";
    cin >> nd;
    if(nd == 0) cout << "Ivedete namu darbu skaiciu 0, perkraukite programa" << endl;
    for(int i=0; i<k; i++){
        cout << "Iveskite studento varda: ";
        cin >> vardas[i];
        cout << "Iveskite studento pavarde: ";
        cin >> pavarde[i]; 
        ndsum[i] = 0;
        for(int j=0; j<nd; j++){
        cout << "Iveskite " << nd << " namu darbu rezultatus" << endl;
        cin >> x;
        ndsum[i] += x;
        }
        cout << "Iveskite egzamino rezultata" << endl;
        cin >> egz[i];
    }
    cout << "Pavardė             " << "Vardas              " << "Galutinis (Vid.) " << endl;
    cout << "----------------------------------------------------------" << endl;
    for(int i=0; i<k; i++){
    cout << setw(20) << left << pavarde[i] << setw(20) << left << vardas[i] << setw(19) << fixed << setprecision(2) << ((ndsum[i]/nd)*0.4)+egz[i]*0.6 << endl;
    }
    return 0;
}