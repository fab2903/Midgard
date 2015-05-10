#include "Elves.h"

namespace std {

Elves::Elves() {
    contadorPoblacionalE = 0;
    puebloInicial();
    // TODO Auto-generated constructor stub

}

Elves::~Elves() {
    // TODO Auto-generated destructor stub
}

void Elves::crearAtacante(){
    VillagerE* atacante = new VillagerE();
    atacante->setTipo("atacante");
    insertarALaPoblacion(this->contadorPoblacionalE, atacante);
    this->contadorPoblacionalE++;
}

void Elves::crearDefensor(){
    VillagerE* defensor = new VillagerE();
    defensor->setTipo("defensor");
    insertarALaPoblacion(this->contadorPoblacionalE, defensor);
    this->contadorPoblacionalE++;
}

void Elves::crearHealer(){
    VillagerE* healer = new VillagerE();
    healer->setTipo("healer");
    insertarALaPoblacion(this->contadorPoblacionalE, healer);
    this->contadorPoblacionalE++;
}

void Elves::crearIngeniero(){
    VillagerE* ingeniero = new VillagerE();
    ingeniero->setTipo("ingeniero");
    insertarALaPoblacion(this->contadorPoblacionalE, ingeniero);
    this->contadorPoblacionalE++;
}

void Elves::crearMago(){
    VillagerE* mago = new VillagerE();
    mago->setTipo("mago");
    insertarALaPoblacion(this->contadorPoblacionalE, mago);
    this->contadorPoblacionalE++;
}

void Elves::insertarALaPoblacion(int index, VillagerE* civil){
    this->poblacionE[index] = civil;
}

void Elves::puebloInicial(){
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

void Elves::atacantesIniciales(){
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

void Elves::defensoresIniciales(){
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

void Elves::healersIniciales(){
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

void Elves::ingenierosIniciales(){
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

void Elves::magosIniciales(){
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
