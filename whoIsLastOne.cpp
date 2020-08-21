#include <iostream>
#include <vector>

using namespace std;

//有n个人围成一圈，顺序排号。从第一个人开始报数（从1到3报数），凡报到3的人退出圈子，
//问最后留下的是原来第几号的那位。

int whoIsLastOne()
{
    int n;
    cin >> n;
    vector<int> nums(n, 0);
    int rest = n;
    int count = 1;
    int i = 0;
    while (rest > 1)
    {
        if (nums[i] == 0)
        {
            if (count == 3)
            {
                nums[i] = -1;
                count = 0;
                rest--;
            }
            count++;
        }
        i++;
        if (i >= n)
            i = 0;
    }

    for (int i = 0; i < n; ++i)
    {
        if (nums[i] == 0)
        {
            cout << i + 1 << endl;
            break;
        }
    }
    return 0;
}

//int M = 3;
//int whoIsLastOne() {
//    int n = 0;
//    cin >> n;
//    int s = 0;
//    for (int i = 2; i <= n; ++i)
//    {
//        s = (s + M) % i;
//    }
//    cout << s + 1 << endl;
//    return 0;
