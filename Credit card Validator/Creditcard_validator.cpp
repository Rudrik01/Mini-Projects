#include<iostream>
using namespace std;
int v1(long n);
int v2(long n);
int main(void)
{
    //validating card
    long card;
    do
    {
        cout << "Enter your card number: ";
        cin >> card;
   }
    while(card<1);
    //validating checksum
    if((v1(card) + v2(card))%10 !=0)

    {
       cout << "Invalid" << endl;
    }
    //for amex
    else if((card>340000000000000 && card<350000000000000) ||( card>370000000000000 && card<380000000000000))
    {
        cout << "AMEX\n";
    }
    //for master card
    else if(card>5100000000000000 && card<5500000000000000)
    {
        cout << "MASTER CARD\n";
    }
    //for visa card
    else if(card>400000000000000 || card>4000000000000000 )
    {
        cout << "VISA CARD\n";
    }
    else
    {
        cout << "invalid\n";
    }
}
// sum of digits multiply by 2 as per condition
int v1(long n)
{
    n = n/10;
    int sum1=0;
    while(n>=1)
    {
        int m = (n%10)*2;


        if(m>=10)
        {
            m = m-9;

        }
        sum1 += m;
        n = n/100;
    }

     return sum1;

}
// sum of digits without multiplying by 2 as per given condition
int v2(long n)
{
    int sum2 = 0;
    while(n>=1)
    {
        int m = (n%10);
        sum2 += m;
        n = n/100;

    }
    return sum2;
}