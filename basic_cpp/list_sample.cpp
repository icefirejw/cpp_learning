#include <iostream>
#include <algorithm>

struct SingleListSt
{
    struct SingleListSt *next;
    int data;
};

struct DoublyListSt
{
    struct DoublyListSt *prev;
    struct DoublyListSt *next;
    int data;
};


