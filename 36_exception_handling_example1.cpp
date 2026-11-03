// Program 36: Example 1 of Exception Handling
// Name: Shreya B Gundali
// Roll No: 573
// Division: E
// SRN: 01fe23bec380
// Semester: 7
// Department: Electronics and Communication Engineering
// College: KLE Technological University, Hubli

//Example 1 of Exception Handling.
#include<iostream>
using namespace std;
int main()
{
    int x=-1;
    cout<<"Before try \n";
    try{
    cout<<"Inside try \n";
    if(x<0){
       throw x;
       cout<<"After throw"<<"(never executed)\n";
    }
    }
    catch(int x){
    cout<<"Exception Caught and x= "<<x<<endl;
    }
    cout<<"After Catch"<<"(will be executed) \n";
    return 0;
}
