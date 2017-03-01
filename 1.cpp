#include <iostream>
#include <map>
#define ll unsigned long long
using namespace std;
ll m =1000000007;
ll fib[3];
ll F(ll n)
{
	if(n==0)
	{
		fib[0] = 0;
		fib[1] = 1;
		return fib[n];
	}
	else
	{
		F(n/2);
		ll a,b;
		a = fib[0]*(2*fib[1] - fib[0]);
		a = a%m;
		b = (fib[0]*fib[0] + fib[1]*fib[1])%m;
		if(n%2 == 0)
		{
			fib[0] = a;
			fib[1] = b;
		}
		else
		{
			fib[0] = b;
			fib[1] = a+b;
		}	
		return fib[0];
	}
}

int main(int argc, char const *argv[])
{
	fib[0] = 0;
	fib[1] = 1;
	fib[2] = 1;
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<F(n+2)<<endl;
	}	
	return 0;
}