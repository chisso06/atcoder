// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#define ll long long
#define rep(i, s, n) for (ll i = s; i < n; i ++)
#define rrep(i, s, n) for (ll i = n - 1; i >= s; i --)
#define find(list, value) find(list.begin(), list.end(), value)
using namespace std;

vector<int>	dx = {-1, 0, 1, 0};
vector<int>	dy = {1, 0, -1, 0};

int	main() {
	int	n, a, b, c, answer;
	cin >> n >> a >> b;
	rep (i, 0, n) {
		cin >> c;
		if (c == a + b)
			answer = i + 1;
	}
	cout << answer << endl;
	return 0;
}
