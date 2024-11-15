#include<iostream>
using namespace std;
int maze(int sr, int sc, int er, int ec){
     if(sr>er || sc>ec) return 0;
     if(sr==er && sc==ec) return 1;
     int rightways = maze(sr,sc+1,er,ec);
     int downways = maze(sr+1,sc,er,ec);
     return rightways + downways;
}
void mazeprint(int sr, int sc, int er, int ec,string s){
     if(sr>er || sc>ec) return;
     if(sr==er && sc==ec){ // destination reached
          cout<<s<<endl;
          return;
     } 
     mazeprint(sr,sc+1,er,ec,s+"R");// right
     mazeprint(sr+1,sc,er,ec,s+"D");//down
}

int main(){
     int a, b;
     cout<<"Enter no of rows : ";
     cin>>a;
     cout<<"Enter no of columns : ";
     cin>>b;
     int nw = maze(1,1,a,b);
     cout<<"Total no of ways is : "<<nw;
     cout<<"\n ways is __\n";
     mazeprint(1,1,a,b,"");
}