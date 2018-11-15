#include <iostream>
using namespace std;

void Fizzbuzz (int x);

int main() {
    Fizzbuzz(90);

    
	return 0;
}

void Fizzbuzz (int x){
    if(x%3==0)
        cout<<"Fizz";
    
    if(x%5==0)
        cout<<"Buzz";
}
