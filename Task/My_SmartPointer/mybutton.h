#ifndef MYBUTTON_H
#define MYBUTTON_H

class MyButton
{
public:
    MyButton(int length);
    ~MyButton();

    void print();

private:
    int m_length;
};

#endif // MYBUTTON_H
