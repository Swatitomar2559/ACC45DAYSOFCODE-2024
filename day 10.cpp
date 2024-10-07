#include <bits/stdc++.h>
using namespace std;

void solution() {
	int W ,x,y,z;
	cin >> W>> x>> y>>z;
	if(x == W|| y==W||z ==W||x+y== W||x+z ==W || y+z ==W||x+y+z ==W){
	cout << "yes \n";
	}
	else {
	    cout <<"no\n";
	   
	}
}
int main(){
    int T ;
    cin >> T;
    while(T--)solution();
    return 0;
    
}
	
	
	
	
	
	
	
	





	
	

