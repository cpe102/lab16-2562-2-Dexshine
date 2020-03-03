#include<iostream>
#include<cstdlib>
#include<ctime>
#include<vector>
using namespace std;

vector<int> randomVector(int);
void showVector(vector<int>);
int dotProduct(vector<int>,vector<int>);

int main(){
	srand(time(0));
	vector<int> x = randomVector(5);
	vector<int> y = randomVector(5);
	int z = dotProduct(x,y);
	showVector(x);
	cout << " . ";
	showVector(y);
	cout << " = " << z;
	
	return 0;
}

//Write Definition of randomVector() showVector() and dotProduct() here
vector<int> randomVector(int N){
	vector<int> w(N);
	for(int i=0;i<N;i++){
		w[i] = rand()%9;
	}
	return w;
}
void showVector(vector<int> x){
	cout << "[";
	for(int i=0;i<x.size();i++){
		cout << x[i] << " ";
	}
	cout << " ]";

}
int dotProduct(vector<int> x,vector<int> y){
	int ans=0;
	for(int i=0;i<x.size();i++){
		ans += x[i]*y[i];
	}
	return ans;
}


