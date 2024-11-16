//Basic Questions OOPS
//1.  Define a class Student with attributes name, roll_no, and grade. Write a program to create an object and display student details.
#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    char grade;
};
int main() {
   Student s;
   s.name="sk";
   s.roll_no=1;
   s.grade='A';
   cout<<"name:"<<s.name<<endl;
   cout<<"roll_no:"<<s.roll_no<<endl;
   cout<<"grade:"<<s.grade<<endl;
   
    return 0;
}

//2.Define a class Book with a parameterized constructor to initialize book details (title, author, price). Also, define a destructor to print a message when an object is destroyed.
#include <iostream>
using namespace std;
class Book{
    public:
    string title;
    string author;
    int price;
    Book(string t,string a,int p){
        title=t;
        author=a;
        price=p;
    }
    ~Book(){
        cout<<"Destructor is called"<<endl;
    }
};
int main() {
   Book b("abc","xyz",200);
   cout<<b.title<<" "<<b.author<<" "<<b.price<<endl;
   
   

    return 0;
}

//3.Define a class Rectangle with length and width attributes. Add member functions to calculate the area and perimeter of the rectangle. Test these functions with different objects.
#include <iostream>
using namespace std;
class Rectangle{
   public:
    int length;
    int width;
   void area(){
      
       cout<<length*width<<endl;
       
   }
   void perimeter(){
     
       cout<<2*(length+width)<<endl;
   }
   
};
int main() {
  Rectangle r;
r.length=10;
r.width=20;
r.area();
r.perimeter();
  
   
   

    return 0;
}


// using friend function 
#include <iostream>
using namespace std;
 class rectangle{
       private:
       int length;
       int width;
       public:
       rectangle(int l,int w){
           length=l;
           width=w;
       }
       friend int calculateArea(rectangle r);
       
   };
   int calculateArea(rectangle r){
  return r.length*r.width;
   }
int main() {
  rectangle obj(10,5);
  cout<<calculateArea(obj)<<endl;

    return 0;
}
// to find the area of the rectangle
#include <iostream>
using namespace std;
class Box{
    public:
  int length;
  int breadth;
  int height;
  void volume(){
      cout<<length*breadth*height<<endl;
  }
  
};
int main() {
   Box B;
   B.length=10;
   B.height=10;
   B.breadth=20;
   B.volume();

    return 0;
}


// Define a class Employee with a static variable count to keep track of the number of employees created. Each time an object is created, increment the count and print it. 
#include <iostream>
using namespace std;
class Employee{
    public:
    string name;
    int id;
    static int  count;
    Employee(string n,int i){
    name=n;
        id=i;
        count++;
      
    }
   static int getCount(){
       return count;
   } 
};
int Employee::count=0;
int main() {
 Employee E1("sk",1);
 Employee E2("ak",2);
cout<<Employee::getCount()<<endl;
    return 0;
}
//Create a Person class with attributes like name and age. Derive a Student class from Person and add attributes roll_number and marks. Display student details using the derived class.
#include <iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class student: public Person{
    public:
    int roll_number;
    int marks;
    
};
int main() {
   student s;
   s.name="sk";
   s.age=19;
   s.roll_number=2;
   s.marks=90;
   cout<<s.name<<" "<<s.age<<" "<<s.roll_number<<" "<<s.marks;
    return 0;
}
// Multilevel Inheritence
#include <iostream>
using namespace std;
class Person{
    public:
    string name;
    int age;
};
class Employee: public Person{
    public:
    long int salary;
    
};
class Manager:public Employee{
    public:
    string dept;
    
};
int main() {
   Person p;
   p.name="sk";
   p.age=19;
   Employee e;
   e.salary=10000000000;
   Manager m;
   m.dept="CSE";
  
   cout<<p.name<<" "<<p.age<<" ";
   cout<<e.salary<<endl;
   cout<<m.dept<<endl;
    return 0;
}

// function overloading
#include <iostream>
using namespace std;
class shape{
    public:
    int square(int side){
        return side*side;
    }
    int rectangle(int l,int b){
        return l*b;
    }
};
int main() {
   shape s;
   cout<<s.square(10)<<endl;
   cout<<s.rectangle(10,20)<<endl;

    return 0;
}