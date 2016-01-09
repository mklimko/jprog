#include "stack.h"

/* Typ umożliwiający `łączenie' komórek wstawianych na stos. */

typedef struct cellT {
  stackElementT element;
  struct cellT *link;
} cellT;


/*
   Każdą implementację zrealizowaną według schematu:

      typedef struct nazwaCDT *nazwaADT;  -- umieszczone w pliku nagłówkowym

      struct nazwaCDT {                   -- umieszczone w pliku implementacji
        deklaracje pól struktury
      };

   nazywamy nieprzezroczystym typem danych, ponieważ
   szczegóły jej implementacji nie są dostępne dla klientów.
 */


struct stackCDT {
  cellT *start;
};


stackADT NewStack(void)
{
  stackADT stack;
  stack=New(stackADT);
  stack->start=NULL;
  return stack;
}

void FreeStack(stackADT stack)
{
  cellT *cp, *next;
  cp=stack->start;
  while (cp!=NULL) {
    next=cp->link;
    FreeBlock(cp);
    cp=next;
  }
  FreeBlock(stack);
}

void Push(stackADT stack, stackElementT element)
{
  cellT *cp;
  cp=New(cellT *);
  cp->element=element;
  cp->link=stack->start;
  stack->start=cp;
}

stackElementT Pop(stackADT stack)
{
  stackElementT result;
  cellT *cp;
  if (StackIsEmpty(stack)) Error("Wykonanie Pop na pustym stosie");
  cp=stack->start;
  result=cp->element;
  stack->start=cp->link;
  FreeBlock(cp);
  return result;
}

bool StackIsEmpty(stackADT stack)
{
  return stack->start==NULL;
}

bool StackIsFull(stackADT stack)
{
  return FALSE;
}

int StackDepth(stackADT stack)
{
  int n = 0;
  cellT *cp;
  for (cp=stack->start; cp!=NULL; cp=cp->link)
    n++;
  return n;
}

stackElementT GetStackElement(stackADT stack, int depth)
{
  int i;
  cellT *cp;
  if (depth<0 || depth>=StackDepth(stack))
    Error("Nie ma takiego elementu na stosie");
  cp=stack->start;
  for (i=0; i<depth; i++)
    cp=cp->link;
  return cp->element;
}
