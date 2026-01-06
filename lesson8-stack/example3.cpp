#include <iostream>
#include <stack>
using namespace std;

// Для добавления в стек применяется функция push(), в которую передается добавляемый элемент:

int main()
{
    std::stack<std::string> stack;
    stack.push("Tom");
    stack.push("Bob");
    stack.push("Sam");
    std::cout << "Top: " << stack.top() << std::endl;   // Top: Sam
}