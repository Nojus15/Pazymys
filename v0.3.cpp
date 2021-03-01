#include "v0.3.hpp"

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
}