#ifndef BASEOBJECT_H
#define BASEOBJECT_H

#include <string>
#include <vector>

class BaseObject
{
public:
    BaseObject(const std::string name);
    virtual ~BaseObject();

    std::string getName() const;
    virtual void print() = 0;

    void addChild(BaseObject* child);
    void printChildList();

protected:
    std::vector<BaseObject*> m_childList;

private:
    std::string m_name;
};

#endif // BASEOBJECT_H
