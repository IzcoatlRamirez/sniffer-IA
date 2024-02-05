#include <iostream>
#include "..\headers\entorno.h"
#include "..\headers\sensor.h"
#include "..\headers\actuador.h"
#include "..\headers\sniffer.h"

using namespace std;

int main() {
    Entorno entorno(10, 0.5);

    SensorSimple sensor(entorno);

    ActuadorSimple actuador(entorno);

    Sniffer sniffer(sensor, actuador, entorno);

    sniffer.env.printMatrix();
    if(sniffer.sensor.detecDirt(make_pair(0, 2))){
        cout<<"hay suciedad"<<endl;
        sniffer.actuador.clean(make_pair(0, 2));
        sniffer.env.printMatrix();
        if(!sniffer.sensor.detecDirt(make_pair(0, 2))){
            cout<<"se limpio"<<endl;
        }
        else{
            cout<<"no se limpio"<<endl;
        }
    }       
    else{
        cout<<"no hay suciedad"<<endl;
    }

    return 0;
}
