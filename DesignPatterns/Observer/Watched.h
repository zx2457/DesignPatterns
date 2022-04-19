#pragma once
#include "Watcher.h"

class Watched
{
public:
        Watched() = default;
        virtual ~Watched() = default;
        virtual void AddWatcher(Watcher* watcher) = 0;
        virtual void RemoveWatcher(Watcher* watcher) = 0;
        virtual void NotifyWatchers() = 0;
};