#pragma once

/*
抽象工厂类
*/
class IFactory
{
public:
        virtual ~IFactory() {}
        virtual void AssembleTheHost() = 0;
};