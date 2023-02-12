#include <iostream>
using namespace std
int main()

{

int num1;

int num2;

int temp;


cout <<"enter "
;
cin>> num1 >> num2;



while (((num1 + num2 )%5)!=0)

{
 temp= num1 + num2;

 num1 = num2;
 
num2 = temp;
 
cout << temp <<"";
}
 


}


part 2 

#include <iostream>


using namespace std;


int main()

{

int num1;

int num2;

int temp;

cout <<"enter ";

cin>> num1 >> num2;



for (num1; num1 <= num2; num1++)
{

if (num1 ==5 )

continue;



else if (num1 == 8)

break;



else 

cout<<num1<<"";

} 



}

