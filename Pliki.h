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
	string miastoPoczatkowe; /*Dane miasto początkowe.*/
	bool czyDwukierunkowa; /*Informacja czy droga jest dwukierunkowa.*/
	string miastoKoncowe; /*Nazwa miasta, do którego prowadzi droga z miasta początkowego.*/
	double dystans; /*Odległość pomiędzy dwoma miastami.*/
};

/**
 * @brief Funkcja wczytująca dane z pliku tekstowego.
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