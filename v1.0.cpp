#include "v1.0.hpp"

template <typename T>
void StudentuSkirstymasPagalVidurki3(T& A, T& B){    
    copy_if(A.begin(), A.end(), back_inserter(B), MaziauNei5);
    remove_if(A.begin(), A.end(), MaziauNei5);   
}

int main()
{
    cout << "Pasirinkite konteinerio tipa: [1] Vector [2] List [3] Deque " << endl;
    cin >> konteineris;

    if (konteineris == 1)
    {
        cout << "Kokiu budu norite skaiciuoti: " << endl;
        cout << "[1] skaidymas (rusiavimas) i du naujus to paties tipo konteinerius: vargsiuku ir kietiaku " << endl;
        cout << "[2] skaidymas (rusiavimas) panaudojant tik viena nauja konteineri: vargsiukai " << endl;
        cin >> rusiavimas;
        if(rusiavimas == 2){
            cout << "Ar norite automatiskai generuoti duomenis failui? (Taip/Ne) ";
        cin >> ats5;
        duration<double> diff1;
        if (ats5 == "Taip")
        {
            {
                cout << "Iveskite studentu skaiciu: ";
                cin >> z;
                cout << "Iveskite namu darbu skaiciu: ";
                cin >> v;
                auto start1 = system_clock::now();
                Generavimas(z, v);
                auto end1 = system_clock::now();
                diff1 = end1 - start1;
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
            auto start2 = system_clock::now();
            DuomenysIsFailo();
            auto end2 = system_clock::now();
            duration<double> diff2 = end2 - start2;
            sort(Studentai.begin(), Studentai.end());
            cout << "Studentai suskirstyti pagal vidurki. " << endl;
            ofstream out("vargsiukai.txt");
            ofstream out1("kietuoliai.txt");

            auto start3 = system_clock::now();
            StudentuSkirstymasPagalVidurki3(Studentai,Vargsiukai);
            auto end3 = system_clock::now();
            duration<double> diff3 = end3 - start3;
            sort(Studentai.begin(), Studentai.end());
            sort(Vargsiukai.begin(), Vargsiukai.end());
            auto start4 = system_clock::now();
            out << "Pavarde             "
                << "Vardas              "
                << "Galutinis (Vid.) " << endl;
            out << "--------------------------------------------------------------------------" << endl;
            /*for (int i = 0; i < Vargsiukai.size(); i++)
            {
                out << setw(20) << left << Vargsiukai[i].pavarde << setw(20) << left << Vargsiukai[i].vardas << setw(19) << fixed << setprecision(0) << (int)(((Vargsiukai[i].ndsum / nd) * 0.4) + Vargsiukai[i].egz * 0.6) << endl;
            }
            */
            for (auto elem : Vargsiukai)
                out <<fixed<<left<<setw(25)<< elem.vardas <<setw(25)<< elem.pavarde << elem.galutinis << endl;
            out1 << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            out1 << "--------------------------------------------------------------------------" << endl;
            /*for (int i = 0; i < Studentai.size(); i++)
            {
                out1 << setw(20) << left << Studentai[i].pavarde << setw(20) << left << Studentai[i].vardas << setw(19) << fixed << setprecision(0) << (int)(((Studentai[i].ndsum / nd) * 0.4) + Studentai[i].egz * 0.6) << endl;
            }
            */
            for (auto elem : Studentai)
                out1 <<fixed<<left<<setw(25)<< elem.vardas <<setw(25)<< elem.pavarde << elem.galutinis <<  endl;

            auto end4 = system_clock::now();
            duration<double> diff4 = end4 - start4;
            cout << "Failo (studentai" + to_string(z) + ".txt) studentai buvo suskirstyti per:  " << diff3.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) surusiuoti studentai buvo isvesti i naujus failus (kietuoliai.txt) ir (vargsiuokai.txt) per:  " << diff4.count() << " sekundes" << endl;

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
            cout << "Studentai suskirstyti pagal vidurki." << endl;

            cout << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << setw(20) << left << Studentai[i].pavarde << setw(20) << left << Studentai[i].vardas << setw(19) << fixed << setprecision(0) << (int)((Studentai[i].ndsum / nd) * 0.4 + Studentai[i].egz * 0.6) << endl;
            }
        }

        }
        else{
        cout << "Ar norite automatiskai generuoti duomenis failui? (Taip/Ne) ";
        cin >> ats5;
        duration<double> diff1;
        if (ats5 == "Taip")
        {
            {
                cout << "Iveskite studentu skaiciu: ";
                cin >> z;
                cout << "Iveskite namu darbu skaiciu: ";
                cin >> v;
                auto start1 = system_clock::now();
                Generavimas(z, v);
                auto end1 = system_clock::now();
                diff1 = end1 - start1;
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
            auto start2 = system_clock::now();
            DuomenysIsFailo();
            auto end2 = system_clock::now();
            duration<double> diff2 = end2 - start2;
            sort(Studentai.begin(), Studentai.end());
            cout << "Studentai suskirstyti pagal vidurki. " << endl;
            ofstream out("vargsiukai.txt");
            ofstream out1("kietuoliai.txt");

            auto start3 = system_clock::now();
            StudentuSkirstymasPagalVidurki();
            auto end3 = system_clock::now();
            duration<double> diff3 = end3 - start3;
            sort(Kietuoliai.begin(), Kietuoliai.end());
            sort(Vargsiukai.begin(), Vargsiukai.end());
            auto start4 = system_clock::now();
            out << "Pavarde             "
                << "Vardas              "
                << "Galutinis (Vid.) " << endl;
            out << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < Vargsiukai.size(); i++)
            {
                out << setw(20) << left << Vargsiukai[i].pavarde << setw(20) << left << Vargsiukai[i].vardas << setw(19) << fixed << setprecision(0) << (int)(((Vargsiukai[i].ndsum / nd) * 0.4) + Vargsiukai[i].egz * 0.6) << endl;
            }

            out1 << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            out1 << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < Kietuoliai.size(); i++)
            {
                out1 << setw(20) << left << Kietuoliai[i].pavarde << setw(20) << left << Kietuoliai[i].vardas << setw(19) << fixed << setprecision(0) << (int)(((Kietuoliai[i].ndsum / nd) * 0.4) + Kietuoliai[i].egz * 0.6) << endl;
            }
            auto end4 = system_clock::now();
            duration<double> diff4 = end4 - start4;
            cout << "Failo (studentai" + to_string(z) + ".txt) studentai buvo suskirstyti per:  " << diff3.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) surusiuoti studentai buvo isvesti i naujus failus (kietuoliai.txt) ir (vargsiuokai.txt) per:  " << diff4.count() << " sekundes" << endl;

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
            cout << "Studentai suskirstyti pagal vidurki." << endl;

            cout << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << setw(20) << left << Studentai[i].pavarde << setw(20) << left << Studentai[i].vardas << setw(19) << fixed << setprecision(0) << (int)((Studentai[i].ndsum / nd) * 0.4 + Studentai[i].egz * 0.6) << endl;
            }
        }
        }
    }
    //----------------------------------------------------------------------------------------------------------------
    if (konteineris == 2)
    {
        cout << "Kokiu budu norite skaiciuoti: " << endl;
        cout << "[1] skaidymas (rusiavimas) i du naujus to paties tipo konteinerius: vargsiuku ir kietiaku " << endl;
        cout << "[2] skaidymas (rusiavimas) panaudojant tik viena nauja konteineri: vargsiukai " << endl;
        cin >> rusiavimas;
        if(rusiavimas == 2){
        cout << "Ar norite automatiskai generuoti duomenis failui? (Taip/Ne) ";
        cin >> ats5;
        duration<double> diff5;
        if (ats5 == "Taip")
        {
            {
                cout << "Iveskite studentu skaiciu: ";
                cin >> z;
                cout << "Iveskite namu darbu skaiciu: ";
                cin >> v;
                auto start5 = system_clock::now();
                Generavimas(z, v);
                auto end5 = system_clock::now();
                diff5 = end5 - start5;
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
            auto start6 = system_clock::now();
            DuomenysIsFailo1();
            auto end6 = system_clock::now();
            duration<double> diff6 = end6 - start6;
            Studentai1.sort();
            cout << "Studentai suskirstyti pagal vidurki." << endl;
            ofstream out("vargsiukai.txt");
            ofstream out1("kietuoliai.txt");

            auto start7 = system_clock::now();
            StudentuSkirstymasPagalVidurki3(Studentai1,Vargsiukai1);
            auto end7 = system_clock::now();
            duration<double> diff7 = end7 - start7;
            Studentai1.sort();
            Vargsiukai1.sort();
            auto start8 = system_clock::now();
            out << "Pavarde             "
                << "Vardas              "
                << "Galutinis (Vid.) " << endl;
            out << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < Vargsiukai1.size(); i++)
            {
                out << setw(20) << left << Vargsiukai1.front().pavarde << setw(20) << left << Vargsiukai1.front().vardas << setw(19) << fixed << setprecision(0) << (int)(((Vargsiukai1.front().ndsum / nd) * 0.4) + Vargsiukai1.front().egz * 0.6) << endl;
                Vargsiukai1.pop_front();
            }

            out1 << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            out1 << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < Studentai1.size(); i++)
            {
                out1 << setw(20) << left << Studentai1.front().pavarde << setw(20) << left << Studentai1.front().vardas << setw(19) << fixed << setprecision(0) << (int)(((Studentai1.front().ndsum / nd) * 0.4) + Studentai1.front().egz * 0.6) << endl;
                Studentai1.pop_front();
            }
            auto end8 = system_clock::now();
            duration<double> diff8 = end8 - start8;
            cout << "Failo (studentai" + to_string(z) + ".txt) studentai buvo suskirstyti per:  " << diff7.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) surusiuoti studentai buvo isvesti i naujus failus (kietuoliai.txt) ir (vargsiuokai.txt) per:  " << diff8.count() << " sekundes" << endl;

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
            cout << "Studentai suskirstyti pagal vidurki" << endl;

            cout << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << setw(20) << left << Studentai1.front().pavarde << setw(20) << left << Studentai1.front().vardas << setw(19) << fixed << setprecision(0) << (int)((Studentai1.front().ndsum / nd) * 0.4 + Studentai1.front().egz * 0.6) << endl;
            }
            Studentai1.pop_front();
        }
        }

        else{
                    cout << "Ar norite automatiskai generuoti duomenis failui? (Taip/Ne) ";
        cin >> ats5;
        duration<double> diff5;
        if (ats5 == "Taip")
        {
            {
                cout << "Iveskite studentu skaiciu: ";
                cin >> z;
                cout << "Iveskite namu darbu skaiciu: ";
                cin >> v;
                auto start5 = system_clock::now();
                Generavimas(z, v);
                auto end5 = system_clock::now();
                diff5 = end5 - start5;
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
            auto start6 = system_clock::now();
            DuomenysIsFailo1();
            auto end6 = system_clock::now();
            duration<double> diff6 = end6 - start6;
            Studentai1.sort();
            cout << "Studentai suskirstyti pagal vidurki." << endl;
            ofstream out("vargsiukai.txt");
            ofstream out1("kietuoliai.txt");

            auto start7 = system_clock::now();
            StudentuSkirstymasPagalVidurki1();
            auto end7 = system_clock::now();
            duration<double> diff7 = end7 - start7;
            Kietuoliai1.sort();
            Vargsiukai1.sort();
            auto start8 = system_clock::now();
            out << "Pavarde             "
                << "Vardas              "
                << "Galutinis (Vid.) " << endl;
            out << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < Vargsiukai1.size(); i++)
            {
                out << setw(20) << left << Vargsiukai1.front().pavarde << setw(20) << left << Vargsiukai1.front().vardas << setw(19) << fixed << setprecision(0) << (int)(((Vargsiukai1.front().ndsum / nd) * 0.4) + Vargsiukai1.front().egz * 0.6) << endl;
                Vargsiukai1.pop_front();
            }

            out1 << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            out1 << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < Kietuoliai1.size(); i++)
            {
                out1 << setw(20) << left << Kietuoliai1.front().pavarde << setw(20) << left << Kietuoliai1.front().vardas << setw(19) << fixed << setprecision(0) << (int)(((Kietuoliai1.front().ndsum / nd) * 0.4) + Kietuoliai1.front().egz * 0.6) << endl;
                Kietuoliai1.pop_front();
            }
            auto end8 = system_clock::now();
            duration<double> diff8 = end8 - start8;
            cout << "Failo (studentai" + to_string(z) + ".txt) studentai buvo suskirstyti per:  " << diff7.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) surusiuoti studentai buvo isvesti i naujus failus (kietuoliai.txt) ir (vargsiuokai.txt) per:  " << diff8.count() << " sekundes" << endl;

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
            cout << "Studentai suskirstyti pagal vidurki" << endl;

            cout << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << setw(20) << left << Studentai1.front().pavarde << setw(20) << left << Studentai1.front().vardas << setw(19) << fixed << setprecision(0) << (int)((Studentai1.front().ndsum / nd) * 0.4 + Studentai1.front().egz * 0.6) << endl;
            }
            Studentai1.pop_front();
        }


        }
    }
    //----------------------------------------------------------------------------------------------------------------
    if (konteineris == 3)
    {
                cout << "Kokiu budu norite skaiciuoti: " << endl;
        cout << "[1] skaidymas (rusiavimas) i du naujus to paties tipo konteinerius: vargsiuku ir kietiaku " << endl;
        cout << "[2] skaidymas (rusiavimas) panaudojant tik viena nauja konteineri: vargsiukai " << endl;
        cin >> rusiavimas;
        if(rusiavimas == 2){
               cout << "Ar norite automatiskai generuoti duomenis failui? (Taip/Ne) ";
        cin >> ats5;
        duration<double> diff5;
        if (ats5 == "Taip")
        {
            {
                cout << "Iveskite studentu skaiciu ";
                cin >> z;
                cout << "Iveskite namu darbu skaiciu ";
                cin >> v;
                auto start5 = system_clock::now();
                Generavimas(z, v);
                auto end5 = system_clock::now();
                diff5 = end5 - start5;
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
            auto start6 = system_clock::now();
            DuomenysIsFailo2();
            auto end6 = system_clock::now();
            duration<double> diff6 = end6 - start6;
            sort(Studentai2.begin(), Studentai2.end());
            cout << "Studentai suskirstyti pagal vidurki." << endl;
            ofstream out("vargsiukai.txt");
            ofstream out1("kietuoliai.txt");

            auto start7 = system_clock::now();
            StudentuSkirstymasPagalVidurki3(Studentai2,Vargsiukai2);
            auto end7 = system_clock::now();
            duration<double> diff7 = end7 - start7;
            sort(Studentai2.begin(), Studentai2.end());
            sort(Vargsiukai2.begin(), Vargsiukai2.end());
            auto start8 = system_clock::now();
            out << "Pavarde             "
                << "Vardas              "
                << "Galutinis (Vid.) " << endl;
            out << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < Vargsiukai2.size(); i++)
            {
                out << setw(20) << left << Vargsiukai2.front().pavarde << setw(20) << left << Vargsiukai2.front().vardas << setw(19) << fixed << setprecision(0) << (int)(((Vargsiukai2.front().ndsum / nd) * 0.4) + Vargsiukai2.front().egz * 0.6) << endl;
                Vargsiukai2.pop_front();
            }

            out1 << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            out1 << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < Studentai2.size(); i++)
            {
                out1 << setw(20) << left << Studentai2.front().pavarde << setw(20) << left << Studentai2.front().vardas << setw(19) << fixed << setprecision(0) << (int)(((Studentai2.front().ndsum / nd) * 0.4) + Studentai2.front().egz * 0.6) << endl;
                Studentai2.pop_front();
            }
            auto end8 = system_clock::now();
            duration<double> diff8 = end8 - start8;
            cout << "Failo (studentai" + to_string(z) + ".txt) studentai buvo suskirstyti per:  " << diff7.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) surusiuoti studentai buvo isvesti i naujus failus (kietuoliai.txt) ir (vargsiuokai.txt) per:  " << diff8.count() << " sekundes" << endl;

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
            cout << "Skaiciuojami studentu vidurkiai..." << endl;

            cout << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << setw(20) << left << Studentai2.front().pavarde << setw(20) << left << Studentai2.front().vardas << setw(19) << fixed << setprecision(0) << (int)((Studentai2.front().ndsum / nd) * 0.4 + Studentai2.front().egz * 0.6) << endl;
            }
            Studentai2.pop_front();
        }
                }

        else{
                               cout << "Ar norite automatiskai generuoti duomenis failui? (Taip/Ne) ";
        cin >> ats5;
        duration<double> diff5;
        if (ats5 == "Taip")
        {
            {
                cout << "Iveskite studentu skaiciu: ";
                cin >> z;
                cout << "Iveskite namu darbu skaiciu: ";
                cin >> v;
                auto start5 = system_clock::now();
                Generavimas(z, v);
                auto end5 = system_clock::now();
                diff5 = end5 - start5;
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
            auto start6 = system_clock::now();
            DuomenysIsFailo2();
            auto end6 = system_clock::now();
            duration<double> diff6 = end6 - start6;
            sort(Studentai2.begin(), Studentai2.end());
            cout << "Studentai suskirstyti pagal vidurki." << endl;
            ofstream out("vargsiukai.txt");
            ofstream out1("kietuoliai.txt");

            auto start7 = system_clock::now();
            StudentuSkirstymasPagalVidurki2();
            auto end7 = system_clock::now();
            duration<double> diff7 = end7 - start7;
            sort(Kietuoliai2.begin(), Kietuoliai2.end());
            sort(Vargsiukai2.begin(), Vargsiukai2.end());
            auto start8 = system_clock::now();
            out << "Pavarde             "
                << "Vardas              "
                << "Galutinis (Vid.) " << endl;
            out << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < Vargsiukai2.size(); i++)
            {
                out << setw(20) << left << Vargsiukai2.front().pavarde << setw(20) << left << Vargsiukai2.front().vardas << setw(19) << fixed << setprecision(0) << (int)(((Vargsiukai2.front().ndsum / nd) * 0.4) + Vargsiukai2.front().egz * 0.6) << endl;
                Vargsiukai2.pop_front();
            }

            out1 << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            out1 << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < Kietuoliai2.size(); i++)
            {
                out1 << setw(20) << left << Kietuoliai2.front().pavarde << setw(20) << left << Kietuoliai2.front().vardas << setw(19) << fixed << setprecision(0) << (int)(((Kietuoliai2.front().ndsum / nd) * 0.4) + Kietuoliai2.front().egz * 0.6) << endl;
                Kietuoliai2.pop_front();
            }
            auto end8 = system_clock::now();
            duration<double> diff8 = end8 - start8;
            cout << "Failo (studentai" + to_string(z) + ".txt) studentai buvo suskirstyti per:  " << diff7.count() << " sekundes" << endl;
            cout << "Failo (studentai" + to_string(z) + ".txt) surusiuoti studentai buvo isvesti i naujus failus (kietuoliai.txt) ir (vargsiukai.txt) per:  " << diff8.count() << " sekundes" << endl;

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
            cout << "Studentai suskirstyti pagal vidurki" << endl;

            cout << "Pavarde             "
                 << "Vardas              "
                 << "Galutinis (Vid.) " << endl;
            cout << "--------------------------------------------------------------------------" << endl;
            for (int i = 0; i < k; i++)
            {
                cout << setw(20) << left << Studentai2.front().pavarde << setw(20) << left << Studentai2.front().vardas << setw(19) << fixed << setprecision(0) << (int)((Studentai2.front().ndsum / nd) * 0.4 + Studentai2.front().egz * 0.6) << endl;
            }
            Studentai2.pop_front();
        }
        }
    return 0;
}
}