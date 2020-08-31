#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int is_contain(string s1, string s2)
{
    for (int i = 0; i<(int)s1.size(); i++)
    {
        int idx = s1.find(s2);

        if (idx >= 0){
            //cout << s1 << " " << s2 << " " << idx <<endl;
            return 1;
        }
        else
        {
            s1.push_back((char)s1[0]);
            s1.erase(0,1);
        }
               
    }
    return 0;
}
int main()
{
    string str1,str2;

    cin>>str1>>str2;

    if (is_contain(str1, str2)==1 || is_contain(str2, str1)==1){
        cout << "true" <<endl;
    }
    else
    {
        cout << "false" <<endl;
    }
    
    return 0;
}