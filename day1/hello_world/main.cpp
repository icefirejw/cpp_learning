#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstdarg>
#include <cstring>

#define DEBUG_GOBANG

using namespace std;
void BangDebug(const char* output,...);

void PrintBang()
{
    char buf[4096];
    int positions_[16][16];
	int columns_ = 16;
	int rows_ = 16;
	positions_[3][4] = 1;
	positions_[5][4] = -1;
	
	memset(buf, 0, 1000);
    for (int i=0; i<rows_; i++) {
        int cnt = 0;
        for (int j=0; j<columns_ && cnt<1000; j++) {
            int pos = positions_[i][j];
            if (pos == 1) {
                buf[cnt++] = '*';
            }
            else if (pos == -1) {
                buf[cnt++] = 'x';
            }
            else {
                buf[cnt++] = '0';
            }
            if (cnt >= 1000)
                break;
        }
        BangDebug("===== %2d: ",cnt);
        BangDebug("%s\n",buf);
    }
}

void BangDebug(const char* output,...)
{
#ifdef DEBUG_GOBANG

    char buf[4096]={0};
    va_list vlArgs;
    va_start(vlArgs, output);

    _vsnprintf(buf, sizeof(buf)-1, output, vlArgs);
	va_end(vlArgs);
    //qDebug()<< buf;
	std::cout<<buf;
	
#endif
}
int main(int argc, char** argv) {
	//printf ( "%0.3f",3.1415926);
	PrintBang();
	
	return 0;
}
