#include <iostream>#include <iostream>
using namespace std;

// Global variable
int num = 10;

int main() {
    // Local variable
    int num = 20;  

    cout << "Local num = " << num << endl;       
    cout << "Global num = " << ::num << endl;    

    return 0;
}


