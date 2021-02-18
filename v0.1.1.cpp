#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main(){
    string *vardas = new string[100000];
    string *pavarde = new string[100000];
    string ats;
    string ats1;
    string mediana;
    double *medianos = new double[100000];
    double *egz = new double[100000];
    double *ndrezult = new double[100000];
    int nd;
    int k = 0;
    int x = 0;
    double *ndsum = new double[100000];

    cout << "Ar norite patys sustoti ivesti duomenis? (Taip/Ne) ";
    cin >> ats;
    if(ats == "Ne"){
    cout << "Iveskite studentu skaiciu ";
    cin >> k;
    if(k == 0){
    cout << "Ivedete studentu skaiciu 0, perkraukite programa";
    return 0;
    }
    else cout << "Iveskite namu darbu skaiciu vienam studentui ";
    cin >> nd;
    if(nd == 0){ 
    cout << "Ivedete namu darbu skaiciu 0, perkraukite programa" << endl;
    return 0;
    }
    for(int i=0; i<k; i++){
        cout << "Iveskite studento varda: ";
        cin >> vardas[i];
        cout << "Iveskite studento pavarde: ";
        cin >> pavarde[i]; 
        ndsum[i] = 0;
        for(int j=0; j<nd; j++){
        cout << "Iveskite " << nd << " namu darbu rezultatus: ";
        cin >> x;
        ndrezult[j] = x;
         if(cin.fail()){
                cout << "Netinkamas pazymys. (Naudokite skaitmenis). Pakartokite: ";
                j--;
                cin.clear();
                cin.ignore();
                continue;
            }
        if(x <1 || x >10){
                    cout << "Netinkamas pazymys. (skaicius nuo 1 iki 10), Pakartokite: ";
                    j--;
                    continue;
             }
        ndsum[i] += x;
        }
        cout << "Iveskite egzamino rezultata: ";
        cin >> egz[i];
        if(cin.fail()){
                cout << "Netinkamas pazymys. (Naudokite skaitmenis). Pakartokite: ";
                i--;
                cin.clear();
                cin.ignore();
                continue;
            }
        if(x <1 || x >10){
            cout << "Netinkamas pazymys. (skaicius nuo 1 iki 10), Pakartokite: ";
            i--;
            continue;
        }
    }
    cout << "Ar norite naudoti mediana? (Taip/Ne) ";
    cin >> mediana;
    if(mediana == "Ne"){
    cout << "Pavarde             " << "Vardas              " << "Galutinis (Vid.) " << endl;
    cout << "----------------------------------------------------------" << endl;
    for(int i=0; i<k; i++){
    cout << setw(20) << left << pavarde[i] << setw(20) << left << vardas[i] << setw(19) << fixed << setprecision(2) << ((ndsum[i]/nd)*0.4)+egz[i]*0.6 << endl;
    }
    }
    if(mediana == "Taip"){
    cout << "Pavarde             " << "Vardas              " << "Galutinis (Vid.) / Galutinis (Med.)" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;
    for(int i=0; i<k; i++){
        if(nd%2 == 1)
        {
        medianos[i] = ndrezult[nd/2];
        }
        else
        {
        medianos[i] = (ndrezult[nd/2]+ndrezult[nd/2-1])/2.0;
        }
    cout << setw(20) << left << pavarde[i] << setw(20) << left << vardas[i] << setw(19) << fixed << setprecision(2) << ((ndsum[i]/nd)*0.4)+egz[i]*0.6 << setw(10) << fixed << setprecision(2) << (medianos[i]*0.4)+egz[i]*0.6<< endl;
    }
    }
    }


    else{
        cout << "Nuo siol, po kiekvieno studento galite baigti pildyti duomenis: " << endl;
        cout << "Iveskite namu darbu skaiciu vienam studentui ";
    cin >> nd;
    if(nd == 0){ 
    cout << "Ivedete negalima namu darbu skaiciu, perkraukite programa" << endl;
    return 0;
    }
    for(int i=0; i<100000; i++){
        cout << "Iveskite studento varda: ";
        cin >> vardas[i];
        cout << "Iveskite studento pavarde: ";
        cin >> pavarde[i]; 
        ndsum[i] = 0;
        for(int j=0; j<nd; j++){
        cout << "Iveskite " << nd << " namu darbu rezultatus: ";
        cin >> x;
         if(cin.fail()){
                cout << "Netinkamas pazymys. (Naudokite skaitmenis). Pakartokite: ";
                j--;
                cin.clear();
                cin.ignore();
                continue;
            }
        if(x <1 || x >10){
                    cout << "Netinkamas pazymys. (skaicius nuo 1 iki 10), Pakartokite: ";
                    j--;
                    continue;
             }
        ndsum[i] += x;
        }
        cout << "Iveskite egzamino rezultata: ";
        cin >> egz[i];
        if(cin.fail()){
                cout << "Netinkamas pazymys. (Naudokite skaitmenis). Pakartokite: ";
                i--;
                cin.clear();
                cin.ignore();
                continue;
            }
        if(x <1 || x >10){
            cout << "Netinkamas pazymys. (skaicius nuo 1 iki 10), Pakartokite: ";
            i--;
            continue;
        }
        k++;
        cout << "Ar norite itraukti dar viena studenta? ";
        cin >> ats1;
        if(ats1 == "Taip") continue;
        else {
            break;
        }
    }
    //cout << "Pavarde             " << "Vardas              " << "Galutinis (Vid.) " << endl;
    //cout << "----------------------------------------------------------" << endl;
    //for(int i=0; i<k; i++){
    //cout << setw(20) << left << pavarde[i] << setw(20) << left << vardas[i] << setw(19) << fixed << setprecision(2) << ((ndsum[i]/nd)*0.4)+egz[i]*0.6 << endl;
    //}
    cout << "Ar norite naudoti mediana? (Taip/Ne) ";
    cin >> mediana;
    if(mediana == "Taip"){
    cout << "Pavarde             " << "Vardas              " << "Galutinis (Vid.) / Galutinis (Med.)" << endl;
    cout << "----------------------------------------------------------------------------------------" << endl;
    for(int i=0; i<k; i++){
        if(nd%2 == 1)
        {
        medianos[i] = ndrezult[nd/2];
        }
        else
        {
        medianos[i] = (ndrezult[nd/2]+ndrezult[nd/2-1])/2.0;
        }
    cout << setw(20) << left << pavarde[i] << setw(20) << left << vardas[i] << setw(19) << fixed << setprecision(2) << ((ndsum[i]/nd)*0.4)+egz[i]*0.6 << setw(10) << fixed << setprecision(2) << (medianos[i]*0.4)+egz[i]*0.6<< endl;
    }
    }
    }
    return 0;
}