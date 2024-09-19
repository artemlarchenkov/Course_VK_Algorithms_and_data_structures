/* Дана строка s.Строка состоит из английских букв в нижнем регистре.
Необходимо из строки удалить все рядом стоящие повторяющиеся буквы.
Например, в строке xyyx мы должны удалить yy, а после и оставшиеся xx и того после должна получиться пустая строка.
Или же в строке fqffqzzsd после удаления остануться только fsd.
Первыми удаляться ff, являющимися третьими и четвертыми символами, затем qq и после уже zz. */


#include <iostream>
#include <stack>
#include <string>
#include <algorithm> 

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