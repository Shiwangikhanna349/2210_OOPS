#include <iostream>
using namespace std;

inline int max(int a, int b){
    return a>b?a:b;
}

int main()
{
    int a=10, b=20;
    cout<<"maximum of 10 and 20 is "<<max(a,b);
    return 0;
}


// max(a, b) denotes function call and gets replaced by return a>b? a:b.

//inline function 2nd file

#include <iostream>
using namespace std;
class MathOperations {
public:
    // Inline function definition inside the class
    inline int add(int a, int b) {
        return a + b;
    }

    // Inline function definition outside the class
    inline int multiply(int a, int b);
};

// Inline function definition outside the class
inline int MathOperations::multiply(int a, int b) {
    return a * b;
}

int main() {
    MathOperations math;

    // Using inline functions
    int sum = math.add(5, 3);
    int product = math.multiply(4, 7);

    cout << "Sum: " << sum << std::endl;           // Output: Sum: 8
    cout << "Product: " << product << std::endl;   // Output: Product: 28

    return 0;
}


// add and multiply are defined as inline functions
// add is defined directly inside the class, which is automatically considered inline.
// multiply is defined outside the class but is marked as inline to suggest inlining.
// When the program runs, the calls to add and multiply are replaced with their respective code snippets during compilation, reducing function call overhead.
