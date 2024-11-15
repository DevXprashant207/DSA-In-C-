#include<iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the marks of student out of 100 : ";
     cin>>n;
     // if(n>90 && n<=100){
     //      cout<<"Excellent";
     // }
     // if(n>80 && n<=90){
     //      cout<<"Very Good";
     // }
     // if(n>70 && n<=80){
     //      cout<<"Good";
     // }
     // if(n>60 && n<=70){
     //      cout<<"Can do Better";
     // }
     // if(n>50 && n<=60){
     //      cout<<"Average";
     // }
     // if(n>40 && n<=50){
     //      cout<<"Below Average";
     // }
     // if(n<40){
     //      cout<<"Failed";
     // }
     /*    cout<<"Can do better";
                    }
                    else{
                         if(n>=51){
                              cout<<"Average";
                         }
                         else{
                              if(n>=41){
                                   cout<<"Bellow Average ";
                              }if(n>=91){
          cout<<"Excellent";
     }
     else{
          if(n>=81){
               cout<<"Very Good";
          }
          else{
               if(n>=71){
                    cout<<"Good";
               }
               else{
                    if(n>=61){
                     
                              else{
                                   if(n<=40){
                                        cout<<"Failed";
                                   }
                              }
                         }
                    }
               }
          }
     }*/
     if(n>=91){
          cout<<"Excellent";
     }
     else if(n>=81){
          cout<<"Very Good";
     }
     else if(n>=71){
          cout<<"Good";
     }
     else if(n>=61){
          cout<<"Can do better";
     }
     else if(n>=51){
          cout<<"Average";
     }
     else if(n>=41){
          cout<<"Below Average";
     }
     else if(n<=40){
          cout<<"Failed"; 
     }
}
