#include<iostream>
using namespace std;


int main(){
	int n,m;
	unsigned long long x,y,d;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x>>y;
		d = y-x;
		m=0;
		for(int j=0; j<100000; j++){
			if(d ==j*j){
				cout<<j*2-1<<"\n";
				break;
			}
			else if(d> j*j && d < (j+1)*(j+1)){
				if( d - (j*j) >= (j+1)){
					cout<<j*2+1<<"\n";
					break;
				}
				else{
					cout<<j*2<<"\n";
					break;
				}
			}
		}
		
	}
}