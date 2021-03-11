#include "v0.3.hpp"

int main()
{
    cout << "Ar norite automatiskai generuoti duomenis failui? (Taip/Ne) ";
    cin >> ats5;
    if (ats5 == "Taip")
    {
        {
            cout << "Iveskite studentu skaiciu" << endl;
            cin >> z;
            cout << "Iveskite namu darbu skaiciu" << endl;
            cin >> v;
            Generavimas(z, v);
            cout << "Ar norite testi programa? (Taip/Ne) ";
            cin >> ats4;
            if (ats4 == "Ne")
                exit(1);
        }
    }
    if (ats5 == "Ne")
    {
        cout << "Ar norite gauti studentu duomenis is failo? (Taip/Ne) ";
        cin >> ats4;
    }
    if (ats4 == "Taip")
    {
        cout << "Iveskite studentu skaiciu faile ";
        cin >> z;
        FailoPavadinimas = "studentai" + to_string(z) + ".txt";
        DuomenysIsFailo();
        sort(Studentai.begin(), Studentai.end());
        cout << "Ar norite surusiuoti studentus pagal vidurki (V), ar mediana (M)? ";
        cin >> ats3;
        ofstream out("vargsiukai.txt");
        ofstream out1("kietuoliai.txt");
        if (ats3 == "M")
        {
            void StudentuSkirstymasPagalMediana();
            sort(Kietuoliai.begin(), Kietuoliai.end());
            sort(Vargsiukai.begin(), Vargsiukai.end());
            out << "Pavarde             "
                << "Vardas              "
                << "Galutinis (Med.) " << endl;
            out << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < vsum; i++)
            {
                out << setw(20) << left << Vargsiukai[i].pavarde << setw(20) << left << Vargsiukai[i].vardas << setw(19) << fixed << setprecision(0) << setw(5) << Vargsiukai[i].medianos * 0.4 + Vargsiukai[i].egz * 0.6 << endl;
            }

            out1 << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Med.) " << endl;
            out1 << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < ksum; i++)
            {
                out1 << setw(20) << left << Kietuoliai[i].pavarde << setw(20) << left << Kietuoliai[i].vardas << setw(19) << fixed << setprecision(0) << setw(5) << Kietuoliai[i].medianos * 0.4 + Kietuoliai[i].egz * 0.6 << endl;
            }
        }
        if (ats3 == "V")
        {
            void StudentuSkirstymasPagalVidurki();
            sort(Kietuoliai.begin(), Kietuoliai.end());
            sort(Vargsiukai.begin(), Vargsiukai.end());
            out << "Pavarde             "
                << "Vardas              "
                << "Galutinis (Vid.) " << endl;
            out << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < vsum; i++)
            {
                out << setw(20) << left << Vargsiukai[i].pavarde << setw(20) << left << Vargsiukai[i].vardas << setw(19) << fixed << setprecision(0) << ((Vargsiukai[i].ndsum / nd) * 0.4) + Vargsiukai[i].egz * 0.6 << endl;
            }

            out1 << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            out1 << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < ksum; i++)
            {
                out1 << setw(20) << left << Kietuoliai[i].pavarde << setw(20) << left << Kietuoliai[i].vardas << setw(19) << fixed << setprecision(0) << ((Kietuoliai[i].ndsum / nd) * 0.4) + Kietuoliai[i].egz * 0.6 << endl;
            }
        }
        out.close();
        out1.close();
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
                cout << setw(20) << left << Studentai[i].pavarde << setw(20) << left << Studentai[i].vardas << setw(19) << fixed << setprecision(0) << setw(5) << Studentai[i].medianos * 0.4 + Studentai[i].egz * 0.6 << endl;
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
                cout << setw(20) << left << Studentai[i].pavarde << setw(20) << left << Studentai[i].vardas << setw(19) << fixed << setprecision(0) << (Studentai[i].ndsum / nd) * 0.4 + Studentai[i].egz * 0.6 << endl;
            }
        }
    }
    return 0;
}