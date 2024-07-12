// -> arrow operator in class
#include <iostream>
using namespace std;

// Creating a class
class Student
{
private:
    // Declared private members
    int total_marks;
    float total_percentage;

public:
    // Method to calculate the percentage of marks
    void percentage(float total_marks)
    {
        this->total_marks = total_marks;
        total_percentage = (total_marks * 100) / 800;
    }
    // Method to print total percentage
    void print()
    {
        cout << "Total percentage of the Student: " << total_percentage << "%" << endl;
    }
};

// Driver code
int main()
{
    // allocating memory to the object of the class
    Student *s = new Student();

    // accessing member functions of the class
    s->percentage(444);
    s->print();
    return 0;
}
