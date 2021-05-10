#include<math.h>
#include<bits/stdc++.h>

using namespace std;


int main()
{

float A[] = {0.5,0.6,0.7,0.8,0.9};
float sum = 0;
float sum2 = 0;


for(int i = -1;i>=-4;i--)
{
sum = 0;
for(int j = 0;j<5;j++)
{
	
	cout<<"e^"<<i*A[j]<<"is"<<exp(i*A[j])<<endl;
	cout<<"y x e^"<<i*A[j]<<"is"<<A[j]*exp(i*A[j])<<endl;
sum = sum + exp(i*A[j]);
sum2 = sum2+(A[j]*exp(i*A[j]));
}

cout<<"FINALLY"<<endl;
cout<<" e raised to "<<i<<" is "<<sum<<" and the y x e^x shit is "<<sum2<<endl;
sum2 =0;



}
}
