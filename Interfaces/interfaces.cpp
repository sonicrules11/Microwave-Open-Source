#include "../main.h"

ISurface* pSurface = nullptr;
IPanel* pPanel = nullptr;
ICvar* pCvar = nullptr;
IBaseClientDLL* pClient = nullptr;
IClientEntityList* pEntList = nullptr;
IVDebugOverlay* pOverlay = nullptr;
IEngineClient* pEngine = nullptr;
IVModelInfo* pModelInfo = nullptr;
IEngineTrace* pEngineTrace = nullptr;
IClientMode* pClientMode = nullptr;

VMT* paintVMT = nullptr;
VMT* clientVMT = nullptr;