#include "v0.3.hpp"

int main()
{
    cout << "Ar norite automatiskai generuoti duomenis failui? (Taip/Ne) ";
    cin >> ats5;
    duration<double> diff;
    if (ats5 == "Taip")
    {
        {
            cout << "Iveskite studentu skaiciu" << endl;
            cin >> z;
            cout << "Iveskite namu darbu skaiciu" << endl;
            cin >> v;
            auto start = system_clock::now();
            Generavimas(z, v);
            auto end = system_clock::now();
            diff = end - start;
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
        auto start = system_clock::now();
        DuomenysIsFailo();
        auto end = system_clock::now();
        duration<double> diff1 = end - start;
        sort(Studentai.begin(), Studentai.end());
        cout << "Ar norite surusiuoti studentus pagal vidurki (V), ar mediana (M)? ";
        cin >> ats3;
        ofstream out("vargsiukai.txt");
        ofstream out1("kietuoliai.txt");
        if (ats3 == "M")
        {
            auto start = system_clock::now();
            StudentuSkirstymasPagalMediana();
            auto end = system_clock::now();
            duration<double> diff2 = end - start;
            sort(Kietuoliai.begin(), Kietuoliai.end());
            sort(Vargsiukai.begin(), Vargsiukai.end());
            auto start1 = system_clock::now();
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
            auto end1 = system_clock::now();
            duration<double> diff3 = end1 - start1;
            cout << "Failas (studentai" + to_string(z) + ".txt) buvo sukurtas per: " << diff.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) duomenys buvo nuskaityti per:  " << diff1.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) studentai buvo suskirstyti per:  " << diff2.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) suriuoti studentai buvo isvesti i naujus failus (kietuoliai.txt) ir (vargsiuokai.txt) per:  " << diff3.count() << " sekundes" << endl;

        }
        if (ats3 == "V")
        {
            auto start = system_clock::now();
            StudentuSkirstymasPagalVidurki();
            auto end = system_clock::now();
            duration<double> diff2 = end - start;
            sort(Kietuoliai.begin(), Kietuoliai.end());
            sort(Vargsiukai.begin(), Vargsiukai.end());
            auto start1 = system_clock::now();
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
            auto end1 = system_clock::now();
            duration<double> diff3 = end1 - start1;
            cout << "Failas (studentai" + to_string(z) + ".txt) buvo sukurtas per: " << diff.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) duomenys buvo nuskaityti per:  " << diff1.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) studentai buvo suskirstyti per:  " << diff2.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) suriuoti studentai buvo isvesti i naujus failus (kietuoliai.txt) ir (vargsiuokai.txt) per:  " << diff3.count() << " sekundes" << endl;
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