#include <iostream>
#include <vector>
using namespace std;

int searchInsertPosition(const vector<int>& arr, int needle) {
    int l = 0;
    int r = arr.size() - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == needle) {
            return mid;  // Если нашли элемент, возвращаем его индекс
        } else if (arr[mid] < needle) {
            l = mid + 1;  // Ищем справа
        } else {
            r = mid - 1;  // Ищем слева
        }
    }

    // Если элемент не найден, возвращаем позицию для вставки
    return l;
}

int main() {
    int n;
    cin >> n;  // Количество элементов в массиве
    
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];  // Ввод элементов массива
    }
    
    int needle;
    cin >> needle;  // Число, для которого нужно найти индекс

    // Вывод результата
    cout << searchInsertPosition(arr, needle) << endl;

    return 0;
}