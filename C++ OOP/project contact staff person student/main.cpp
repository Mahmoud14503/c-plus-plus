#include <iostream>
#include <string>
#include "Contact.h"
#include "Person.h"
#include "Project.h"
#include "staff.h"
#include "Student.h"

using namespace std;

int main() {
    Contact contact;
    contact.setPhone("01090908451");
    contact.setEmail("mah030577@gmail.com");

    Person person;
    person.setName("Mahmoud");
    person.setID("1");
    person.setPhone(contact.getPhone());
    person.setEmail(contact.getEmail());
    cout << "Name: " << person.getName() << endl;
    cout << "Phone: " << person.getPhone() << endl;
    cout << "Email: " << person.getEmail() << endl;

    Project project;
    project.setTitle("composition OPP");
    project.setArea("Programming");

    Staff advisor;
    advisor.setName("Dr. Doaa");
    advisor.setID("1");
    advisor.setPhone("01012345678");
    advisor.setEmail("Doaa@gmail.com");
    advisor.setPosition("Professor");

    Student student;
    student.setProgram("Computer Science");
    student.setProject(project);
    student.setAdvisor(advisor);
    cout << "Program: " << student.getProgram() << endl;
    cout << "Project Title: " << student.getProjectTitle() << endl;
    cout << "Project Area: " << student.getProjectArea() << endl;
    cout << "Advisor Name: " << student.getAdvisorName() << endl;
    cout << "Advisor Position: " << student.getAdvisorPosition() << endl;

    Staff staff;
    staff.setPosition("student");
    cout << "MY Position: " << staff.getPosition() << endl;

    return 0;
}
