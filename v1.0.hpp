#ifndef V10_HPP
#define v10_HPP
#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <vector>
#include <random>
#include <fstream>
#include <chrono>
#include <deque>
#include <list>

using namespace std;
using namespace chrono;

struct Studentas
{
    string vardas;   // string *vardas = new string[100000];
    string pavarde;  // string *pavarde = new string[100000];
    double egz;      // double *egz = new double[100000];
    double ndsum;    // namu darbu rezultatu sumadouble *ndsum = new double[100000]
    vector<int> pazymiai;
    int galutinis;
    bool operator<(Studentas A)
    {
        return vardas < A.vardas;
    }
};

extern vector<Studentas> Studentai; // studentu struktura vektoriuose
extern vector<Studentas> Kietuoliai;
extern vector<Studentas> Vargsiukai;
extern list<Studentas> Studentai1; // studentu struktura listuose
extern list<Studentas> Kietuoliai1;
extern list<Studentas> Vargsiukai1;
extern deque<Studentas> Studentai2; // studentu struktura dequose
extern deque<Studentas> Kietuoliai2;
extern deque<Studentas> Vargsiukai2;
extern string ats;                  // ar norite patys ivesti duomenis?
extern string ats1;                 // ar norite itraukti dar viena studenta?
extern string ats2;                 // ar norite generuoti atsitiktines pazymiu reiksmes?
extern int nd;                      // namu darbu skaicius
extern int k;             // studentu skaicius
extern int x;                 // laikinas studento pazymiu nuskaitymo skaitliukas
//extern vector<int> pazymiai;        // namu darbu rezultatu ir egzamino pazymiu masyvas skaiciuoti medianai
//extern list<int> pazymiai1;        // namu darbu rezultatu ir egzamino pazymiu masyvas skaiciuoti medianai
//extern deque<int> pazymiai2;        // namu darbu rezultatu ir egzamino pazymiu masyvas skaiciuoti medianai
extern string FailoPavadinimas;
extern string ats4;
extern string ats5;
extern int z;
extern int v;
extern int vsum; // vargsiuku suma
extern int ksum; // kieteku suma
extern int konteineris;
extern int rusiavimas;

//template <typename T>
//void StudentuSkirstymasPagalVidurki3(T&, T&);
void ZinomasDuomenuSkaicius();
void NezinomasDuomenuSkaicius();
void DuomenysIsFailo();
void DuomenysIsFailo1();
void DuomenysIsFailo2();
void Generavimas(int z, int v);
void StudentuSkirstymasPagalVidurki();
void StudentuSkirstymasPagalVidurki1();
void StudentuSkirstymasPagalVidurki2();
void StudentuSkirstymasPagalVidurki3(vector<Studentas>&, vector<Studentas>&);
void StudentuSkirstymasPagalVidurki4(list<Studentas>&, list<Studentas>&);
void StudentuSkirstymasPagalVidurki5(deque<Studentas>& , deque<Studentas> &);

#endif