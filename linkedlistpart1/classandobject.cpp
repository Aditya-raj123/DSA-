#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    float marks;
    Student(string name , int rno , float marks){
    this->name = name;
    this->rno = rno;
    this->marks = marks;
    }
};
// void change(Student &s){
//     s.name="uditya";
// }

int main(){
    Student s("aditya ",67,90);
    // cout<<s.name<<endl;
    Student *ptr=&s;
    cout<<s.name<<endl;
    // (*ptr).name="uditya";
    ptr->name="uditya";
    cout<<s.name<<endl;

    // change(s);
    // cout<<s.name<<endl;
    // to simplfy it we introduce the constructor
    // s.name = "Aditya raj";
    // s.rno = 22052873;
    // s.marks=98;
    // cout<<s.name<<endl;
    // cout<<s.rno<<endl;
    // cout<<s.marks<<endl;

    return 0;

}