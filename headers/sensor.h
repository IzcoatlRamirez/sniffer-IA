#ifndef SENSOR_H
#define SENSOR_H
#include <iostream>
#include "entorno.h"


using namespace std;

class Sensor {
public:
    virtual bool detecDirt(pair<int, int> position) = 0;
};

class SensorSimple : public Sensor{
public: 
    SensorSimple(Entorno &env);
    bool detecDirt(pair<int, int> position) override;
private:
    Entorno &env;
};


#endif // SENSOR_H