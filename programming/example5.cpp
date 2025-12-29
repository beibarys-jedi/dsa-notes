#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 10) {
        if (i == 5) {
            cout << "Breaking at 5!" << endl;
            break; // Immediately exits the loop
        }
        cout << "Number: " << i << endl;
        i++;
    }
    
    cout << "Loop finished." << endl;
    return 0;
}