#include <iostream>
#include "tablero.h"

using namespace std;

Tablero::Tablero()
{
    for (int u = 0;u<50;u++)
    {
        casillas[u] = Casilla(u,u);
    }
}

Tablero::~Tablero()
{
    cout<<"Des-Maravilloso :D"<<endl;
}
void Tablero::to_string()
{
    for (int i = 0; i<50; i++)
    {
        casillas[i].to_string();
    }
}