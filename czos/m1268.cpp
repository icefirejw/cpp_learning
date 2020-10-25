#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string s1, s2;
int a[250],b[250],c[250];
int i;
int main(){
    cin>>s1>>s2;

    //字符串逆序存入数组
    for (i=0; i<(int)s1.size(); i++){
        a[i] = s1[s1.size()-i-1] - '0';
    }
    for (i=0; i<(int)s2.size(); i++){
        b[i] = s2[s2.size()-i-1] - '0';
    }

    //每位相加
    int len = max(s1.size(), s2.size());

    for (i=0; i<len; i++){
        c[i] = a[i] + b[i];
    }
    //处理每位的进位
    for (i=0; i<len; i++){
        if (c[i]>=10){
            c[i+1] = c[i+1] + c[i]/10;
            c[i] = c[i]%10;
        }
    }

    // 逆序输出
    if (c[len] != 0){ //最高位有进位
        len++;
    }
    for (i=len-1; i>=0; i--){
        cout << c[i];
    }
    return 0;
}