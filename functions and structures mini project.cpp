#include <iostream>
#include <string>

struct Student {
    std::string name;
    int rollNumber;
    int marks[3];
};

int calculateTotalMarks(const int marks[]);

void addStudent(Student &student) {
    std::cout << "Enter Name: ";
    std::cin.ignore();
    std::getline(std::cin, student.name);
    std::cout << "Enter Roll Number: ";
    std::cin >> student.rollNumber;
    std::cout << "Enter Marks for 3 subjects: " << std::endl;
    for (int i = 0; i < 3; ++i) {
        std::cout << "Subject " << i + 1 << ": ";
        std::cin >> student.marks[i];
    }
    std::cout << "Student details added successfully!" << std::endl;
}

void displayStudent(const Student &student) {
    int totalMarks = calculateTotalMarks(student.marks);
    std::cout << "\nStudent Details:" << std::endl;
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Roll Number: " << student.rollNumber << std::endl;
    std::cout << "Marks: ";
    for (int i = 0; i < 3; ++i) {
        std::cout << student.marks[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "Total Marks: " << totalMarks << std::endl;
}

int calculateTotalMarks(const int marks[]) {
    int total = 0;
    for (int i = 0; i < 3; ++i) {
        total += marks[i];
    }
    return total;
}

int main() {
    Student student;
    std::cout << "Adding a Student" << std::endl;
    addStudent(student);
    std::cout << "\nDisplaying a Student" << std::endl;
    displayStudent(student);
    return 0;
}
