#ifndef ELVES_H_
#define ELVES_H_
#include "VillagerE.h"
#include "Pueblo.h"

namespace std {

class Elves: public Pueblo { // quitar los "E"
public:
    Elves();
    virtual ~Elves();
    void puebloInicial();
    void atacantesIniciales();
    void defensoresIniciales();
    void magosIniciales();
    void ingenierosIniciales();
    void healersIniciales();
    void crearAtacante();
    void crearDefensor();
    void crearMago();
    void crearIngeniero();
    void crearHealer();
    void insertarALaPoblacion(int index, VillagerE* civil);
private:
    int contadorPoblacionalE;
    VillagerE* poblacionE [50];
};

} /* namespace std */

#endif /* ELVES_H_ */
