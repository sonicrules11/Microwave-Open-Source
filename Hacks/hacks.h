typedef void(*tPaintTraverse)(void*, VPANEL, bool, bool);

extern void hkPaintTraverse(void* thisptr, VPANEL vguiPanel, bool forceRepaint, bool allowForce);