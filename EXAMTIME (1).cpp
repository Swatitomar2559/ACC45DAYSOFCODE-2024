
#include <iostream>
using namespace std;

int main() {
    long long int t;
    cin >> t;
    while (t--) {
        int a[3], b[3];
        cin >> a[0] >> a[1] >> a[2];
        cin >> b[0] >> b[1] >> b[2];
        int sum1 = a[0] + a[1] + a[2];
        int sum2 = b[0] + b[1] + b[2];
        
        if (sum1 > sum2) {
            cout << "DRAGON\n";
        } else if (sum1 < sum2) {
            cout << "SLOTH\n";
        } else {
            if (a[0] > b[0]) {
                cout << "DRAGON\n";
            } else if (a[0] < b[0]) {
                cout << "SLOTH\n";
            } else {
                if (a[1] > b[1]) {
                    cout << "DRAGON\n";
                } else if (a[1] < b[1]) {
                    cout << "SLOTH\n";
                } else {
                    cout << "TIE\n";
                }
            }
        }
    }
    return 0;
}
