#include "listRelasi.h"

using namespace std;



void createListRelasi(ListRelasi &L){
    first(L) = NULL;
    last(L) = NULL;
}
relateAddress CeateElmrelasi(address_parent P, addressChild Q){
    relatrAddress R = new  Relasi;
    warteg(R) = P;
    mamin(R) = Q;
    next(R) = NULL;
    prev(R) = NULL;
    info.countWarteg(P)++
    info.countMamin++
}
void insertRelasi(ListRelasi &L, relateAddress &R){
    if(first(L) == NULL){
        first(L) = R;
        last(L) = R;
    }else{
        next(last(L)) = R;
        Prev(R) = next(R);
        last(L) = R;
    }
}
relateAddress findElmRelasiParent(ListRelasi &L, string out){
    relateAddress R = first(L);
    while(R != NULL){
        if(info.Warteg(warteg(R) == out){
            return R;
        }
        R = next(R);
    }
    return NULL;
}
relateAddress findElmRelasiChild(ListRelasi &L, string out);
void printInfoRelasi (ListRelasi L);

void printRelasiParent(ListRelasi L, string out){
   relateAddress R = first(L);
   while(R != NULL){
    if(info.Warteg(warteg(R)) == out){
        cout<<info.Warteg(warteg(R))<<" ";
    }
    R = next(R);
   }
   count<<endl;
}
void printRelasiChild(ListRelasi L, string out);

void HapusRelasiParentSemua(ListRelasi &L, address_parent P);
void HapusRelasiChildSemua(ListRelasi &L, addressChild Q);
