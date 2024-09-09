//Components off STL(standard tempelate library)
//containers,algorithms,iterator
//in main function we can store 10^6 values in array and outside we can store 10^7 values
#include <iostream>
using namespace std;
//outside it will give 5 zeroes and inside it will five garbage value
//int arr[5]={1};
//for(int i=0;i<5;i++){
//	cout<<arr[i];
//}
int arr[5]={1};
//for(int i=0;i<5;i++){
//	cout<<arr[i];
//}
 int main(){
// 	int arr[5];  
// 	for (int i=0;i<5;i++){
// 		cout<<arr[i];
//	 }
//here output is 10000 but this will give error outside the main function 
//int arr[5]={1};
for(int i=0;i<5;i++){
	cout<<arr[i];
}
 	return 0;
 }
