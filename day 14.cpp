# include <bits/stdc++.h>
using namespace std;

void solution(){
    int A,B,C,D;
    cin >> A>> B>>C>>D;
    cout << max(A,B)+max(C,D) << "\n";
}

int main(){
    int T;
    cin >> T;
    while(T--) solution ();
    return 0;
}