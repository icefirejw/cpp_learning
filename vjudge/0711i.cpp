#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int summ = (n+1)*n/2;

    if (summ % 2 == 0){
        cout << 0 <<endl;
    }
    else 
        cout << 1 <<endl;
}