#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include <vector>
using namespace std;
class ArrayManager
{
private:
    std::vector <int> arr;

public:
    void display()
    {
        if (arr.empty())
        {
            std::cout << "Array is empty!" << std::endl;
            return;
        }
        std::cout << "Current array: ";
        for (int num : arr)
        {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    void insertAtEnd(int value)
    {
        arr.push_back(value);
        display();
    }

    void insertAtPosition(int value, int position)
    {
        if (position < 0 || position > arr.size())
        {
            std::cout << "Invalid position!" << std::endl;
            return;
        }
        arr.insert(arr.begin() + position, value);
        display();
    }
    void removeFromEnd()
    {
        if (arr.empty())
        {
            std::cout << "Array is empty!" << std::endl;
            return;
        }
        arr.pop_back();
        display();
    }
    void removeFromPosition(int position)
    {
        if (position < 0 || position >= arr.size())
        {
            std::cout << "Invalid position!" << std::endl;
            return;
        }
        arr.erase(arr.begin() + position);
        display();
    }
    int search(int value)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == value)
            {
                return i;
            }
        }
        return -1;
    }
    void editElement(int value, int position)
    {
        if (position < 0 || position >= arr.size())
        {
            std::cout << "Invalid position!" << std::endl;
            return;
        }
        arr[position] = value;
        display();
    }
};
#endif
