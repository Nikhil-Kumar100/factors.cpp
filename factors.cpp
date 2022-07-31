#include<iostream>//importing iostream library
using namespace std;//using namespace std for cout and cin  functions    (cout<<"Hello World"<<endl;)
int main(){//starting of main function
    int num;//declaring variable num  for taking input from user
    cout<<"Enter Number :-  ";//asking user to enter number
    cin>>num;//taking input from user 
    for(int i=1;i<=num;i++){//starting loop
        if(num%i==0){//checking whether the number is divisible by i or not
            cout<<i<<endl;//printing i
        }//ending if statement
    
    }//ending loop
    return 0;//return 0 to main function and end of program is here and this is for end of program
}//ending of main function
