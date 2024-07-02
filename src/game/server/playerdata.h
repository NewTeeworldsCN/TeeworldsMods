#pragma once

#include <game/generated/protocol.h>

struct SPlayerData
{
    int m_UserID;
    int m_Health;
    bool m_Armor;
    int m_Jumps;
    float m_Crit[NUM_WEAPONS];
    int m_Damage[NUM_WEAPONS];
    bool m_WeaponGot[NUM_WEAPONS];
};