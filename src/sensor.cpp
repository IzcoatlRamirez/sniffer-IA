#include "..\headers\sensor.h"

SensorSimple::SensorSimple(Entorno &env): env(env){}

bool SensorSimple::detecDirt(pair<int, int> position)
{
    return env.isDirty(position);
}

