// A017XXXXX
// nombre
#include <iostream>
using std::cout;
using std::endl;
using std::cin;
//using namespace std;

int main()
{   
    float decimal = 3.5;
    int valor = 5; //es una variable entera

    int decimal_entero;



    cout << "Hola Mundo" << endl;
    cout << "Hola Mundo" << endl;
    valor = valor + 1 ;
    valor++;
    cout << valor << endl;

    decimal_entero = int(decimal);

    cout << decimal << endl;

    cout << decimal_entero << endl;

    cout << decimal / valor << endl;

    //   and &&
    //   or  ||


    cout << "Dame el numero a checar : " ;
    cin >> valor; 

    if (valor > 10)
    {
        cout << "valor menor a 10" << endl;
    }
    else
    {
        if(valor == 7 || valor == 5)
        {
            cout << "valor es 7" << endl;
        }
        else
        {
         cout << " valor menor a 10" << endl;
        } 
    }

    for(int i = 0 ; i < 5 ; i++ )
    {
        cout << " la variable i es " << i << endl;
    }
    

    //WHILE
    int i=0; //start
    while (i < 4)   //stop
    {
        cout << "en while i " << i << endl;
        i++; //step
    }

    //DO WHILE
    i = 1;   //start
    do
    {
        cout << "dentro do while la i es " << i << endl;
        i--;  //step
    } while (i < 0);  //stop
    
    int dato;
    

    /*
    Es muiltiple
    comentario
    */
}