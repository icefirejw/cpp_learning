#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cin >> s;

    cout << s.size() <<endl;
    
    for (int i=0; i<(int)s.size(); i++){
        cout << s[i] << " ";
    }
    cout << endl;

    for (int i=s.size()-1; i>=0; i--)
    {
        cout << s[i] ;
    }
    return 0;
}