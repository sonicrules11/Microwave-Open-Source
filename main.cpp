#include "main.h"

int __attribute__((constructor)) Init() {
    InitializeInterfaces();
    InitializeVMTs();
    InitializeHooks();
    Offsets::getOffsets();
    return 0;
}

void __attribute__((constructor)) DeInit() {
}
