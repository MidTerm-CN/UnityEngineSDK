#include <Windows.h>
#include "NaResolver/NaResolver.h"
#include "mscorlib.h"
#include "UnityEngine.CoreModule.h"
#include "UnityEngine.AnimationModule.h"
#include "UnityEngine.PhysicsModule.h"
#include "UnityEngine.IMGUIModule.h"

HINSTANCE module = NULL;

void Example()
{
	AllocConsole();
	freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);

	if (!naResolverInstance.Setup())
		printf("Failed to setup NaResolver!\n");



	FreeConsole();
	FreeLibraryAndExitThread(module, 0);
}


int WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
	if (fdwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hinstDLL);
		module = hinstDLL;
		CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)Example, NULL, NULL, NULL);
	}
	return TRUE; // Successful DLL_PROCESS_ATTACH.
}
