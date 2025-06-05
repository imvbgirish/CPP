#include "office.h"
#include "employee.h"

using namespace std;

int main()
{
    Office office("Pthinks");

    Employee girish("Girish",&office);
    Employee darshan("Darshan",&office);
    Employee prathik("Prathik",&office);
    Employee mithan("Mithan",&girish);

    office.print();

    return 0;
}
