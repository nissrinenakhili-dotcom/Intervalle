#include "Tableau.h"
#include<iostream>
using namespace std;

Tableau::Tableau(int t) 
{
    this->taille = t;
    this->tab = new float[this->taille];

            for (int i = 0; i < taille;i++) {
                this->tab[i] = 0;
            }
        }
        

Tableau::Tableau(const Tableau& T)
{
    this->taille = T.taille;
    this->tab = new float[this->taille];
        for (int i = 0; i < taille;i++) {
            this->tab[i] = T.tab[i];
        }
}

float& Tableau::operator[](int i)
{
    if (i >= 0 && i < this->taille) {
        return tab[i];
    }
    else {
        exit(-1);
    }
}


Tableau Tableau::operator=(const Tableau& T)
{
    if (this != &T) {
        delete[] tab;
        taille = T.taille;
            this->tab = new float[this->taille];
            for (int i = 0; i < taille;i++) {
                this->tab[i] = T.tab[i];
            }
        }
        
        return *this;
    }


Tableau::~Tableau()
{
	delete[] tab;
}

