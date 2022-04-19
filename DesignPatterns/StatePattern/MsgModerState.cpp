#include "MsgModerState.h"

SubmitMsg::SubmitMsg(function<void(string)> callback)
{
        m_callback = callback;
}

void SubmitMsg::CheckFinshed(Context* c)
{
        m_callback(ReviewProgress());
        c->SetState(new ModerationStateMsg(m_callback));
}

std::string SubmitMsg::ReviewProgress()
{
        return "提交信息";
}

ModerationStateMsg::ModerationStateMsg(function<void(string)> callback)
{
        m_callback = callback;
}

void ModerationStateMsg::CheckFinshed(Context* c)
{
        m_callback(ReviewProgress());
        c->SetState(new InstructionMsg(m_callback));
}

std::string ModerationStateMsg::ReviewProgress()
{
        return "审核信息";
}

InstructionMsg::InstructionMsg(function<void(string)> callback)
{
        m_callback = callback;
}

void InstructionMsg::CheckFinshed(Context* c)
{
        m_callback(ReviewProgress());
        c->SetState(new AuditMsgFinished(m_callback));
}

std::string InstructionMsg::ReviewProgress()
{
        return "批示信息";
}

AuditMsgFinished::AuditMsgFinished(function<void(string)> callback)
{
        m_callback = callback;
}

void AuditMsgFinished::CheckFinshed(Context* c)
{
        m_callback(ReviewProgress());
        c->SetState(new SubmitMsg(m_callback));
}

std::string AuditMsgFinished::ReviewProgress()
{
        return "审核完成";
}
