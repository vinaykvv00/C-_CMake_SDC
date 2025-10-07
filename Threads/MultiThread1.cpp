#include <iostream>
#include <thread>
#include <bits/stdc++.h>

using namespace std;

void printHello() {
    cout << "Hello from printthread!: this thread id"<<" "<< this_thread::get_id() <<endl;
}
int main() {
    auto task = []() {
        cout << "Hello from thread!: this thread id"<<" "<< this_thread::get_id() <<endl;
    };

    thread t1(task);
    thread t2(printHello); // Create a thread that runs the printHello function
    t1.join(); // Wait for the thread to finish
    t2.join(); // Wait for the printHello thread to finish

    cout << "Thread has finished execution." <<endl;
    return 0;
}