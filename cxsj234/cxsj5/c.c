#include<cstdio>
using namespace std;
int num[2000000];
//两地之间距离
int L,N,M;
//判断最短距离m是否符合条件

void mystone();

int judge(int x)
{  
    //s指当前距离起点的位置，count计当前搬走了多少石头
    int s=0,count=0;
    //枚举第1到终点的n+1块石头
    for(int i=1;i<=N+1;i++)
    {
        //如果第i块石头的距离减去s，意思是这两块石头之间的距离！ 若两块之间的距离<期望的距离
        if(num[i]-s<x)
            count++;
        else
            s=num[i];
    }
    //不满足最大的搬运量
    if(count>M) 
        return 0;
    return 1;
}
int main()
{
    int ans;
    scanf("%d %d %d",&L,&N,&M);
    num[0]=0;
    for(int i=1;i<=N;i++)
        scanf("%d",&num[i]);
    num[N+1]=L;
    int l=0,r=L,mid;
    while (l<=r)
    {
        mid=(l+r)/2;
        //mid满足题意，在向右找有没有更大的
        if(judge(mid))
        {
            l=mid+1;
            ans=mid;
        }
        //mid不满足题意，向小了的找
        else
            r=mid-1;
    }
    printf("%d",ans);
    return 0;
}

void mystone(){
    int a,b,c;
    a = 0;
    b = 1;
    c = 2;
}