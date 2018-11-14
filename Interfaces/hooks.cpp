#include "../main.h"

void InitializeInterfaces() {
    pSurface = GetInterface<ISurface>("./bin/osx64/vguimatsurface.dylib", "VGUI_Surface");
    pPanel = GetInterface<IPanel>("./bin/osx64/vgui2.dylib", "VGUI_Panel");
    pCvar = GetInterface<ICvar>("./bin/osx64/materialsystem.dylib", "VEngineCvar");
    pClient = GetInterface<IBaseClientDLL>("./csgo/bin/osx64/client_panorama.dylib", "VClient");
    pEngine = GetInterface<IEngineClient>("./bin/osx64/engine.dylib", "VEngineClient");
    pEntList = GetInterface<IClientEntityList>("./csgo/bin/osx64/client_panorama.dylib", "VClientEntityList");
    pOverlay = GetInterface<IVDebugOverlay>("./bin/osx64/engine.dylib", "VDebugOverlay");
    pEngineTrace = GetInterface<IEngineTrace>("./bin/osx64/engine.dylib", "EngineTraceClient");
    pModelInfo = GetInterface<IVModelInfo>("./bin/osx64/engine.dylib", "VModelInfoClient");
}


void InitializeVMTs() {
    paintVMT = new VMT(pPanel);
}

void InitializeHooks() {
    paintVMT->HookVM((void*)hkPaintTraverse, 42);
    paintVMT->ApplyVMT();
}

void PrintInfo() {
    pCvar->ConsoleColorPrintf(Color::Green(),   "Microwave-Open-Source\n");
    pCvar->ConsoleColorPrintf(Color::Green(),   "Coded by :\n");
    pCvar->ConsoleColorPrintf(Color::Yellow(),  "ViKiNG\n");
    pCvar->ConsoleColorPrintf(Color::Green(),   "Improved by :\n");
    pCvar->ConsoleColorPrintf(Color::Red(),     "Warlauke\n");
}
