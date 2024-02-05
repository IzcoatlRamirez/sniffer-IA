#include "..\headers\sniffer.h"

Sniffer::Sniffer(SensorSimple &sensor, ActuadorSimple &actuador, Entorno &env)
    : sensor(sensor), actuador(actuador), env(env)
{
}