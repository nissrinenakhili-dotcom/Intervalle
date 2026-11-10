#include <iostream>
#include "Tableau.h"
#include "TableauBorne.h"
using namespace std;

int main()
{
   
    Tableau T(4);

    T[0] = 2.5;
    T[1] = 4.5;
    T[2] = 6.5;
    T[3] = 8.5;

    cout << "Tableau normal :" << endl;

    for (int i = 0; i < 4; i++) {
        cout << T[i] << " ";
    }

    cout << endl;

    TableauBorne TB(4, 0, 10);

    cout << "Tableau borne :" << endl;

    for (int i = 0; i < 4; i++) {
        cout << TB[i] << " ";
    }

    cout << endl;

    return 0;
}


