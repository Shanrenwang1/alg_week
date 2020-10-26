#include <iostream>
#include <algorithm>
#include <stack>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
#define cin2 cin >> a >> b
#define int2 int a = 0, b = 0;
#define cin3 cin >> a >> b >> c
#define int3 int a = 0, b = 0, c = 0;

#define MAXSIZE 15
int s[MAXSIZE][MAXSIZE];
#define s0 memset(s, 0, sizeof(s))
#define s1 memset(s, 1, sizeof(s))
int times[10000];
int mytimes;
void check(int x1, int y1, int x2, int y2) {
    if (x1 < 2 || x1 > 9 || y1 < 2 || y1 > 9 || !s[x1][y1]) {
        return;
    }
    if ((x1 == x2) && (y1 == y2)) {
        times[mytimes] = 1;
        return;
    }
    mytimes++;
    s[x1][y1]=0;
    check(x1-2, y1+1, x2, y2);
    check(x1-2, y1-1, x2, y2);

    check(x1-1, y1+2, x2, y2);
    check(x1-1, y1-2, x2, y2);

    check(x1+2, y1+1, x2, y2);
    check(x1+2, y1-1, x2, y2);

    check(x1+1, y1+2, x2, y2);
    check(x1+1, y1-2, x2, y2);
    mytimes--;
}

int main() {
    char cx1, cx2;
    int x1, x2;
    int y1, y2;
    while (cin >> cx1 >> y1 >> cx2 >> y2) {
        s1;
        mytimes = 0;
        memset(times, 0, 10000);
        x1 = cx1 - 'a' + 2;
        x2 = cx2 - 'a' + 2;
        y1++;
        y2++;
        cout << "To get from ";
        cout << cx1 << y1-1;
        cout << " to ";
        cout << cx2 << y2-1;
        cout << " takes ";
        check(x1, y1, x2, y2);
        for (int i = 0; i < 10000; ++i) {
            if (times[i]) {
                cout << i;
                break;
            }
        }
        cout << " knight moves." << endl;
    }
    return 0;
}
