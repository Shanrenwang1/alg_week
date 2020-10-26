#include <iostream>
#include <algorithm>
#include <stack>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
#define MAXSIZE 10000
#define cin2 cin >> a >> b
#define int2 int a = 0, b = 0;
#define cin3 cin >> a >> b >> c
#define int3 int a = 0, b = 0, c = 0;

/* 广度优先 栈来解决 */
int main() {
    int n = 0;
    cin >> n;
    while (n--) {
        int3;
        cin3;
        char s[a][b][c];
        for (int i = 0; i < a; ++i) {
            for (int j = 0; j < b; ++j) {
                for (int k = 0; k < c; ++k) {
                    cin >> s[i][j][k];
                }
            }
        }
    }
    return 0;
}
