#include "VillagerDE.h"

namespace std {

VillagerDE::VillagerDE() {
    // TODO Auto-generated constructor stub

}

VillagerDE::~VillagerDE() {
    // TODO Auto-generated destructor stub
}

VillagerDE::VillagerDE(int vida, int ataque, int defensa, int velocidad,
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

void VillagerDE::setTipo(string tipo){
    this->tipo = tipo;
}

} /* namespace std */
