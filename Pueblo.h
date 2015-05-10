#ifndef PUEBLO_H_
#define PUEBLO_H_

namespace std {

class Pueblo {
public:
    Pueblo();
    virtual void puebloInicial() = 0;
    virtual void crearAtacante() = 0;
    virtual void crearDefensor() = 0;
    virtual void crearMago() = 0;
    virtual void crearIngeniero() = 0;
    virtual void crearHealer() = 0;
    virtual void atacantesIniciales() = 0;
    virtual void defensoresIniciales() = 0;
    virtual void magosIniciales() = 0;
    virtual void ingenierosIniciales() = 0;
    virtual void healersIniciales() = 0;

    virtual ~Pueblo();
};

} /* namespace std */

#endif /* PUEBLO_H_ */
