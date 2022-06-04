#include <iostream>

template <class T>
void sort(T *arr, const int size, bool (*SwapOrNot)(T, T))
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (SwapOrNot(arr[i], arr[j]))
            {
                std::swap(arr[i], arr[j]);
            }
        }
    }
}

int main()
{
    const int size = 7;
    int arr[] = {1, 10, 9, 0, -1, 20, 30};

    sort(arr, size, [](int a, int b) -> bool {
    });
}