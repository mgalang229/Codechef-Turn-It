#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int u, v, a, s;
		cin >> u >> v >> a >> s;
		// follow the formula given in the problem statement
		int car_velocity = u * u - 2 * a * s;
		cout << (car_velocity <= v * v ? "Yes" : "No") << '\n';
	}
	return 0;
}
