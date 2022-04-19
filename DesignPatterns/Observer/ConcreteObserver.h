#pragma once
#include "Watcher.h"

class Player : public Watcher
{
public:
        Player(const string& n) : m_playerName(n) {}
        virtual void Update(const string& pl)
        {
                cout << "���" << pl << "����̭��" << endl;
        }
        virtual string GetName()
        {
                return m_playerName;
        }
private:
        string m_playerName;
};
