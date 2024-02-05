#ifndef ACTUADOR_H
#define ACTUADOR_H
#include <iostream>
#include "entorno.h"

using namespace std;

class Actuador {
public:
    // virtual void keyUp() = 0;
    // virtual void keyDown() = 0;
    // virtual void keyLeft() = 0;
    // virtual void keyRight() = 0;
};

class ActuadorSimple : public Actuador {
    public:
      ActuadorSimple(Entorno &env);
      void clean(pair<int, int> position);
      
        // void keyUp() override;
        // void keyDown() override;
        // void keyLeft() override;
        // void keyRight() override;
    private:
        Entorno &env;
};

#endif // ACTUADOR_H
       