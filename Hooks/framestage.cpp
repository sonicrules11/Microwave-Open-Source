#include "../main.h"

bool bOnce = false; /*https://www.unknowncheats.me/forum/1190911-post11.html */
void hkFrameStage(void* thisptr, ClientFrameStage_t curStage) {
    C_BaseEntity* pLocal = (C_BaseEntity*)pEntList->GetClientEntity(pEngine->GetLocalPlayer());

    clientVMT->GetOriginalMethod<tFrameStage>(37)(thisptr, curStage);
    
}