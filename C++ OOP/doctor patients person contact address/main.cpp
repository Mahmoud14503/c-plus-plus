#include <iostream>
#include "Address.h"
#include "Contact.h"
#include "Doctor.h"
#include "Patient.h"
#include "Person.h"
using namespace std;

int main() {
    Address address("egy", "sharqia", "Al salhia");
    Contact contact("01090908451", "mah030577@gmail.com");
    string drugs[2] = {"cataflam,", "panadol"};
    string diseases[2] = {"cold", "soda3"};
    Patient patient1("ahmed", drugs , 2, diseases, 2);
    Patient patient2("omar", drugs , 2, diseases, 2);
    Patient patient3("ibrahim", drugs , 2, diseases, 2);
    Patient arrOfPatients[3] = {patient1, patient2, Patient("omar", drugs, 2,diseases,2)};
    Doctor doctor(arrOfPatients, 3);
    doctor.print();
    return 0;
}