#include "..\headers\actuador.h"
#include <vector>
const int MAXPOS = 9;
const int MINPOS = 0;

ActuadorSimple::ActuadorSimple(Entorno &env)
    : env(env){}

void ActuadorSimple::clean(pair<int, int> position)
{
    env.cleanCell(position);
}


void ActuadorSimple::keyUp(){
    pair <int,int> pos =env.getPositionAgent();
    if (pos.first==MINPOS){
      throw "Posicion no valida";
    }
    else{
        pos.first = pos.first-1;
        env.moveAgent(pos);
    }
}

void ActuadorSimple::keyDown(){
    pair <int,int> pos =env.getPositionAgent();
    if (pos.first==MAXPOS){
      throw "Posicion no valida";
    }
    else{
        pos.first = pos.first+1;
        env.moveAgent(pos);
    }
}
void ActuadorSimple::keyLeft(){
    pair <int,int> pos =env.getPositionAgent();
    if (pos.second==MINPOS){
      throw "Posicion no valida";
    }
    else{
        pos.second = pos.second-1;
        env.moveAgent(pos);
    }
}

void ActuadorSimple::keyRight(){
    pair <int,int> pos =env.getPositionAgent();
    if (pos.second==MAXPOS){
      throw "Posicion no valida";
    }
    else{
        pos.second++;
        env.moveAgent(pos);
    }
}