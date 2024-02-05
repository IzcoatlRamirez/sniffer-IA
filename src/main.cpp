#include <iostream>
#include<Windows.h>
#include<conio.h>
#include "..\headers\entorno.h"
#include "..\headers\sensor.h"
#include "..\headers\actuador.h"
#include "..\headers\sniffer.h"

using namespace std;

int main() {
    char Move[2];
    bool Exit = false;
    Entorno entorno(10, 0.5);

    SensorSimple sensor(entorno);

    ActuadorSimple actuador(entorno);

    Sniffer sniffer(sensor, actuador, entorno);
do{
    cout<<endl;
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
    try
    {
        cout<<"ingresa direccion para mover el agente (ingresa 'z' para salir): ";
        Move[0] = getch();
        if(Move[0]=='z'){
            Exit= true;
            throw "exit";
        }
        Move[1] = getch();
        if(Move[1]=='z'){
            Exit= true;
            throw "exit";
        }
        switch (Move[1])
        {
        case 72:
            sniffer.actuador.keyUp();
            break;
        case 80:
            sniffer.actuador.keyDown();
            break;
        case 77:
            sniffer.actuador.keyRight();
            break;
        case 75:
            sniffer.actuador.keyLeft();
            break;
        default:
            cout<<"direccion no reconoconida"<<endl;
            break;
        }
    }
    catch(const char* Error){
        if(Exit)
            cout<<"adios";
        else
            cout<<"movimiento no valido"<<endl;
    }
    
}while (!Exit);


    return 0;
}
