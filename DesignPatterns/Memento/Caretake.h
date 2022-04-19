#pragma once
#include "Memento.h"

class Caretake
{
private:
        vector<Memento> m_lstMemento;
        int m_currentIndex = 0;
public:
        Caretake() {}
        void Save(const Memento& menento)
        {
                m_lstMemento.push_back(menento);
                m_currentIndex = m_lstMemento.size() - 1;
        }
        Memento LoadCurrentStr()
        {
                if( m_lstMemento.empty() || static_cast<int>(m_currentIndex >= m_lstMemento.size()) ) return Memento("");
                return m_lstMemento.at(m_currentIndex);
        }
        void CtrlAndZ()
        {
                m_currentIndex--;
        }
        void CtrlAndY()
        {
                m_currentIndex++;
        }
};