#include <iostream>
#include "casilla.h" 
#include "dado.h"
#include "jugador.h"
using std::cout;
using std::endl;
using std::cin;


int main()
{
    int prueba;
    cout << "Dentro de Serpientes y Escaleras" << endl;
    //cin >> prueba;
    cout << "Buena suerte" << endl;
    Casilla c1;
    c1.set_posicion(50);
    cout<<c1.get_posicion()<<endl;
    c1.set_cambio_pos(5);
    cout<<c1.cambio()<<endl;

    Dado d;
    for(int i=0;i<10;i++){
        cout<<d.dar_numero()<<endl;
    }
    Jugador j;
    j.set_color("Amarillo");
    j.set_posi(3);
    cout<<j.get_color()<<endl;
    cout<<j.get_posi()<<endl;
}