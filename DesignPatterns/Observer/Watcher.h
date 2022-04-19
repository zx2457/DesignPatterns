#pragma once
#include <string>
#include <iostream>
#include <list>
using namespace std;

class Watcher
{
public:
        Watcher() = default;
        virtual ~Watcher() = default;
        virtual void Update(const string& pl) = 0;
        virtual string GetName() = 0;
};