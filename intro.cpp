#include<bits/stdc++.h>
using namespace std;



int findmax(vector<int>arr){
	int mx = INT_MIN;
	for(int i=0; i<arr.size(); i++) mx = max(mx, arr[i]);
	return mx;
}

int bs(vector<int>arr, int key){
	int s = 0;
	int e = arr.size();
	while(s <= e){
		int mid = s + (e - s)/2;
		if(arr[mid] == key){
			return mid;
		}
		else if(arr[mid] > key){
			s = mid + 1;
		}
		else e = mid - 1;
	}
	return -1;
}

int main(){
	cout<<"Hello World"<<endl;
	cout<<"Hello Rahul"<<endl; 
	return 0;
}