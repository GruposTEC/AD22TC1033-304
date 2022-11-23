#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
using std :: stringstream;
using std :: ifstream;
using std:: string;
using std:: cout;
using std:: endl;

int main(){
    ifstream archivo;
    archivo.open("archivo.txt");
    string linea;
    while (getline(archivo, linea)){
        cout<<linea<<endl;
        stringstream token(linea);
        string nombre;
        string matricula;
        getline(token, nombre,',');
        cout<<nombre<<endl;
        getline(token,matricula,',');
        cout<<matricula<<endl;
    }
    

}
