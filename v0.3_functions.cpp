#pragma once
#include "v0.3.hpp"

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
            Studentai.push_back(Studentas());
            Studentai[i].vardas = imput;
            cout << "Iveskite studento pavarde: ";
            cin >> imput;
            Studentai[i].pavarde = imput;
            Studentai[i].ndsum = 0;
            pazymiai.clear();
            for (int j = 0; j < nd; j++)
            {
                x = rand() % 10 + 1; // sugeneruoja random skaiciu nuo 1 iki 10
                Studentai[i].ndsum += x;
                pazymiai.push_back(x);
            }
            Studentai[i].egz = (rand() % 10 + 1); // sugeneruoja random skaiciu nuo 1 iki 10
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
            Studentai.push_back(Studentas());
            cout << "Iveskite studento pavarde: ";
            cin >> imput;
            Studentai[i].pavarde = imput;
            Studentai[i].ndsum = 0;

            for (int j = 0; j < nd; j++)
            {
                x = rand() % 10 + 1; // sugeneruoja random skaiciu nuo 1 iki 10
                Studentai[i].ndsum += x;
                pazymiai.push_back(x);
            }
            Studentai[i].medianos = (MedianosRadimas(pazymiai));
            Studentai[i].egz = (rand() % 10 + 1); // sugeneruoja random skaiciu nuo 1 iki 10
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
            Studentai.push_back(Studentas());
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
    ifstream in(FailoPavadinimas);
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
<<<<<<< Updated upstream:v0.3_functions.cpp
   in.close();
=======
    in.close();
}

int main()
{
    cout << "Ar norite gauti studentu duomenis is failo? (Taip/Ne) ";
    cin >> ats4;
    if (ats4 == "Taip")
    {
        cout << "Koki faila norite pasirinkti?" << endl;
        cout << "(1) studentai10000.txt" << endl;
        cout << "(2) studentai100000.txt" << endl;
        cout << "(3) studentai1000000.txt" << endl;
        cin >> z;
        if (z == 1)
            FailoPavadinimas = "studentai10000.txt";
        if (z == 2)
            FailoPavadinimas = "studentai100000.txt";
        if (z == 3)
            FailoPavadinimas = "studentai1000000.txt";
        DuomenysIsFailo();
        sort(Studentai.begin(), Studentai.end());
        cout << "Ar norite matyti studentu pazymiu vidurki (Taip), ar mediana (Ne)?";
        cin >> ats3;
        ofstream out("OutputFile.txt");
        if (ats3 == "Ne")
        {

            out << "Pavarde             "
                << "Vardas              "
                << "Galutinis (Med.) " << endl;
            out << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                out << setw(20) << left << Studentai[i].pavarde << setw(20) << left << Studentai[i].vardas << setw(19) << fixed << setprecision(2) << setw(5) << Studentai[i].medianos * 0.4 + Studentai[i].egz * 0.6 << endl;
            }
        }
        if (ats3 == "Taip")
        {
            out << "Pavarde             "
                << "Vardas              "
                << "Galutinis (Vid.) " << endl;
            out << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                out << setw(20) << left << Studentai[i].pavarde << setw(20) << left << Studentai[i].vardas << setw(19) << fixed << setprecision(2) << ((Studentai[i].ndsum / nd) * 0.4) + Studentai[i].egz * 0.6 << endl;
            }
        }
        out.close();
    }

    if (ats4 == "Ne")
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
        cout << "Ar norite matyti studentu pazymiu vidurki (Taip), ar mediana (Ne)?";
        cin >> ats3;
        if (ats3 == "Ne")
        {
            cout << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Med.) " << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << setw(20) << left << Studentai[i].pavarde << setw(20) << left << Studentai[i].vardas << setw(19) << fixed << setprecision(2) << setw(5) << Studentai[i].medianos * 0.4 + Studentai[i].egz * 0.6 << endl;
            }
        }
        if (ats3 == "Taip")
        {
            cout << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << setw(20) << left << Studentai[i].pavarde << setw(20) << left << Studentai[i].vardas << setw(19) << fixed << setprecision(2) << ((Studentai[i].ndsum / nd) * 0.4) + Studentai[i].egz * 0.6 << endl;
            }
        }
    }
    return 0;
>>>>>>> Stashed changes:v0.2.cpp
}