#include <iostream>

using namespace std;

int main() {
int num[10];
string spell[]={"first","second","third","fourth","fifth","sixth","sevent","eight","nineth","tenth"};
int sum;
double ave;
cout<<"Enter 10 numbers \n";

for(int i=0; i<10; i++){
    
    cin>>num[i];
}
cout<<"you entered: \n";

for(int i=0; i<10; i++){
    cout<<num[i]<<endl;
}

for(int i=0; i<10; i++){
    cout<<"The "<<spell[i]<<" number is: "<<num[i]<<endl;
}
for(int i; i<10;i++){
    sum += num[i];
}
    for(int i; i<1;i++){
        ave = sum/10;
    }
cout<<"The sum of the numbers is: "<<sum<<endl;
cout<<"The averange of the numbers is: "<<ave;

}
