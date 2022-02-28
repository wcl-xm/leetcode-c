#include <iostream>
#include <cstring>
using namespace std;
int n,m,w[2000005],v[2000005],l[200005],r[200005];
long long sv[200005],sn[200005];//前缀和sv用来储存前i个中重量大于W的价值之和，sn用来储存前i个里面有几个的重量大于W
long long s,y,sum;
bool check(int mid);

int main()
{
    int le=1e7,mid,ri=0;
    cin>>n>>m>>s;
    for(int i=1;i<=n;++i)
    {
        cin>>w[i]>>v[i];
        le=le<w[i]?le:w[i];//得到所有石头中重量的最小值
        ri=ri>w[i]?ri:w[i];//得到所有石头中重量的最大值
    }

    for(int i=1;i<=m;++i)
    {
        cin>>l[i]>>r[i];
    }
    long long ans=1e13;
    le=le-1,ri=ri+2;//下限为重量中最小值减一，上限为重量中最大值加二，目的是为了能够包含最小值和最大值加一，
    //加二的原因是为了考虑到一个石头都没有取Y=0的情况
    while(le<=ri)
    {
        int flag;
        mid=(le+ri)/2;
        y=sum=0;
        memset(sv,0,sizeof(sv));
        memset(sn,0,sizeof(sn));
        for(int i=1;i<=n;i++)
        {
            if(w[i]>=mid)//满足条件则加入前缀和里
            {
                sv[i]=sv[i-1]+v[i];
                sn[i]=sn[i-1]+1;
            }
            else
            {
                sv[i]=sv[i-1];
                sn[i]=sn[i-1];
            }
        }
        for(int i=1;i<=m;i++)
        {
            y+=(sn[r[i]]-sn[l[i]-1])*(sv[r[i]]-sv[l[i]-1]);//计算yi
        }
        sum=y-s;
        sum=sum>0?sum:-sum;//取绝对值
        if(y>s)flag = 1;
        else flag = 0;

        if(flag)
            le=mid+1;
        else
            ri=mid-1;
        if(ans>sum)ans=sum;//更新为所有y-s中绝对值最小的
    }
    cout <<ans<< endl;
    return 0;
}

bool check(int mid)
{
    y=sum=0;
    memset(sv,0,sizeof(sv));
    memset(sn,0,sizeof(sn));
    for(int i=1;i<=n;i++)
    {
        if(w[i]>=mid)//满足条件则加入前缀和里
        {
            sv[i]=sv[i-1]+v[i];
            sn[i]=sn[i-1]+1;
        }
        else
        {
            sv[i]=sv[i-1];
            sn[i]=sn[i-1];
        }
    }
    for(int i=1;i<=m;i++)
    {
        y+=(sn[r[i]]-sn[l[i]-1])*(sv[r[i]]-sv[l[i]-1]);//计算yi
    }
    sum=y-s;
    sum=sum>0?sum:-sum;//取绝对值
    if(y>s)return true;
    else return false;
}