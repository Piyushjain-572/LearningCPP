#include<iostream>
using namespace std;

int main(){

	// a is created in stack
	int a = 10; // ok
	// int a = 10, 20; error, as a is a single value container

	// Multi Value Container :  Array
	// arr is also in stack
	// arr will not show value, it will show address of 1st element in array !!
	// Array is Homogeneous Storage Container i.e. Data must be same type
	int arr[10];

	cout<<"a is: "<<a<<"\n";
	cout<<"arr is: "<<arr<<"\n";

	cout<<"Address of a is: "<<&a<<"\n";
	cout<<"Address of arr is: "<<&arr<<"\n";

	/*
	arr[0] = 10;
	arr[1] = 20;
	arr[9] = 111;
	*/

	// Write Operation in Array
	cout<<"Enter 10 numbers: \n";
	for(int i=0;i<10;i++){
		// arr[i] = 10*(i+1);
		cin>>arr[i];
	}

	// Read Operation in Array
	for(int i=0;i<10;i++){
		cout<<arr[i]<<"  "<<&arr[i]<<"\n";
	}

	a = 10;
	cout<<"a is: "<<a<<" address of a is: "<<&a<<"\n";

	// Value Copy 
	int b = a; 
	cout<<"b is: "<<b<<" address of b is: "<<&b<<"\n";

	// We modified contents of b
	b = 111;

	cout<<"After Modifications\n";

	cout<<"a is: "<<a<<" address of a is: "<<&a<<"\n";
	cout<<"b is: "<<b<<" address of b is: "<<&b<<"\n";


	int arr1[5];
	for(int i=0;i<5;i++){
		arr1[i] = i+10;
	}
	cout<<"arr1 is: "<<arr1<<" address of arr1 is: "<<&arr1<<"\n";
	for(int i=0;i<5;i++){
		cout<<arr1[i]<<"  "<<&arr1[i]<<"\n";
	}

	int arr2[5];

	// we did see with assignment we are unable to copy
	// we are now performing a deep copy operation
	for(int i=0;i<5;i++){
		arr2[i] = arr1[i];
	}

	cout<<"arr2 is: "<<arr2<<" address of arr2 is: "<<&arr2<<"\n";
	for(int i=0;i<5;i++){
		cout<<arr2[i]<<"  "<<&arr2[i]<<"\n";
	}


	return 0;
}
