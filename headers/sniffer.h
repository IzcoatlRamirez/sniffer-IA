#ifndef SNIFFER_H
#define SNIFFER_H

#include <iostream>
#include "sensor.h"
#include "actuador.h"
#include "entorno.h"


class Sniffer {

public:
    Sniffer(SensorSimple &sensor, ActuadorSimple &actuador, Entorno &env);
    SensorSimple &sensor;
    ActuadorSimple &actuador;
    Entorno &env;
};

#endif // SNIFFER_H