# Lesson 8 - Stacks

A stack is a Last In First Out (LIFO) data structure that supports three
operations, all in $\mathcal{O}(1)$ time. 

Think of it like a real-world stack of papers.

C++:
1. `push`: adds an element to the top of the stack
2. `pop`: removes an element from the top of the stack
3. `top`: retrieves the element at the top without removing it

```cpp
stack<int> s;
s.push(3);
s.push(2);
s.push(5);
cout << s.top(); // 5
s.pop();
cout << s.top(); // 2
```

See [Exampple 1](./example1.cpp)
See [Exampple 2](./example2.cpp)
See [Exampple 3](./example3.cpp)

## Leetcode

1. [20 Valid Parentheses](https://leetcode.com/problems/valid-parentheses/description/?envType=problem-list-v2&envId=stack)

```cpp
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (char c : s) {
            if (c== '(') {
                stack.push(')');
            } else if (c== '{') {
                stack.push('}');
            } else  if (c== '[') {
                stack.push(']');
            } else {
                if (stack.empty() || stack.top() != c) {
                    return false;
                }
                stack.pop();
            }
        }

        return stack.empty();
    }
};
```

2. [682. Baseball Game](https://leetcode.com/problems/baseball-game/description/)

```cpp
class Solution {
public:
    int calPoints(vector<string>& ops) {
        int ans = 0;
        stack<int> st;

        for (auto &op : ops) {
            if (op == "+") {
                // We need last two scores
                int last = st.top(); st.pop();
                int secondLast = st.top();
                int sum = last + secondLast;
                st.push(last);      // put back last
                st.push(sum);       // push the sum
            } 
            else if (op == "D") {
                st.push(st.top() * 2);
            } 
            else if (op == "C") {
                st.pop();
            } 
            else {
                st.push(stoi(op));
            }
        }

        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;

    }
};
```


More to read
1. https://leetcode.com/discuss/post/3168516/a-general-approach-to-stack-problems-in-xsba0/
2. 