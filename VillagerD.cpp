#include "VillagerD.h"

namespace std {

VillagerD::VillagerD() {
    // TODO Auto-generated constructor stub

}

VillagerD::~VillagerD() {
    // TODO Auto-generated destructor stub
}

VillagerD::VillagerD(double vida, double ataque, double defensa, double velocidad,
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

void VillagerD::setTipo(string tipo){
    this->tipo = tipo;
}

} /* namespace std */

