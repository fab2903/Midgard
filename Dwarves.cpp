#include "Dwarves.h"

namespace std {

Dwarves::Dwarves() {
    contadorPoblacionalD = 0;
//    puebloInicial();
    // TODO Auto-generated constructor stub

}

Dwarves::~Dwarves() {
    // TODO Auto-generated destructor stub
}

void Dwarves::crearAtacante(int vida, int ataque, int defensa, int velocidad,
                            int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerD* atacante = new VillagerD(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    atacante->setTipo("atacante");
    insertarALaPoblacion(this->contadorPoblacionalD, atacante);
    this->contadorPoblacionalD++;
}

void Dwarves::crearDefensor(int vida, int ataque, int defensa, int velocidad,
                            int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerD* defensor = new VillagerD(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    defensor->setTipo("defensor");
    insertarALaPoblacion(this->contadorPoblacionalD, defensor);
    this->contadorPoblacionalD++;
}

void Dwarves::crearHealer(int vida, int ataque, int defensa, int velocidad,
                          int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerD* healer = new VillagerD(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    healer->setTipo("healer");
    insertarALaPoblacion(this->contadorPoblacionalD, healer);
    this->contadorPoblacionalD++;
}

void Dwarves::crearIngeniero(int vida, int ataque, int defensa, int velocidad,
                             int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerD* ingeniero = new VillagerD(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    ingeniero->setTipo("ingeniero");
    insertarALaPoblacion(this->contadorPoblacionalD, ingeniero);
    this->contadorPoblacionalD++;
}

void Dwarves::crearMago(int vida, int ataque, int defensa, int velocidad,
                        int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerD* mago = new VillagerD(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    mago->setTipo("mago");
    insertarALaPoblacion(this->contadorPoblacionalD, mago);
    this->contadorPoblacionalD++;
}

void Dwarves::insertarALaPoblacion(int index, VillagerD* civil){
    this->poblacionD[index] = civil;
}

//void Dwarves::puebloInicial(){
//    //creacion de diez atacantes.
//    atacantesIniciales();
//    //creacion de diez defensores.
//    defensoresIniciales();
//    //crecion de diez healers.
//    healersIniciales();
//    //creacion de diez ingenieros.
//    ingenierosIniciales();
//    //creacion de diez magos.
//    magosIniciales();
//}

//void Dwarves::atacantesIniciales(){
//    crearAtacante();
//    crearAtacante();
//    crearAtacante();
//    crearAtacante();
//    crearAtacante();
//    crearAtacante();
//    crearAtacante();
//    crearAtacante();
//    crearAtacante();
//    crearAtacante();
//}

//void Dwarves::defensoresIniciales(){
//    crearDefensor();
//    crearDefensor();
//    crearDefensor();
//    crearDefensor();
//    crearDefensor();
//    crearDefensor();
//    crearDefensor();
//    crearDefensor();
//    crearDefensor();
//    crearDefensor();
//}

//void Dwarves::healersIniciales(){
//    crearHealer();
//    crearHealer();
//    crearHealer();
//    crearHealer();
//    crearHealer();
//    crearHealer();
//    crearHealer();
//    crearHealer();
//    crearHealer();
//    crearHealer();
//}

//void Dwarves::ingenierosIniciales(){
//    crearIngeniero();
//    crearIngeniero();
//    crearIngeniero();
//    crearIngeniero();
//    crearIngeniero();
//    crearIngeniero();
//    crearIngeniero();
//    crearIngeniero();
//    crearIngeniero();
//    crearIngeniero();
//}

//void Dwarves::magosIniciales(){
//    crearMago();
//    crearMago();
//    crearMago();
//    crearMago();
//    crearMago();
//    crearMago();
//    crearMago();
//    crearMago();
//    crearMago();
//    crearMago();
//}
} /* namespace std */
