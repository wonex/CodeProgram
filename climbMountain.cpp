#include <iostream>

using namespace std;

//段誉身具凌波微波，动无常则，若危若安，一次能走一级台阶或者两级台阶，
//他要爬一段30级的山路，问有多少种走法？分析如何计算，然后编程解答。
//进阶问题：当他轻功熟练度提升，一次最多可以走三级，那就结果有什么变化？
//后来走火入魔了，不能走一级，只能走二或三级，又有什么变化？

int climbMountain()
{
    int n = 0;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << ' ' << 1 << ' ' << 0 << endl;
        return 0;
    }
    if (n == 2)
    {
        cout << 2 << ' ' << 2 << ' ' << 1 << endl;
        return 0;
    }
    if (n == 3)
    {
        cout << 3 << ' ' << 4 << ' ' << 1 << endl;
        return 0;
    }
    int a[2], b[3], c[3];
    int tmp = 0;
    a[0] = 2, a[1] = 3;
    b[0] = 1, b[1] = 2, b[2] = 4;
    c[0] = 0, c[1] = 1, c[2] = 1;
    for (int i = 3; i < n; ++i)
    {
        tmp = a[1];
        a[1] += a[0];
        a[0] = tmp;

        tmp = b[2];
        b[2] += b[0] + b[1];
        b[0] = b[1];
        b[1] = tmp;

        tmp = c[2];
        c[2] = c[1] + c[0];
        c[0] = c[1];
        c[1] = tmp;
    }
    cout << a[1] << ' ' << b[2] << ' ' << c[2] << endl;
    return 0;
}