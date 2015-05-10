#include "VillagerG.h"

namespace std {

VillagerG::VillagerG() {
    // TODO Auto-generated constructor stub

}

VillagerG::VillagerG(int vida, int ataque, int defensa, int velocidad,
            int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    this->vida = vida;
    this->ataque = ataque;
    this->defensa = defensa;
    this->velocidad = velocidad;
    this->inteligencia = inteligencia;
    this->magia = magia;
    this->energiaVital = hpRegen;
    this->blot = blot;
    this->runas = runas;
    this->supersticion = supersticion;
    this->arma = arma;
}

VillagerG::~VillagerG() {
    // TODO Auto-generated destructor stub
}

void VillagerG::setTipo(string tipo){
    this->tipo = tipo;
}

} /* namespace std */

