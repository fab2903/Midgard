#include "Villager.h"

namespace std {

Villager::Villager(): vida(5000), ataque(1000), defensa(1000), hpRegen(500), magia(1000), blot(100), supersticion(3000),velocidad(100), inteligencia(5000) {
    // TODO Auto-generated constructor stub
//    this->vida = 5000;
//    this->ataque = 1000;
//    this->defensa = 1000;
//    this->hpRegen = 500;
//    this ->magia = 1000;
//    this->blot = 100;
//    this->supersticion = 3000;
//    this->velocidad = 100;
//    this->inteligencia = 5000;
}

Villager::~Villager() {
    // TODO Auto-generated destructor stub
}

 int Villager::getVida(){
    return this->vida;
}

int Villager::getAtaque(){
    return this->ataque;
}

int Villager::getDefensa(){
    return this->defensa;
}

int Villager::getHpRegen(){
    return this->hpRegen;
}

int Villager::getMagia(){
    return this->magia;
}

int Villager::getBlot(){
    return this->blot;
}

int Villager::getSupersticion(){
    return this->supersticion;
}

int Villager::getVelocidad(){
    return this->velocidad;
}

int Villager::getInteligencia(){
    return this->inteligencia;
}

} /* namespace std */
