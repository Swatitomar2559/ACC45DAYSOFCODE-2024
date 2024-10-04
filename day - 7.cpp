#include <bits/stdc++.h>
using namespace std;

int main() {

int TT =1; cin >>TT;
for( int tt =1;tt <=TT; tt++){
    int x,y;
    cin>>x>>y;
    int ans1 =500-2*x+1000-4*(x+y);
    int ans2 = 500-2*(x+y) + 1000-4*y;
    int mx = max(ans1, ans2);

cout <<mx<<"\n";
}
return 0 ;










}
