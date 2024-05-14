
#ifndef Punto_hpp
#define Punto_hpp

#include <stdio.h>
#include <math.h>
#include <string>

class Punto {
private:
    double x = 0;
    double y = 0;
public:
    // Constructores
    Punto();
    Punto(double _x, double _y);

    // Setters
    void setX(double _x);
    void setY(double _y);

    // Getters
    double getX();
    double getY();

    // Otros metodos
    double calculaDistancia(Punto p2);
    std::string str();
};

#endif


