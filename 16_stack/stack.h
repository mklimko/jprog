#ifndef _stack_h
#define _stack_h

#include "genlib.h" // definiuje typ bool

// Typ elementów umieszczanych na stosie.
// Tutaj zdefiniowany jako `double', ale można go
// zmienić edytując wiersz poniżej.

typedef double stackElementT;

// Poniżej definiujemy nieprzezroczysty typ danych stackADT (opaque type).
// Oznacza to, że klienci nie mają dostępu do pól struktury.

typedef struct stackCDT *stackADT;

// Eksportowane funkcje

stackADT NewStack(void);
void FreeStack(stackADT);
void Push(stackADT, stackElementT);
stackElementT Pop(stackADT);
bool StackIsEmpty(stackADT);
bool StackIsFull(stackADT);
int StackDepth(stackADT);
stackElementT GetStackElement(stackADT, int);

#endif
