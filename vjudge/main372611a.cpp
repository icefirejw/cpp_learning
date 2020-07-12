#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	double a,b,c,d;
	double sa,sb,sc,sd,s;

	cin >> a >>b>>c>>d;
	sa = a*1.2;
	sb = b*3.5;
	sc = c*4.5;
	sd = d*5.0;
	s = round((sa+sb+sc+sd)*10)*0.1;

	printf("%.1f\n",round(sa*10)*0.1);
	printf("%.1f\n",round(sb*10)*0.1);
	printf("%.1f\n",round(sc*10)*0.1);
	printf("%.1f\n",round(sd*10)*0.1);
	printf("%.1f\n",s);
	return 0;
}
