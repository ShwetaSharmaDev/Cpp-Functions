#include <iostream>
using namespace std;

class Car {
    public:

    string name;
    string color;

    int * mileage;

    Car(){ //non parameter

    }

    // deep copy
    Car(string name , string color){ //parmeter
        this->name = name;
        this->color = color;
        mileage = new int; //dynamic allocation
        *mileage = 12;
    }

    // shallow copy
    Car(Car &original){ //copy 
        cout<<"copying original to new ...\n";
        name =  original.name;
        color = original.color;

        // deep copy 
        mileage = new int ;
        *mileage = *original.mileage;


        // shallow copy
        // mileage = original.mileage;
    }

    // Destructor 
    // ~Car(){
    //     cout<<"delete object ...\n";
    //     if(mileage != NULL){
    //         delete mileage;
    //         mileage = NULL;
    //     }
    // }
};

int main() {

    Car c1("maruti 800" , "white");
    Car c2(c1);

    // cout<<c2.name<<endl;
    // cout<<c2.color<<endl;
    // cout<<*c2.mileage<<endl;

    *c2.mileage = 10;

    cout<<*c1.mileage<<endl;
    cout<<*c2.mileage<<endl;

    
    return 0;
}