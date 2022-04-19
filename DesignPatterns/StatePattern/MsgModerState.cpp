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
        return "�ύ��Ϣ";
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
        return "�����Ϣ";
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
        return "��ʾ��Ϣ";
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
        return "������";
}
