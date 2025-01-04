#include <iostream>
#include <cstring>
using namespace std;

int max_students=50;
int student_count=0;
char student_name[50][50];
int student_ID[50];
char department[50][50];

void addStudent();
void displayAllStudents();
void searchStudentById();
void updateStudentInfo();
void deleteStudent();

int main ()
{
	int choice;
	while (choice!=6)
	{
	
	cout << "--- Student Management System ---\n";
        cout << "1. Add a Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Search for a Student by ID\n";
        cout << "4. Update Student Information\n";
        cout << "5. Delete a Student\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
		 {
            case 1:
                addStudent();
                break;
            case 2:
                displayAllStudents();
                break;
            case 3:
                searchStudentById();
                break;
            case 4:
                updateStudentInfo();
                break;
            case 5:
                deleteStudent();
                break;
            case 6:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
}
}


void addStudent()
{
	if (student_count >= max_students)
	 {
        cout << "Student list is full. Cannot add more students.\n";
    }
	cout << "Enter student ID=";
	cin >> student_ID[student_count];
	cin.ignore();
	cout << "Enter student Name=";
	cin >> student_name[student_count];
	cout<< "Enter Department=";
	cin >> department[student_count];
	student_count++;
	cout << "Student Added" << endl;
}

void displayAllStudents()
{
	 if (student_count==0)
	 {
	 	cout << "No students to display." << endl;
	 }
	 else
	 {
	 	cout << "List of All Students:" << endl;
	 	for (int i=0; i<student_count; i++)
	 	{
	 		cout << "Student ID=" << student_ID[i] << endl;
	 		cout << "Student Name=" << student_name[i]<< endl;
	 		cout << "Department=" << department[i] << endl;
		 }
	 }
}

void searchStudentById()
{
	if (student_count==0)
	{
		cout << "No students in this list" << endl;
	}
	else
	{
		int id;
		cout << "Enter Student ID to search=";
		cin >> id;
		
		for (int i=0; i<student_count; i++)
		{
			if (student_ID[i]== id)
			{
				cout << "student found"<< endl;
				cout << "Student ID=" << student_ID[i] << endl;
	 			cout << "Student Name=" << student_name[i]<< endl;
	 			cout << "Department=" << department[i] << endl;
			}
			else
			{
				cout << "Student with ID" << id << "not found" << endl; 
			}
		}
	}
}

void updateStudentInfo()
{
	if (student_count==0)
	{
		cout << "No students in this list" << endl;
	}
	else
	{
		int update;
		cout << "Enter student ID to update=";
		cin >> update;
		
		for (int i=0; i<student_count; i++)
		{
			if (student_ID[i]== update)
			{
				
				cout << "Enter new Name=";
				cin >> student_name[i];
				cout << "Enter new ID=";
				cin >> student_ID[i];
				cout << "Enter new Department=";
				cin >> department[i];
				cout << "Student Information Updated."<< endl;
			}
			else
			{
				cout << "Student with ID" << update << "not found" << endl; 
			}
		}
	}
}

void deleteStudent()
{
	if (student_count==0)
	{
		cout << "No students in this list" << endl;
	}
	else
	{
		int del;
		cout << "Enter student ID to delete=";
		cin >> del;
		
		for (int i=0; i<student_count; i++)
		{
			if (student_ID[i]== del)
			{
				
				for (int j=i; j<=student_count-1; j++)
				{
					student_ID[j]=student_ID[j+1];
					strcpy(student_name[j], student_name[j+1]);
					strcpy(department[j], department[j+1]);
				}
				student_count--;
				cout << "Student with ID" << del << "deleted" << endl;
			}
			else
			{
				cout << "Student with ID" << del << "not found" << endl; 
			}
		}
	}
}



