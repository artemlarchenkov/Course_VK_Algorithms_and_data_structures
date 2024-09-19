#include <iostream>
#include <stack>
#include <string>
#include <algorithm>  // Добавлено для std::reverse

std::string removeAdjacentDuplicates(const std::string& s) {
    std::stack<char> stack;

    for (char ch : s) {
        // Если стек не пуст и верхний элемент стека равен текущему символу
        if (!stack.empty() && stack.top() == ch) {
            // Удаляем верхний элемент стека (удаляем пару)
            stack.pop();
        } else {
            // Добавляем текущий символ в стек
            stack.push(ch);
        }
    }

    // Собираем результат из стека
    std::string result;
    while (!stack.empty()) {
        result += stack.top();
        stack.pop();
    }

    // Результат в стеке будет в обратном порядке
    std::reverse(result.begin(), result.end());
    return result;
}

int main() {
    std::string s;
    std::cin >> s;  // Ввод строки

    std::string result = removeAdjacentDuplicates(s);
    std::cout << result << std::endl;

    return 0;
}