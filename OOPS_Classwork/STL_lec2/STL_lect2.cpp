#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    // array<int,100>arr;
    // array<int,3>arr;
    // array<int,5>arr={1};
    // int arr[10000]={0};
    // array<int,5>arr;
    // arr.fill(0);
    // arr.fill(5);
    // arr[i];
    // arr.at(1);
    // for(auto it=arr.begin();it!=arr.end();it++){
    //     cout<<*it<<" ";
    // }
//    begin(),end(),rbegin(),rend()
    array<int,5>arr={1,4,5,6,7};
    for(auto it=arr.begin();it!=arr.end();it++){
        cout<<*it<<" ";
    }//1 4 5 6 7
    for(auto it=arr.rbegin();it<arr.rend();it++){
        cout<<*it<<" ";
    }//7 6 5 4 1
    for(auto it=arr.end()-1;it>=arr.begin();it--){
        cout<<*it<<" ";
    }//7 6 5 4 1
    
//    for each loop
for(auto it : arr){
	cout<<it<<"  ";
}
//in string
string s="Shiwangi";
for(autoc:s){
	cout<<c<<"";
}
int arr[50];
vector<int>arr;    // ->{}
cout<<arr.size()<<endl;      //print 0
arr.push_back(0);     //{0}
arr.push_back(2);         //{0,2}
cout<<arr.size()<<endl; //prints 2
    
    arr.pop_back; //{0}
    cout<<arr.size(); //prints 1
    arr.push_back(0); //{0,0}
    arr.push_back; //{0,0,2}
    arr.clear(); //erase all elements at once
    vector<int>arr1(4,0); //{0,0,0,0}
    return 0;
}
