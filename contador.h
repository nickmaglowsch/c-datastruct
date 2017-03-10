#ifndef CONTADOR_H_INCLUDED
#define CONTADOR_H_INCLUDED

struct Contador{
    int contador;
    Contador(){
        contador = 0;
    }
    Contador(int valorinicial){
        contador = valorinicial;
    }
    void incrementa(){
        contador++;
    };
    void decrementa(){
        contador--;
    };
    int getContador(){
        return contador;
    };
};

#endif // CONTADOR_H_INCLUDED
