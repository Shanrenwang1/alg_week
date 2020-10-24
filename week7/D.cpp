#include <iostream>
#include <algorithm>
#include <stack>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <iomanip>
using namespace std;
#define MAXSIZE 200000




int main() {
    int loop_number, candy_number, girl_eaten_num;
    bool candy[MAXSIZE];
    stack<bool> stack_candy;
    cin >> loop_number;
    while (loop_number--) {
        cin >> candy_number;
        girl_eaten_num = 0;
        while (!stack_candy.empty()) {
            stack_candy.pop();
        }

        for (int i = 0; i < candy_number; ++i) {
            cin >> candy[i];
        }
        for (int i = (candy_number - 1); i >= 0; --i) {
            stack_candy.push(candy[i]);
        }

        bool flag = true;
        while (!stack_candy.empty()) {
            if (flag) {
                if (stack_candy.top()) {
                    girl_eaten_num++;
                }
                stack_candy.pop();
                if (!stack_candy.empty() && !stack_candy.top()) {
                    stack_candy.pop();
                }
                flag = false;
            } else {
                stack_candy.pop();
                if (!stack_candy.empty() && stack_candy.top()) {
                    stack_candy.pop();
                }
                flag = true;
            }
        }
        cout << girl_eaten_num << endl;
    }
    return 0;
}
