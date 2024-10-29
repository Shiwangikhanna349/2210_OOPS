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

