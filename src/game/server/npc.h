#pragma once
#include "gamecontext.h"
#include <game/server/entities/character.h>
#include <vector>

enum NPCS
{
    NPC_TEST = 0,
};

struct SAction
{
    int m_Scene
    vec2 m_Pos;
};

class INpc : public IInterface
{
    MACRO_INTERFACE("npc", 0)
public:
    INpc(CGameContext *pGameServer);

    virtual void Tick() = 0;
    virtual void Reset() = 0;
};

class CNpcController
{
private:
    CGameContext *m_pGameServer;
    CGameContext *GameServer() { return m_pGameServer; }
public:
    CNpcController(CGameContext *pGameServer);

    void Tick();

    
};