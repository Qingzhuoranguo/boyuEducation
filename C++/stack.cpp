#include <iostream>


using namespace std;


class Account {
private:
    int balance;
    int *data;
public:
    Account(){
        balance = 0;
        data = (int *)malloc(sizeof(int) * 10);
    }
    
    Account( int old_balance ) {
        balance = old_balance;
        data = (int *)malloc(sizeof(int) * 10);
    }

    ~Account(){
        free(data);
    }

    void depo();
    void with();
};

int main () {
    Account aaron;
    Account boby (100);

}


/*
Stack object 
1. 100 integer element 
2. push()/pop()
3. property -> how many elements 
4. print () -> print the stack
5. properties must be private

*/