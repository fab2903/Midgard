#ifndef ELVES_H_
#define ELVES_H_
#include "VillagerE.h"
#include "Pueblo.h"

namespace std {

class Elves: public Pueblo { // quitar los "E"
public:
    Elves();
    virtual ~Elves();
    void puebloInicial();
//    void atacantesIniciales();
//    void defensoresIniciales();
//    void magosIniciales();
//    void ingenierosIniciales();
//    void healersIniciales();
    void crearAtacante(int vida, int ataque, int defensa, int velocidad,
                       int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion);
    void crearDefensor(int vida, int ataque, int defensa, int velocidad,
                       int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion);
    void crearMago(int vida, int ataque, int defensa, int velocidad,
                   int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion);
    void crearIngeniero(int vida, int ataque, int defensa, int velocidad,
                        int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion);
    void crearHealer(int vida, int ataque, int defensa, int velocidad,
                     int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion);
    void insertarALaPoblacion(int index, VillagerE* civil);
private:
    int contadorPoblacionalE;
    VillagerE* poblacionE [50];
};

} /* namespace std */

#endif /* ELVES_H_ */
