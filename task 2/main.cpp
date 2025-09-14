#include <iostream>
#include <Manager.h>
using namespace std;
int main()
{
    ArrayManager manager;
    int choice, value, position;

    while (true)
    {
        std::cout << "\nArray Manager Menu:" << std::endl;
        std::cout << "1. Insert at End" << std::endl;
        std::cout << "2. Insert at Position" << std::endl;
        std::cout << "3. Remove from End" << std::endl;
        std::cout << "4. Remove from Position" << std::endl;
        std::cout << "5. Search for Element" << std::endl;
        std::cout << "6. Edit Element" << std::endl;
        std::cout << "7. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "Enter the value to insert: ";
            std::cin >> value;
            manager.insertAtEnd(value);
            break;

        case 2:
            std::cout << "Enter the value to insert: ";
            std::cin >> value;
            std::cout << "Enter the position: ";
            std::cin >> position;
            manager.insertAtPosition(value, position);
            break;

        case 3:
            manager.removeFromEnd();
            break;

        case 4:
            std::cout << "Enter the position to remove from: ";
            std::cin >> position;
            manager.removeFromPosition(position);
            break;

        case 5:
            std::cout << "Enter the element to search for: ";
            std::cin >> value;
            position = manager.search(value);
            if (position != -1)
                std::cout << "Element " << value << " found at index " << position << std::endl;
            else
                std::cout << "Element " << value << " not found!" << std::endl;
            break;

        case 6:
            std::cout << "Enter the new value: ";
            std::cin >> value;
            std::cout << "Enter the position to edit: ";
            std::cin >> position;
            manager.editElement(value, position);
            break;

        case 7:
            std::cout << "Exiting program." << std::endl;
            return 0;

        default:
            std::cout << "Invalid choice! Please try again." << std::endl;
            break;
        }
    }

    return 0;
}
