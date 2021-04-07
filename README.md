# Programa skirta studentų pažymių vidurkiui ir medianai apskaičiuoti.
### V0.1
### Kaip paleisti programą?<br>
Versijoje [v0.1.1](https://github.com/domastyd/Pazymys/blob/v0.1/v0.1.1.cpp) yra naudojami C tipo masyvai. Tačiau, rekomenduojama naudoti programos [v0.1.2](https://github.com/domastyd/Pazymys/blob/v0.1/v0.1.2.cpp) versiją. Joje yra naudojami vector tipo konteineriai, kurie paspartina programos veiklą. 
Norint pasinaudoti šia programa, Jums reikia parsisiųsti failą v0.1.2.cpp ir įsijungti terminal. Su komanda cd nueiti iki savo v0.1.2.cpp failo ir įrašyti "g++ -o main v0.1.2.cpp" komandą ir kai programa bus sukompiliuota, įrašyti "main.cpp" arba "./main".

### Paleidus programą Jums reikės:<br>
- Pasirinkti ar norite įvesti fiksuotą duomenų skaičių, ar turėti galimybę baigti įvesti studentus duomenų įvedimo metu.<br>
- Jeigu pasirenkate įvesti fiksuotą duomenų skaičių, turėsite pasirinkti studentų skaičių, bei namų darbų kiekį skirtą vienam studentui.<br>
- Jeigu pasirenkate baigti įvesti duomenys duomenų įvedimo metu, Jūs turėsite pasirinkti namų darbų kiekį skirtą vienam studentui.<br>
- Įvedę šiuos duomenis, turėsite pasirinkti ar norite matyti automatiškai sugeneruotus studentų pažymius arba pažymius įvesti patys.<br>
- Pasirinke matyti automatiškai sugeneruotus duomenis, turėsite įvesti studentų vardus ir pavardes.<br>
- Pasirinkus įvesti duomenis patiems, turėsite įvesti šįuos duomenis: studentų vardus, pavardes, jų namų darbų pažymius ir egzamino pažymį).<br>
- Tada Jums reikės pasirinkti ar norite matyti studentų pažymių medianas.<br>

(Pažymių vidurkis sudaromis vadovaujantis šia formule: galutinis = 0.4 * vidurkis + 0.6 * egzaminas)<br>
(Pažymių mediana sudaroma vadovaujantis šia formule: mediana = 0.4 * pažymių mediana + 0.6 * egzaminas)<br>
### Pasirinkus šiuos nustatymus matysite sudarytą lentelę su studentu pavardėmis, vardais ir pažymių vidurkiais ir/arba medianomis.

### V0.2
### Kaip paleisti programą?<br>
Versijoje [v0.2](https://github.com/domastyd/Pazymys/releases/tag/v0.2) yra naudojami vector tipo konteineriai ir struktūros, kurie paspartina programos veiklą.  
Norint pasinaudoti šia programa, Jums reikia parsisiųsti failą v0.2.cpp, įsikelti txt duomenų failą kartu su v0.2 failu ir įsijungti terminal. Su komanda cd nueiti iki savo v0.2.cpp failo ir įrašyti "g++ -o main v0.2.cpp" komandą ir kai programa bus sukompiliuota, įrašyti "main.cpp" arba "./main".

### Paleidus programą Jums reikės:<br>
- Pasirinkti ar norite skaityti duomenis iš failo arba duomenis įvesti rankiniu būdu.
- Pasirinkus duomenis skaityti iš failo jums reikės pasirinkti ar norite matyti medianą, ar vidurkį.
- Jeigu pasirinkote įvesti duomenis rankiniu būdu - pasirinkti ar norite įvesti fiksuotą duomenų skaičių, ar turėti galimybę baigti įvesti studentus duomenų įvedimo metu.<br>
- Jeigu pasirenkate įvesti fiksuotą duomenų skaičių, turėsite pasirinkti studentų skaičių, bei namų darbų kiekį skirtą vienam studentui.<br>
- Jeigu pasirenkate baigti įvesti duomenys duomenų įvedimo metu, Jūs turėsite pasirinkti namų darbų kiekį skirtą vienam studentui.<br>
- Įvedę šiuos duomenis, turėsite pasirinkti ar norite matyti automatiškai sugeneruotus studentų pažymius arba pažymius įvesti patys.<br>
- Pasirinke matyti automatiškai sugeneruotus duomenis, turėsite įvesti studentų vardus ir pavardes.<br>
- Pasirinkus įvesti duomenis patiems, turėsite įvesti šįuos duomenis: studentų vardus, pavardes, jų namų darbų pažymius ir egzamino pažymį).<br>
- Tada Jums reikės pasirinkti ar norite matyti studentų pažymių medianas.<br>

(Pažymių vidurkis sudaromis vadovaujantis šia formule: galutinis = 0.4 * vidurkis + 0.6 * egzaminas)<br>
(Pažymių mediana sudaroma vadovaujantis šia formule: mediana = 0.4 * pažymių mediana + 0.6 * egzaminas)<br>
### Pasirinkus šiuos nustatymus matysite sudarytą lentelę su studentu pavardėmis, vardais ir pažymių vidurkiais ir/arba medianomis.

### V0.3
### Kaip paleisti programą?<br>
Versijoje [v0.3](https://github.com/domastyd/Pazymys/releases/tag/v0.3) yra naudojami vector tipo konteineriai ir struktūros, kurie paspartina programos veiklą. Taip pat trečioje programos versijoje yra naudojami header failai. Pridėti klaidų tikrinimo atnaujinimai, "try catches".
Norint pasinaudoti šia programa, Jums reikia parsisiųsti failus v0.3.cpp, v0.3_functions.cpp, v0.3.hpp ir makefile. Taip pat įsikelti txt duomenų failą kartu su visais parsisiųstais failais ir įsijungti terminal. Su komanda cd nueiti iki savo aplankalo, kuriame yra visi parsisiųsti failai ir įrašyti "mingw32-make main" komandą ir kai programa bus sukompiliuota, įrašyti "Output.cpp" arba "./Output.exe".

### Paleidus programą Jums reikės:<br>
- Pasirinkti ar norite skaityti duomenis iš failo arba duomenis įvesti rankiniu būdu.
- Pasirinkus duomenis skaityti iš failo jums reikės pasirinkti ar norite matyti medianą, ar vidurkį.
- Jeigu pasirinkote įvesti duomenis rankiniu būdu - pasirinkti ar norite įvesti fiksuotą duomenų skaičių, ar turėti galimybę baigti įvesti studentus duomenų įvedimo metu.<br>
- Jeigu pasirenkate įvesti fiksuotą duomenų skaičių, turėsite pasirinkti studentų skaičių, bei namų darbų kiekį skirtą vienam studentui.<br>
- Jeigu pasirenkate baigti įvesti duomenys duomenų įvedimo metu, Jūs turėsite pasirinkti namų darbų kiekį skirtą vienam studentui.<br>
- Įvedę šiuos duomenis, turėsite pasirinkti ar norite matyti automatiškai sugeneruotus studentų pažymius arba pažymius įvesti patys.<br>
- Pasirinke matyti automatiškai sugeneruotus duomenis, turėsite įvesti studentų vardus ir pavardes.<br>
- Pasirinkus įvesti duomenis patiems, turėsite įvesti šįuos duomenis: studentų vardus, pavardes, jų namų darbų pažymius ir egzamino pažymį).<br>
- Tada Jums reikės pasirinkti ar norite matyti studentų pažymių medianas.<br>

(Pažymių vidurkis sudaromis vadovaujantis šia formule: galutinis = 0.4 * vidurkis + 0.6 * egzaminas)<br>
(Pažymių mediana sudaroma vadovaujantis šia formule: mediana = 0.4 * pažymių mediana + 0.6 * egzaminas)<br>
### Pasirinkus šiuos nustatymus matysite sudarytą lentelę su studentu pavardėmis, vardais ir pažymių vidurkiais ir/arba medianomis.

### V0.4
### Kaip paleisti programą?<br>
Versijoje [v0.4](https://github.com/domastyd/Pazymys/releases/tag/v0.4) yra naudojami vector tipo konteineriai ir struktūros, kurie paspartina programos veiklą. Taip pat ketvirtoje programos versijoje yra naudojami header failai. Pridėti klaidų tikrinimo atnaujinimai, "try catches". Atsirado galimybė automatiškai sugeneruoti norimus failus bei studentus suskirstyti grupėmis (Vargšiukai ir kietuoliai).
Norint pasinaudoti šia programa, Jums reikia parsisiųsti failus v0.4.cpp, v0.4_functions.cpp, v0.4.hpp ir makefile. Taip pat įsikelti txt duomenų failą kartu su visais parsisiųstais failais (Jeigu norėsite naudoti savo failą) ir įsijungti terminal. Su komanda cd nueiti iki savo aplankalo, kuriame yra visi parsisiųsti failai ir įrašyti "mingw32-make main" komandą ir kai programa bus sukompiliuota, įrašyti "Output.cpp" arba "./Output.exe".

### Paleidus programą Jums reikės:<br>
- Pasirinkti ar norite automatiškai generuoti failus.
- Jeigu pasirenkate automatiškai generuoti failus, turite įvesti norimą studentų ir jų namų darbų skaičių.
- Atlikus šiuos žingsnius, galite pasirinkti studentų suskirstymą į vargšiukus ir kietuolius pagal galutinio pažymio (Medianą/Vidurkį). (Studentai, kurių galutinis pažymys yra <=5 yra laikomi kietuoliais, kitais atvejais, vargšiukais) Galutinis vidurkis skaiciuojamas pagal šia formulę:  galutinis = 0.4 * (vidurkis arba mediana) + 0.6 * egzaminas
- Jeigu automatinis failų generavimas Jūsų nedomina, turite pasirinkti ar norite skaityti duomenis iš failo arba duomenis įvesti rankiniu būdu.
- Pasirinkus duomenis skaityti iš failo jums reikės pasirinkti ar norite matyti medianą, ar vidurkį.
- Jeigu pasirinkote įvesti duomenis rankiniu būdu - pasirinkti ar norite įvesti fiksuotą duomenų skaičių, ar turėti galimybę baigti įvesti studentus duomenų įvedimo metu.<br>
- Jeigu pasirenkate įvesti fiksuotą duomenų skaičių, turėsite pasirinkti studentų skaičių, bei namų darbų kiekį skirtą vienam studentui.<br>
- Jeigu pasirenkate baigti įvesti duomenys duomenų įvedimo metu, Jūs turėsite pasirinkti namų darbų kiekį skirtą vienam studentui.<br>
- Įvedę šiuos duomenis, turėsite pasirinkti ar norite matyti automatiškai sugeneruotus studentų pažymius arba pažymius įvesti patys.<br>
- Pasirinke matyti automatiškai sugeneruotus duomenis, turėsite įvesti studentų vardus ir pavardes.<br>
- Pasirinkus įvesti duomenis patiems, turėsite įvesti šįuos duomenis: studentų vardus, pavardes, jų namų darbų pažymius ir egzamino pažymį).<br>
- Tada Jums reikės pasirinkti ar norite matyti studentų pažymių medianas.<br>

## Programos veikimo greičio analyzė

### Failų sugeneravimo laikai
| Students       | 1000    | 10.000  | 100.000   | 1.000.000  | 10.000.000 |
| :----------    | :------ | :------ | :-------- | :--------- | :--------- |
| Time(seconds)  | 0.03290 | 0.70649 | 3.52166   | 8.74375    | 35.0777    |
### Duomenų nuskaitymo laikai
| Students       | 1000    | 10.000  | 100.000   | 1.000.000  | 10.000.000 |
| :----------    | :------ | :------ | :-------- | :--------- | :--------- |
| Time(seconds)  | 0.01690 | 0.08649 | 1.21663   | 2.36548    | 7.07577    |
### Studentų suskirstymo i vargšiukus ir kietuolius laikai
| Students       | 1000    | 10.000  | 100.000   | 1.000.000  | 10.000.000 |
| :----------    | :------ | :------ | :-------- | :--------- | :--------- |
| Time(seconds)  | 0.00009 | 0.00489 | 0.35859   | 0.04592    | 1.58963    |
### Studentų išvedimas į naujus du failus
| Students       | 1000    | 10.000  | 100.000   | 1.000.000  | 10.000.000 |
| :----------    | :------ | :------ | :-------- | :--------- | :--------- |
| Time(seconds)  | 0.01690 | 0.06669 | 0.81663   | 6.36548    | 34.0576    |

---

(Pažymių vidurkis sudaromis vadovaujantis šia formule: galutinis = 0.4 * vidurkis + 0.6 * egzaminas)<br>
(Pažymių mediana sudaroma vadovaujantis šia formule: mediana = 0.4 * pažymių mediana + 0.6 * egzaminas)<br>
### Pasirinkus šiuos nustatymus matysite sudarytą lentelę su studentu pavardėmis, vardais ir pažymių vidurkiais ir/arba medianomis.

### V0.5
### Kaip paleisti programą?<br>
Versijoje [v0.5](https://github.com/domastyd/Pazymys/releases/tag/v0.5) atsirado galimybė pasirinkti kokių tipų konteinerius naudoti programoje (Vektoriai, listai, deqai), tačiau išnyko galimybė matyti studentų pažymių medianas.
Norint pasinaudoti šia programa, Jums reikia parsisiųsti failus v0.5.cpp, v0.5_functions.cpp, v0.5.hpp ir makefile. Taip pat įsikelti txt duomenų failą kartu su visais parsisiųstais failais (Jeigu norėsite naudoti savo failą) ir įsijungti terminal. Su komanda cd nueiti iki savo aplankalo, kuriame yra visi parsisiųsti failai ir įrašyti "mingw32-make main" komandą ir kai programa bus sukompiliuota, įrašyti "Output.cpp" arba "./Output.exe".

### Paleidus programą Jums reikės:<br>
- Pasirinkti kokio tipo konteinerius norėsite naudoti programoje.
- Pasirinkti ar norite automatiškai generuoti failus.
- Jeigu pasirenkate automatiškai generuoti failus, turite įvesti norimą studentų ir jų namų darbų skaičių.
- Atlikus šiuos žingsnius, galite pasirinkti studentų suskirstymą į vargšiukus ir kietuolius pagal galutinio pažymio vidurkį. (Studentai, kurių galutinis pažymys yra <=5 yra laikomi kietuoliais, kitais atvejais, vargšiukais) Galutinis vidurkis skaiciuojamas pagal šia formulę:  galutinis = 0.4 * vidurkis + 0.6 * egzaminas.
- Atlikus šiuos žingsnius, Jums bus sukurti du txt failai ir terminale parodyta programos veikimo informacija.

## Programos veikimo greičio analyzė

Programos spartai ištirti buvo naudojami skirtingi konteineriai ir skirtingų dydžių failai. Spartos analizės buvo naudotas kompiuteris su šiais parametrais:

- Intel Core i5-9300H 2.60GHz procesorius
- 8 GB RAM
- 1 TB M.2 SSD
0.028s	0.09s	0.932s	9.78s	88.13s
### Duomenų nuskaitymas iš failų
| Students       | 1000     | 10.000   | 100.000    | 1.000.000   | 10.000.000  |
| :----------    | :--------| :------  | :--------- | :---------- | :---------- |
| Vector         | 0.019s   | 0.089s   | 0.859s     | 8.92s       | 92.53s      |
| List           | 0.028s   | 0.09s    | 0.932s     | 0.932s      | 88.15s      |
| Deque          | 0.012s   | 0.08s    | 0.895s     | 9.5s        | 91.65s      |
### Studentų suskirstymas į naujus du failus
| Students       | 1000     | 10.000   | 100.000    | 1.000.000   | 10.000.000  |
| :----------    | :------- | :------- | :--------- | :---------- | :---------- |
| Vector         | 0.01690s | 0.00569s | 0.04663s   | 0.06548s    | 17.0576s    |
| List           | 0.02325s | 0.00689s | 0.05859s   | 0.62592s    | 16.8963s    |
| Deque          | 0.01256s | 0.00489s | 0.04126s   | 0.05592s    | 16.5893s    |

---

(Pažymių vidurkis sudaromis vadovaujantis šia formule: galutinis = 0.4 * vidurkis + 0.6 * egzaminas)<br>
### Pasirinkus šiuos nustatymus matysite tekstiniuose failuose sudarytą lentelę su studentu pavardėmis, vardais ir pažymių vidurkiais.


