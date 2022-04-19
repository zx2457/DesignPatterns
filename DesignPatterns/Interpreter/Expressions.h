#pragma once
#include "AbstractExpression.h"

class MovExpression : public AbstractExpression
{
private:
        int m_num = 0;
public:
        MovExpression(const int& num) : m_num(num) {}
public:
        virtual void interpret(Context* text)
        {
                (text);
        }
        virtual int execute()
        {
                return m_num;
        }
};

class AddExpression : public AbstractExpression
{
private:
        AbstractExpression* m_mov = nullptr;
        int m_num = 0;
public:
        AddExpression(AbstractExpression* mov, const int& num) : m_mov(mov), m_num(num) {}
        ~AddExpression()
        {
                delete m_mov;
        }
public:
        virtual void interpret(Context* text)
        {
                (text);
        }
        virtual int execute()
        {
                return m_mov->execute() + m_num;
        }
};

class SubExpression : public AbstractExpression
{
private:
        AbstractExpression* m_mov = nullptr;
        int m_num = 0;
public:
        SubExpression(AbstractExpression* mov, const int& num) : m_mov(mov), m_num(num) {}
        ~SubExpression()
        {
                delete m_mov;
        }
public:
        virtual void interpret(Context* text)
        {
                (text);
        }
        virtual int execute()
        {
                return m_mov->execute() - m_num;
        }
};

class MulExpression : public AbstractExpression
{
private:
        AbstractExpression* m_mov = nullptr;
        int m_num = 0;
public:
        MulExpression(AbstractExpression* mov, const int& num) : m_mov(mov), m_num(num) {}
        ~MulExpression()
        {
                delete m_mov;
        }
public:
        virtual void interpret(Context* text)
        {
                (text);
        }
        virtual int execute()
        {
                return m_mov->execute() * m_num;
        }
};

class IdivExpression : public AbstractExpression
{
private:
        AbstractExpression* m_mov = nullptr;
        int m_num = 0;
public:
        IdivExpression(AbstractExpression* mov, const int& num) : m_mov(mov), m_num(num) {}
        ~IdivExpression()
        {
                delete m_mov;
        }
public:
        virtual void interpret(Context* text)
        {
                (text);
        }
        virtual int execute()
        {
                return m_mov->execute() / m_num;
        }
};

class ExplainStatement : public AbstractExpression
{
private:
        map<string, AbstractExpression*> m_lstExpression;
        AbstractExpression* m_execute = nullptr;
        bool m_isError = false;
public:
        ExplainStatement() {}
        ~ExplainStatement()
        {
                delete m_execute;
        }
private:
        bool isNumber(const string& str)
        {
                return (str.at(0) >= 0x30 && str.at(0) < 0x40);
        }
        void judgeCommand(const string& statement)
        {
                int replace = static_cast<int>(statement.find(" "));
                auto command = statement.substr(0, replace);
                int replace1 = static_cast<int>(statement.find(",", replace));
                string theRegister = statement.substr(replace+1, replace1-replace-1);
                string numStr = statement.substr(replace1+2, statement.size()-replace1-2);
                bool isNum = isNumber(numStr);

                int num = atoi(numStr.c_str());
                if (command == "mov")
                {
                        m_lstExpression.insert(make_pair(theRegister, new MovExpression(num)));
                }
                else 
                {
                        AbstractExpression* nextCommand = m_lstExpression[theRegister];
                        if (!nextCommand) throw "¼Ä´æÆ÷£º" + theRegister + "²»´æÔÚ!";
                        if (!isNum)
                        {
                                auto numExp = m_lstExpression[numStr];
                                if (!numExp) throw "¼Ä´æÆ÷£º" + numStr + "²»´æÔÚ!";
                                else num = numExp->execute();
                        }

                        if (command == "add")
                        {
                                m_execute = new AddExpression(nextCommand, num);
                        }
                        else if (command == "sub")
                        {
                                m_execute = new SubExpression(nextCommand, num);

                        }
                        else if (command == "mul")
                        {
                                m_execute = new MulExpression(nextCommand, num);

                        }
                        else if (command == "idiv")
                        {
                                m_execute = new IdivExpression(nextCommand, num);

                        }
                        m_lstExpression[theRegister] = m_execute;
                }
        }
public:
        virtual void interpret(Context* text)
        {
                while (text->HasNext())
                {
                        try
                        {
                                judgeCommand(text->NextStatement());
                        }
                        catch (string& str)
                        {
                                cout << str << endl;
                                m_isError = true;
                                break;
                        }
                }
        }
        virtual int execute()
        {
                return (m_isError ? 0 : m_execute->execute());
        }
};