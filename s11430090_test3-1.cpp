//11430090李郁賓
#include <iostream>
using namespace std;

int main() {
	int n;
	if (!(cin >> n)) return 0;
	
	for (int i = n; i >= 1; --i) {
		for (int j = 0; j < i; ++j) cout << '*';
		cout << '\n';
	}	
	cout << '\n';
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= i; ++j) {
			if (j > 1) cout << ' ';
			cout << j;
		}
		cout << '\n';
	}

	return 0;
}

