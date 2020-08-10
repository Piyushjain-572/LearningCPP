#include<iostream>
using namespace std;

// We are passing Values
// void swap(int a, int b){
// We are passing References

void swap(int &a, int &b){

	cout<<"a before swap is: "<<a<<"\n";
	cout<<"b before swap is: "<<b<<"\n";

	int temp = a;
	a = b;
	b = temp;

	cout<<"a after swap is: "<<a<<"\n";
	cout<<"b after swap is: "<<b<<"\n";
}

void printArray(int someArr[5]){ // Reference Copy

	cout<<"someArr is: "<<someArr<<"\n";

	for(int i=0;i<5;i++){
		someArr[i] = someArr[i]+10;
	}
	cout<<"\n";
}
int main(){
	
	int x = 10;
	int y = 20;

	cout<<"x before swap is: "<<x<<"\n";
	cout<<"y before swap is: "<<y<<"\n";

	swap(x, y);

	cout<<"x after swap is: "<<x<<"\n";
	cout<<"y after swap is: "<<y<<"\n";
	
	int a = 10;
	int b = a; // Value Copy

	a++;

	cout<<"a is: "<<a<<"\n"; // 11
	cout<<"b is: "<<b<<"\n"; // 10

	x = 10;
	int &z = x; // Reference Copy | Creating an Alias name !!
	// y is another name for x
	x++;
	++z;
	cout<<"x is: "<<x<<"\n"; // 12
	cout<<"z is: "<<z<<"\n"; // 12
	
	int arr[5];

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	cout<<"arr is: "<<arr<<"\n";

	printArray(arr);

	for(int i=0;i<5;i++){
		cout<<arr[i]<<"  ";
	}

	// Direct Assignment is an error
	// int anotherArr[5] = arr;
	return 0;
}
