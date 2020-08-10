#include <iostream>
#include <cstdio>

using namespace std;

long long n,a,b;
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
	unsigned int org_end,i,q,k;
	bool init=false;
	cin>>n>>a>>b;

	org_end = n;
	q = 2;
	while (org_end>=1) {
		
		a=((a*q+b)&0xFFFFFFFF);

		//cout<<"q="<<q<<" a="<<a<<" org_end="<<org_end<<endl;
		if (org_end==1)
			break;

		k=1;
		for (i=1; i<=org_end; i++){
			if (init == false){
				org[i] = i;
			}

			if (org[i]==1)
				continue;
				
			unsigned int t = gys(org[i],q);
			org[i] = org[i]/t;
			if (org[i]!=1)
			{
				org[k]=org[i];
				k++;
			}
		}
		org_end = k;
		q=org[1];
		init=true;
		if (q==1){
			break;
		}
	}

	cout << a <<endl;
	return 0;

}