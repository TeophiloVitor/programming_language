#include <iostream>
#include <iomanip>
using namespace std;

 int transforma(int seg, int &h, int &m, int &s){
 h = seg/3600;
 m = (seg%3600)/60;
 s = (seg%3600)%60;
 }
 int main( ){
 int seg, h=0, m=0, s=0;
 cin >> seg;

  transforma(seg, h, m, s);
  cout<<setfill('0')<<setw(2)<<h<<":"<<setfill('0')<<setw(2)<<m<<":"<<setfill('0')<<setw(2)<<s<<endl;
  return 0;
 }
