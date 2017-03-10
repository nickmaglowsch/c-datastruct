#ifndef LISTALINEAR_H_INCLUDED
#define LISTALINEAR_H_INCLUDED

struct Teatro{
    //i * col + j = matriz para vetor

    int indice, tamanho,col,lin;
    int *v;

    Teatro(){
        tamanho = lin * col;
        v = new int[tamanho];
        indice = -1;
    }

    ~Teatro(){
        delete v;
    }

    void insere(int x){
        x = 1;
        indice++;
        v[indice] = x;
    }

    int remover(){
        int temp = v[indice];
        indice--;
        return temp;
    }

    bool lugarescheio(){
        return indice == tamanho - 1;

    }

    bool lugaresvazio(){
        return  indice == -1;
    }
};


#endif // LISTALINEAR_H_INCLUDED
