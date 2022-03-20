#pragma once
#include<iostream>
#include<sstream>
#include<fstream>
#include<string>
#include<vector>
#include<map>
#include "Struktury.h"

using namespace std;
/**
 * @brief Struktura odpowiedzialna za przechowanie danych koniecznych do zbudowania grafu. 
*/
struct DaneDrog {
	string miastoPoczatkowe; /*Dane miasto pocz�tkowe.*/
	bool czyDwukierunkowa; /*Informacja czy droga jest dwukierunkowa.*/
	string miastoKoncowe; /*Nazwa miasta, do kt�rego prowadzi droga z miasta pocz�tkowego.*/
	double dystans; /*Odleg�o�� pomi�dzy dwoma miastami.*/
};

/**
 * @brief Funkcja wczytuj�ca dane z pliku tekstowego.
 * @param nazwaPliku 
 * @return daneDrog
*/
vector<DaneDrog> odczytajPlikWejsciowy(string& nazwaPliku);
/**
 * @brief Funkcja zapisuje wynik do pliku o podanej nazwie.
 * @param wynik 
 * @param plikWyjsciowyNazwa 
*/
void zapiszWynikDoPliku(map<vector<string>, double> wynik, string plikWyjsciowyNazwa);

/**
* @brief Funkcja zapisuje odpowiednie dane do vectora daneDrog.
* @param trasa
* @param daneDrog
*/
void zapisDoDanych(string trasa, vector<DaneDrog>& daneDrog);