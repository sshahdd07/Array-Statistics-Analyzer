#include <iostream>
using namespace std;

int main(){
	int num [5];
	int sum = 0;
	int max,min;
	int even=0, odd=0;
	double average;
	
	cout<<" Enter 5 numbers:  "<<endl;
	
	for (int i=0; i<5; i++){
		cin>>num[i];
		sum+=num[i];
		 if (i==0){
		 	max=num[i];
		 	min=num[i];
		 }
		 if(num[i]>max)
		 max=num[i];
		 if ( num[i]<min)
		 min=num[i];
		 if(num[i]%2==0)
		 even++;
		 else
		 odd++;
	}
	average = sum/5.0;
	
	cout<<"\nSum = "<<sum<<endl;
	cout<<"Average = "<<average<<endl;
	cout<<"Maximum = "<<max<<endl;
	cout<<"Minimum = "<<min<<endl;
	cout<<"Even numbers = "<<even<<endl;
	cout<<"Odd numbers = "<<odd<<endl;
	
	return 0;
}