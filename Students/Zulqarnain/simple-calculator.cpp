#include <iostream>


using std::cout;
using std::cin;

void add(double x,double y);
void subtract(double x,double y);
void multi(double x,double y);
void divide(double x,double y);

int main(){
    double num1,num2;
    int operation;
    std::string again;

    cout<<"SIMPLE CALCULATOR\n";

    do {  //to allow user to use calc more than 1

        cout<<"\n1.ADDITION\n2.SUBTRACTION\n3.MULTIPLICATION\n4.DIVISION\n5.EXIT\n";
    
        // user chossing operation and number for the calc
        cout<<"\nWHAT OPERATION YOU WANT TO USE :";
        cin>>operation;

        cout<<"\nENTER YOUR FIRST NUMBER: ";
        cin>>num1;
        cout<<"\nENTER YOUR SECOND NUMBER: ";
        cin>>num2;

        switch (operation){
            case 1:
                add(num1,num2);
                break;
            case 2:
                subtract(num1,num2);
                break;
            case 3:
                multi(num1,num2);
                break;
            case 4:
                divide(num1,num2);
                break;
            case 5:
                cout<<"\nTHANK YOU FOR USING SIMPLE CALCULATOR";
                return 0;
                break;
            default:
                cout<<"\nENTER VALID OPERATION";

        }
        cout<<"\n\nDO YOU WANT TO MAKE ANOTHER CALCULATION?(yes/no): ";//check wheter user want to use it again
        cin>>again;

    }while(again=="yes");

    cout<<"\nTHANK YOU FOR USING SIMPLE CALCULATOR";
    

    return 0;

}

void add(double x,double y){//addition func
    cout<<"\nYOUR RESULT IS "<<x+y;
}

void subtract(double x,double y){//subtract func
    cout<<"\nYOUR RESULT IS "<<x-y;
}
void multi(double x,double y){//multi func
    cout<<"\nYOUR RESULT IS "<<x*y;
}
void divide(double x,double y){//divide func

    cout<<"\nYOUR RESULT IS "<<x/y;
}