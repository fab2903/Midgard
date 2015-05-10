#ifndef VILLAGERDE_H_
#define VILLAGERDE_H_
#include <string>
#include "Villager.h"

namespace std {

class VillagerDE: public Villager{
public:
    VillagerDE();
    VillagerDE(int vida, int ataque, int defensa, int velocidad,
               int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion);
    virtual ~VillagerDE();
    void setTipo(string tipo);
private:
    int vida;
    int ataque;
    int defensa;
    int velocidad;
    int magia;
    int energiaVital;
    int blot;
    bool runas;	//aumenta el % de invocar un Dios Nordico;
    int supersticion;
    int inteligencia;
    string tipo;
    bool arma;
};

} /* namespace std */

#endif /* VILLAGERDE_H_ */
