#include <iostream>
using namespace std;

int main() {
    int count = 1;

    // The loop runs as long as count is less than or equal to 5
    while (count <= 5) {
        cout << "Iteration: " << count << endl;
        count++; // Increment count to eventually make the condition false
    }

    return 0;
}