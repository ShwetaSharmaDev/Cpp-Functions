#include <iostream>
using namespace std;

class student {
private:
    void getpercentage(){
        cout<< (cgpa * 10) <<endl;
    }

    string name;
    int cgpa;
public:

    void setcgpa (int c){
        cgpa = c;
    }

    int getcgpa (){
        return cgpa;
    }

};


int main() {

    student s1;
    s1.setcgpa(9);
    cout<< s1.getcgpa() << endl;

    
    
    return 0;
}