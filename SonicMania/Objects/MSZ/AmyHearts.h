#ifndef OBJ_AMYHEARTS_H
#define OBJ_AMYHEARTS_H

#include "Game.h"

/*
struct ObjectAmyHearts {
    RSDK_OBJECT
    uint16 heartTimer;
};
struct EntityAmyHearts {
    RSDK_ENTITY
    StateMachine(state);
    uint16 aniFrames;
    Animator animator;
    int32 timer;
};
extern ObjectAmyHearts *AmyHearts;
// Standard Entity Events
void Hearts_Update(EntityPlayer *player);
void Hearts_StageLoad(EntityPlayer *player);
// Entity States
// void Hearts_Disappear(EntityPlayer *player); // makes the hearts object disappear when it gets far enough away from amy; visible --> destroy entity
void Hearts_Destroy_Sepia(EntityPlayer *player); // destroys all active heart entities right before the sepia filter thingie activates; destroy all entities
*/

#endif //! OBJ_AMYHEARTS_H
