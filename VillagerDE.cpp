#include "VillagerDE.h"

namespace std {

VillagerDE::VillagerDE() {
    // TODO Auto-generated constructor stub

}

VillagerDE::~VillagerDE() {
    // TODO Auto-generated destructor stub
}

VillagerDE::VillagerDE(double vida, double ataque, double defensa, double velocidad,
                       double inteligencia, double magia, double hpRegen, double blot, bool runas, bool arma, double supersticion){
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
