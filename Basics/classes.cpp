#include <iostream>
#include <vector>
using namespace std;

class Student{
    private: 
    vector<int> Roll;
    vector<string> Name;
    vector<string> Email;
    int count=0;

    public:
    Student(string Sname, int Sroll, string Smail){
        Name.push_back(Sname);
        Roll.push_back(Sroll);
        Email.push_back(Smail);
    }

    
};

int main(){



    return 0;
}