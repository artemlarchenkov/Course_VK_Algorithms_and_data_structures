#include <iostream>
#include <vector>
#include <stack>

int findLastEven(const std::vector<int>& nums) {
    std::stack<int> steck;

    // Проходим по массиву с конца и ищем четное число
    for (auto it = nums.rbegin(); it != nums.rend(); ++it) {
        if (*it % 2 == 0) {
            steck.push(*it);
            break;  // Найдя первое четное число с конца, выходим из цикла
        }
    }

    // Если стек не пуст, возвращаем верхний элемент
    if (!steck.empty()) {
        return steck.top();
    } else {
        return -1;  // Если нет четных чисел
    }
}

int main() {
    int n;
    std::cin >> n;  // Считываем количество элементов

    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];  // Заполняем массив числами
    }

    int lastEven = findLastEven(nums);
    std::cout << lastEven << std::endl;  // Выводим результат

    return 0;
}