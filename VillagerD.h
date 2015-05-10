#ifndef VILLAGERD_H_
#define VILLAGERD_H_

#include <string>
#include "Villager.h"

namespace std {

class VillagerD: public Villager{
public:
    VillagerD();
    VillagerD(int vida, int ataque, int defensa, int velocidad,
            int inteligencia, int magia, int hpRegen, int blot, bool runas, int supersticion); //hacer CONST y doubles para sacar
                                                                                            //porcentajes  con los valores.
    virtual ~VillagerD();
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

#endif /* VILLAGERD_H_ */
