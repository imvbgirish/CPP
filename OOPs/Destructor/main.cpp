#include "vehicle.h"
#include <memory>

using namespace std;

int main()
{
    Vehicle v("Thar");
    v.move();

    Vehicle *v1 = new Vehicle("Audi");  //Pointer variable
    v1->move();

    Vehicle *v2 = v1;
    v2->move();

    delete v1;      //Explicitly we have to free memory (calls destructor)

    std::unique_ptr<Vehicle> v3 = std::make_unique<Vehicle>("BMW"); //destructor calls itself
    //std::unique_ptr<Vehicle> v4 = v3;                             //can't assign

    return 0;
}
