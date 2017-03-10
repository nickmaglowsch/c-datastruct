#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

template <typename Tipo>
struct Fila{
    int inicio, fim, qtde;
    unsigned tamanho;
    Tipo *v;

    Fila(unsigned tam){
        tamanho = tam;
        v = new Tipo[tamanho];
        fim = -1;
        inicio = 0;
        qtde = 0;
    }


    void insere(Tipo x){
        fim++;
        if (fim == tamanho){
            fim = 0;
        }
        v[fim] = x;
        qtde++;
    }


    Tipo remover(){
        Tipo temp = v[inicio];
        inicio++;
        if (inicio == tamanho){
            inicio = 0;
        }
        qtde--;
        return temp;
    }


    Tipo primeiro(){
        return v[inicio];
    }


    bool filacheia(){
        return qtde==tamanho;
    }


    bool filavazia(){
        return qtde==0;
    }


};




#endif // FILA_H_INCLUDED
