#include<iostream>
using namespace std;

//private
class student{
    private:
        int marks;
     public:
        int getPercentage(int m)
        {
            marks=m;
            return (marks*100)/100;
        }
};


int main(){
   
   student student1;
   cout<<"Percentage = "<<student1.getPercentage(92)<<endl;
}

// marks is private accessible only inside the class.

//protected
#include <bits/stdc++.h>
using namespace std;
 
// base class
class Database{  
    // protected data members
    protected:
    int marks;
};
 
// sub class or derived class from public base class
class student : public Database
{
    public:
    void setMarks(int m)
    {
        marks = m;    
    }
     
    void displayMarks()
    {
        cout << "Marks = " << marks << endl;
    }
};

#include<iostream>
using namespace std;

class student{
   public:
        int marks;

        int getPercentage()
        {
            return (marks*100)/100;
        }
};
//public
int main(){
   
   student student1;
   student1.marks=92;
   cout<<"Percentage = "<<student1.getPercentage()<<endl;
}

// marks is a public access specifier accessible from everywhere inside the code
 


// main function
int main() {
  
    student obj1;
    obj1.setMarks(81);
    obj1.displayMarks();


}
