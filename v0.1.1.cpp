#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    string *vardas = new string[100000];   // studento vardas
    string *pavarde = new string[100000];  // studento pavarde
    string ats;                            // ar norite patys ivesti duomenis?
    string ats1;                           // ar norite itraukti dar viena studenta?
    string ats2;                           // ar norite generuoti atsitiktines pazymiu reiksmes?
    string mediana;                        // ar norite naudoti mediana?
    double *medianos = new double[100000]; // studentu pazymiu medianos
    double *egz = new double[100000];      // egzamino rezultatai
    double *ndrezult = new double[100000]; // namu darbu rezultatai
    int nd;                                // namu darbu skaicius
    int k = 0;                             // stduentu skaicius
    int x = 0;                             // laikinas studento pazymiu nuskaitymo skaitliukas
    double *ndsum = new double[100000];    // namu darbu rezultatu suma
    static int max = 9;                    // pazymiu generavimui maksimali reiksme

    //------------------------------------------------------------------------------------------------------------------------------------
    cout << "Ispejimas: studentu varduose ir pavardese gali vyrauti raides bei skaiciai, taciau pazymiuose ir pazymiu kiekyje galima naudoti tik skaicius!" << endl;
    cout << "Ar norite patys sustoti ivesti duomenis? (Taip/Ne) ";
    cin >> ats;
    //------------------------------------------------------------------------------------------------------------------------------------
    if (ats == "Ne")
    {
        cout << "Iveskite studentu skaiciu ";
        cin >> k;
        if (k == 0)
        {
            cout << "Ivedete studentu skaiciu 0, perkraukite programa";
            return 0;
        }
        else
            cout << "Iveskite namu darbu skaiciu vienam studentui ";
        cin >> nd;
        if (nd == 0)
        {
            cout << "Ivedete namu darbu skaiciu 0, perkraukite programa" << endl;
            return 0;
        }
        cout << "Ar norite generuoti atsitiktines pazymiu reiksmes? (Taip/Ne)";
        cin >> ats2;

        if (ats2 == "Taip")
        {
            for (int i = 0; i < k; i++)
            {
                cout << "Iveskite studento varda: ";
                cin >> vardas[i];
                cout << "Iveskite studento pavarde: ";
                cin >> pavarde[i];
                ndsum[i] = 0;
                for (int j = 0; j < nd; j++)
                {
                    x = rand() % 10 + 1; // sugeneruoja random skaiciu nuo 1 iki 10
                    ndrezult[j] = x;
                }
                ndsum[i] += x;
                egz[i] = rand() % 10 + 1; // sugeneruoja random skaiciu nuo 1 iki 10
            }
        }
        if (ats2 == "Ne")
        {
            for (int i = 0; i < k; i++)
            {
                cout << "Iveskite studento varda: ";
                cin >> vardas[i];
                cout << "Iveskite studento pavarde: ";
                cin >> pavarde[i];
                ndsum[i] = 0;
                for (int j = 0; j < nd; j++)
                {
                    cout << "Iveskite " << nd << " namu darbu rezultatus: ";
                    cin >> x;
                    ndrezult[j] = x;
                    if (cin.fail())
                    {
                        cout << "Netinkamas pazymys. (Naudokite skaitmenis). Pakartokite: ";
                        j--;
                        cin.clear();
                        cin.ignore();
                        continue;
                    }
                    if (x < 1 || x > 10)
                    {
                        cout << "Netinkamas pazymys. (skaicius nuo 1 iki 10), Pakartokite: ";
                        j--;
                        continue;
                    }
                    ndsum[i] += x;
                }
                cout << "Iveskite egzamino rezultata: ";
                cin >> egz[i];
                if (cin.fail())
                {
                    cout << "Netinkamas pazymys. (Naudokite skaitmenis). Pakartokite: ";
                    i--;
                    cin.clear();
                    cin.ignore();
                    continue;
                }
                if (x < 1 || x > 10)
                {
                    cout << "Netinkamas pazymys. (skaicius nuo 1 iki 10), Pakartokite: ";
                    i--;
                    continue;
                }
            }
        }

        cout << "Ar norite naudoti mediana? (Taip/Ne) ";
        cin >> mediana;
        if (mediana == "Ne")
        {
            cout << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            cout << "----------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << setw(20) << left << pavarde[i] << setw(20) << left << vardas[i] << setw(19) << fixed << setprecision(2) << ((ndsum[i] / nd) * 0.4) + egz[i] * 0.6 << endl;
            }
        }
        if (mediana == "Taip")
        {
            cout << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) / Galutinis (Med.)" << endl;
            cout << "----------------------------------------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                if (nd % 2 == 1)
                {
                    medianos[i] = ndrezult[nd / 2];
                }
                else
                {
                    medianos[i] = (ndrezult[nd / 2] + ndrezult[nd / 2 - 1]) / 2.0;
                }
                cout << setw(20) << left << pavarde[i] << setw(20) << left << vardas[i] << setw(19) << fixed << setprecision(2) << ((ndsum[i] / nd) * 0.4) + egz[i] * 0.6 << setw(10) << fixed << setprecision(2) << (medianos[i] * 0.4) + egz[i] * 0.6 << endl;
            }
        }
    }
    //------------------------------------------------------------------------------------------------------------------------------------
    else
    {
        cout << "Nuo siol, po kiekvieno studento galite baigti pildyti duomenis: " << endl;
        cout << "Iveskite namu darbu skaiciu vienam studentui ";
        cin >> nd;
        if (nd == 0)
        {
            cout << "Ivedete negalima namu darbu skaiciu, perkraukite programa" << endl;
            return 0;
        }
        cout << "Ar norite generuoti atsitiktines pazymiu reiksmes? (Taip/Ne)";
        cin >> ats2;
        if (ats2 == "Taip")
        {
            for (int i = 0; i < 100000; i++)
            {
                cout << "Iveskite studento varda: ";
                cin >> vardas[i];
                cout << "Iveskite studento pavarde: ";
                cin >> pavarde[i];
                ndsum[i] = 0;
                for (int j = 0; j < nd; j++)
                {
                    x = rand() % 10 + 1; // sugeneruoja random skaiciu nuo 1 iki 10
                    ndsum[i] += x;
                }
                egz[i] = rand() % 10 + 1; // sugeneruoja random skaiciu nuo 1 iki 10
                    k++;
                    cout << "Ar norite itraukti dar viena studenta? ";
                    cin >> ats1;
                    if (ats1 == "Taip")
                        continue;
                    else
                    {
                        break;
                    }
            }
            //------------------------------------------------------------------------------------------------------------------------------------
            if (ats2 == "Ne")
            {
                for (int i = 0; i < 100000; i++)
                {
                    cout << "Iveskite studento varda: ";
                    cin >> vardas[i];
                    cout << "Iveskite studento pavarde: ";
                    cin >> pavarde[i];
                    ndsum[i] = 0;
                    for (int j = 0; j < nd; j++)
                    {
                        cout << "Iveskite " << nd << " namu darbu rezultatus: ";
                        cin >> x;
                        if (cin.fail())
                        {
                            cout << "Netinkamas pazymys. (Naudokite skaitmenis). Pakartokite: ";
                            j--;
                            cin.clear();
                            cin.ignore();
                            continue;
                        }
                        if (x < 1 || x > 10)
                        {
                            cout << "Netinkamas pazymys. (skaicius nuo 1 iki 10), Pakartokite: ";
                            j--;
                            continue;
                        }
                        ndsum[i] += x;
                    }
                    cout << "Iveskite egzamino rezultata: ";
                    cin >> egz[i];
                    if (cin.fail())
                    {
                        cout << "Netinkamas pazymys. (Naudokite skaitmenis). Pakartokite: ";
                        i--;
                        cin.clear();
                        cin.ignore();
                        continue;
                    }
                    if (x < 1 || x > 10)
                    {
                        cout << "Netinkamas pazymys. (skaicius nuo 1 iki 10), Pakartokite: ";
                        i--;
                        continue;
                    }
                    k++;
                    cout << "Ar norite itraukti dar viena studenta? ";
                    cin >> ats1;
                    if (ats1 == "Taip")
                        continue;
                    else
                    {
                        break;
                    }
                }
            }
            cout << "Ar norite naudoti mediana? (Taip/Ne) ";
            cin >> mediana;
            if (mediana == "Taip")
            {
                cout << "Pavarde             "
                     << "Vardas              "
                     << "Galutinis (Vid.) / Galutinis (Med.)" << endl;
                cout << "----------------------------------------------------------------------------------------" << endl;
                for (int i = 0; i < k; i++)
                {
                    if (nd % 2 == 1)
                    {
                        medianos[i] = ndrezult[nd / 2];
                    }
                    else
                    {
                        medianos[i] = (ndrezult[nd / 2] + ndrezult[nd / 2 - 1]) / 2.0;
                    }
                    cout << setw(20) << left << pavarde[i] << setw(20) << left << vardas[i] << setw(19) << fixed << setprecision(2) << ((ndsum[i] / nd) * 0.4) + egz[i] * 0.6 << setw(10) << fixed << setprecision(2) << (medianos[i] * 0.4) + egz[i] * 0.6 << endl;
                }
            }
            if (mediana == "Ne")
            {
                cout << "Pavarde             "
                     << "Vardas              "
                     << "Galutinis (Vid.) " << endl;
                cout << "----------------------------------------------------------" << endl;
                for (int i = 0; i < k; i++)
                {
                    cout << setw(20) << left << pavarde[i] << setw(20) << left << vardas[i] << setw(19) << fixed << setprecision(2) << ((ndsum[i] / nd) * 0.4) + egz[i] * 0.6 << endl;
                }
            }
        }
        return 0;
    }
}