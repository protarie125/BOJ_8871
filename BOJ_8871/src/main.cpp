#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	cout << (n + 1) * 2 << ' ' << (n + 1) * 3;

	return 0;
}