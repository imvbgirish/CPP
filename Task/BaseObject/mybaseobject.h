#ifndef MYBASEOBJECT_H
#define MYBASEOBJECT_H

#include <string>
#include <vector>

class MyBaseObject
{
public:
    MyBaseObject(const std::string& name,MyBaseObject* parent = nullptr);
    virtual ~MyBaseObject();
    virtual void print() = 0;
    virtual void addEmployee(MyBaseObject* employee) = 0;
    std::string getName() const;
    std::vector<MyBaseObject*> findChild(const std::string&);
    virtual void getMe() = 0;

protected:
    std::vector<MyBaseObject*> m_childList;

private:
    std::string m_name;
    MyBaseObject* m_parent;
};

#endif // MYBASEOBJECT_H
