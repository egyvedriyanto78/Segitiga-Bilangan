#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	cin>>n;
	cout<<endl;
	
	if (n >= 1 && n < 10 ){
		for(int x = n; x > 0; x--){
		    for(int y = 0; y < x; y++){
			    cout << x;}
				    cout<<endl;}
	}else {cout<<"Bilangan tidak sesuai!";}


		
		
	return 0;
}
