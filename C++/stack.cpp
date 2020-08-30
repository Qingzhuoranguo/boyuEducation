#include <iostream>
#include <stdio.h>

using namespace std;

/*
Stack object 
1. 100 integer element 
2. push()/pop()
3. property -> how many elements 
4. print () -> print the stack
5. properties must be private
*/

class stack {
private:
    int content [100];
    int currentIndex;
    int length; 
public:

    stack () {
        for (int i = 0; i < 100; i ++ ){
            content[i] = 0;
        }
        currentIndex = 0;
        length = 0;
    }

    void push( int num ) {
        if (currentIndex == 100 ){
            std::cout << "Error!\n";
            return;
        }
        content [currentIndex] = num;
        currentIndex ++;
        length ++;
    }
    int pop () {
        if ( length == 0 ){
            std::cout << "Error!\n";
        }
        currentIndex = currentIndex -1;
        length = length - 1;
        return content[currentIndex];
    }
    void print () {
        std::cout << "[ ";
        for (int i = 0; i < length; i ++ ){
            std::cout << content[i] << " ";
        }
        std::cout << "]" <<  std::endl;
    }
};

int main () {
    // stack a;
    // a.push(1);
    // a.push(2);
    // a.push(3);
    // a.push(4);
    // a.push(5);
    // a.print();
    // a.pop();
    // a.pop();

    // a.print();
    int x = 3;
    int *y = &x;
    float a = 3.0;
    double b = 14.0;
    cout << "the number is: "
         << x << endl
         << y << endl
         << a << endl
         << b << endl
         << endl;
    
    int m = 0;
    cin >> m;
    cout << m << endl;
}

 