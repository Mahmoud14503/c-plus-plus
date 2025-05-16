#include <iostream>
using namespace std;

class CourseType{
    private:
        string CourseName;
        string CourseNo;
        int CourseCredits;
    public:
        void setCourseInfo(string CNA, string CNO, int CCR) {
            CourseName = CNA;
            CourseNo = CNO;
            CourseCredits = CCR;
        }

        void print(ostream& out){
            cout <<"course name is: \n" << CourseName << "course number: \n" << CourseNo << "Course credits: \n" << CourseCredits <<endl;
        }

        int getCredits(){
            return CourseCredits;
        }

        string getName(){
            return CourseName;
        }

        string getCourseNo(){
            return CourseNo;
        }

        CourseType(string name = "", string no = "", int credits = 0) {
            CourseName = name;
            CourseNo = no;
            CourseCredits = credits;
        }

};

int main() {
    
    CourseType s;

    s.setCourseInfo("Programming II", "7", 3);

    s.print(cout);

    return 0;
}