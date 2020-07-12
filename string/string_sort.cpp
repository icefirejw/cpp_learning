#include <iostream>
#include <string>

using namespace std;

string str;

void swap(char &a, char &b){
	char t = a;
	a = b;
	b = t;
}

void str_sort(string str, int begin, int len){
	if (begin == len){
		cout << str <<endl;
	}
	else
	{
		for (int i = begin; i<=len; i++){
			if (begin!=i && str[begin]==str[i]){
				continue;
			}
			else
			{
				swap(str[begin],str[i]);
				str_sort(str, begin+1, len);
				swap(str[begin],str[i]);
			}
		}
	}
}
int main(int argc, char** argv) {
	cin>>str;
	
	if (str.size() == 0)
	{
		cout<<"Error string"<<endl;
		return -1;
	}	
	str_sort(str, 0, str.size()-1);
	
	return 0;
}
