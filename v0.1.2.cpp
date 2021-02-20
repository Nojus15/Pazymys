#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>

using namespace std;

vector<string> vardas;   // string *vardas = new string[100000];
vector<string> pavarde;  // string *pavarde = new string[100000];
string ats;              // ar norite patys ivesti duomenis?
string ats1;             // ar norite itraukti dar viena studenta?
string ats2;             // ar norite generuoti atsitiktines pazymiu reiksmes?
string ats3;             // ar norite matyti medianas?
vector<double> egz;      // double *egz = new double[100000];
int nd;                  // namu darbu skaicius
int k = 0;               // stduentu skaicius
int x = 0;               // laikinas studento pazymiu nuskaitymo skaitliukas
vector<double> ndsum;    // namu darbu rezultatu sumadouble *ndsum = new double[100000]
vector<int> pazymiai;    // namu darbu rezultatu ir egzamino pazymiu masyvas
vector<double> medianos; // isvestos medianos
static int max = 10;     // pazymiu generavimui maksimali reiksme

double MedianosRadimas(vector<int> &pazymiai)
{
    sort(pazymiai.begin(), pazymiai.end());

    if (pazymiai.size() % 2 != 0)
    {
        return (double)pazymiai[pazymiai.size() / 2];
    }
    return (double)(pazymiai[(pazymiai.size() - 1) / 2] + pazymiai[pazymiai.size() / 2]) / 2.0;
}

void ZinomasDuomenuSkaicius()
{
    cout << "Iveskite studentu skaiciu ";
    cin >> k;
    if (k == 0)
    {
        cout << "Ivedete studentu skaiciu 0, perkraukite programa";
        system("pause");
    }
    else
        cout << "Iveskite namu darbu skaiciu vienam studentui ";
    cin >> nd;
    if (nd == 0)
    {
        cout << "Ivedete namu darbu skaiciu 0, perkraukite programa" << endl;
        system("pause");
    }
    cout << "Ar norite generuoti atsitiktines pazymiu reiksmes? (Taip/Ne)";
    cin >> ats2;

    if (ats2 == "Taip")
    {
        for (int i = 0; i < k; i++)
        {
            string imput;
            cout << "Iveskite studento varda: ";
            cin >> imput;
            vardas.push_back(imput);

            cout << "Iveskite studento pavarde: ";
            cin >> imput;
            pavarde.push_back(imput);
            ndsum.push_back(0);
            for (int j = 0; j < nd; j++)
            {
                x = rand() % 10 + 1; // sugeneruoja random skaiciu nuo 1 iki 10
                ndsum[i] += x;
                pazymiai.push_back(x);
            }
            egz.push_back(rand() % 10 + 1); // sugeneruoja random skaiciu nuo 1 iki 10
            medianos.push_back(MedianosRadimas(pazymiai));
        }
    }
    if (ats2 == "Ne")
    {
        for (int i = 0; i < k; i++)
        {
            string imput;
            cout << "Iveskite studento varda: ";
            cin >> imput;
            vardas.push_back(imput);
            cout << "Iveskite studento pavarde: ";
            cin >> imput;
            pavarde.push_back(imput);
            ndsum.push_back(0);

            for (int j = 0; j < nd; j++)
            {
                cout << "Iveskite " << nd << " namu darbu rezultatus: ";
                cin >> x;
                pazymiai.push_back(x);
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
            medianos.push_back(MedianosRadimas(pazymiai));
            cout << "Iveskite egzamino rezultata: ";
            double y;
            cin >> y;
            egz.push_back(y);
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
}

void NezinomasDuomenuSkaicius()
{
    cout << "Nuo siol, po kiekvieno studento galite baigti pildyti duomenis: " << endl;
    cout << "Iveskite namu darbu skaiciu vienam studentui ";
    cin >> nd;
    if (nd == 0)
    {
        cout << "Ivedete negalima namu darbu skaiciu, perkraukite programa" << endl;
        system("pause");
    }
    cout << "Ar norite generuoti atsitiktines pazymiu reiksmes? (Taip/Ne)";
    cin >> ats2;
    if (ats2 == "Taip") // atsitiktines
    {
        for (int i = 0; i < 100000; i++)
        {
            string imput;
            cout << "Iveskite studento varda: ";
            cin >> imput;
            vardas.push_back(imput);
            cout << "Iveskite studento pavarde: ";
            cin >> imput;
            pavarde.push_back(imput);
            ndsum.push_back(0);

            for (int j = 0; j < nd; j++)
            {
                x = rand() % 10 + 1; // sugeneruoja random skaiciu nuo 1 iki 10
                ndsum[i] += x;
                pazymiai.push_back(x);
            }
            medianos.push_back(MedianosRadimas(pazymiai));
            egz.push_back(rand() % 10 + 1); // sugeneruoja random skaiciu nuo 1 iki 10
            k++;
            cout << "Ar norite itraukti dar viena studenta? (Taip/Ne) ";
            cin >> ats1;
            if (ats1 == "Taip")
                continue;
            else
            {
                break;
            }
        }
    }

    if (ats2 == "Ne")
    {
        for (int i = 0; i < 100000; i++)
        {
            string imput;
            cout << "Iveskite studento varda: ";
            cin >> imput;
            vardas.push_back(imput);
            cout << "Iveskite studento pavarde: ";
            cin >> imput;
            pavarde.push_back(imput);
            ndsum.push_back(0);

            for (int j = 0; j < nd; j++)
            {
                cout << "Iveskite " << nd << " namu darbu rezultatus: ";
                cin >> x;
                pazymiai.push_back(x);
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
            medianos.push_back(MedianosRadimas(pazymiai));
            cout << "Iveskite egzamino rezultata: ";
            double egzaminorez;
            cin >> egzaminorez;
            egz.push_back(egzaminorez);
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
            cout << "Ar norite itraukti dar viena studenta? (Taip/Ne) ";
            cin >> ats1;
            if (ats1 == "Taip")
                continue;
            else
            {
                break;
            }
        }
    }
}

int main()
{
    cout << "Ispejimas: studentu varduose ir pavardese gali vyrauti raides bei skaiciai, taciau pazymiuose ir pazymiu kiekyje galima naudoti tik skaicius!" << endl;
    cout << "Ar norite patys sustoti ivesti duomenis? (Taip/Ne) ";
    cin >> ats;
    if (ats == "Ne")
    {
        ZinomasDuomenuSkaicius();
    }

    else
    {
        NezinomasDuomenuSkaicius();
    }
    cout << "Ar norite matyti studentu pazymiu medianas? (Taip/Ne)";
    cin >> ats3;
    if (ats3 == "Taip")
    {
        cout << "Pavarde             "
             << "Vardas              "
             << "Galutinis (Vid.) / Galutinis (Med.) " << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << setw(20) << left << pavarde[i] << setw(20) << left << vardas[i] << setw(19) << fixed << setprecision(2) << ((ndsum[i] / nd) * 0.4) + egz[i] * 0.6 << setw(5) << medianos[i] * 0.4 + egz[i] * 0.6 << endl;
        }
    }
    if (ats3 == "Ne")
    {
        cout << "Pavarde             "
             << "Vardas              "
             << "Galutinis (Vid.) " << endl;
        cout << "--------------------------------------------------------------------------" << endl;
        for (int i = 0; i < k; i++)
        {
            cout << setw(20) << left << pavarde[i] << setw(20) << left << vardas[i] << setw(19) << fixed << setprecision(2) << ((ndsum[i] / nd) * 0.4) + egz[i] * 0.6 << endl;
        }
    }

    return 0;
}