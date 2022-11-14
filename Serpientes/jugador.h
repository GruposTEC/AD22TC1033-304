
#ifndef JUGADOR_H
#define JUGADOR_H
#include <string>
using std::string;

class Jugador
{
    private:
        int posi;
        string color;
    public:
        int get_posi();
        void set_posi(int p);
        string get_color();
        void set_color(string s);
};
#endif