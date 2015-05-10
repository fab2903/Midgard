
#ifndef VILLAGERG_H_
#define VILLAGERG_H_
#include <string>
#include "Villager.h"
namespace std {

class VillagerG: public Villager {
public:
    VillagerG();
    VillagerG(int vida, int ataque, int defensa, int velocidad,
            int inteligencia, int magia, int hpRegen, int blot, bool runas, int supersticion);
    virtual ~VillagerG();
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

#endif /* VILLAGERG_H_ */
