
#ifndef GIANTS_H_
#define GIANTS_H_
#include "VillagerG.h"
#include "Pueblo.h"


namespace std {

class Giants: public Pueblo{
public:
    Giants();
    virtual ~Giants();
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
    void insertarALaPoblacion(int index, VillagerG* civil);
private:
    int contadorPoblacionalG;
    VillagerG* poblacionG [50];
    //estabas haciendo los constructores de cada pueblo para hacer 10 villagers
    //de cada rol especificado en la progra.
};

} /* namespace std */

#endif /* GIANTS_H_ */
