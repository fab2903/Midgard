
#ifndef GIANTS_H_
#define GIANTS_H_
#include "VillagerG.h"
#include "Pueblo.h"


namespace std {

class Giants: public Pueblo{
public:
    Giants();
    virtual ~Giants();
    void puebloInicial();
//    void atacantesIniciales();
//    void defens*/oresIniciales();
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
    void insertarALaPoblacion(int index, VillagerG* civil);
private:
    int contadorPoblacionalG;
    VillagerG* poblacionG [50];
    //estabas haciendo los constructores de cada pueblo para hacer 10 villagers
    //de cada rol especificado en la progra.
};

} /* namespace std */

#endif /* GIANTS_H_ */
