#pragma once
#include "Aggregate.h"
#include <vector>
using namespace std;

template <typename T>
class ConcreteAggregate : public Aggregate<T>
{
private:
        vector<T> m_lst;
public:
        ConcreteAggregate(T arr[], int len) : m_lst(arr, arr + len) {}
        ~ConcreteAggregate()
        {
        }
public:
        Iterator<T>* CreateIterator()
        {
                return new ConcreteIterator<T>(this);
        }
private:
        template <typename T>
        class ConcreteIterator : public Iterator<T>
        {
        private:
                ConcreteAggregate* m_cIter;
                int m_currentIndex = 0;
        public:
                ConcreteIterator() {}
                ConcreteIterator(ConcreteAggregate* cIter) : m_cIter(cIter) {}
        public:
                T GetItemAt(int idx)
                {
                        return m_cIter->m_lst.at(idx);
                }
                void Append(const T& item)
                {
                        m_cIter->m_lst.push_back(item);
                }
                int Size() const
                {
                        return static_cast<int>(m_cIter->m_lst.size());
                }
                virtual T Next()
                {
                        return GetItemAt(m_currentIndex++);
                }
                virtual bool hasNext()
                {
                        return (Size() > 0 && m_currentIndex < Size());
                }
        };
};