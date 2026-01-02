#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;

const int N_STACK = 2025;

struct Stack {
    int info[N_STACK];
    int top;
};

void create_stack(Stack &S);
bool isEmpty(Stack S);
bool isFull(Stack S);
void push(Stack &S, int x);
int pop(Stack &S);
void emptyStack(Stack &S);
void manageAction(Stack &S_Aksi, Stack &S_Redo, int aksi);
int totalDamage(Stack &S);


#endif // STACK_H_INCLUDED
