#include<iostream>
using namespace std;

int main()
{
 top:  
int num;
cout<<"        *CHOSE IN THE LIST BELOW*\n\n";
cout<<"1.Estimating win rate  \n";
cout<<"2.Computing win rate  \n";
cout<<"3.Computing win(s)\n";
cout<<"4.Basis syntax \n\n";
cout<<" -ENTER THE NUMBER YOU WANT TO SELECT-\n";
cout<<"-> ";
cin>>num;



switch(num){
case 1:
cout<<"**************************************";
cout<<"**************************************";
int win1,lose1;
double twr,ng;
cout<<"Enter win(s): ";
cin>>win1;
cout<<"Enter lose(s): ";
cin>>lose1;


ng = win1 + lose1;
twr = win1/ng * 100;

cout<<"your number of game(s) is: "<<ng<<endl;
cout<<"your win rate is "<<twr<<" %"; 
break;



case 2:
cout<<"**************************************";
cout<<"**************************************";
double ewr, og, cwr,total;
cout<<"Enter your current win rate\n -> ";
cin>>cwr;
cout<<"Enter your overall game\n -> ";
cin>>og;
cout<<"Enter expected win rate\n -> ";
cin>>ewr;


break;
case 3:
cout<<"**************************************";
cout<<"**************************************";
double wr2,ng2,q;
int win2,lose2,ads;
cout<<"Enter number of games \n ";
cin>> ng2;
cout<<"Enter current win rate(%)\n ";
cin>>wr2;

q = wr2 / 100;
win2 = ng2 * q;
lose2 = ng2 - win2;
ads = win2 - lose2;
cout<<"your win(s): "<<win2<<endl; 
cout<<"your lose(s): "<<lose2<<endl;
cout<<"total win(s) advantage: "<<ads<<endl;

if(ads < 0)
cout<<"YOUR WIN RATE IS BEHIND!!";

break;
case 4:
    int a=0, b,c=0, win[10]={0},lose[10]={0}, numg[10]={0};
    double wr;
    for(int i = 0; i<10; i++){
    
cout<<" 1 = win \n 0 = lose \n -> ";
    cin>>b;
      
if(b==1){
a++;
win[i] += a;
lose[i] += c;

cout<<"win: "<<win[i]<<endl;
cout<<"lose: "<<lose[i]<<endl;

}else if(b==0){
c++;
lose[i] += c;
win[i] += a;

cout<<"win: "<<win[i]<<endl;
cout<<"lose: "<<lose[i]<<endl;

}else{
cout<< "invalid\n";
goto top;

}   
  numg[i] = win[i] + lose[i];
wr=  win[i] + lose[i];
float total = win[i] / wr * 100;
cout<<"total games: "<<numg[i]<<endl;
 cout<<"your win rate is: "<<total<<"%\n\n";

} break; 
}     
    return 0;
}
