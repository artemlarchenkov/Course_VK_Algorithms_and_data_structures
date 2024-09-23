# Реализовать сортировку вставками (insertion sort)
# На вход подаётся массив чисел
# На выходе ожидается отсортированный массив чисел
#  
# Примечание: первая строка во вводе - число элементов в массиве
 
# Формат входных данных
# Первая строка: целое число n - количество элементов массива
# Вторая строка: массив целых чисел размера n

# Пример 1
# Входные данные
# 5
# 12 11 13  5  6
# Выходные данные
# 5 6 11 12 13

n = int(input())
nums = list(map(int, input().split()))

for i in range(1, n):
    key = nums[i]
    j = i - 1
    while j >= 0 and nums[j] > key:
        nums[j + 1] = nums[j]
        j -= 1
    nums[j + 1] = key

print(' '.join(map(str, nums)))