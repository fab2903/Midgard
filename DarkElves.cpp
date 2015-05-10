#include "DarkElves.h"

namespace std {

DarkElves::DarkElves() {
    contadorPoblacionalDE = 0;
//    puebloInicial();
    // TODO Auto-generated constructor stub

}

DarkElves::~DarkElves() {
    // TODO Auto-generated destructor stub
}

void DarkElves::crearAtacante(int vida, int ataque, int defensa, int velocidad,
                              int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){ // hacer todo Pueblo:: pero tener cuidado con todos los
    VillagerDE* atacante = new VillagerDE(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);        					  //this-> contadorETC
    atacante->setTipo("atacante");
    insertarALaPoblacion(this->contadorPoblacionalDE, atacante);
    this->contadorPoblacionalDE++;
}

void DarkElves::crearDefensor(int vida, int ataque, int defensa, int velocidad,
                              int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerDE* defensor = new VillagerDE(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    defensor->setTipo("defensor");
    insertarALaPoblacion(this->contadorPoblacionalDE, defensor);
    this->contadorPoblacionalDE++;
}

void DarkElves::crearHealer(int vida, int ataque, int defensa, int velocidad,
                            int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerDE* healer = new VillagerDE(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    healer->setTipo("healer");
    insertarALaPoblacion(this->contadorPoblacionalDE, healer);
    this->contadorPoblacionalDE++;
}

void DarkElves::crearIngeniero(int vida, int ataque, int defensa, int velocidad,
                               int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerDE* ingeniero = new VillagerDE(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    ingeniero->setTipo("ingeniero");
    insertarALaPoblacion(this->contadorPoblacionalDE, ingeniero);
    this->contadorPoblacionalDE++;
}

void DarkElves::crearMago(int vida, int ataque, int defensa, int velocidad,
                          int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion){
    VillagerDE* mago = new VillagerDE(vida, ataque, defensa, velocidad, inteligencia, magia,hpRegen,blot,runas,arma,supersticion);
    mago->setTipo("mago");
    insertarALaPoblacion(this->contadorPoblacionalDE, mago);
    this->contadorPoblacionalDE++;
}

void DarkElves::insertarALaPoblacion(int index, VillagerDE* civil){
    this->poblacionDE[index] = civil;
}

//void DarkElves::puebloInicial(){
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

void DarkElves::sumarContadorPoblacional(){
    this->contadorPoblacionalDE++;
}

//void DarkElves::atacantesIniciales(){
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

//void DarkElves::defensoresIniciales(){
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

//void DarkElves::healersIniciales(){
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

//void DarkElves::ingenierosIniciales(){
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

//void DarkElves::magosIniciales(){
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
