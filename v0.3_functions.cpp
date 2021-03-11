#include "v0.3.hpp"

vector<Studentas> Studentai; // studentu struktura vektoriuose
vector<Studentas> Kietuoliai;
vector<Studentas> Vargsiukai;
string ats;           // ar norite patys ivesti duomenis?
string ats1;          // ar norite itraukti dar viena studenta?
string ats2;          // ar norite generuoti atsitiktines pazymiu reiksmes?
string ats3;          // ar norite matyti medianas?
int nd;               // namu darbu skaicius
int k = 0;            // studentu skaicius
int x = 0;            // laikinas studento pazymiu nuskaitymo skaitliukas
vector<int> pazymiai; // namu darbu rezultatu ir egzamino pazymiu masyvas skaiciuoti medianai
string FailoPavadinimas;
string ats4;
string ats5;
int z;
int v;
int vsum = 0; // vargsiuku suma
int ksum = 0; // kieteku suma

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
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, 10);

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
            Studentai.push_back(Studentas());
            cin >> imput;
            Studentai[i].vardas = imput;
            cout << "Iveskite studento pavarde: ";
            cin >> imput;
            Studentai[i].pavarde = imput;
            Studentai[i].ndsum = 0;
            pazymiai.clear();
            for (int j = 0; j < nd; j++)
            {
                x = dist(mt); // sugeneruoja random skaiciu nuo 1 iki 10
                Studentai[i].ndsum += x;
                pazymiai.push_back(x);
            }
            Studentai[i].egz = dist(mt); // sugeneruoja random skaiciu nuo 1 iki 10
            Studentai[i].medianos = (MedianosRadimas(pazymiai));
        }
    }
    if (ats2 == "Ne")
    {
        for (int i = 0; i < k; i++)
        {
            string imput;
            cout << "Iveskite studento varda: ";
            cin >> imput;
            Studentai.push_back(Studentas());
            Studentai[i].vardas = imput;
            cout << "Iveskite studento pavarde: ";
            cin >> imput;
            Studentai[i].pavarde = imput;
            Studentai[i].ndsum = 0;

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
                Studentai[i].ndsum += x;
            }
            Studentai[i].medianos = (MedianosRadimas(pazymiai));
            cout << "Iveskite egzamino rezultata: ";
            double y;
            cin >> y;
            Studentai[i].egz = y;
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
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, 10);
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
            Studentai.push_back(Studentas());
            cin >> imput;
            Studentai[i].vardas = imput;
            cout << "Iveskite studento pavarde: ";
            cin >> imput;
            Studentai[i].pavarde = imput;
            Studentai[i].ndsum = 0;

            for (int j = 0; j < nd; j++)
            {
                x = dist(mt); // sugeneruoja random skaiciu nuo 1 iki 10
                Studentai[i].ndsum += x;
                pazymiai.push_back(x);
            }
            Studentai[i].medianos = (MedianosRadimas(pazymiai));
            Studentai[i].egz = dist(mt); // sugeneruoja random skaiciu nuo 1 iki 10
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
            Studentai.push_back(Studentas());
            cout << "Iveskite studento varda: ";
            cin >> imput;
            Studentai[i].vardas = imput;
            cout << "Iveskite studento pavarde: ";
            cin >> imput;
            Studentai[i].pavarde = imput;
            Studentai[i].ndsum = 0;

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
                Studentai[i].ndsum += x;
            }
            Studentai[i].medianos = (MedianosRadimas(pazymiai));
            cout << "Iveskite egzamino rezultata: ";
            double egzaminorez;
            cin >> egzaminorez;
            Studentai[i].egz = egzaminorez;
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

void DuomenysIsFailo()
{
    try
    {
        ifstream in(FailoPavadinimas);
        in.exceptions(ifstream::failbit | ifstream::badbit);
        string x; // nustatyti nd skaiciu
        int y;
        for (int i = 0; i < 1000; i++)
        {
            in >> x;
            if (x == "Egz.")
            {
                nd = i - 2;
                break;
            }
        }
        for (int i = 0; !in.eof(); i++)
        {
            Studentai.push_back(Studentas());
            in >> Studentai[i].vardas;
            in >> Studentai[i].pavarde;
            Studentai[i].ndsum = 0;
            pazymiai.clear();
            for (int j = 0; j < nd; j++)
            {
                in >> y;
                pazymiai.push_back(y);
                Studentai[i].ndsum += y;
            }
            Studentai[i].medianos = (MedianosRadimas(pazymiai));
            double egzaminorez;
            in >> egzaminorez;
            Studentai[i].egz = egzaminorez;
            k++; // studentu skaicius
        }
        in.close();
    }
    catch (exception ex)
    {
        cout << "Toks failas neegzistuoja!" << endl;
        exit(1);
    }
}
void StudentuSkirstymasPagalMediana()
{
    for (int i = 0; i < z; i++)
    {
        if (Studentai[i].medianos * 0.4 + Studentai[i].egz * 0.6 >= 5){
            Kietuoliai.push_back(Studentai[i]);
            ksum++;
        }
        else{
            Vargsiukai.push_back(Studentai[i]);
            vsum++;
        }
    }
}
void StudentuSkirstymasPagalVidurki()
{
    for (int i = 0; i < z; i++)
    {
        if (((Studentai[i].ndsum / nd) * 0.4) + Studentai[i].egz * 0.6 >= 5){
            Kietuoliai.push_back(Studentai[i]);
            ksum++;
        }
        else{
            Vargsiukai.push_back(Studentai[i]);
            vsum++;
        }
    }
}
void Generavimas(int z, int v)
{
    random_device rd;
    mt19937 mt(rd());
    uniform_int_distribution<int> dist(0, 10);

    ofstream out("studentai" + to_string(z) + ".txt");
    out << fixed << setw(25) << left << "Vardas" << setw(25) << "Pavarde";
    for (int i = 1; i <= v; i++)
        out << fixed << setw(10) << left << "ND" + to_string(i);
    out << "Egz." << endl;

    for (int i = 0; i <= z; i++)
    {
        out << fixed << setw(25) << left << "Vardas" + to_string(i) << setw(25) << "Pavarde" + to_string(i);
        for (int j = 0; j < v; j++)
        {
            out << fixed << setw(10) << left << dist(mt); // sugeneruoja random skaiciu nuo 1 iki 10
        }
        if(i==z)
        out << dist(mt); // sugeneruoja random skaiciu nuo 1 iki 10
        else
        out << dist(mt) << endl; // sugeneruoja random skaiciu nuo 1 iki 10
    }
    out.close();
}