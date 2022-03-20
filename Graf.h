#pragma once
#include <iostream>
#include<string>
#include<map>
#include "Pliki.h"

using namespace std;

struct Droga;
/**
 * @brief Stuktura odpowiedzialna za przechowywanie informacji czy dane miasto by�o odwiedzone oraz dystans do danego miasta docelowego.  
*/
struct Wezel
{
	bool czyOdwiedzone;
	vector<Droga> wierzcholki;
};
/**
 * @brief Struktura opowiedzialna za przecowanie informacji o mie�cie docelowym i dystansem do niego z miasta pocz�tkowego.
*/
struct Droga
{
	string miastoDocelowe;
	double dystans;
};

/**
 * @brief Funkcja buduje graf z przekazanych danych z pliku.
 * @param daneZPliku
 * @return graf
*/
map<string, Wezel> budujGraf(vector<DaneDrog> daneZPliku);
/**Kontener przechowuj�cy bezpo�rednie po��czenia pomi�dzy miastami.
*/
typedef map<string, Wezel> graf;