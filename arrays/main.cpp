#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<string> words;

    words.push_back("Simon");
    words.push_back("is");
    words.push_back("a");
    words.push_back("fish");
    
    cout << words[2] << " " << words[3] << " " << endl; // Prints a fish
    cout << "The vector contains " << words.size() << " words" << endl;
}