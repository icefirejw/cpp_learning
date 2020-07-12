#include <iostream>

using namespace std;
int a[100];
int b[100];
int c[100];
int main()
{
    int n;
    cin>>n;
    for (int i=0; i<n; i++){
        cin >> a[i] >>b[i] >> c[i];
    }

    for (int i=0; i<n; i++){
        bool isExist = false;
        for (int x=1000; x<=9999; x++ ){
            if (x%a[i]==0 && (x+1)%b[i]==0 && (x+2)%c[i]==0){
                isExist = true;
                cout << x <<endl;
                break;
            }
        }
        if (!isExist){
            cout << "Impossible"<<endl;
        }
    }
    
}