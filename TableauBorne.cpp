#include "TableauBorne.h"

TableauBorne::TableauBorne(int n, float bmin, float bmax):Tableau(n)
{
	this->BorneMin = bmin;
	this->BorneMax = bmax;
}

const float& TableauBorne::operator[](int i) const
{
    if (i >= 0 && i < this->taille) {
        return tab[i];
    }
    else {
        exit(-1);
    }
}

