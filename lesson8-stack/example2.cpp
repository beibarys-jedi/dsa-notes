#include <iostream>
#include <stack>
using namespace std;

// С помощью функции size() можно получить количество элементов в стеке, а с помощью функции empty() проверить стек на наличие элементов (если возвращается true, то стек пуст):
 
int main()
{
    std::stack<std::string> stack;
    if(stack.empty())
    {
        std::cout << "stack is empty" << std::endl;
    }
    std::cout << "stack size: " << stack.size() << std::endl; // stack size: 0
}