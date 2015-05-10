#include "Dwarves.h"

namespace std {

Dwarves::Dwarves() {
    contadorPoblacionalD = 0;
    puebloInicial();
    // TODO Auto-generated constructor stub

}

Dwarves::~Dwarves() {
    // TODO Auto-generated destructor stub
}

void Dwarves::crearAtacante(){
    VillagerD* atacante = new VillagerD();
    atacante->setTipo("atacante");
    insertarALaPoblacion(this->contadorPoblacionalD, atacante);
    this->contadorPoblacionalD++;
}

void Dwarves::crearDefensor(){
    VillagerD* defensor = new VillagerD();
    defensor->setTipo("defensor");
    insertarALaPoblacion(this->contadorPoblacionalD, defensor);
    this->contadorPoblacionalD++;
}

void Dwarves::crearHealer(){
    VillagerD* healer = new VillagerD();
    healer->setTipo("healer");
    insertarALaPoblacion(this->contadorPoblacionalD, healer);
    this->contadorPoblacionalD++;
}

void Dwarves::crearIngeniero(){
    VillagerD* ingeniero = new VillagerD();
    ingeniero->setTipo("ingeniero");
    insertarALaPoblacion(this->contadorPoblacionalD, ingeniero);
    this->contadorPoblacionalD++;
}

void Dwarves::crearMago(){
    VillagerD* mago = new VillagerD();
    mago->setTipo("mago");
    insertarALaPoblacion(this->contadorPoblacionalD, mago);
    this->contadorPoblacionalD++;
}

void Dwarves::insertarALaPoblacion(int index, VillagerD* civil){
    this->poblacionD[index] = civil;
}

void Dwarves::puebloInicial(){
    //creacion de diez atacantes.
    atacantesIniciales();
    //creacion de diez defensores.
    defensoresIniciales();
    //crecion de diez healers.
    healersIniciales();
    //creacion de diez ingenieros.
    ingenierosIniciales();
    //creacion de diez magos.
    magosIniciales();
}

void Dwarves::atacantesIniciales(){
    crearAtacante();
    crearAtacante();
    crearAtacante();
    crearAtacante();
    crearAtacante();
    crearAtacante();
    crearAtacante();
    crearAtacante();
    crearAtacante();
    crearAtacante();
}

void Dwarves::defensoresIniciales(){
    crearDefensor();
    crearDefensor();
    crearDefensor();
    crearDefensor();
    crearDefensor();
    crearDefensor();
    crearDefensor();
    crearDefensor();
    crearDefensor();
    crearDefensor();
}

void Dwarves::healersIniciales(){
    crearHealer();
    crearHealer();
    crearHealer();
    crearHealer();
    crearHealer();
    crearHealer();
    crearHealer();
    crearHealer();
    crearHealer();
    crearHealer();
}

void Dwarves::ingenierosIniciales(){
    crearIngeniero();
    crearIngeniero();
    crearIngeniero();
    crearIngeniero();
    crearIngeniero();
    crearIngeniero();
    crearIngeniero();
    crearIngeniero();
    crearIngeniero();
    crearIngeniero();
}

void Dwarves::magosIniciales(){
    crearMago();
    crearMago();
    crearMago();
    crearMago();
    crearMago();
    crearMago();
    crearMago();
    crearMago();
    crearMago();
    crearMago();
}
} /* namespace std */
