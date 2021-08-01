#include<iostream>

using namespace std;

void programmerDay(int y){
    if(y < 1918) {
        if(y%4==0)
            cout<<"12.09."<<y<<endl;
        else
            cout<<"13.09."<<y<<endl;
    }
    else if(y == 1918){
        cout<<"26.09."<<y<<endl;
    }
    else{
        if(y % 400 == 0)
            cout<<"12.09."<<y<<endl;
        else if(y % 4 == 0 && y % 100 != 0) 
            cout<<"12.09."<<y<<endl;
        else
            cout<<"13.09."<<y<<endl;
    }
}

int main()
{
    int year;
    cin>>year;
    
    programmerDay(year);
    return 0;
    
}
