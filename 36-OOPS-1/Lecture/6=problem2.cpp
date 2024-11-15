#include<iostream>
#include<string>
using namespace std;
class Cricketor{
  private:
    string Name;  
    int Age;
    int NoOfMatches;
    int Avg;
 public:
    void setName(string Name){
         this->Name = Name;
    }
    void setAge(int Age){
        this->Age = Age;
    }
    void setNoOfMaches(int NoOfMatches){
        this-> NoOfMatches =  NoOfMatches;
    }
    void setAvg(int Avg){
       this-> Avg = Avg;
    }
    string getName(){
       return Name;
    }
    int getAge(){
       return Age;
    }
    int getNoOfMatches(){
       return  NoOfMatches;
    }
    int getAvg(){
       return Avg;
    }
     
};
int main(){
     const int n = 20;
     Cricketor cricketors[n];
     cout<<"Enter details of cricketors-- \n";
     for(int i=1; i<=n; i++){
          cout<<i<<" player \n";
          string n;
          cout<<"Name : ";
          cin>>n;
          cricketors[i].setName(n);
          int age;
          cout<<"Age : ";
          cin>>age;
          cricketors[i].setAge(age);
          int no;
          cout<<"No of Matches : ";
          cin>>no;
          cricketors[i].setNoOfMaches(no);
          int avg;
          cout<<"Avgerage : ";
          cin>>avg;
          cricketors[i].setAvg(avg);
     }
     cout<<cricketors[15].getAge()<<endl;
     cout<<cricketors[6].getAge()<<endl;
     cout<<cricketors[5].getAge()<<endl;
     cout<<cricketors[8].getAge()<<endl;
     cout<<cricketors[10].getAge()<<endl;
     cout<<cricketors[11].getAge()<<endl;
     cout<<cricketors[12].getAge()<<endl;
     cout<<cricketors[13].getAge()<<endl;
     cout<<cricketors[14].getAge()<<endl;

}
