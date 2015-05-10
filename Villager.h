#ifndef VILLAGER_H_
#define VILLAGER_H_

namespace std {

class Villager {
public:
    Villager();
    virtual ~Villager();
    int getVida();
    int getAtaque();
    int getDefensa();
    int getHpRegen();
    int getMagia();
    int getBlot();
    int getSupersticion();
    int getVelocidad();
    int getInteligencia();
private:
    const int vida; //5k
    const int ataque; //1k
    const int defensa; //1k
    const int hpRegen; //500
    // las runas calcular con la paridad del numero de cromosomas en 1, si es par, es 0 y si es impar es 1;
    const int magia; //1k
    const int blot; //1k
    const int supersticion; //3k; 1k la primera eda;
    const int velocidad; //100
    const int inteligencia; //5k ; 1.5k segunda eda, 3.5k la tercera eda;
};

} /* namespace std */

#endif /* VILLAGER_H_ */
