#include <iostream>
using namespace std;

class Student{
public:
    static int commonRollNo;

    static int getrollNo(){
        return commonRollNo;
    }
};
int Student:: commonRollNo;


int main() {

    Student student;
    student.commonRollNo = 25;
    cout << student.getrollNo() << endl;


    return 0;
}
