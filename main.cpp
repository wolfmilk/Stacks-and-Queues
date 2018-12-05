#include <iostream>
#include <cmath>
#include "linkedStack.h"

using namespace std;

bool isPrime(long num);

int main()
{
    linkedStackType<long> stack;
    
;

    long num;
    long temp;
    //long factor;
    
    cout << "Enter a positive integer greater than 1: ";
    cin >> num;
    cout << endl;
    
    while (num <= 1)
    {
        cout << "You must enter a positive integer greater than 1: " << endl;
        cin >> num;
    }
    
    cout << "The prime factoriztion of " << num << ": ";
    
   
    stack.push(1);
    
    if ((num% 2) == 0)
        
    stack.push(2);
    
    for (temp =3; temp < num; temp++)
    {
        
        if ((num % temp == 0) && (isPrime(temp)))
        {
            stack.push(temp);
            while (!stack.isEmptyStack())
            {
                cout << stack.top() << " ";
                stack.pop();
            }
            
            return 0;
        }
    }
    while (!stack.isEmptyStack())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    
    return 0;
}

bool isPrime(long num) {
    
        for (long factor = 2;factor*factor <= num; factor++)
        {
            if (num % factor == 0 )
            {
                return false;
            }
        }
        return true;
        
    }
