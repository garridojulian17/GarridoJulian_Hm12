include <iostream>
include <ctime>
using namespace std;
#include <cmath>  

double UM(double U, double dt,double dx,double Um, double c){


double U = U - C*(dt/dx)*(U-Um);
UM=U;

return UM;


}






int main (){

double c = 1.0;
double x[80];
double U0[80];
double dx = 2 / 80 ;

double dt = 0.2;
i[0] = 0 ;
int i 0;
for( i = 0 ;i < 2; i++){
int U0= 0
x[i] = x[i-1]+ dx;

if(abs(x[i])<=0.5)
{
U0 = 0.5;

}

else{
U0=0;

}
} 




int i = 0;
for(i= 0;i<700;i+= dt){

 UM(U,dt,dx,Um,c);
 UM[i]= UM[i+1];

int j=0;
for (j=0;j<700;j+=dx)
{
 UM(U,dt,dx,Um,c);
 UM[j]= UM[j+1];

}
}



}
