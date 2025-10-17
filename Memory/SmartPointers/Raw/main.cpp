#include <iostream>
#include <memory>

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x = 10;
    int* ptr = &x;

    cout << "Value of x: " << x << "\n";
    cout << "Address of x: " << ptr << "\n";
    cout << "Value via pointer: " << *ptr << "\n";

    //raw pointers are allow sharing 
    int *ptr2 = ptr;
     cout << "Value via pointer: " << *ptr2 << "\n";
}