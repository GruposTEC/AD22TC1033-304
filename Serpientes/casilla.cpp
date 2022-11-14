#include <iostream>
#include "casilla.h"

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