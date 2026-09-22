#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student 
{
public:
    int id;
    string name;

    Student(int id, string name) 
    {
        this->id = id;
        this->name = name;
    }

    void print()  
    {
        cout << id << ": " << name << endl;
    }
};

int main() 
{
    int choice;

    vector<Student> students = 
    {
        Student(1, "Devon"),
        Student(2, "Jack"),
        Student(3, "Alex")
    };

    cout << "Student Manager" << endl;
    cout << "1. Print all students" << endl;
    cout << "2. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    while (choice != 1 && choice != 2)
    {
        cout << "Invalid choice. Please enter 1 or 2: ";
        cin >> choice;
    }

    if (choice == 1) 
    {
        for (Student& s : students) 
        {
            s.print();
        }
    }

    cout << "Goodbye!" << endl;

    return 0;
}