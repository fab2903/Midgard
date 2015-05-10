#ifndef PUEBLO_H_
#define PUEBLO_H_

namespace std {

class Pueblo {
public:
    Pueblo();
//    virtual void puebloInicial() = 0;
    virtual void crearAtacante(int vida, int ataque, int defensa, int velocidad,
                               int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion) = 0;
    virtual void crearDefensor(int vida, int ataque, int defensa, int velocidad,
                               int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion) = 0;
    virtual void crearMago(int vida, int ataque, int defensa, int velocidad,
                           int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion) = 0;
    virtual void crearIngeniero(int vida, int ataque, int defensa, int velocidad,
                                int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion) = 0;
    virtual void crearHealer(int vida, int ataque, int defensa, int velocidad,
                             int inteligencia, int magia, int hpRegen, int blot, bool runas, bool arma, int supersticion) = 0;
//    virtual void atacantesIniciales() = 0;
//    virtual void defensoresIniciales() = 0;
//    virtual void magosIniciales() = 0;
//    virtual void ingenierosIniciales() = 0;
//    virtual void healersIniciales() = 0;

    virtual ~Pueblo();
};

} /* namespace std */

#endif /* PUEBLO_H_ */
