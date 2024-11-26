#include <iostream>
#include <string>


class student {
protected:
    std :: string name;
    std :: string module;
    int ID;
    float attandence_percentage;
public:
    student(std :: string n, std :: string m , int i, float p) {
        name = n;
        module = m;
        ID = i;
        attandence_percentage = p;
    }

    // function for updating the attandence.
    void update_attance_percentage(float a) {
        attandence_percentage = a;
        std :: cout<< "Attendance Updated sucessfully!\n";
    }

    //function for displaying the details of student.
    void display() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Module: " << module << std::endl;
        std::cout << "ID: " << ID << std::endl;
        std::cout << "Attendance Percentage: " << attandence_percentage << "%" << std::endl;

        if (attandence_percentage >= 75) {
            std::cout << "Student has met the attendance requirement!\n";
        } else {
            std::cout << "Student has not met the attendance requirement!\n";
        }
    }
};

int main () {
    // creating a stdeunt object from student class.
    student s1("Saqib","C++",452288,55);

    // updating the attandence for student.
    s1.update_attance_percentage(75);

    // showing student detauls.
    s1.display();
}