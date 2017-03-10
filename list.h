#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

template <typename Tipo>

struct Mlista {
    int size_;
    float *lista;
    int ind;
 Mlista(int si){
        size_=si;
        lista = new Tipo[size_];
        ind=-1;
    }
    void putlist(Tipo x){
        ind++;
        lista[ind]=x;
        }

    Tipo remlist(){
        Tipo temp = lista[ind];
        ind--;
        return temp;
    }

    bool full(){
        return ind == size_-1;
    }
    bool blank(){
        return ind == -1;
    }
    };



#endif // LIST_H_INCLUDED
