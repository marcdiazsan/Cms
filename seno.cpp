#include<iostream>
#include<cmath> //rad;
double seno (int N, double x);
double termino (double m, double b);
int main()
{std::cout.precision(16);
  int num,ii;
  double b,a,error,x,jj,k;
  num=9;
  k=0.1;
  for(jj=0;jj<=130;jj++)
    {x=k;
      k+=0.1;
  for(ii=1;ii<=num;ii++)
    {
      b=seno(ii,x);
      a=std::sin(x);
      error=((std::abs(a-b))/(std::abs(a)))*100;
      std::cout<<x<<"  "<<ii<<"  "<<error<<std::endl;
    }
    }
}

double termino(double m, double b)
{double a;
  if(m==1.0)
    {a=b;}
  else
    {a=(termino(m-1,b)*(-1)*(std::pow(b,2)))/(((2*m)-1)*((2*m)-2));
    }
  return a;
}
 
double seno (int N, double x)
{double sum, ter,m;
  sum=0;
  m=x;
  for(double i=1.0; i<=N; i++)
    {
      ter=termino(i,m);
      sum+=ter;
    }
    
  return sum;
}
