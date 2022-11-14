#include <iostream>
#include "jugador.h"

int Jugador::get_posi(){
    return posi;
}
void Jugador::set_posi(int p)
{
    posi=p;
}
string Jugador::get_color()
{
    return color;
}
void Jugador::set_color(string s)
{
    color=s;
}