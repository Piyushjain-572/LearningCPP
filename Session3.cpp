#include<iostream>
using namespace std;

// cout and cin are called objects of outputstream and inputstream resp.
// cout object is used with <<  (Insertion) i.e. insert data on console !!
// cin object is used with >>  (Extraction) i.e. extract data from console !!
int main(){

	int isInternetConnected = 0;
	int isGPSConnected = 1;

	if(isInternetConnected){
		cout<<"You can browse Internet !!\n";

		if(isGPSConnected){
			cout<<"You can Navigate with Maps !!\n";	
		}else{
			cout<<"Please Connect to GPS and try Again !!\n";
		}
		
	}else{
		cout<<"Please Connect to Internet and try Again !!\n";
	}

	if(isInternetConnected && isGPSConnected){
		cout<<"You can browse Internet and access maps for navigation!!\n";
	}else{
		cout<<"Please Connect to GPS and Internet and try Again !!\n";
	}


	int a=0, b=0, c=0;

	cout<<"Enter number a:";
	cin>>a;


	if(a>b){
		if(a>c){
			cout<<"a is greatest: "<<a<<"\n";	
		}else{
			cout<<"c is greatest: "<<c<<"\n";	
		}
	}else{
		if(b>c){
			cout<<"b is greatest: "<<b<<"\n";	
		}else{
			cout<<"c is greatest: "<<c<<"\n";	
		}
	}


	int olaMicro = 1;
	int olaMini = 2;
	int olaBike = 3;
	int olaShared = 4;
	int olaAuto = 5;

	int cabType = 0;
	cout<<"Which cab Type you would like to book ??";
	cin>>cabType;

	// Ladder if/else
	/*
	if(cabType == 1){
		cout<<"You booked OLA MICRO\n";
	}else if(cabType == 2){
		cout<<"You booked OLA MINI\n";
	}else if(cabType == 3){
		cout<<"You booked OLA BIKE\n";
	}else if(cabType == 4){
		cout<<"You booked OLA SHARED\n";
	}else if(cabType == 5){
		cout<<"You booked OLA AUTO\n";
	}else{
		cout<<"Select a Valid Cab Type First\n";
	}
	*/

	switch(cabType){
		case 1:
			cout<<"You booked OLA MICRO\n";
			break;

		case 2:
			cout<<"You booked OLA MINI\n";
			break;
			
		case 3:
			cout<<"You booked OLA BIKE\n";
			break;
			
		case 4:
			cout<<"You booked OLA SHARED\n";
			break;
			
		case 5:
			cout<<"You booked OLA AUTO\n";
			break;	

		default:
			cout<<"Select a Valid Cab Type First\n";
			break;				
	}

	int age = 2;
	if(age>18){
		cout<<"You Can Vote\n";
	}

	cout<<"is age greater than 18: "<<(age>18)<<"\n";
	
	
	int num = 0;
	int i = 111;

	cout<<"Enter a Number:";
	cin>>num;

	/*cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
	i++;
	cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
	i++;
	cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
	i++;
	cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
	i++;
	cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";*/

	// in while loop, we check condition in beginning !!
	while(i<=10){
		cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
		i++;
	}

	cout<<"Enter Number Again:";
	cin>>num;

	i = 111;

	do{
		cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
		i++;
	}while(i<=10); // in do while loop, we check condition in end !!

	cout<<"Enter Number Again:";
	cin>>num;
	for(i=1;i<=10;i++){
		cout<<num<<" "<<i<<"'s are "<<(num*i)<<"\n";
	}
	
	for(int i=1;i<=3;i++){

		cout<<i<<"\n";
		
		for(int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		
		cout<<"\n";
	}

	return 0;
}


