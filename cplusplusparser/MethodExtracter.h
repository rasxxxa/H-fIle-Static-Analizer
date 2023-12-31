#pragma once
#include "ElementExtracter.h"
class MethodExtracter :
    public ElementExtracter
{
public:
    // Comments should be removed before calling this one, also should be called on one instance of class
    // Remove all namespaces, structs, enums, before this call
    virtual void Extract(std::vector<std::string>& lines, MethodsVariableCounter& extracter) override;
};

