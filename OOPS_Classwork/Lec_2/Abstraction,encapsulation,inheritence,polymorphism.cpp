//abstraction 
#include <iostream>
using namespace std;
class implementAbstraction
{
    private:
        int x, y;
    public:
        void set(int a, int b)
        {
            x = a;
            y = b;
        }        
        void display()
        {
            cout<<"x = " <<x << endl;
            cout<<"y = " << y << endl;
        }
};  
int main() 
{
    implementAbstraction obj;
    obj.set(40, 50);
    obj.display();
    return 0;
}
//encapsulation
#include<iostream>
using namespace std;
// wrapping up of Data and Information under a single unit
class Encapsulation
{
    private:
        int a;     
    public:
        void set(int x)
        {
            a =x;
        }
        int get()
        {
            return a;
        }
};
int main()
{
    Encapsulation obj;
    obj.set(10); 
    cout<<obj.get();
    return 0;
}
//inheritence
#include <bits/stdc++.h>
using namespace std;

// two classes have a relationship with each other, and objects of one class acquire properties and features of the other class

//Parent Class
class Parent
{
  public:
    int id_Parent;
};
  
  // Child class (Child class is inherited class so it can access id_Parent also)
class Child: public Parent
{
  public:
    int id_Child;
};
int main()
{
    Child obj1;
    obj1.id_Child = 10;
    obj1.id_Parent = 63;
    cout << "Child id is: " << obj1.id_Child << '\n';
    cout << "Parent id is: " << obj1.id_Parent << '\n';
    return 0;
}
//polymorphism
#include <bits/stdc++.h>
using namespace std;

//Polymorphism (ability to take more than one form - fun is function written in many forms).
class Geeks
{
    public:
    void fun(int a)
    {
        cout << "value of a is " << a << endl;
    }
    void fun(double a)
    {
        cout << "value of a is " << a << endl;
    }
    void fun(int a, int b)
    {
        cout << "The value of a and b is " << a << " , " << b << endl;
    }
};
  int main() 
{
    Geeks obj1;
    obj1.fun(10);
    obj1.fun(6.324);
    obj1.fun(90 , 24);
    return 0;
} 

