#ifndef VILLAGERD_H_
#define VILLAGERD_H_

#include <string>
#include "Villager.h"

namespace std {

class VillagerD: public Villager{
public:
    VillagerD();
    VillagerD(double vida, double ataque, double defensa, double velocidad,
              double inteligencia, double magia, double hpRegen, double blot, bool runas, bool arma, double supersticion); //hacer CONST y doubles para sacar
                                                                                            //porcentajes  con los valores.
    virtual ~VillagerD();
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

#endif /* VILLAGERD_H_ */
