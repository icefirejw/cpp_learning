#include <bits/stdc++.h>

using namespace std;

long long n;
// string sa,sb;
int sa[5010], sb[5010], sc[5010];
int len_a = 0;
int len_b = 0;
int len_c = 0;
// char s[5010];
/*
string gj(string x,string y)
{
    long long a[5010],b[5010],len;
    for(int j=0;j<x.size();j++)
    {
        a[j]=x[x.size()-j-1]-'0';
    }
    for(int j=0;j<y.size();j++)
    {
        b[j]=y[y.size()-j-1]-'0';
    }
    len=max(x.size(),y.size());
    for(int j=0;j<len;j++)
    {
        a[j]+=b[j];
        if(a[j]>=10)
        {
            a[j+1]+=1;
            a[j]%=10;
        }
    }
    for(int j=0;j<len;j++)
    {

    }
    cout<<endl<<s<<endl;
    return s;
}
*/
int gj(int ga[], int gb[])
{
    int len = max(len_a, len_b);
    // 每次进来都要将存放结果的数组清0，多清一位防止进位后没清
    for (int i = 0; i <= len + 1 && i < 5010; i++)
    {
        sc[i] = 0;
    }
    // 1.逆序存放数组
    //   因为传入的数组参数本身就是逆序存放，所以第一步可以省略
    /* 
    cout << "ga: ";
    for (int k=len_a-1; k>=0; k--){
        cout<<ga[k];
    }
    cout << endl;
    
    cout << "gb: ";
    for (int k=len_b-1; k>=0; k--){
        cout<<gb[k];
    }
    cout <<endl;
    */

    // 2.按位相加
    for (int i = 0; i < len; i++)
    {
        sc[i] = ga[i] + gb[i];
    }
    // 3. 按位处理进位
    for (int i = 0; i < len; i++)
    {
        if (sc[i] >= 10)
        {
            sc[i + 1] = sc[i + 1] + sc[i] / 10;
            sc[i] = sc[i] % 10;
        }
    }
    if (sc[len] > 0)
    {
        len++;
    }
    // 4. 逆序输出， 因为下一次递推还是要逆序计算，这一步就省略了
    /*
    for (int j=len-1; j>=0;j--){
        cout << sc[j];
    }
    cout <<endl;
    */
    return len;
}
int main()
{
    cin >> n;
    sa[0] = 1;
    sb[0] = 2;
    len_a = 1;
    len_b = 1;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    if (n == 2)
    {
        cout << 2 << endl;
        return 0;
    }
    for (int i = 3; i <= n; i++)
    {
        len_c = gj(sa, sb);
        for (int i = 0; i < len_c; i++)
        {
            sa[i] = sb[i];
            sb[i] = sc[i];
            //cout << sc[i];
        }
        //cout << endl;
        len_a = len_b;
        len_b = len_c;
        /*
        if(i==n)
        {
            cout<<"已输出:"<<gj(sa,sb)<<"没了!"<<endl;
        }
        if(i%2==1)
        {
            sa=gj(sa,sb);
        }
        else
        {
            sb=gj(sa,sb);
        }*/
    }

    for (int i = len_c - 1; i >= 0; i--)
    {
        cout << sc[i];
    }
    cout << endl;
    return 0;
}