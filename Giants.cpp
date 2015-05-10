#include "Giants.h"

namespace std {

Giants::Giants() {
    contadorPoblacionalG = 0;
    puebloInicial();
    // TODO Auto-generated constructor stub

}

Giants::~Giants() {
    // TODO Auto-generated destructor stub
}

void Giants::crearAtacante(){
    VillagerG* atacante = new VillagerG();
    atacante->setTipo("atacante");
    insertarALaPoblacion(this->contadorPoblacionalG, atacante);
    this->contadorPoblacionalG++;
}

void Giants::crearDefensor(){
    VillagerG* defensor = new VillagerG();
    defensor->setTipo("defensor");
    insertarALaPoblacion(this->contadorPoblacionalG, defensor);
    this->contadorPoblacionalG++;
}

void Giants::crearHealer(){
    VillagerG* healer = new VillagerG();
    healer->setTipo("healer");
    insertarALaPoblacion(this->contadorPoblacionalG, healer);
    this->contadorPoblacionalG++;
}

void Giants::crearIngeniero(){
    VillagerG* ingeniero = new VillagerG();
    ingeniero->setTipo("ingeniero");
    insertarALaPoblacion(this->contadorPoblacionalG, ingeniero);
    this->contadorPoblacionalG++;
}

void Giants::crearMago(){
    VillagerG* mago = new VillagerG();
    mago->setTipo("mago");
    insertarALaPoblacion(this->contadorPoblacionalG, mago);
    this->contadorPoblacionalG++;
}

void Giants::insertarALaPoblacion(int index, VillagerG* civil){
    this->poblacionG[index] = civil;
}

void Giants::puebloInicial(){
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

void Giants::atacantesIniciales(){
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

void Giants::defensoresIniciales(){
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

void Giants::healersIniciales(){
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

void Giants::ingenierosIniciales(){
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

void Giants::magosIniciales(){
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
