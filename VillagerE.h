#ifndef VILLAGERE_H_
#define VILLAGERE_H_
#include <string>
#include "Villager.h"

namespace std {

class VillagerE: public Villager {
public:
    VillagerE();
    VillagerE(double vida, double ataque, double defensa, double velocidad,
              double inteligencia, double magia, double hpRegen, double blot, bool runas, bool arma, double supersticion);
    virtual ~VillagerE();
    void setTipo(string tipo);
private:
    double vida;
    double ataque;
    double defensa;
    double velocidad;
    double magia;
    double energiaVital;
    double blot;
    double runas;//podria ser bool y que cuando se bool haya un
    //50% de chance que por guerra use a un Dios Nordico.
    double supersticion;
    double inteligencia;
    string tipo;
    string cromosomas;
    double fitness;
    bool arma;
};

} /* namespace std */

#endif /* VILLAGERE_H_ */
