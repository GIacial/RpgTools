#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>


class Exception
{
public:
    virtual ~Exception() throw ();
    const std::string& getMsg() const;

protected:
    //constructeur
    explicit Exception(const std::string msg);
    Exception(const Exception& e);

    //operator
    Exception& operator = (const Exception& e);

private:
    std::string* msg;
};

#endif // EXCEPTION_H
