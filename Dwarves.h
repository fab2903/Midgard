#ifndef DWARVES_H_
#define DWARVES_H_
#include "VillagerD.h"
#include "Pueblo.h"

namespace std {

class Dwarves: public Pueblo {
public:
    Dwarves();
    virtual ~Dwarves();
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
    void insertarALaPoblacion(int index, VillagerD* civil);
private:
    int contadorPoblacionalD;
    VillagerD* poblacionD [50];
};

} /* namespace std */

#endif /* DWARVES_H_ */
