#ifdef _WIN32
#include <windows.h>
#ifndef _LIB
__declspec(dllexport) BOOL WINAPI _DllMainCRTStartup (HINSTANCE hinstDLL, DWORD fdwReason,
                                         LPVOID lpvReserved) {
  return TRUE;
}
#endif //_LIB
#endif //_WIN32
