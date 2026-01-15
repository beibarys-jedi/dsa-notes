# Lesson 9 - Backtracking

Backtracking — это мощная техника для решения задач, где нужно исследовать все возможные комбинации/перестановки и откатываться назад, если текущий путь не подходит.

Backtracking
```bash
Попробуй выбрать элемент
  ↓
Рекурсивно решай для оставшихся элементов
  ↓
Откатись назад (отмени выбор)
  ↓
Попробуй следующий элемент
```

Узнать про [Template code](./template.cpp)

Ниже вот шаблонный код.

```cpp
void backtrack(vector<int>& current, int start, vector<vector<int>>& result) {
    // 1. Base case: добавь решение когда оно найдено
    if (условие_завершения) {
        result.push_back(current);
        return;
    }
    
    // 2. Попробуй все возможные варианты
    for (int i = start; i < nums.size(); i++) {
        // Выбери элемент
        current.push_back(nums[i]);
        
        // Рекурсивно исследуй дальше
        backtrack(current, i + 1, result);
        
        // Откатись (очень важно!)
        current.pop_back();
    }
}
```

## Leetcode

1. [78. Subset](https://leetcode.com/problems/subsets/)

```cpp
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        // write own solution below
    }
};
```


More to read
1. https://leetcode.com/discuss/post/3168516/a-general-approach-to-stack-problems-in-xsba0/