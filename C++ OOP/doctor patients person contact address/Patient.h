#ifndef PATIENT_H
#define PATIENT_H
#include <iostream>
#include "Person.h"
using namespace std;

class Patient
{
    private:
        string Patientname;
        string *drugs;
        string *diseases;
        int drugSize;
        int diseaseSize;
    public:
        Patient(string Patientname, string *drugs, int drugSize, string *diseases, int diseaseSize)
        {
            this->Patientname = Patientname;
            this->drugs = drugs;
            this->diseases = diseases;
            this->drugSize = drugSize;
            this->diseaseSize = diseaseSize;
        }
        
        /*-------------------------*/

        void AddDrugs(string drug)
        {
            string *newDrugs = new string[drugSize + 1];
            for (int i = 0; i < drugSize; ++i)
            {
                newDrugs[i] = drugs[i];
            }
            newDrugs[drugSize++] = drug;

            delete[] drugs;
            drugs = newDrugs;
        }

        void RemoveDrugs(int index)
        {
            drugs[index]=drugs[drugSize-1];
            drugSize--;
        }

        ~Patient(){}

        void print()
        {
            cout << "Name: ";
            cout << Patientname << endl;

            cout << "Drugs: ";
            for (int i = 0; i < drugSize; ++i)
            {
                cout << drugs[i] << ", ";
            }
            cout << endl
                    << "Diseases: ";
            for (int i = 0; i < diseaseSize; ++i)
            {
                cout << diseases[i] << ", ";
            }
            cout << endl;
        }
    
};

#endif