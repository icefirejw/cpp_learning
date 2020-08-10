#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int n = 1;
    int i = 0;
    while (n<=b)
    {
        //cout << i << ": ";
        int max = i;
        if (max < a-1-i){
            max = a-i-1;
        }
        for (int j=0; j<=max; j++){

            if (j==i || j == a-i-1){
                cout << "X";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
        i++;
        if (i>a-1) {
            i=1;
            n++;
        }
    }
}