#include<iostream>
using namespace std;
class Student{
public :
    string name;
    int rno;
    int marks;
    Student(string name,int rno,float marks){
        this->name=name;
        // here this is act as the pointer;
        this->rno=rno;
        this->marks=marks;
    }
};
void change(Student* s){
    s->name="uditya";
}
int main(){
    Student* s = new Student("aditya",9,90);
    cout<<s->name<<endl;
    change(s);
    cout<<s->name<<endl;

















    return 0;

}