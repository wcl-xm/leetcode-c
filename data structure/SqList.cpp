// 2021.5.10
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
#define OK 1
#define ERROR -1
typedef int Status;
typedef int ElemType;

/*
 一般保留数组第一个元素（即0号元素）用来存储线性表长度length
 以下为增删查改过程。
*/

typedef struct{
    ElemType *elem;
    int length;
}SqList;

Status InitList(SqList &L)
{//构建空的顺序表L
    L.elem = new ElemType[MAXSIZE];     //为顺序表分配一个大小为MAXSIZE的数组空间
    if(!L.elem) exit (ERROR);        //存储失败退出
    L.length = 0;
    return OK;
}

Status ListInsert(SqList &L,int i, ElemType e)
{
    if(L.length>=(MAXSIZE-1))return ERROR;  //先判断表是否已满
    if((i<1)||(i>L.length+1))return ERROR;  
    for(int j = L.length;j>=i;j--)
        L.elem[j] = L.elem[j+1];
    L.elem[i] = e;
    return OK;
}

Status GetELem(SqList L,int i,ElemType &e)
{
    if(i<1||i>L.length)return ERROR;
    e = L.elem[i];
    return OK;
}

Status Delete(SqList L ,int i,ElemType &e)
{
    if(i<1||i>L.length)return ERROR;
    e = L.elem[i];
    for(int j = i;j<L.length;j++)
        L.elem[j] = L.elem[j+1];
    L.length--;
    return OK;
} 

Status Change(SqList L,int i,ElemType e)
{
    if(i<1||i>L.length)return ERROR;
    L.elem[i] = e;
    return OK;
}