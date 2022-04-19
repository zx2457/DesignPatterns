#pragma once
#include "View.h"

class UserController
{
private:
        UserModel* m_model;
        OutView* m_view;
public:
        UserController(UserModel* model, OutView* view) : m_model(model), m_view(view) {}
public:
        void addUserInfo(const UserInfo& info)
        {
                m_model->addUserInfo(info);
        }
        UserInfo& at(int idx)
        {
                return m_model->at(idx);
        }
        void PrintAllUserInfo()
        {
                for (int i = 0; i < m_model->size(); ++i)
                {
                        m_view->PrintUserInfo(m_model->at(i));
                }
        }
};