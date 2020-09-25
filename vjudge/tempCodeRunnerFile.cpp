#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>

using namespace std;


char s1[35], s2[35];
int code2(const char* const str1, const char* const str2){
    if(NULL == str1 || NULL == str2)
        return 0;
        
    int len1, len2, i;
    char* tmp = NULL;
    len1 = strlen(str1);
    len2 = strlen(str2);
    
    if(len2 > len1)
        return 0;
        
    tmp = (char*)malloc(len1 * 2);
    memset(tmp, 0, len1*2);
    strcpy(tmp, str1);
    
    for(i = 0; i < len1; i++){
        if(strncmp(tmp + i, str2, len2) == 0){
            free(tmp);
            tmp = NULL;
            return 1;
        }
        tmp[len1 + i] = str1[i];
    }
    
    free(tmp);
    tmp = NULL;
    return 0;
}

int main()
{
    cin >> s1 >> s2;

    if (code2(s1, s2) ==1 || code2(s2, s1)==1){
        cout << "true" <<endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;

}