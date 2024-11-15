#include<iostream>
using namespace std;
class Bike{
     public:
     int tyersSize;
     int tyersengine;
     Bike (int tyersSize, int engineSize){
          this->tyersSize = tyersSize;
          this->tyersengine = tyersengine;
          cout<<"Constructor call huwa ! \n";
     }
     ~Bike(){
          cout<<"destructor call huwa ! \n";
     }
};
void print(){
     static int a = 10;
     cout<<a<<endl;
     a++;
}
int main(){
     print();
     print();
     print();
//     Bike tvs(10,90);//object creation// compilor ko call jayegi ki object ke liye memorry creat karo
//     Bike hero(234,100);
//     Bike apc(78,67);
//     cout<<tvs.tyersengine<<" "<<tvs.tyersSize<<endl;
//     cout<<hero.tyersengine<<" "<<hero.tyersSize<<endl;
//     cout<<apc.tyersengine<<" "<<apc.tyersSize<<endl;
  
}