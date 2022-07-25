#include<iostream>
using namespace std;

int main() {
    string n1;
    string n2;
    cout << "enter n1"<<endl;
    cin>>n1;
    cout << "enter n2"<<endl;
    cin>>n2;
   string str_inp1(n1);
   string str_inp2(n2);

cout<<"String 1:"<<str_inp1<<endl;
cout<<"String 2:"<<str_inp2<<endl;
int res = str_inp1.compare(str_inp2);

    if (res == 0)
        cout << "\nBoth the input strings are equal." << endl;
    else if(res < 0)
       
        cout << "String 1 is smaller as compared to String 2\n.";
        else
        cout<<"String 1 is greater as compared to String 2\n.";
}
