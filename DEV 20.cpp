#include <iostream>
using namespace std;
int main(){
	int numbers[7];
	int  largest = numbers[0];
	int smallest = numbers[0];
	for(int i=0; i<7;i++){ 
	cout<<"enter the numbers:"<<endl;
	cin>>numbers[i];
}
for(int i=0;i<7;i++){
	if(numbers[i]>largest)
	if(numbers[i]<smallest)
	largest=numbers[i];
	smallest=numbers[i];
}
cout<<" the largest number is:"<<largest;
cout<<" the smallest number is:"<<smallest;
	return 0;
}

