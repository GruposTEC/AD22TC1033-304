#ifndef CASILLA_H
#define CASILLA_H
class Casilla
{
    private:
        int posicion;
        int cambio_pos;
    public:
        ~Casilla();
        Casilla();
        Casilla(int p,int cp);
        int cambio();
        int get_posicion();
        int get_cambio_pos();
        void set_posicion(int);
        void set_cambio_pos(int);
        void to_string();
};
#endif
