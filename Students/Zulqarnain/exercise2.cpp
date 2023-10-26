#include <iostream>

int main(){
    int a=1;
    double d=1.0;
    int i=0;

    while(i<6){

        switch(i){
            case 0:
                a = 46/9;//question 1
                std::cout<<"\na is "<<a << " d is "<<d;
                break;
            case 1:
                a = 46 % 9 + 4 * 4 - 2;//2
                std::cout<<"\na is "<<a << " d is "<<d;
                break;
            case 2:
                a = 45 + 43 % 5 * (23 * 3 % 2);//3
                std::cout<<"\na is "<<a << " d is "<<d;
                break;
            case 3:
                a %=3 / a + 3;//4
                std::cout<<"\na is "<<a << " d is "<<d;
                break;
            case 4:
                d += 1.5 * 3 + (++a);//5
                std::cout<<"\na is "<<a << " d is "<<d;
                break;
            default:
                d -= 1.5 * 3 + a++;//6
                std::cout<<"\na is "<<a << " d is "<<d;

        }
        a=1;
        d=1.0;
        i++;

    }

    

    

    

    

    

    

    
}