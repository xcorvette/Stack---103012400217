#include <iostream>
#include "stack.h"
using namespace std;

int main() {
    Stack S_Aksi, S_Redo;

    create_stack(S_Aksi);
    create_stack(S_Redo);

    manageAction(S_Aksi, S_Redo, 1);
    manageAction(S_Aksi, S_Redo, 1);
    manageAction(S_Aksi, S_Redo, 2);
    manageAction(S_Aksi, S_Redo, 4);
    manageAction(S_Aksi, S_Redo, 3);
    manageAction(S_Aksi, S_Redo, 3);
    manageAction(S_Aksi, S_Redo, 4);
    manageAction(S_Aksi, S_Redo, 2);

    cout << "Total Damage = " << totalDamage(S_Aksi) << endl;

    return 0;
}
