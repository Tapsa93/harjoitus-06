//********************
//Tapio Pekkarinen
//Harjoitus 6
//24.9.2014
//versio 1.1
#include <iostream>
using namespace std;
int alompakko, lihapiirakka; 
void main()//P‰‰ohjelma
{
	int lompakko;
	cout << "Paljonko lompakossa on rahaa?";
	cin >> lompakko;
	int lihapiirakka;
	cout << "Paljonko lihapiirakka maksaa?";
	cin >> lihapiirakka;
	if (lompakko > lihapiirakka)
		cout << "Lompakossa on nyt j‰ljell‰ " << lompakko - lihapiirakka;
	else
		cout << "Paastoaminen on parempi vaihtoehto";
}
