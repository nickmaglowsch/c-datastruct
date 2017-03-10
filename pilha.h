#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED
#include <string>


template <typename Tipo>
struct Pilha{
    Tipo *v;
    int topo;
    unsigned int tam;
    Pilha(unsigned int tamanho);
    ~Pilha();
    void empilha(Tipo x);
    Tipo desempilha();
    Tipo elementodotopo();
    bool pilhacheia();
    bool pilhavazia();
    Tipo getTopo();
    Tipo getValor(unsigned int pos);
    unsigned int getTamanho();

};

template < typename Tipo>
Pilha<Tipo>::Pilha(unsigned int tamanho){
        tam = tamanho;
        v = new Tipo[tam];
        topo = -1;
    }


template<typename Tipo>
Pilha<Tipo>::~Pilha(){
    delete v;
}


template <typename Tipo>
void Pilha<Tipo>::empilha(Tipo x){
    topo++;
    v[topo]=x;
}


template <typename Tipo>
Tipo Pilha<Tipo>::desempilha(){
    Tipo temp = v[topo];
    topo--;
    return temp;
}


template <typename Tipo>
Tipo Pilha<Tipo>::elementodotopo(){
        return v[topo];
}


template <typename Tipo>
bool Pilha<Tipo>::pilhacheia(){
    return topo == tam - 1;
}


template <typename Tipo>
bool Pilha<Tipo>::pilhavazia(){
    return topo == -1;
}

template <typename Tipo>
Tipo Pilha<Tipo>::getValor(unsigned int pos){
    return v[pos];
}

template <typename Tipo>
unsigned int Pilha<Tipo>::getTamanho(){
    return tam;
}

template <typename Tipo>
Tipo Pilha<Tipo>::getTopo(){
    return topo;
}




#endif // PILHA_H_INCLUDED
