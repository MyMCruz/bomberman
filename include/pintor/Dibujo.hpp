#pragma once
#include<string>
#include<list>
#include<Vector.hpp>

using namespace std;

class Dibujo
{
private:
    list<string> lineas;
    Vector psicion;
    Vector velocidad;
public:
    Dibujo(/* args */) {}
    ~Dibujo() {}
    void AgregarLinea(string linea)
    {
        this ->lineas.push_back(linea); //Se Agrega a la lista
    }

    list<string> ObtenerLineas()
    {
        
    }
};