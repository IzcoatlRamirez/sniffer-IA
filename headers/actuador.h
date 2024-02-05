#ifndef ACTUADOR_H
#define ACTUADOR_H
#include <iostream>
#include "entorno.h"

using namespace std;

class ActuadorSimple{
    public:
        ActuadorSimple(Entorno &env);
        void clean(pair<int, int> position);
        virtual void keyUp() ;
        virtual void keyDown() ;
        virtual void keyLeft() ;
        virtual void keyRight() ;
    private:
        Entorno &env;
};

class Actuador: ActuadorSimple {
public:
    // void keyUp() override;
    // void keyDown() override;
    // void keyLeft() override;
    // void keyRight() override;
};



#endif // ACTUADOR_H
       