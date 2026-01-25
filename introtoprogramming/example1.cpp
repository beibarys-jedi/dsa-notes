#include <iostream>;

using namespace std;

	/*
	 * If else example
	 */

int main(){
    int input;
    cin >> input;
    if(input % 2 ==0){
        cout << input << " is an even" << endl;
    } else {
        cout << input << " is an odd number" << endl;
    }
}