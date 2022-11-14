#include <iostream>
#include <cstdlib>
#include "dado.h"

int Dado::dar_numero(){
    return 1+rand() % 7;
}