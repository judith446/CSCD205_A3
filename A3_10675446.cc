#include <iostream>
using namespace std;
int main(int argc, char**argv)
{
//Grading system of the School
double score;
//Accept input from user
cout<<"Enter score"<<endl;
cin>>score;
//Determine and print out grade of student based on input
if (score <= 100 && score>= 80){cout<<"Grade: A"<<endl;}
else if (score >100){cout<<"Invalid Input"<<endl;}
else if (score <= 79 && score>= 75){cout<<"Grade: B+"<<endl;}
else if (score <= 74 && score>= 70){cout<<"Grade: B"<<endl;}
else if (score <= 69 && score>= 65){cout<<"Grade: C+"<<endl;}
else if (score <= 64 && score>= 60){cout<<"Grade: C"<<endl;}
else if (score <= 59 && score>= 55){cout<<"Grade: D+"<<endl;}
else if (score <= 54 && score>= 50){cout<<"Grade: D"<<endl;}
else if (score <= 49 && score>= 45){cout<<"Grade: E"<<endl;}
else{cout<<"Grade: F"<<endl;}

return 0;
}
