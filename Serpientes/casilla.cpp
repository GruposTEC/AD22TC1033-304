#include <iostream>
#include "casilla.h"
//using std::cout;
//using std::endl;

Casilla::~Casilla()
{
    using namespace std; 
    //cout<<"m a r a v i l l o s o"<<endl; ------
}
Casilla::Casilla()
{
    posicion = 0;
    cambio_pos = 0;
}
Casilla::Casilla(int p, int cp)
{
    posicion = p;
    cambio_pos = cp;
}

int Casilla::cambio(){
    return posicion+cambio_pos;
}

int Casilla::get_posicion(){
    return posicion;
}

int Casilla::get_cambio_pos(){
    return cambio_pos;
}

void Casilla::set_posicion(int p){
    posicion = p;

}

void Casilla::set_cambio_pos(int p){
    cambio_pos = p;
}

void Casilla::to_string()
{
    using namespace std;
    cout<<"Soy la casilla número: "<<posicion<<" y el cambio es: "<<cambio_pos<<endl;
}