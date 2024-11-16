//Question 1: Find Immediate Smaller Than X

#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int x;
   cin>>x;
   int result=-1;
   for(int i=0;i<n;i++){
       if(arr[i]<x && (result==-1 || arr[i]>result)){
           result=arr[i];
       }
   }
   cout<<result;    

    return 0;
}

//Question 2: To find the area and perimeter of the rectangle (i did it in simple way)
#include <iostream>
using namespace std;
int main(){
    int length,breadth;
    cin>>length>>breadth;
    cout<<length*breadth<<endl;
    cout<<2*(length+breadth)<<endl;
    return 0;
}

// Question 3:  Find leaders in an array.

#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   for(int i=0;i<n;i++){
       int j;
       for( j=i+1;j<n;j++)
       {
           if(arr[j]>arr[i]){
               break;
           }
       }
       if(j==n){
           cout<<arr[i]<<" ";
       }
   }
    return 0;
}

// Question 4 :Missing Characters in Panagram
#include <iostream>
#include <cstring>
using namespace std;
int main() {
   char str[1000];
   cin>>str;
   int n=strlen(str);
   for(char c='a';c<='z';c++){
       int i;
       for( i=0;i<n;i++){
           if(str[i]==c){
               break;
           }
       }
       if(i==n){
           cout<<c;
       }
   }

    return 0;
}

// Question 5:Find Immediate larger Than X
#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int x;
  cin>>x;
  int result=-1;
  for(int i=0;i<n;i++){
    if(arr[i]>x &&(result==-1 || arr[i]<result)){
        result=arr[i];
    }
  }
  cout<<result;
    return 0;
}
// Question 6: Volume of cuboid
#include <iostream>
using namespace std;
int main() {
   int l,w,h;
   cin>>l>>w>>h;
   cout<<"Length:"<<l<<endl;
   cout<<"Width:"<<w<<endl;
   cout<<"Height:"<<h<<endl;
   cout<<"Volume:"<<l*w*h<<endl;
    return 0;
}


// ST3 CODING QUESTIONS:
// 5 mark question:Minimum adjacent difference in a circular array

#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int minDiff=abs(arr[1]-arr[0]);
    for(int i=0;i<n;i++){
        int nextInd=(i+1)%n;
        int Diff=abs(arr[nextInd]-arr[i]);
        if(Diff<minDiff){
            minDiff=Diff;
        }
    }
    cout<<minDiff<<endl;

    return 0;
}

//Prining boundary elements of the 2d matrix 
#include <iostream>
using namespace std;
int main() {
   int m,n;
   cin>>m>>n;
   int arr[m][n];
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           cin>>arr[i][j];
       }
   }
   for(int i=0;i<m;i++){
       for(int j=0;j<n;j++){
           if(i==0 || j==0 || i==m-1 || j==n-1){
               cout<<arr[i][j]<<" ";
           }
           else{
               cout<<" "<<" ";
           }
       }
       cout<<endl;
   }

    return 0;
}

// question 3 :sum of two matrix
#include <iostream>
using namespace std;
int main() {
  int m1,n1;
  cin>>m1>>n1;
  int arr1[m1][n1];
  for(int i=0;i<m1;i++){
      for(int j=0;j<n1;j++){
          cin>>arr1[i][j];
      }
  }
  int m2,n2;
  cin>>m2>>n2;
  int arr2[m2][n2];
  for(int i=0;i<m2;i++){
      for(int j=0;j<n2;j++){
          cin>>arr2[i][j];
      }
  }
  int arr3[m2][n2];
  for(int i=0;i<m2;i++){
      for(int j=0;j<n2;j++){
          arr3[i][j]=arr1[i][j]+arr2[i][j];
          
      }
  }
  for(int i=0;i<m2;i++){
      for(int j=0;j<n2;j++){
          cout<<arr3[i][j]<<" ";
      }
      cout<<endl;
  }

    return 0;
}

// Question 4:
// area of circle and rectangle
#include <iostream>
using namespace std;
int main() {
   float radius;
   cin>>radius;
   float l,w;
   cin>>l>>w;
   cout<<"Area of the circle: "<<3.14*radius*radius<<endl;
   cout<<"Area of the rectangle: "<<l*w<<endl;

    return 0;
}

// Question 5: Take an integer array arr[] from the user as input . You need to find and return the maximum sum possible from all the subarrays.
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  int maxSum=arr[0];
  int currentSum=arr[0];
  for(int i=1;i<n;i++){
     currentSum=max(arr[i],currentSum+arr[i]);
     maxSum=max(currentSum,maxSum);
  }
  cout<<maxSum<<endl;
    return 0;
}

// Question 6:Given an array arr of n integers where n > 1, return an array output such that output[i] is equal to the product of all the elements of arr except arr[i
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int result[n];
for(int i=0;i<n;i++){
    int product=1;
    for(int j=0;j<n;j++){
       if(j!=i){
           product*=arr[j];
       }
    }
    result[i]=product;
}
for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
}

    return 0;
}


// Question 7: imidiate larger than x
#include <iostream>
using namespace std;
int main() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
   int result=-1;
   int x;
   cin>>x;
   for(int i=0;i<n;i++){
       if(arr[i]>x && (result==-1 || result>arr[i])){
           result=arr[i];
       }
   }
cout<<result<<endl;
    return 0;
}

// Question 8:volume of cuboid 
#include <iostream>
using namespace std;
int main() {
   int l,w,h;
   cin>>l>>w>>h;
   cout<<"Length:"<<l<<endl;
   cout<<"Width:"<<w<<endl;
   cout<<"Height:"<<h<<endl;
   cout<<"Volume:"<<l*w*h<<endl;
    return 0;
}

// Question 9: 10 marks Maximum Possible Number by Binary Concatenation
#include <iostream>
using namespace std;
int main() {
    int arr[3];
    for(int i=0;i<3;i++){
        cin>>arr[i];
    }
   string binaries[3];
   for(int i=0;i<3;i++){
       int temp=arr[i];
       string binary="";
       while(temp>0){
           binary=char((temp%2)+'0')+binary;
           temp=temp/2;
       }
       binaries[i]=binary;
   }
//   permutation for each occurance
string maxBinary="";
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i!=j){
            for(int k=0;k<3;k++){
                if(k!=i && k!=j){
                    string current=binaries[i]+binaries[j]+binaries[k];
                    if(current>maxBinary){
        maxBinary=current;
    }
                }
            }
        }
    }
    
}
int result=0;
for(int i=0;i<maxBinary.length();i++){
    result=result*2+(maxBinary[i]-'0');
}
cout<<result<<endl;
  

    return 0;
}


// Question 10: 5 marks . Find Immediate Smaller Than X
#include <iostream>
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n];
  int x;
  cin>>x;
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  
  int result=-1;
  
  for(int i=0;i<n;i++){
      if(arr[i]<x && (result==-1 || result<arr[i])){
          result=arr[i];
      }
  }
  cout<<result<<endl;

    return 0;
}

//Question 11: To find the area and perimeter of the rectangle (i did it in simple way)
#include <iostream>
using namespace std;
int main() {
   int h;
   int w;
   cin>>h>>w;
   cout<<"Height: "<<h<<endl;
   cout<<"Width: "<<w<<endl;
   cout<<"Perimeter: "<<2*(h+w)<<endl;
   cout<<"Area: "<<h*w<<endl;
    return 0;
}

// .Question 12: Find occurrences of palindrome words in a string
#include <iostream>
#include <sstream>
#include <cstring>
using namespace std;
int main() {
   string str;
   getline(cin,str);
   stringstream ss(str);
   string word;
   int count=0;
   
   while(ss>>word){
       int left_ptr=0;
       int right_ptr=word.length()-1;
       int flag=0;
       while(left_ptr<right_ptr){
           if(word[left_ptr]!=word[right_ptr]){
               flag=1;
           }
           left_ptr++;
           right_ptr--;
       }
       if(flag==0){
           count++;
       }
       
   }
   cout<<count<<endl;

    return 0;
}