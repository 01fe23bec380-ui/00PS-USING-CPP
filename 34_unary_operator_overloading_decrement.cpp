// Program 34: Unary operator overloading for decrement operator (--)
// Name: Shreya B Gundali
// Roll No: 573
// Division: E
// SRN: 01fe23bec380
// Semester: 7
// Department: Electronics and Communication Engineering
// College: KLE Technological University, Hubli

// program for unary operator overloading ... for decrement operator (--)

#include<iostream>
using namespace std;

class Counter{
int val;
public:
    Counter(int v=0): val(v) {}

    Counter& operator++(){    // PREFIX --c
    val--;
    return *this;
    }

Counter operator++(int){      // POSTFIX c--
Counter temp=*this;
val--;
return temp;        // returns the old value
}

int get(){return val;}

};

int main()
{
Counter c;
c++;
cout<<"The returned value is: "<<c.get()<<endl;
++c;
cout<<"The returned value is: "<<c.get();
    return 0;
}
