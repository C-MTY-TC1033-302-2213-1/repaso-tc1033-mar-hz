//
//  main.cpp
//  ComposicionTriangulo
//
//  Created by Ma. Guadalupe Roque Díaz de León on 18/05/23.
//

#include <iostream>
#include <iomanip> // for std::setprecision()
#include "Triangulo.hpp"

using namespace std;

int main(){
    
    // Variables con coordenadas de los puntos
    double x1, y1, x2, y2, x3, y3;

    // Leer coordenadas de los 3 puntos
    cout << "Ingresa las coordenadas de los 3 vértices x y:";
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // Asignacion de valores a puntos y triangulos
    Punto v1(x1, y1), v2(x2, y2), v3(x3, y3);
    Triangulo t1(v1, v2, v3); 
    Triangulo t2 = Triangulo();

    // Desplegar puntos
    cout << "v1 = " << v1.str();
    cout << "v2 = " << v2.str();
    cout << "v3 = " << v3.str();

    // Desplegar Triangulo
    cout << "Los 3 Vertices Triangulo 1:\n" << t1.str();
    cout << "Los 3 Vertices Triangulo 2:\n" << t2.str();

    // Perimetros
    cout << "Perimetro Triangulo 1 =" << t1.perimetro() << endl;
    cout << "Perimetro Triangulo 2 =" << t2.perimetro() << endl; 
    
    // Areas
    cout << "Area Triangulo 1 =" << t1.area() << endl;
    cout << "Area Triangulo 2 =" << t2.area() << endl; 

    /* Codigo original incluido
    Punto p1(-5, -5), p2(1, 3), p3(4, -6);
    Punto p4(-2, -3), p5(5, -4), p6(-1,3);
    Punto p7(6, 7), p8(6, 3), p9(8,3);
    Triangulo tri1(p4,p5,p6), tri2(p1, p2, p3), tri3(p7, p8, p9);
    
    cout << "p_tri1 = " << tri1.perimetro() << endl;
    cout << "a_tri1 = " << tri1.area() << endl;
    cout << "p_tri2 = " << tri2.perimetro() << endl;
    cout << "a_tri2 = " << tri2.area() << endl;
    cout << "p_tri3 = " << tri3.perimetro() << endl;
    cout << "a_tri3 = " << tri3.area() << endl;
    cout << "Distancia = " << p1.calculaDistancia(p2)  << endl;
    */
   
    return 0;
}