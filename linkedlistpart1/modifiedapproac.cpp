#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int rno;
    int marks;
    Student(string name,int rno,int marks){
        this->name = name;
        this->rno = rno;
        this->marks = marks;
       

    }
};
void change(Student *s){
    s->name="uditya";
}

int main(){
    Student *s= new Student("aditya ",56,90);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;


    return 0;

}