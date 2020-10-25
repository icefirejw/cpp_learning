#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s1, s2;
int a[250],b[250],c[250];
int i;
int main(){
    cin>>s1>>s2;

    //被减数小于减数
    if (s1.size()<s2.size() || (s1.size()==s2.size()&&s1<s2)){
        swap(s1,s2);
        cout << "-";
    }
    //字符串逆序存入数组
    for (i=0; i<(int)s1.size(); i++){
        a[i] = s1[s1.size()-i-1] - '0';
    }
    for (i=0; i<(int)s2.size(); i++){
        b[i] = s2[s2.size()-i-1] - '0';
    }

    //每位相减
    int len = s1.size();

    for (i=0; i<len; i++){
        if (a[i]<b[i]){ //如果被减数比减数小，向高位借一位
            a[i] = a[i] + 10;
            a[i+1] = a[i+1] - 1;
        }
        c[i] = a[i] - b[i];
    }

    // 逆序输出
    // 找到第一个不是0的首位
    int p=0;
    for (i=len-1;i>=0; i--){
        if (c[i]!=0){
            p=i;
            break;
        }
    }
    for (i=p; i>=0; i--){
        cout << c[i];
    }
    return 0;
}