#include<iostream>
#include<algorithm>
using namespace std;
bool yyear(int year) {
 if(year%400==0) 
 return true;
 if(year%100==0)
 return false;
 if(year%4==0)
 return true;
 return false;
}
int main() {
    int year=2000;
if(yyear(year)) {
    cout<<"year is leap year"<<endl;
}
else {
    cout<<"year is not leap year"<<endl;
    
}

}