#pragma once
#include<iostream>
class Tableau
{
protected :
	int taille;
	float* tab;
public :
	Tableau(int);
	Tableau (const Tableau& T);
	Tableau operator=(const Tableau& T);
	float& operator[](int i);
	~Tableau();
};

