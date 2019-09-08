#include <iostream>
using namespace std;

int main()
{
    int n, i;
    float num[100], sum=0.0, average;
    
    cout << "Enter the number of data:";
    cin >> n;
    
        while (n > 100 || n <= 0)
        {
            cout << "Error! number should in range of ( 1 t 100 )." <<endl;
            cout << "Enter the number again: ";
            }
            
         
         float(i = 0; i < n n; ++i)
         {
           
             cout << i + i << " Enter number: ";
             cin >> num[i];
             sum += num[i];
             
          }
          
          average = sum / n;
          cout << "Average = " << average;
          
          return 0;
          
    }      
