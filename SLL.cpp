#include "SLL.h"

void createList_1301213190(List &SL) {
    first(SL) = nil;
}

adr newElement_1301213190(infotype x) {
    adr P = new element;
    info(P) = x;
    next(P) = nil;
    return P;
}

void insertFirst_1301213190(List &SL, adr p) {
    if (first(SL) == nil) {
        first(SL) = p;
    } else {
        next(p) = first(SL);
        first(SL) = p;
    }
}

void show_1301213190(List SL) {
    if (first(SL) != nil) {
        adr p = first(SL);
        while (p != nil) {
            cout << info(p) << " ";
            p = next(p);
        }
        cout << endl;
    } else {
        cout << "List Kosong" << endl;
    }
}

adr deleteLast_1301213190(List &SL) {
    adr p, q;
    if (first(SL) == nil) {
        p = nil;
        cout << "List Kosong" << endl;
    } else if (next(first(SL)) == nil) {
      p = first(SL)  ;
      first(SL) = nil;
    } else {
        q = first(SL);
        p = first(SL);
        while (next(p) != nil) {
            q = p;
            p = next(p);
        }
        next(q) = nil;
    }
    return p;
}

adr deleteFirst_1301213190(List &SL) {
    adr p, q;
    if (first(SL) == nil){
        p = nil;
        cout <<"List Kosong" << endl;
    }else if (next(first(SL)) == nil){
        p = first(SL);
        first(SL) = nil;
    }else{
        q = first(SL);
        p = first(SL);
        first(SL) = next(q);
        next (p) = nil;
    }
    return p;
}

void deleteAfter(List &SL, char element) {
    List bantu, del;

    if (first(SL) == nil) {
        cout << "Linked list kosong" << endl;
    } else {
        bantu = SL;
        while (bantu(next(SL)) != element) {
            bantu = bantu(next(SL));
            del = bantu(next(SL));
            bantu(next(SL)) = bantu(next(next(SL)));
            del(next(SL)) = nil;
            freelist(del);
        }
    }
}
