#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL

typedef float infotype;
typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

/*
NIM MOD 4 = 1301213190 MOD 4 = 2
variable List dengan gabungan huruf depan dan huruf paling akhir dari nama lengkap = SL
*/

void createList_1301213190(List &SL);
adr newElement_1301213190(infotype x);
void insertFirst_1301213190(List &SL, adr p);
void show_1301213190(List SL);
adr deleteLast_1301213190(List &SL);

/*
NIM MOD 4 = 1301213190 MOD 4 = 2
sisa 2 : deleteFirst
*/

adr deleteFirst_1301213190(List &SL);

void deleteAfter(List &SL, char element);

#endif // SLL_H_INCLUDED

/*
Salma Hanifah Putri Listyanto
1301213190 | IF-45-09
*/
