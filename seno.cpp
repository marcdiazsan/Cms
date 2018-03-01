#include<iostream>
#include<cmath>
const double x=0.2; //rad;
double seno (int N);
double termino (double m);
int main()
{
  
}
double termino (int m)
{double a;
  if (m==1)
    {a=x;}
  else
    {a=termino(m-1)*(((-1)*(std::pow(x,2)))/((2*m)+1));
    }
  return a;
}

double seno (int N)
{double sum, ter;
  sum=0;
  for(int i=0; i<=N; i++)
    {
      ter=termino(i);
      sum+=ter;
    }
    
  return sum;
}
