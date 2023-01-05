#include "SLL.h"

using namespace std;

int main()
{
    List SL;
    cout << "first(SL) sebelum createList :" << first(SL) << endl;

    createList_1301213190(SL);
    cout << "first(SL) setelah createList :" << first(SL) << endl;
    cout << endl;

//  newElement_1301213190
    adr p;
    p = newElement_1301213190(100);
    cout << "Info(P): " << info(p) << endl;
    cout << "Next(P): " << next(p) << endl;
    cout << endl;

//  insertFirst_1301213190
    cout << "first(SL) sebelum insertFirst :" << first(SL) << endl;
    insertFirst_1301213190(SL, p);
    cout << "first(SL) setelah insertFirst :" << first(SL) << endl;
    cout << "info First(SL): " << info(first(SL)) << endl;

    p = newElement_1301213190(15);
    insertFirst_1301213190(SL, p);
    cout << "info First(SL): " << info(first(SL)) << endl;
    cout << endl;

//  show_1301213190
    show_1301213190(SL);

    p = newElement_1301213190(230);
    insertFirst_1301213190(SL, p);
    show_1301213190(SL);
    cout << endl;

    p = deleteAfter(SL);
    show_1301213190(SL);
    cout << info(p) << endl;

//  deleteFirst_1301213190
    p = deleteFirst_1301213190(SL);
    show_1301213190(SL);
    cout << info(p) << endl << endl;

//  deleteLast_1301213190
    p = deleteLast_1301213190(SL);
    show_1301213190(SL);
    cout << info(p) << endl << endl;

    p = deleteLast_1301213190(SL);
    show_1301213190(SL);
    cout << info(p) << endl << endl;



    return 0;
}
