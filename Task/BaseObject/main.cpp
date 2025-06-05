#include "employee.h"
#include "office.h"

using namespace std;

int main()
{

    Office office("Pthinks");

    Employee girish("Girish",&office);
    Employee darshan("Darshan",&office);
    Employee prathik("Prathik",&office);
    Employee virat("Virat",&girish);
    Employee shridhar("Shridhar",&girish);
    Employee amith("Amith",&shridhar);

    office.print();
    // office.findChild("Pthinks");
    // office.findChild("Girish");

    return 0;
}
