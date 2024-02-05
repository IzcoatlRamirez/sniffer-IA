#include "..\headers\actuador.h"

ActuadorSimple::ActuadorSimple(Entorno &env)
    : env(env){}

void ActuadorSimple::clean(pair<int, int> position)
{
    env.cleanCell(position);
}