#pragma once
#include <iostream>
#include<string>
#include<map>
#include<fstream>
#include "Graf.h" 

using namespace std;
/**
 * @brief Funkcja analizuje zwr�cony wynik i zwraca najoptymalniejsz� tras�.
 * @param graf 
 * @param miastoPoczatkowe 
 * @param plikWyjsciowyNazwa 
 * @return w
*/
map<vector<string>, double> komiwojazer(map<string, Wezel> graf, string miastoPoczatkowe, string plikWyjsciowyNazwa);

/**
 * @brief Funkcja wylicza permutacje wszystkich mo�liwych �cie�ek wraz z ich wag�.
 * @param miastoPoczatkowe 
 * @param miastoWezla 
 * @param graf 
 * @param aktualnyDystans 
 * @param aktualnaTrasa 
 * @param czyPermutacjaMozliwa 
 * @return wynik
*/
map<vector<string>, vector<double>> permutuj(string miastoPoczatkowe, string miastoWezla, map<string, Wezel>& graf, vector<double>& aktualnyDystans, vector<string>& aktualnaTrasa, bool czyPermutacjaMozliwa);

/**Kontener przechowuj�cy wszystkie wyszukane �cie�ki wraz z ich wag�.
*/
typedef map<vector<string>, vector<double>> wynik;
/**Kontener przechowuj�cy najkr�tsz� �cie�k� spe�niaj�c� warunki zadania i jej dystans.
*/
typedef map<vector<string>, double> w;