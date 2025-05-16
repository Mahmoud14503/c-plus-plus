#ifndef DOCTOR_H
#define DOCTOR_H
#include <iostream>
#include "Patient.h"
using namespace std;

class Doctor : public Person
{
private:
    Patient *patient;
    int patientSize;
public:
    Doctor()
    {
        this->patient = NULL;
        this->patientSize = 0;
    }
    Doctor(Patient *patient, int size)
    {
        this->patient = patient;
        this->patientSize = size;
    }
    void print() override {
        for (int i = 0; i < patientSize; i++)
        {
            cout << "Patient num #" << i + 1 << endl;
            patient[i].print();
        }
        
    }
};

#endif