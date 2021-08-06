// 2021.5.10
#include<stdio.h>
#include<stdlib.h>
#define OK 1
#define ERROR -1
typedef int Status;
typedef int ElemType;

typedef struct LNode{
    ElemType data;
    struct LNode *next;
}LNode,*LinkList;

Status InitList(LinkList &L)
{ 
    L = new LNode;
    L->next = NULL;
    return OK;
}

Status ListInsert(LinkList &L,int i,ElemType e)
{
    LinkList p = L;
    int j = 0;
    while(p && (j<i-1))
    {
        p = p->next;
        j++;
    }
    if(!p||j>i-1)return ERROR;
    LNode *s = new LNode;
    s->data = e;
    s->next = p->next;
    p->next = s;
    return OK;
}

Status GetElem(LinkList L,int i, ElemType e)
{
    int j = 1;
    LinkList p = L->next;
    while(!p && (j<i-1))
    {
        p = p->next;
        ++j;
    }
    if(!p||j>i)return ERROR;
    e = p->data;
    return OK;
}

LNode *LocateElem(LinkList &L, ElemType e)
{
    LinkList p = L->next;
    while(!p && p->data!=e)
        p = p->next;
    return p;
}

Status ListDelete(LinkList &L,int i)
{
    LinkList p = L;
    int j = 0;
    while((p->next)&&(j<i-1))
    {
        p = p->next;
        j++;
    }
    if(!(p->next)||(j>i-1))return ERROR;
    LNode *q = p->next;
    p->next = q->next;
    delete q;
    return OK;
}