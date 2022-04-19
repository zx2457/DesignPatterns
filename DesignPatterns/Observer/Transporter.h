#pragma once
#include "Watched.h"

class Transporter : public Watched
{
public:
        Transporter() {}
        virtual void AddWatcher(Watcher* watcher)
        {
                m_lstWatcher.push_back(watcher);
        }
        virtual void RemoveWatcher(Watcher* watcher)
        {
                m_lstWatcher.remove(watcher);
        }
        virtual void NotifyWatchers()
        {
                auto n = m_lstWatcher.back();
                m_lstWatcher.pop_back();
                for (auto iter : m_lstWatcher)
                {
                        iter->Update(n->GetName());
                }
        }
private:
        list<Watcher*> m_lstWatcher;
};