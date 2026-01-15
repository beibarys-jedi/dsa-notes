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