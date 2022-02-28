#include <iostream>
using namespace std;
const int Mod = 998244353;
long long quick_pow(long long x, long long m)
{
	long long Ans = 1;
	while(m)
	{
		if(m & 1)	Ans = Ans * x % Mod;
		x = x * x % Mod;
		m >>= 1;
	}
	return Ans;
}
int main()
{
	long long m;
	scanf("%lld", &m);
	cout << quick_pow((long long)2, m - 1);
	return 0;
}