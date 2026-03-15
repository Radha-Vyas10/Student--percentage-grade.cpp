
#include <iostream>
using namespace std;

int main()
{ int per;
    cout<<"Enter percentage of students";
    cin>>per;
    if(per>90)
    cout<<"Grade A+";
    else if(per>85)
    cout<<"Grade A";
    else if (per>70)
    cout<<"Grade B";
    else if(per>60)
    cout<<"Grade C";
    else if(per>50)
    cout<<"Grade D";
    else if(per<40)
    cout<<"Failed";
    

    
}
