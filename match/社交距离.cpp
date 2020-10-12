#include <iostream>
#include <algorithm>

using namespace std;

int n;
char a[100005];//旅店
int d; //社交距离

int get_distance(int cnt)
{
    int dt = 1, dt1 = 0, dt2=0;
    int p1=-2000000000;//左边的住人房间
    int p2=p1;//右边的住人房间
    int index = -1;

    for (int i = 0; i<cnt; i++){
        //如果当前值是1，那么下个住人房间的左侧住客的房号就是这个房间，
        //右边的房间暂时没有找到，也是要从当前房间开始找。
        if (a[i]=='1'){
            p1=i;
            p2=i;
        }

        if (a[i]=='0'){
            dt1=i-p1;
            //如果原右侧房间在当前位置的左边，那么需要找下一个右边住客的房间号
            if (i>p2) {
                //p1 = p2;    
                int j;
                for (j=i;j<n;j++)
                {
                    if (a[j]=='1')
                    {
                        p2 = j;
                        break;
                    }
                }
                //如有右边没有住客，那么将右边住客的房间号设置为最大值
                if (j==n) 
                    p2=0x7fffffff;
            }
            dt2 = p2-i;
            //cout <<"i=" << i << " p1=" <<p1 <<", p2=" <<p2 <<", dt=" << dt << ",dt1="<<dt1 << ",dt2="<<dt2<<endl; 
            //计算该房间到左右住客的最短社交距离，就是入住这个房间后的社交距离
            int tmp = min(dt1, dt2);
            //如果原社交距离比当前的要小，那么我们选择本次社交距离更大的房间，并登记预约房间号
            if (dt < tmp){
                dt = tmp;
                index = i;
            }     
        }
    }
    //如果找到了可以住人的房间
    if(index >= 0){
        a[index] = '1';
        //cout <<"index="<<index<<endl;
    }
    return dt;
}
int main()
{
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int d1,d2;
    d1 = get_distance(n);
    //cout << d1<<endl;
    d2 = get_distance(n);
    //cout << d2 <<endl;
    d = min(d1,d2);
    cout<<d<<endl;
}