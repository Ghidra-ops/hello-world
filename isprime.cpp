// 判断素数
#include<iostream>

using namespace std;

void IsPrime(int number);

int main()
{
    int n, number;
    
    cout << "Input a number( number > 2 ): ";
    cin >> number;
    IsPrime(number);
    cout << "Input n: ";
    cin >> n;
    cout << "output the number(2 < number <= n)" << endl;
    for (int i = 3; i <= n; i++)
    {
       cout << i << " : ";
      IsPrime(i);
    }
    
   
    return 0;
}
void  IsPrime(int num)
{
    bool flag = true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    if (flag == false){
       cout << "number is not prime!" << endl;
    } else {
       cout << "number is prime!" << endl;
    }
}
