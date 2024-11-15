#include<iostream>
using namespace std;
class Student{
public:  
   string name;
   int rn;
   float percentage;
   Student(string name, int rn, float percentage){// constructor
       (*this).name = name; //this->name = name;
       this->rn = rn;
       this->percentage = percentage;
   }
};
void change(Student* s){
     s->name = "Harsh";
}
int  main(){
       Student s("Prashant",48,89.18);
//Student* s = new Student("Prashant",48,89.18);
       Student* ptr = &s;
//     s.name="Prashant Thakur";
//     s.rn = 78;
//     s.percentage=89.18;
    cout<<s.name<<endl;
    cout<<s.rn<<endl;
    cout<<s.percentage<<endl;
    change(ptr);
//     ptr->name = "Abhinav";//(*ptr).name = "Abhinav";
//     (*ptr).rn  = 56;
//     (*ptr).percentage = 81.15;
    cout<<s.name<<endl;
    cout<<s.rn<<endl;
    cout<<s.percentage<<endl;
}