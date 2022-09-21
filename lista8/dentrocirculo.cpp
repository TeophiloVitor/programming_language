#include <iostream>
#include <cmath>
using namespace std;

float dist(float p1x, float p2x, float p1y, float p2y){
    float dist=0;
    dist = sqrt((pow((p1x-p1y),2) + pow((p2x-p2y),2)));
    return dist;
}
bool dentrofora(float a, float b, float c, float d, float e){
    bool resp = false;
    if(dist(b,c,d,e) <= a){
        resp = true;
    }else{
        resp = false;
    }
    return resp;
}
int main(){
    float r, c1, c2, p1, p2;
    cin>>r>>c1>>c2>>p1>>p2;

    if(dentrofora(r,c1,c2,p1,p2) == true){
        cout<<"O ponto está dentro"<<endl;
    }else{
        cout<<"O ponto está fora"<<endl;
    }
return 0;
}
