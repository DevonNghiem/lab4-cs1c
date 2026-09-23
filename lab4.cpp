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

    // Func to check if the student's name matches the search name
    bool matchesName(string searchName)
    {
        return name == searchName;
    }
};

int main() 
{
    int choice;
    string name;

    vector<Student> students = 
    {
        Student(1, "Devon"),
        Student(2, "Jack"),
        Student(3, "Alex")
    };

    cout << "Student Manager" << endl;
    cout << "1. Print all students" << endl;
    cout << "2. Find student by name" << endl;
    cout << "3. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    while (choice != 1 && choice != 2 && choice != 3)
    {
        cout << "Invalid choice. Please enter 1, 2, or 3: ";
        cin >> choice;
    }

    if (choice == 1) 
    {
        for (Student& s : students) 
        {
            s.print();
        }
    }

    // For the findStudentName function
    else if (choice == 2)
    {
        cout << "Enter name to search: ";
        cin >> name;

        bool found = false;
        for (Student& s : students)
        {
            if (s.matchesName(name))
            {
                s.print();
                found = true;
            }
        }

        if (!found)
        {
            cout << "No student found with that name." << endl;
        }
    }

    cout << "BYE BYE!" << endl;

    return 0;
}