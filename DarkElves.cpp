#include "DarkElves.h"

namespace std {

DarkElves::DarkElves() {
    contadorPoblacionalDE = 0;
    puebloInicial();
    // TODO Auto-generated constructor stub

}

DarkElves::~DarkElves() {
    // TODO Auto-generated destructor stub
}

void DarkElves::crearAtacante(/*aqui deberian ir todos los attibutes*/){ // hacer todo Pueblo:: pero tener cuidado con todos los
    VillagerDE* atacante = new VillagerDE();        					  //this-> contadorETC
    atacante->setTipo("atacante");
    insertarALaPoblacion(this->contadorPoblacionalDE, atacante);
    this->contadorPoblacionalDE++;
}

void DarkElves::crearDefensor(){
    VillagerDE* defensor = new VillagerDE();
    defensor->setTipo("defensor");
    insertarALaPoblacion(this->contadorPoblacionalDE, defensor);
    this->contadorPoblacionalDE++;
}

void DarkElves::crearHealer(){
    VillagerDE* healer = new VillagerDE();
    healer->setTipo("healer");
    insertarALaPoblacion(this->contadorPoblacionalDE, healer);
    this->contadorPoblacionalDE++;
}

void DarkElves::crearIngeniero(){
    VillagerDE* ingeniero = new VillagerDE();
    ingeniero->setTipo("ingeniero");
    insertarALaPoblacion(this->contadorPoblacionalDE, ingeniero);
    this->contadorPoblacionalDE++;
}

void DarkElves::crearMago(){
    VillagerDE* mago = new VillagerDE();
    mago->setTipo("mago");
    insertarALaPoblacion(this->contadorPoblacionalDE, mago);
    this->contadorPoblacionalDE++;
}

void DarkElves::insertarALaPoblacion(int index, VillagerDE* civil){
    this->poblacionDE[index] = civil;
}

void DarkElves::puebloInicial(){
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

void DarkElves::sumarContadorPoblacional(){
    this->contadorPoblacionalDE++;
}

void DarkElves::atacantesIniciales(){
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

void DarkElves::defensoresIniciales(){
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

void DarkElves::healersIniciales(){
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

void DarkElves::ingenierosIniciales(){
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

void DarkElves::magosIniciales(){
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
