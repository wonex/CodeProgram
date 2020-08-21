#include <iostream>

using namespace std;

//小陆每天要写一份工作日报，日报标题含有日期。
//几年后，他翻开以前的日报，想知道两份日报的日期是否同为星期几，请编程帮助他判断。

const int daysInMonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

inline bool isLeapYear(int year) { return year % 400 == 0 || (year % 4 == 0 && year % 100 != 0); }

inline int allDaysOfYear(int year)
{
	if (isLeapYear(year))
		return 366;
	else
		return 365;
}

int daysBetweenYears(int year1, int year2)
{
	int days = 0;
	for (; year1 < year2; ++year1)
	{
		days += allDaysOfYear(year1);
	}
	return days;
}

int daysInYear(int year, int month, int day)
{
	int days = day;
	for (int i = 0; i < month - 1; ++i)
	{
		if (i == 1 && isLeapYear(year))
			days += 1;
		days += daysInMonth[i];
	}
	return days;
}

int isSameWeekDay()
{
    int data1[3];
    int data2[3];
    int days1 = 0;
    int days2 = 0;
    int T;
    cin >> T;
    for (int i = 0; i < T; ++i)
    {
        cin >> data1[0] >> data1[1] >> data1[2];
        cin >> data2[0] >> data2[1] >> data2[2];

        const int Year = data1[0] < data2[0] ? data1[0] : data2[0];
        days1 = daysBetweenYears(Year, data1[0]) + daysInYear(data1[0], data1[1], data1[2]);
        days2 = daysBetweenYears(Year, data2[0]) + daysInYear(data2[0], data2[1], data2[2]);
        if (abs(days2 - days1) % 7 == 0)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    cout << days1 << '\t' << days2 << endl;

    return 0;
}