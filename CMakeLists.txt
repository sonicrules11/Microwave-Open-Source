cmake_minimum_required(VERSION 3.12)
project(Microwave)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ./bin)

set(SOURCE_FILES main.cpp main.h Drawings/drawings.cpp Drawings/drawings.h Hacks/hacks.h Hooks/painttraverse.cpp Hooks/index.h Interfaces/hooks.cpp Interfaces/hooks.h Interfaces/interfaces.cpp Interfaces/interfaces.h Utils/netvarmanager.cpp Utils/netvarmanager.h SDK/C_BaseEntity.h SDK/Color.h SDK/common.h SDK/CUserCmd.h SDK/IBaseClientDLL.h SDK/IClientEntityList.h SDK/ICVar.h SDK/IEngineClient.h SDK/IEngineTrace.h SDK/IMaterial.h SDK/IPanel.h SDK/ISurface.h SDK/IVDebugOverlay.h SDK/IVModelInfo.h SDK/offsets.cpp SDK/offsets.h SDK/Others.h SDK/Vector.h SDK/VMT.h)
add_library(Microwave SHARED ${SOURCE_FILES})