#include <bits/stdc++.h>
using namespace std;

const int nmax = 1e5 + 1;
int a[nmax];

int main () {
	int n; 
	cout << "Nhap n: "; cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << "Nhap gia tri can tim: ";
	int x; cin >> x;
	sort(a, a + n);
	int l = 0, r = n;
	int pos = -1;
	while (l < r) {
		int m = (l + r)/2;
		if (a[m] == x) {
			pos = m;
			break;
		}
		else if (a[m] < x) {
			l = m + 1;
		}
		else r = m + 1;
	}
	if (pos == -1) {
		cout << "Khong tim thay!\n";
	}
	else cout << "Vi tri gia tri can tim la: " << pos << endl;
	return 0;
}

// 1 3 5 6 7 9
