/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#ifndef GAME_SERVER_ENTITIES_FLAG_H
#define GAME_SERVER_ENTITIES_FLAG_H

#include <game/server/entity.h>

class CAreaFlag : public CEntity
{
public:
    /* Constants */
    static int const ms_PhysSize = 14;

    /* Constructor */
    CAreaFlag(CGameWorld *pGameWorld, vec2 Pos0, vec2 Pos1, int MaxProgress, int EarnPoint, int Radius);
    ~CAreaFlag();

    /* CEntity functions */
    virtual void Reset();
    virtual void Snap(int SnappingClient);
    virtual void TickDefered();

    int GetTeam();
    int GetProgress() { return m_Progress; };
    int GetPointEarnPerSec() { return m_PointEarnPerSec; }
    int GetMaxProgress() { return m_MaxProgress; }

private:
    int m_Progress;
    int m_PointEarnPerSec;
    vec2 m_LowerPos;
    vec2 m_UpperPos;
    int m_MaxProgress;

    int m_LaserSnap[2];

    float m_StepX;
    float m_StepY;

    int m_Radius;
};

#endif