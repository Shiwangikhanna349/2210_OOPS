// 1. Simple way to create a object having some properties 
// #include <iostream>
// using namespace std;
// class Hero{
//     public:
//     int health;
//     char level;
    
// };
// int main() {
//   Hero h1;
//   h1.health=50;
//   h1.level='A';
//   cout<<h1.health<<endl;
//   cout<<h1.level<<endl;

//     return 0;
// }

// 2. if we want to access the private member of the class to the main function then we can use getter and setter function 

// #include <iostream>
// using namespace std;
// class Hero{
//         private:
//     char level;
//     public:
//     int health;
//     void setLevel(char l){
//         level=l;
//     }
//     char getLevel(){
//         return level;
//     }

    
// };
// int main() {
//   Hero h1;
//   h1.health=50;
// h1.setLevel('A');
//   cout<<h1.health<<endl;

// cout<<h1.getLevel()<<endl;
//     return 0;
// }


// 3. static allocation of object: Hero h1;
// dynamic allocation: Hero *h1=new Hero;


#include <iostream>
using namespace std;
class Hero{
        private:
    char level;
    public:
    int health;
    void setLevel(char l){
        level=l;
    }
    char getLevel(){
        return level;
    }
    Hero(){
        cout<<"Constructor called";
    }

    
};
int main() {
    // static allocation
//   Hero h1;
// to set the values of the statically allocated objects
//   h1.health=50;   
// h1.setLevel('A');
    // this is the dynamic allocation in which memory is allocated in the heap 
  Hero *h1=new Hero; 
//   to set the values of dynamically allocated objects
  h1->setLevel('A');
  h1->health=30;
  

// for static we print the values like this
//   cout<<h1.health<<endl;
// cout<<h1.getLevel()<<endl;
// for dynamic allocation we print the values like this 
cout<<(*h1).health<<endl;
cout<<(*h1).getLevel()<<endl;
// or
cout<<h1->health<<endl;
cout<<h1->getLevel()<<endl;
    return 0;
}
// constructor :
// it automatically invoked at the time of object creation 
// it has no return type 
// its name is same as the class name 
// we always create the constructor inside the public access specifier because we create the object in the main function. when we create our own constructor then default constructor will automatically removed

// 4. simple constructor, Parametrized constructor,  this pointer and copy constructor
#include <iostream>
using namespace std;
class Hero{
        private:
    char level;
    public:
    int health;
    void setLevel(char l){
        level=l;
    }
    char getLevel(){
        return level;
    }
    // our own constructor
    Hero(){
        cout<<"Constructor called"<<endl;
    }
    // Parametrized constructor
    Hero(int health,char level ){
        this->health=health;
        // we haven't use this pointer here because there is no ambiguity
      setLevel(level);
    }
    // copy Constructor
    // if we pass temp as the pass by value then Hero will again and again try to get the value from temp and infinte loop will run so we pass by reference
    Hero(Hero &temp){
        this->health=temp.health;
        setLevel(temp.getLevel());
        cout<<"copy constructor"<<endl;
       
    }

    
};
int main() {
//   for static we pass the value for parametrized constructor like this 
Hero h1(70,'A');
// here we create a copy constructor in which we pass the value of h1 object to h2
Hero h2(h1);
// cout<<h1.health<<endl;
// cout<<h1.getLevel()<<endl;
cout<<h2.health<<endl;
cout<<h2.getLevel()<<endl;

// dynamic we pass the value like this
// Hero *h1=new Hero(98,'A');

// for dynamic printing like this 
// cout<<h1->health<<endl;
// cout<<h1->getLevel()<<endl;


    return 0;
}
// default constructor do the shallow copy


#include <iostream>

using namespace std;
class Hero{
        private:
    char level;
    public:
    int health;
    // beacause we are allocating this to heap
    string *name;
    void setLevel(char l){
        level=l;
    }
      void setName(string name){
       *this->name=name;
   }
   void setHealth(int health){
       this->health=health;
   }
    char getLevel(){
        return level;
    }
    int getHealth(){
        return health;
    }
    string getName(){
        return *name;
    }
    // our own constructor
    Hero(){
        cout<<"Constructor called"<<endl;
        name= new string;
    } 
    // copy constructor
    Hero(Hero &temp){
    this->health = temp.health;
            this->level = temp.level;
            this->name = new string(*temp.name); 
    }
 
};
int main() {
Hero h1;
h1.setHealth(70);
h1.setLevel('B');
string name="sk";
h1.setName(name);
// due to shallow copy the name for h1 and h2 object is same 
h1.name[0]="ak";
cout<<h1.getHealth();
cout<<h1.getLevel();
cout<<h1.getName();
// default copy constructor
Hero h2(h1);
cout<<h2.getHealth();
cout<<h2.getLevel();
cout<<h2.getName();

    return 0;
}



#include <iostream>
using namespace std;

class Hero {
    private:
        char level;

    public:
        int health;
        // Allocated this to the heap for a deep copy
        string *name;

        // Setters
        void setLevel(char l) {
            level = l;
        }

        void setName(string name) {
            *this->name = name;
        }

        void setHealth(int health) {
            this->health = health;
        }

        // Getters
        char getLevel() {
            return level;
        }

        int getHealth() {
            return health;
        }

        string getName() {
            return *name;
        }

        // Default constructor
        Hero() {
            cout << "Constructor called" << endl;
            name = new string;  // Allocates memory for name on the heap
        }

        // Copy constructor for deep copy
        Hero(const Hero &temp) {
            cout << "Copy constructor called" << endl;
            this->health = temp.health;
            this->level = temp.level;
            this->name = new string(*temp.name);  // Deep copy for the string
        }

      
};

int main() {
    Hero h1;
    h1.setHealth(70);
    h1.setLevel('B');
    string name = "sk";
    h1.setName(name);

    // Display h1 properties
    cout << "h1 Health: " << h1.getHealth() << endl;
    cout << "h1 Level: " << h1.getLevel() << endl;
    cout << "h1 Name: " << h1.getName() << endl;

    // Create h2 as a copy of h1 (using the copy constructor)
    Hero h2(h1);

    // Display h2 properties to verify deep copy
    cout << "h2 Health: " << h2.getHealth() << endl;
    cout << "h2 Level: " << h2.getLevel() << endl;
    cout << "h2 Name: " << h2.getName() << endl;

    // Modify h1's name to check if h2's name is unaffected
    h1.setName("ak");
    cout << "After modifying h1's name:" << endl;
    cout << "h1 Name: " << h1.getName() << endl;
    cout << "h2 Name: " << h2.getName() << endl;  // h2's name should remain "sk"

     // Copy assignment operator
    h1=h2;
    cout<<h1.getName()<<endl;
    cout<<h1.getHealth()<<endl;
    cout<<h1.getLevel()<<endl;
        cout<<h2.getName()<<endl;
    cout<<h2.getHealth()<<endl;
    cout<<h2.getLevel()<<endl;
    

    return 0;
}


#include <iostream>
using namespace std;

class Hero {
   public:
   int health;
   char level;
//   static keyword is used when we want to create the datamember which is independent of the class like hero or enemy are the classes and timeToComplete is the data member which doesn't depend on both the classes or common to both of them 
   static int timeToComplete;
   Hero(){
       cout<<"Constructor is called"<<endl;
   }
   ~Hero(){
       cout<<"destructor is called"<<endl;
   }
   
//   static function:it can only access the static data members means this function cannot access health and level
static int random(){
    return timeToComplete;
}
   
};
// to inialise the datamember outside the class
int Hero::timeToComplete=5;
// Destructor:
// 1. It has no return type
// 2. Its name is same as the class name
// 3. It automatically called at the time of deallocation
int main() {
    Hero h1;    // destructor of static object is automatically called
    Hero *h2=new Hero;   // to call the destructor of the dynamic allocated object we use delete keyword
    delete h2;    // to deallocate the memory of the dynamic allocated object and we have to call the destructor manually
    cout<<Hero::timeToComplete<<endl;
    cout<<Hero::random()<<endl;
    return 0;
}


// 4 pillars 
// 1. Encapsulation
#include <iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    int height;
    public:
    // to initailise the value of non-static variable
    // student(){
    //     age=20;
    // }
    student() : age(20){
        
    }
    int getage(){
        return this->age;
    }
};

int main() {
   student s;
 
   cout<<s.getage()<<endl;

    return 0;
}

// mode of inheritence:public to public
#include <iostream>
using namespace std;
class student{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
   void setWeight(int w){
        this->weight=w;
    }
    
};
class Male: public student{
        public:
       string color;
       void sleep(){
           cout<<"Male sleep"<<endl;
       }
    };
int main() {
    Male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.height<<endl;
    cout<<obj1.weight<<endl;
    obj1.sleep();
  
    return 0;
}


// mode of inheritence:public to protected
// protected is similar to private 
// public to private: private this code is similar in case of protected
#include <iostream>
using namespace std;
class student{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge(){
        return this->age;
    }
   void setWeight(int w){
        this->weight=w;
   
    }
    
       student(){
           height=10;
       }
};
class Male: protected student{
        public:
       string color;
       void sleep(){
           cout<<"Male sleep"<<endl;
       }
       int getHeight(){
           return this->height;
       }
    };
int main() {
    Male obj1;

    
    obj1.sleep();
    cout<<obj1.getHeight()<<endl;
  
    return 0;
}

// Single Inheritence
#include <iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public Animal{
    
};
int main() {
  Dog d;
  d.speak();
    return 0;
}
// Multilevel Inheritence
#include <iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog: public Animal{
    
};
class soffi: public Dog{
    
};
int main() {
  soffi s;
  s.speak();
    return 0;
}

// Multiple Inheritence
#include <iostream>
using namespace std;
class Animal{
    public:
    int age;
    int weight;
    void speak(){
        cout<<"speaking"<<endl;
    }
};
class Dog{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
class soffi: public Dog,public Animal{
    
};
int main() {
  soffi s;
  s.speak();
  s.bark();
    return 0;
}

// inheritence ambiguity
#include <iostream>
using namespace std;
class A{
    public:
    void fun(){
        cout<<"HELLO"<<endl;
    }
};
class B{
    public:
 void fun(){
     cout<<"Hi"<<endl;
 }   
};
class C: public A,public B{
    
};
int main() {
    C obj;
    // obj.fun();   // it will give ambiguous error 
    obj.A::fun();
    obj.B::fun();
    return 0;
}

// operator overloading
#include <iostream>
using namespace std;
class A{
    public:
    int a,b;
    int add(){
        return a+b;
    }
    void operator+ (A &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output:"<<value2-value1;
    }
    void operator() (){
        cout<<"bracket overloading"<<this->a<<endl;
    }
};

int main() {
  A obj1, obj2;
obj1.a=4;
obj2.a=7;
obj1+obj2;
obj1();
    return 0;
}
// function overriding
#include <iostream>
using namespace std;
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog: public Animal{
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};
int main() {
 Dog obj;
 obj.speak();   // it will print barking
    return 0;
}
// Abstraction: showing only neccessary information or implementation hiding