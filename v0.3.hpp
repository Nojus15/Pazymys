#ifndef V03_HPP
#define v03_HPP
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

vector<Studentas> Studentai; // studentu struktura vektoriuose
string ats;                  // ar norite patys ivesti duomenis?
string ats1;                 // ar norite itraukti dar viena studenta?
string ats2;                 // ar norite generuoti atsitiktines pazymiu reiksmes?
string ats3;                 // ar norite matyti medianas?
int nd;                      // namu darbu skaicius
int k = 0;                   // stduentu skaicius
int x = 0;                   // laikinas studento pazymiu nuskaitymo skaitliukas
static int max = 10;         // pazymiu generavimui maksimali reiksme
vector<int> pazymiai;        // namu darbu rezultatu ir egzamino pazymiu masyvas skaiciuoti medianai
string FailoPavadinimas;
string ats4;
int z;

double MedianosRadimas(vector<int> &pazymiai);
void ZinomasDuomenuSkaicius();
void NezinomasDuomenuSkaicius();
void DuomenysIsFailo();
#endif