#include <iostream>
#include <vector>
#include <cstdlib> // для rand()
using namespace std;
// Функция для вычисления факториала числа i
int RecursiveFactorial(int i)
{
    if (i <= 1)
    {
        return 1;
    }
    return i * RecursiveFactorial(i - 1);
}
// Функция для обмена значениями двух переменных
void Swap(int& first, int& second)
{
    int buffer = first;
    first = second;
    second = buffer;
}
// Функция для подсчета суммы элементов массива
int GetArraySum(const vector<int>& array)
{
    int sum = 0;
    for (int element : array)
    {
        sum += element;
    }
    return sum;
}
// Функция для вывода элементов массива на экран
void PrintArray(const vector<int>& array)
{
    for (int element : array)
    {
        cout << element << "\n";
    }
}
// Функция для вычисления среднего арифметического элементов массива
double GetArrayAverage(const vector<int>& array)
{
    int sum = GetArraySum(array);
    return static_cast<double>(sum) / array.size();
}
// Функция для подсчета суммы элементов двумерного массива
int GetMatrixSum(const vector<vector<int>>& matrix)
{
    int sum = 0;
    for (const vector<int>& row : matrix)
    {
        for (int element : row)
        {
            sum += element;
        }
    }
    return sum;
}
// Функция для поиска наименьшего элемента в массиве
int FindMinElement(const vector<int>& array)
{
    int min = array[0];
    for (int i = 1; i < array.size(); ++i)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    return min;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int choice;
    while (true)
    {
        cout << "Выберите задачу:\n"
            << "1 - факториал\n"
            << "2 - изменение значения\n"
            << "3 - сумма элементов массива\n"
            << "4 - вывод элементов массива\n"
            << "5 - среднее арифметическое массива\n"
            << "6 - вывод чисел на экран\n"
            << "7 - двумерный массив\n"
            << "8 - наименьший элемент массива\n"
            << "9 - выход\n";
        cin >> choice;
        if (choice == 1)
        {
            int i;
            cout << "Введите число: ";
            cin >> i;

            cout << RecursiveFactorial(i) << "\n";
        }
        else if (choice == 2)
        {
            int a = 11;
            int b = 22;

            Swap(a, b);

            cout << a << "\n" << b << "\n";
        }
        else if (choice == 3)
        {
            int n;
            cout << "Введите кол-во чисел в массиве: ";
            cin >> n;
            vector<int> array(n);
            for (int& element : array)
            {
                element = rand() % 100;
            }

            int sum = GetArraySum(array);

            cout << "Сумма элементов массива: " << sum << "\n";
        }
        else if (choice == 4)
        {
            int n;
            cout << "Введите кол-во чисел в массиве: ";
            cin >> n;

            vector<int> array(n);
            for (int& element : array)
            {
                element = rand() % 100;
            }

            cout << "Элементы массива:\n";
            PrintArray(array);
        }
        else if (choice == 5)
        {
            int n;
            cout << "Введите кол-во чисел в массиве: ";
            cin >> n;

            vector<int> array(n);
            for (int& element : array)
            {
                element = rand() % 100;
            }
            double average = GetArrayAverage(array);
            cout << "Среднее арифметическое элементов массива: " << average << "\n";
        }
        else if (choice == 6)
        {
            int i = 1;
            while (i <= 10)
            {
                cout << i << "\n";
                ++i;
            }
        }
        else if (choice == 7)
        {
            int n, m;
            cout << "Введите количество строк и столбцов матрицы: ";
            cin >> n >> m;
            vector<vector<int>> matrix(n, vector<int>(m));
            for (vector<int>& row : matrix)
            {
                for (int& element : row)
                {
                    element = rand() % 100;
                }
            }
            int sum = GetMatrixSum(matrix);

            cout << "Сумма элементов матрицы: " << sum << "\n";
        }
        else if (choice == 8)
        {
            int n;
            cout << "Введите кол-во чисел в массиве: ";
            cin >> n;
            vector<int> array(n);
            for (int& element : array)
            {
                element = rand() % 100;
            }
            int min = FindMinElement(array);

            cout << "Наименьший элемент массива: " << min << "\n";
        }
        else if (choice == 9)
        {
            break;
        }
        else
        {
            cout << "Некорректный выбор\n";
        }
    }
    return 0;
}