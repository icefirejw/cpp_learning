#include <cstdio>
#include <iostream>

using namespace std;

long long n, a, b;
unsigned int org[80000005];

unsigned int gys(unsigned int m, unsigned int n)
{
	while (n!=0)
	{
		unsigned int r = m % n;
		m = n;
		n = r;
	}
	return m;
}

int main()
{
	unsigned int i, q, cj;
	cin >> n >> a >> b;

	q = 2;
	cj = 2;
	i = 2;
	for (i = 2; i <= n; i++)
	{
		a = ((a * q + b) & 0xFFFFFFFF);
		//cout<<"q="<<q<<" a="<<a<<" i="<<i<<endl;

		while(i<=n)
		{
			org[i] = i;
			unsigned int t = gys(org[i], cj);
			//cout << "org=" << org[i]<<" i= "<<i<<" t="<<t<<endl;
			org[i] = org[i] / t;
			if (org[i]!=1){
				q=org[i];
				i--;
				break;
			}
			i++;
		}
		cj*=q;
	}

	cout << a << endl;
	return 0;
}