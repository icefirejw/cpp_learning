#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

//定义结构体
struct Student
{
    char name[16];
    char school[16];
    int age;
    double score;
};

//定义结构体变量
struct Student students[50];

int init_student(struct Student &st)
{
    cout << "input the name:";
    cin >> st.name;
    cout << "input school name:";
    cin >> st.school;
    cout << "input age:";
    cin >> st.age;
    cout << "input score:";
    cin >> st.score;
    return 0;
}
bool compare(struct Student st1, struct Student st2)
{
    return st1.score>st2.score;
}
int list_all_students(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << students[i].name << endl;
        cout << students[i].age << endl;
        cout << students[i].school << endl;
        printf("%.2f\n", students[i].score);
        cout << "------------------" << endl;
    }
    return 0;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        init_student(students[i]);
    }

    cout << endl;

    list_all_students(n);
    
    sort(students, students+n, compare);

    cout << "#### list is sorted #####" <<endl;

    list_all_students(n);

    return 0;
}