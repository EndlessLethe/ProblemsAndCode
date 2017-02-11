#ifndef _Cursor_H

typedef int PtrToNode;
typedef PtrToNode List;
tyoedef PtrToNode Position;

void InitializeCuzsorSpace(void);
List MakeEmpty(List L);
int IsEmpty(const List L);
int IsLast(const Position P, const List L);
//omit

#endif

struct Node
{
	ElementType Element;
	Position 	Next;
};

struct Node CrusorSpace [SpaceSize];
