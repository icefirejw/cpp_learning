#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int a1[1000],a2[1000],a3[1000];
int b1[1000],b2[1000],b3[1000];
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        cin >> a1[i] >> a2[i] >> a3[i];
        cin >> b1[i] >> b2[i] >> b3[i];
    }

    for (int i=0; i<n; i++)
    {
        if (a1[i]==b1[i] && a2[i] == b2[i] && a3[i] == b3[i]){
            cout << "Same" << endl;
        }
        else if (a1[i]>b1[i] || a1[i]==b1[i]&&a2[i]>b2[i] || a1[i]==b1[i]&&a2[i]==b2[i]&&a3[i]>b3[i]){
            cout << "First" <<endl;
        }
        else{
            cout << "Second" <<endl;
        }
    }
    return 0;
}