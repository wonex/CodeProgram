#include<iostream>
#include<cmath>
#include<iomanip>
#include<map>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

template<typename T>
struct CompareByValues {
	bool operator() (const T& rth1, const T& rth2) {
		return rth1.second > rth2.second;
	}
};

ostream& operator<<(ostream& out, const pair<int, string>& rth) {
	return out << rth.first << '\t' << rth.second;
}

int sortByValue()
{
	map<int, string> index_count;
	index_count[1] = "1";
	index_count.insert(pair<int, string>(2, "2"));
	index_count.insert(make_pair(3, "3"));
	index_count.insert(map<int, string>::value_type(4, "4"));


	for (map<int, string>::const_iterator iter = index_count.begin(); iter != index_count.end(); ++iter)
	{
		cout << *iter << endl;
	}

	vector<pair<int, string>> index_vec(index_count.begin(), index_count.end());

	sort(index_vec.begin(), index_vec.end(), CompareByValues<pair<int, string>>());

	for (vector<pair<int, string>>::const_iterator iter = index_vec.begin(); iter != index_vec.end(); ++iter)
	{
		cout << *iter << endl;
	}
}
