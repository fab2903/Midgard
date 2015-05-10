#include "Elves.h"

namespace std {

Elves::Elves() {
    contadorPoblacionalE = 0;
//    puebloInicial();
    // TODO Auto-generated constructor stub

}

Elves::~Elves() {
    // TODO Auto-generated destructor stub
}

void Elves::crearAtacante(int vida, int ataque, int defensa, int velocidad,
                          int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerE* atacante = new VillagerE(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    atacante->setTipo("atacante");
    insertarALaPoblacion(this->contadorPoblacionalE, atacante);
    this->contadorPoblacionalE++;
}

void Elves::crearDefensor(int vida, int ataque, int defensa, int velocidad,
                          int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerE* defensor = new VillagerE(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    defensor->setTipo("defensor");
    insertarALaPoblacion(this->contadorPoblacionalE, defensor);
    this->contadorPoblacionalE++;
}

void Elves::crearHealer(int vida, int ataque, int defensa, int velocidad,
                        int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerE* healer = new VillagerE(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    healer->setTipo("healer");
    insertarALaPoblacion(this->contadorPoblacionalE, healer);
    this->contadorPoblacionalE++;
}

void Elves::crearIngeniero(int vida, int ataque, int defensa, int velocidad,
                           int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerE* ingeniero = new VillagerE(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    ingeniero->setTipo("ingeniero");
    insertarALaPoblacion(this->contadorPoblacionalE, ingeniero);
    this->contadorPoblacionalE++;
}

void Elves::crearMago(int vida, int ataque, int defensa, int velocidad,
                      int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerE* mago = new VillagerE(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    mago->setTipo("mago");
    insertarALaPoblacion(this->contadorPoblacionalE, mago);
    this->contadorPoblacionalE++;
}

void Elves::insertarALaPoblacion(int index, VillagerE* civil){
    this->poblacionE[index] = civil;
}

//void Elves::puebloInicial(){
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

//void Elves::atacantesIniciales(){
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

//void Elves::defensoresIniciales(){
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

//void Elves::healersIniciales(){
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

//void Elves::ingenierosIniciales(){
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

//void Elves::magosIniciales(){
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
