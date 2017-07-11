#include "main.hpp"

bool bOnce = false; /*https://www.unknowncheats.me/forum/1190911-post11.html */
void hkFrameStage(void* thisptr, ClientFrameStage_t curStage) {
    C_BaseEntity* pLocal = (C_BaseEntity*)pEntList->GetClientEntity(pEngine->GetLocalPlayer());

    client_vmt->GetOriginalMethod<tFrameStage>(36)(thisptr, curStage);
    
    }
