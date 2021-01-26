#include <iostream>
#include <cmath>
using namespace std;


double * read_poly(int &n)
{
    cout << "The power of the polynomial is: ";
    cin >> n;
    
    double * c = new double[n+1];
    
    for(int i=0; i<=n; i++)
    {
        cout << "coefficient of degree " << i << ": ";
        cin >> c[i];
    }

    return c;
}


void print_poly(double *c, int n)
{
    int i;
    cout << c[0];
    
    if(n>0)
        cout << " + ";
    for(i=1;i<n;i++)
        cout << c[i] << "*x^" << i << " + ";
    if(n>0)
        cout << c[n] << "*x^" << i;
    cout << endl;
}


double compute_value(double x, double *c, int n)
{
    double sum = 0.0;
    for (int i = 0; i <= n; i++)
    {
        sum = sum + c[i]*pow(x,i);
    }
    return sum;
}


int max_degree(int d1, int d2)
{
    int dr = max(d1,d2);
    return dr;
}


double * poli_sum (double * p1, int d1, double * p2, int d2, int & dr)
{
    double *sum = new double[dr+1];
    
    // Initialize the porduct polynomial
    for (int i=0; i<=d1; i++)
        sum[i] = p1[i];
      
    // Take ever term of first polynomial
    for (int i=0; i<=d2; i++)
        sum[i] += p2[i];
    
    return sum;
}
    

double * poli_product (double * p1, int d1, double * p2, int d2)
{
    int size = d1+d2;
    double * product = new double[size+1];
    
    for (int i=0; i<=d1+d2; i++)
       product[i] = 0;
    
     // Take ever term of first polynomial
     for (int i=0; i<=d1; i++)
     {
       for (int j=0; j<=d2; j++)
           product[i+j] += p1[i]*p2[j];
     }
    
     return product;
}


int main()
{
    double x;
    cout << "please input a value x:" << endl;
    cin >> x;
    double *p1;
    double *p2;
    int g1;
    int g2;
    
    p1=read_poly(g1);
    p2=read_poly(g2);
    cout << "***********************************************************************" << endl;
    
    cout << "The first polynomial is: " << endl;
    print_poly(p1,g1);
    
    cout << "The result at this point is: " << compute_value(x,p1,g1) << endl;
    cout << "***********************************************************************" << endl;
    
    cout << "The second polynomial is: " << endl;
    print_poly(p2,g2);
    
    int dr = max_degree(g1,g2);
    double *sum =  poli_sum(p1, g1, p2, g2, dr);;

    cout << "The sum of 2 polynomials is: " << endl;
    print_poly(sum, dr);
    cout << "***********************************************************************" << endl;
    
    int size = g1+g2;
    double *product = poli_product(p1,g1,p2,g2);
    
    cout << "The product of 2 polynomials is: " << endl;
    print_poly(product, size);
    
    delete[] p1;
    delete[] p2;
    delete[] sum;
    
    return 0;
}
