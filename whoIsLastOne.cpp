#include <iostream>
#include <vector>

using namespace std;

//��n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������������3�����˳�Ȧ�ӣ�
//��������µ���ԭ���ڼ��ŵ���λ��

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
