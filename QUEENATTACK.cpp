#include <iostream>
using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	while(t--){
	    int n, x, y;
	    cin >> n >> x >> y;
	    int area = 0;
	    area += 3 * (n - 1);
	    int horizontal = min(x - 1, n - x);
	    int vertical = min(y - 1, n - y);
	    area += 2 * min(horizontal, vertical);
	    cout << area << endl;
	}
	return 0;
}
