#ifndef DWARVES_H_
#define DWARVES_H_
#include "VillagerD.h"
#include "Pueblo.h"

namespace std {

class Dwarves: public Pueblo {
public:
    Dwarves();
    virtual ~Dwarves();
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
    void insertarALaPoblacion(int index, VillagerD* civil);
private:
    int contadorPoblacionalD;
    VillagerD* poblacionD [50];
};

} /* namespace std */

#endif /* DWARVES_H_ */
