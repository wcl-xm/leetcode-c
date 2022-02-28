#include<iostream>
#include<algorithm>
using namespace std;
int n,m,a[1000000];
bool judge(int x)
{
    int sum=0,group=1;//组数和清零，组数归1
    for(int i=1;i<=n;i++)
    {
        sum+=a[i];//累加和
        if(sum>x)//当前和>当前值
        {
            sum=a[i];//和=当前值
            group++;//分组
        }
    }
    if(group<=m)//当前组数<需要组数
        return true;//需要减小右值
    else
        return false;
}

void myxulie();

int main()
{
    int l=0,r=0,mid;
    int i;
    int a,b,c;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        l=max(l,a[i]);//设置左值为数列最大值
        r+=a[i];//设置右值为数列和
    }
    while(l+1<r)
    {
        mid=(l+r)/2;//取中间值
        if(judge(mid))//进行判断
            r=mid;
        else 
            l=mid;
    }

    if(judge(l))//判断当前值是否满足条件
        cout<<l<<endl;
    else
        cout<<r<<endl;
    return 0;
}
void myxulie(){
    int a,b,c;
    a = 1;
    b = 2;
    c = 3;
}