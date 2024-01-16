// Usage of if else ladder

#include<iostream>
using namespace std;
int main()
{
    int i;
    float mark, sum=0, avg;
    cout<<"Enter Marks obtained in 3 Subjects: ";
    for(i=0; i<3; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/3;
    cout<<"\nGrade = ";
    if(avg>=91 && avg<=100)
        cout<<"A*";
    else if(avg>=81 && avg<91)
        cout<<"A";
    else if(avg>=71 && avg<81)
        cout<<"B";
    else if(avg>=61 && avg<71)
        cout<<"C";
    else if(avg>=51 && avg<61)
        cout<<"D";
    else if(avg>=41 && avg<51)
        cout<<"Pass";
    else if(avg>=0 && avg<41)
        cout<<"Fail";
    else
        cout<<"Invalid!";
    cout<<endl;
    return 0;
}
