#pragma once

/*
���󹤳���
*/
class IFactory
{
public:
        virtual ~IFactory() {}
        virtual void AssembleTheHost() = 0;
};