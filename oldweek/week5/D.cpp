//
// Created by fengl on 2020/10/4.
//

#include <iostream>
using namespace std;
#include <algorithm>

#define llong long long

class KISS { // 为了能够两个数组按第一个数组排序
public:
    int a,b;
    bool operator<(const KISS& other) const {
        /* 把原有的的’<‘改成’<‘就可以逆排序（虽然不一定规范） */
        return a > other.a;
    }
};

int n, m;

void init_kiss(KISS kiss[]) { // 录入数据
    for (int i = 0; i < m; ++i) {
        cin >> kiss[i].a >> kiss[i].b;
    }
    sort(kiss, kiss + m);
}

/* 思路是：当买完需要的第一杯后，剩下固定杯数的奶茶应该买同一种，那么容易计算最大值 */
long long best_second_kiss(KISS kiss[], int bought_first) {
    long long max = 0;
    long long sum = 0;
    for (int i = 1; i <= m; ++i) {
        if (i <= bought_first) { // 买了第一杯的，不用再买第一杯了
            sum = kiss[i-1].b * (n - bought_first);
        } else {
            sum = kiss[i-1].a + kiss[i-1].b * (n - bought_first - 1); // 否则，必须加上第一杯
        }
        max = max > sum? max : sum;
    }
    return max;
}

long long buy_buy_buy(KISS kiss[]) { // 直接遍历，超时再考虑二分
    long long max = 0;
    for (int i = 1; i <= m; ++i) {
        long long sum = 0;
        for (int j = 1; j <= i; ++j) { // 将已买的第一杯加上
            sum += kiss[j-1].a;
        }
        sum += best_second_kiss(kiss, i);
        cout << i << ": "<< sum << endl;
        max = max > sum? max : sum;
    }
    return max;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        KISS kiss[m];
        init_kiss(kiss);
        cout << buy_buy_buy(kiss) << endl;
    }
    return 0;
}