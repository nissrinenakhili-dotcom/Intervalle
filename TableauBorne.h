#pragma once
#include "Tableau.h"
class TableauBorne :
    public Tableau
{
private :
    float BorneMin;
    float BorneMax;
public:
    TableauBorne( int , float, float);
    const float& operator[](int i) const;
};

