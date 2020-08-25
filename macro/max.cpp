#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_AB(A,B) ((A)>(B))?(A):(B)
#define MAX_NUM 10
#define MIN_NUM 1

int max_AB(int a, int b){
    if (a > b){
        return a;
    }
    else
    {
        return b;
    }
    
}

int main()
{
    int a,b,max_ab;

    cin >> a >> b;
    for (int i=MIN_NUM; i<=MAX_NUM; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "The MAX number is:"<<endl;
    max_ab = MAX_AB(a,b);
    cout << max_ab <<endl;

    max_ab = max_AB(a,b);
    cout << max_ab <<endl; 

    max_ab = max(a,b);
    cout << max_ab <<endl; 
}