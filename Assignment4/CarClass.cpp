#include <iostream>
using namespace std;

class Car{
    public:
    int yearModel;
    string make;
    int speed;
    Car(){};
    Car(int Year, string Make)
    {
        this->yearModel=Year;
        this->make=Make;
        this->speed=0;
    }
    int getYear(){
        return yearModel;
    }
    string getMake(){
        return make;
    }
    int getSpeed(){
        return speed;
    }

    void accelerate(){
        speed += 5;
    }
    void brake()
    {
        speed-=5;
    }
};
int main(){
    Car c1(2023,"Mercedes");
    cout<<c1.getYear()<<" "<<c1.getMake()<<endl;
    cout<<" running: "<<endl;
    for(int i=0;i<5;i++){
        c1.accelerate();
        cout<<"Current speed: "<<c1.getSpeed()<<endl;
    }

    cout<<"brake: "<<endl;
    for (int j = 0; j < 5; j++)
    {
        c1.brake();
        cout<<" Current speed:"<<c1.getSpeed()<<endl;
        if(c1.getSpeed()==0){
            cout<<c1.getYear()<<" "<<c1.getMake()<<" "<<"is stoped"<<endl;
        }

    }
    return 0;
}
