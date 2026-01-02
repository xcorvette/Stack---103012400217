#include "stack.h"

void create_stack(Stack &S) {
    S.top = -1;
}

bool isEmpty(Stack S) {
    return S.top == -1;
}

bool isFull(Stack S) {
    return S.top == N_STACK - 1;
}

void push(Stack &S, int x) {
    if (!isFull(S)) {
        S.top++;
        S.info[S.top] = x;
    }
}

int pop(Stack &S) {
    if (!isEmpty(S)) {
        int x = S.info[S.top];
        S.top--;
        return x;
    }
    return -1;
}

void emptyStack(Stack &S) {
    S.top = -1;
}

void manageAction(Stack &S_Aksi, Stack &S_Redo, int aksi) {
    int temp;

    if (aksi == 3) {
        if (!isEmpty(S_Aksi)) {
            temp = pop(S_Aksi);
            push(S_Redo, temp);
        }
    }
    else if (aksi == 4) {
        if (!isEmpty(S_Redo)) {
            temp = pop(S_Redo);
            push(S_Aksi, temp);
        }
    }
    else {
        push(S_Aksi, aksi);
        emptyStack(S_Redo);
    }
}

int totalDamage(Stack &S) {
    int damage = 0;
    int aksi;

    while (!isEmpty(S)) {
        aksi = pop(S);

        if (aksi == 1)
            damage += 30;
        else if (aksi == 2)
            damage += 5;
    }

    return damage;
}
