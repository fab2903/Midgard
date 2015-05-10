#ifndef DARKELVES_H_
#define DARKELVES_H_
#include "VillagerDE.h"
#include "Pueblo.h"

namespace std {

class DarkElves : public Pueblo{
public:
    DarkElves();
    virtual ~DarkElves();
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
    void insertarALaPoblacion(int index, VillagerDE* civil);
    void sumarContadorPoblacional();
private:
    int contadorPoblacionalDE;
    VillagerDE* poblacionDE [50];
};

} /* namespace std */

#endif /* DARKELVES_H_ */
