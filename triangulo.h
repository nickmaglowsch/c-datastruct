#include <math.h>


#ifndef TRIANGULO_H_INCLUDED
#define TRIANGULO_H_INCLUDED
using namespace std;
struct Triangulo{
    float a,b,c;

    bool isTriangulo(){
       return  (a<b+c) && (b<a+c)  && (c<a+b) ;
    }
    float getPerimetro(){
        return a+b+c;
    }
    float getArea(){
        float sp=(a+b+c)/2;
        float p= sqrt((sp*(sp-a)*(sp-b)*(sp-c)));
        return p;
    }
    string getTipo(){
        string tipo;
        if (a==b && b==c){
            tipo="equilatero";
        }
        else{
            if(a==b || b==c || a==c){
                tipo = "isosceles";
            }
            else{
                tipo="escaleno";
            }

        }
        return tipo;
    }

};


#endif // TRIANGULO_H_INCLUDED
