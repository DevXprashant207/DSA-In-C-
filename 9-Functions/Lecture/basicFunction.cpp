#include<iostream>
using namespace std;
void startriangle(int x){
     for(int i=1; i<=x; i++){
               for(int j=1; j<=i; j++){
                    cout<<"* ";
               }
               cout<<endl;
          }
}
int main(){
     int a, b, c;
     cin>>a>>b>>c;
     startriangle(a);
     startriangle(b);
     startriangle(c);
     // int a;
     // for(int k=1; k<=3; k++){
     //      cout<<"Enter Number Of lines : ";
     //      cin>>a;
     //      for(int i=1; i<=a; i++){
     //           for(int j=1; j<=i; j++){
     //                cout<<"* ";
     //           }
     //           cout<<endl;
     //      }
     // }
}