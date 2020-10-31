#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
#define cin2 cin >> a >> b
#define int2 int a = 0, b = 0;
#define cin3 cin >> a >> b >> c
#define int3 int a = 0, b = 0, c = 0;

#define MAXSIZE 110
int s[MAXSIZE][MAXSIZE];
int2;
int k, by, bx, ey, ex;
int main() {
    int n;
    char ch;
    cin >> n;
    while (n--) {
        cin2;
        for (int i = 1; i <= a; ++i) {
            for (int j = 1; j <= b; ++j) {
                cin >> ch;
                if (ch == '*') {
                    s[i][j] = -2;
                } else {
                    s[i][j] = -1;
                }
            }
        }
        cin >> k >> by >> bx >> ey >> ex;
        s[bx][by] = 0;
        for (int l = 0; l <= k; ++l) {
            for (int i = 1; i <= a; ++i) {
                for (int j = 1; j <= b; ++j) {
                    if (s[i][j] == l) {


                        for (int m = j+1; m <= b; ++m) {
                            if (s[i][m] == -2 || s[i][m] == l) break;
                            s[i][m] = l + 1;
                        }
                        for (int m = j-1; m >= 1; --m) {
                            if (s[i][m] == -2 || s[i][m] == l) break;
                            s[i][m] = l + 1;
                        }

                        for (int m = i+1; m <= a; ++m) {
                            if (s[m][j] == -2 || s[m][j] == l) break;
                            s[m][j] = l + 1;
                        }
                        for (int m = i-1; m >= 1; --m) {
                            if (s[m][j] == -2 || s[m][j] == l) break;
                            s[m][j] = l + 1;
                        }


                    }
                }
            }
        }
//        for (int i = 1; i <= a; ++i) {
//            for (int j = 1; j <= b; ++j) {
//                cout << s[i][j] << ' ';
//            }
//            cout << endl;
//        }
//        cout << s[ex][ey] << endl;
        if (s[ex][ey] == -1) {
            cout << "no" << endl;
        } else {
            cout << "yes" << endl;
        }
    }
    return 0;
}
