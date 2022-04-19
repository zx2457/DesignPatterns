#include "Context.h"
#include "MessageModerationState.h"

Context::~Context()
{
        delete m_state;
        m_state = nullptr;
}

void Context::SetState(MessageModerationState* s)
{
        delete m_state;
        m_state = nullptr;
        m_state = s;
}

std::string Context::GetCurrentProgress()
{
        return m_state->ReviewProgress();
}

void Context::CheckFinished()
{
        m_state->CheckFinshed(this);
}
