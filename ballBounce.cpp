#include <iostream>

using namespace std;

//һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻
//�����£������ڵ�n�����ʱ�������������ף���n�η�����ߣ���n<=10��
//�������Ϊ6λС��

int ballBounce()
{
    int n;
    cin >> n;
    cout.precision(6);
    if (n == 1)
    {
        cout << fixed << 100.0 << ' ' << 50.0 << endl;
        return 0;
    }
    float distance = 100;
    float high = 50;
    for (int i = 1; i < n; ++i)
    {
        distance += 2.0 * high;
        high /= 2.0;
    }
    cout << fixed << distance << ' ' << high << ' ' << endl;
}

//int ballBounce() {
//    int n = 0;
//    float ans1 = 0;
//    float ans2 = 0;
//    cin >> n;
//    if (n == 1) cout << 100.000000 << ' ' << 50.000000;
//    else
//    {
//        ans1 = 100.0 * pow(0.5, n);
//        ans2 = 100.0 + 200.0 * (1 - pow(0.5, n - 1));
//        cout << setprecision(6) << fixed << ans2 << ' ' << ans1 << endl;
//        //cout  << ans2 << ' ' << ans1 << endl;
//    }
//    return 0;
//}