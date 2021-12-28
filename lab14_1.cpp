#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double z[],int x,double c[]){
   
    double sum;
    double sumsqr;
    double Am, sd, xgm=1, Gm,Hm, max=z[0], min=z[0];

    for(int i=0;i<x;i++)
    {
    sum += z[i];
    sumsqr += pow(z[i],2);
    xgm *= z[i];
    Hm += 1.0/z[i];
    if(z[i]>max) max=z[i];
    if(z[i]<min) min=z[i];
    }
   Am=sum/x;
   c[0]=Am;
   sd=sqrt((1.0/x*sumsqr)-pow(Am,2));
   c[1]=sd;
   Gm= pow(xgm,(1.0/x));
   c[2]=Gm;
   c[3]=x/Hm;
   c[4]=max;
   c[5]=min;
   

   
   
    
}