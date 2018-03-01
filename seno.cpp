#include<iostream>
#include<cmath>
const double x=(M_PI)/2; //rad;
double seno (int N);
double termino (double m);
int main()
{std::cout.precision(16);
  int num,ii;
  double b,a,error;
  num=20;
  for(ii=1;ii<=num;ii++)
    {
      b=seno(ii);
      a=std::sin(x);
      error=((std::abs(a-b))/(std::abs(a)))*100;
      std::cout<<b<<"  "<<error<<std::endl;
    }
}

double termino (double m)
{double a;
  if(m==1.0)
    {a=x;}
  else
    {a=(termino(m-1)*(-1)*(std::pow(x,2)))/(((2*m)-1)*((2*m)-2));
    }
  return a;
}
 
double seno (int N)
{double sum, ter;
  sum=0;
  for(double i=1.0; i<=N; i++)
    {
      ter=termino(i);
      sum+=ter;
    }
    
  return sum;
}
