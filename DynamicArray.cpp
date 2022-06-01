#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0, q = 0;
    int LA = 0;
    int m, x, y;
    int idx = 0;
    int p;
    
    cin >>n >> q;
    
    vector < vector <int> > a(n);
    
    for (int i = 0; i < q; i ++) {
        cin >> m >> x >> y;
        idx = ((x ^ LA) % n);
        if (m == 1) {
            a[idx].push_back(y);
        }
        else if (m == 2) {
            p = (y % a[idx].size());
            LA = a[idx][p];
            cout << LA << endl;
        }
        
    }
    return 0;
}
