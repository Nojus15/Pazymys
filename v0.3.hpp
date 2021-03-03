#ifndef V03_HPP
#define v03_HPP
#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

struct Studentas
{
    string vardas;   // string *vardas = new string[100000];
    string pavarde;  // string *pavarde = new string[100000];
    double egz;      // double *egz = new double[100000];
    double ndsum;    // namu darbu rezultatu sumadouble *ndsum = new double[100000]
    double medianos; // isvestos medianos
    bool operator<(Studentas A)
    {
        return vardas < A.vardas;
    }
};

extern vector<Studentas> Studentai; // studentu struktura vektoriuose
extern string ats;                  // ar norite patys ivesti duomenis?
extern string ats1;                 // ar norite itraukti dar viena studenta?
extern string ats2;                 // ar norite generuoti atsitiktines pazymiu reiksmes?
extern string ats3;                 // ar norite matyti medianas?
extern int nd;                      // namu darbu skaicius
extern int k = 0;                   // stduentu skaicius
extern int x = 0;                   // laikinas studento pazymiu nuskaitymo skaitliukas
extern int max = 10;         // pazymiu generavimui maksimali reiksme
extern vector<int> pazymiai;        // namu darbu rezultatu ir egzamino pazymiu masyvas skaiciuoti medianai
extern string FailoPavadinimas;
extern string ats4;
extern int z;

double MedianosRadimas(vector<int> &pazymiai);
void ZinomasDuomenuSkaicius();
void NezinomasDuomenuSkaicius();
void DuomenysIsFailo();
#endif