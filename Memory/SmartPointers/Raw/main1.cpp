#include <iostream>
#include <memory>

#include <bits/stdc++.h>

using namespace std;

int main()
{
    //raw pointers allow a sharing , allow rooms for erase(forgetting to delete)
    //memory leak
    //dangling pointer
    //double delete
    //ownership issues
    int *array = new int[100];
    for (int i = 0; i < 100; ++i) {
        array[i] = i;
    }
    int* ptr = array;

    cout<<"*ptr: "<<*ptr<<"\n";

    int *ptr2 = ptr;
    cout<<"*ptr2: "<<*ptr2<<"\n";

    delete[] array; 

}