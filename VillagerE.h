#ifndef VILLAGERE_H_
#define VILLAGERE_H_
#include <string>
#include "Villager.h"

namespace std {

class VillagerE: public Villager {
public:
    VillagerE();
    VillagerE(int vida, int ataque, int defensa, int velocidad,
            int inteligencia, int magia,int hpRegen, int blot, bool runas, int supersticion);
    virtual ~VillagerE();
    void setTipo(string tipo);
private:
    int vida;
    int ataque;
    int defensa;
    int velocidad;
    int magia;
    int energiaVital;
    int blot;
    int runas;//podria ser bool y que cuando se bool haya un
    //50% de chance que por guerra use a un Dios Nordico.
    int supersticion;
    string tipo;
    bool arma;
};

} /* namespace std */

#endif /* VILLAGERE_H_ */
