/* Есть список товаров в магазине отсортированный по возрастанию, необходимо понять, есть ли в этом списке товар с заданной ценой.
В случае если цена найдена возвращайте true
  
Формат входных данных
Первая строка содержит одно целое число - количество элементов в массиве
Вторая строка содержит отсортированный массив целых чисел
Третья строка - целое число (ценник, наличие которого надо проверить)
Формат выходных данных
true/false
Пример 1
Входные данные
12
100 450 730 800 950 999 1000 3000 3300 8000 9990 10000
999
Выходные данные
true*/

#include <iostream>
#include <vector>

bool FindElement(std::vector<int> massive, int neddle) {
    int l = 0;
    int r = massive.size() - 1;
    int middle = 0;

    while (l < r) {
        middle = (l + r) / 2;
        if (massive[middle] == neddle) {
            return true;
        }
        else if (massive[middle] < neddle) {
            r = middle - 1;
        }
        else {
            l = middle + 1;
        }
    }
    return false;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> massive(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> massive[i];
    }
    int needle;
    std::cin >> needle;

    bool finded = FindElement(massive, needle);

    std::cout << (finded ? "true" : "false") << std::endl;  // Выводим true или false

    return 0;
}