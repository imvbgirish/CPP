#include "SmartPointers.h"
#include "mybutton.h"


int main()
{
    int *ptr = new int;
    Pointer<int> pointer(ptr);

    Pointer<MyButton> btnPtr(new MyButton(10));
    btnPtr.getPtr()->print();
    btnPtr->print(); //Operator overload

    return 0;
}
