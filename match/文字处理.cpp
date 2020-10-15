#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>

using namespace std;
int n,k;
string s[105];
int i;
int main()
{
    cin>>n>>k;
    for (i=0; i<n; i++){
        cin>>s[i];
    }
    int len = 0;
    bool first = true;
    for (i=0; i<n; i++){
        len = len + s[i].size();
        if (len<=k)
        {
            if (!first){
                cout << " ";
            }
            cout << s[i];
            first = false;
        }
        else
        {
            cout <<endl;
            cout <<s[i];
            len = s[i].size();
        }
    }
    cout <<endl;
    return 0;
}