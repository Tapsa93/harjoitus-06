//********************
//Tapio Pekkarinen
//Harjoitus 6
//24.9.2014
//versio 1.2
#include <iostream>
using namespace std;
int a, b;//a = lompakko, b = lihapiirakka
void main()//P‰‰ohjelma
{
	int a;
	cout << "Paljonko lompakossa on rahaa?";
	cin >> a;
	int b;
	cout << "Paljonko lihapiirakka maksaa?";
	cin >> b;
	if (a > b)
		cout << "Lompakossa on nyt j‰ljell‰ " << a - b;
	else
		cout << "Paastoaminen on parempi vaihtoehto";
}