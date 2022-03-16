#include <iostream>

using namespace std;

class students{
  private:
    int studentNo;
    int marks1;
    int  marks2;
    int  marks3;
  public:
    void setStudentno(int id);
    void assignmarks(int m1, int m2, int m3);
    float calcAvg();
};

void students::setStudentno(int id) {
    studentNo=id;
}

void students::assignmarks(int m1, int m2, int m3) {
    marks1 = m1;
    marks2 = m2;
    marks3 = m3;
}

float students::calcAvg() {
    float avg = (marks1 + marks2 + marks3) / 3;
    return avg;
}

int main() {
    students sdt;

    sdt.setStudentno(200);
    sdt.assignmarks(20,10,30);

    cout<<sdt.calcAvg();
    return 0;
}
