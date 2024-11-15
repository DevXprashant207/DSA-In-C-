#include<iostream>
using namespace std;
class Gun{
public:
  int ammo;
  int scope;
  int damage;
};
class player{
private:
    class Helmet{
      private:
         int hp;
         int level;
      public :
         int gethp(){
            return hp;
         }
         int getlevel(){
            return level;
         }
         void sethp(int hp){
            this->hp = hp;
         }
         void setlevel(int level){
            this->level = level;
         }
    };
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet  helmet;
public:
   int gethealth(){
      return health;
   }
   int getscore(){
      return score;
   }
   int getage(){
      return age;
   }
   Gun getGun(){
      return gun;
   }
   bool getalive(){
      return alive;
   }
   void sethealth(int health){
     this->health = health;
   }
   void setscore(int score){
      this->score = score;
   }
  void setage(int age){
      this->age = age;
   }
  void setalive(bool alive){
     this->alive = alive;
   }
  void setGun(Gun gun){
      this->gun = gun;
   }
  void setHelmet(int level){
     Helmet *helmet = new Helmet;// dyanmic alloaction
     helmet->setlevel(level);
     int health = 0;
     if(level==1)
       health = 25;
     else if(level == 2)
       health = 50;
     else if(level == 3)
       health = 100;
     else 
       cout<<"Error invalid level";
     helmet->sethp(health);  
     this->helmet =*helmet;
  }
  void getHelmet(){
   cout<<helmet.gethp()<<endl;
   cout<<helmet.getlevel()<<endl;
  }
};
int addscore(player a, player b){
   return a.getscore() + b.getscore();
}
player getMaxscoreplayer(player a, player b){
   if(a.getscore()>b.getscore()) return a;
   else return b;
}
int main(){

   #ifndef ONLINE_JUDGE
   freopen("input.text","r",stdin);
   freopen("output.text","w",stdout);
   #endif
   
   player raghav;// object creation, statically;
   player sumit;// complie time, staic memory allocation

   //player *urvi = new player;//runtime or dynamic memory alooaction/ memory alloacte during runting this line,
   
   Gun akm = {100,67,23};
   // akm.ammo(100);
   // akm.scope(67);
   // akm.damage(23);
   raghav.sethealth(188);
   raghav.setage(123);
   raghav.setscore(90);
   raghav.setalive(false);
   raghav.setGun(akm);
   raghav.setHelmet(2);

   Gun awm = {900,123,89};
   // awm.ammo(78);
   // awm.scope(3);
   // awm.damage(89);
   sumit.sethealth(900);
   sumit.setage(123);
   sumit.setscore(709);
   sumit.setalive(true);
   sumit.setGun(awm);
   sumit.setHelmet(3);

   Gun gun123 = sumit.getGun();
   cout<<gun123.ammo<<endl;
   cout<<gun123.damage<<endl;
   cout<<gun123.scope<<endl;

   raghav.getHelmet();
   sumit.getHelmet();

   // urvi->setscore(9000);
   // cout<<urvi->getscore()<<endl;

   // cout<<addscore(raghav,sumit)<<endl;
   // player max = getMaxscoreplayer(raghav,sumit);
   // cout<<max.getscore()<<endl;
   // cout<<max.gethealth()<<endl;
   //delete urvi;// release dyanmic memmory alloaction
   return 0;
}