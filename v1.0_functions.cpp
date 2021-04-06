#include "v1.0.hpp"

vector<Studentas> Studentai; // studentu struktura vektoriuose
vector<Studentas> Kietuoliai;
vector<Studentas> Vargsiukai;
list<Studentas> Studentai1; // studentu struktura listuose
list<Studentas> Kietuoliai1;
list<Studentas> Vargsiukai1;
deque<Studentas> Studentai2; // studentu struktura dequose
deque<Studentas> Kietuoliai2;
deque<Studentas> Vargsiukai2;
string ats;           // ar norite patys ivesti duomenis?
string ats1;          // ar norite itraukti dar viena studenta?
string ats2;          // ar norite generuoti atsitiktines pazymiu reiksmes?
int nd;               // namu darbu skaicius
int k = 0;            // studentu skaicius
int x = 0;            // laikinas studento pazymiu nuskaitymo skaitliukas
vector<int> pazymiai; // namu darbu rezultatu ir egzamino pazymiu masyvas skaiciuoti medianai
list<int> pazymiai1;        // namu darbu rezultatu ir egzamino pazymiu masyvas skaiciuoti medianai
deque<int> pazymiai2;        // namu darbu rezultatu ir egzamino pazymiu masyvas skaiciuoti medianai
string FailoPavadinimas;
string ats4;
string ats5;
int z;
int v;
int vsum = 0; // vargsiuku suma
int ksum = 0; // kieteku suma
int konteineris;
int rusiavimas;

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
            Studentas temporary;
            in >> temporary.vardas;
            in >> temporary.pavarde;
            temporary.ndsum = 0;
            for (int j = 0; j < nd; j++)
            {
                in >> y;
                pazymiai.push_back(y);
                temporary.ndsum += y;
            }
            double egzaminorez;
            in >> egzaminorez;
            temporary.egz = egzaminorez;
            k++; // studentu skaicius
            Studentai.push_back(temporary);
        }
        in.close();
    }
    catch (exception ex)
    {
        cout << "Toks failas neegzistuoja!" << endl;
        exit(1);
    }
}
void DuomenysIsFailo1()
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
            Studentas temporary;
            in >> temporary.vardas;
            in >> temporary.pavarde;
            temporary.ndsum = 0;
            for (int j = 0; j < nd; j++)
            {
                in >> y;
                pazymiai1.push_back(y);
                temporary.ndsum += y;
            }
            double egzaminorez;
            in >> egzaminorez;
            temporary.egz = egzaminorez;
            k++; // studentu skaicius
            Studentai1.push_back(temporary);
        }
        in.close();
    }
    catch (exception ex)
    {
        cout << "Toks failas neegzistuoja!" << endl;
        exit(1);
    }
}
void DuomenysIsFailo2()
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
            Studentas temporary;
            in >> temporary.vardas;
            in >> temporary.pavarde;
            temporary.ndsum = 0;
            for (int j = 0; j < nd; j++)
            {
                in >> y;
                pazymiai2.push_back(y);
                temporary.ndsum += y;
            }
            double egzaminorez;
            in >> egzaminorez;
            temporary.egz = egzaminorez;
            k++; // studentu skaicius
            Studentai2.push_back(temporary);
        }
        in.close();
    }
    catch (exception ex)
    {
        cout << "Toks failas neegzistuoja!" << endl;
        exit(1);
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
void StudentuSkirstymasPagalVidurki1()
{
    for (int i = 0; i < z; i++)
    {
        if (((Studentai1.back().ndsum / nd) * 0.4) + Studentai1.back().egz * 0.6 >= 5){
            Kietuoliai1.push_back(Studentai1.back());
            ksum++;
        }
        else{
            Vargsiukai1.push_back(Studentai1.back());
            vsum++;
        }
        Studentai1.pop_back();
    }
}
void StudentuSkirstymasPagalVidurki2()
{
    for (int i = 0; i < z; i++)
    {
        if (((Studentai2.back().ndsum / nd) * 0.4) + Studentai2.back().egz * 0.6 >= 5){
            Kietuoliai2.push_back(Studentai2.back());
            ksum++;
        }
        else{
            Vargsiukai2.push_back(Studentai2.back());
            vsum++;
        }
        Studentai2.pop_back();
    }
}
bool DaugiauNei4(Studentas st){
    return (((st.ndsum / nd) * 0.4) + st.egz * 0.6) > 4;
}
void StudentuSkirstymasPagalVidurki3() // Kietuoliai palieka Studentu masyve 
{
    for (int i = 0; i < z; i++)
    {
        Studentai.erase(remove_copy_if(Studentai.begin(), Studentai.end(), Vargsiukai.begin(), DaugiauNei4));
        remove_if(Studentai.begin(), Studentai.end(), DaugiauNei4);
    }
}
void StudentuSkirstymasPagalVidurki4() // Kietuoliai palieka Studentu masyve 
{
    for (int i = 0; i < z; i++)
    {
        remove_copy_if(Studentai1.begin(), Studentai1.end(), Vargsiukai1.begin(), DaugiauNei4);
        remove_if(Studentai.begin(), Studentai.end(), DaugiauNei4);
    }
}
void StudentuSkirstymasPagalVidurki5() // Kietuoliai palieka Studentu masyve 
{
     for (int i = 0; i < z; i++)
    {
        remove_copy_if(Studentai2.begin(), Studentai2.end(), Vargsiukai2.begin(), DaugiauNei4);
        remove_if(Studentai.begin(), Studentai.end(), DaugiauNei4);
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