#ifndef DARKELVES_H_
#define DARKELVES_H_
#include "VillagerDE.h"
#include "Pueblo.h"

namespace std {

class DarkElves : public Pueblo{
public:
    DarkElves();
    virtual ~DarkElves();
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
    void insertarALaPoblacion(int index, VillagerDE* civil);
    void sumarContadorPoblacional();
private:
    int contadorPoblacionalDE;
    VillagerDE* poblacionDE [50];
};

} /* namespace std */

#endif /* DARKELVES_H_ */
