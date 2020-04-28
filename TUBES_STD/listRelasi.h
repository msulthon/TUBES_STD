#include <iostream>
#include "listParrent.h"
#include "listChild.h"

using namespace std;

typedef struct Relasi* relateAddress;

struct relasi {
	address_parent warteg;
	addressChild mamin;
	relateAddress next;
	relateAddress prev;
};


struct listRelasi {
	relateAddress first;
	relateAddress last;
};

void createListRelasi(ListRelasi &L);
relateAddress CeateElmrelasi(address_parent P, addressChild Q);
void insertRelasi(ListRelasi &L, relateAddress &R);
relateAddress findElmRelasiParent(ListRelasi &L, string out);
relateAddress findElmRelasiChild(ListRelasi &L, string out);
void printInfoRelasi (ListRelasi L);

void printRelasiParent(ListRelasi L, string out);
void printRelasiChild(ListRelasi L, string out);

void HapusRelasiParentSemua(ListRelasi &L, address_parent P);
void HapusRelasiChildSemua(ListRelasi &L, addressChild Q);
