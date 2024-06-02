#include <Windows.h>
#include "NaResolver/NaResolver.h"

HINSTANCE module = NULL;

void Example()
{
	AllocConsole();
	freopen_s((FILE**)stdout, "CONOUT$", "w", stdout);

	if (!naResolverInstance.Setup())
		printf("Failed to setup NaResolver!\n");

	//printf("Unity version: %s\n", Application::get_unityVersion().c_str());	// some unity versions don't have this method
	//printf("Game version: %s\n", Application::get_version().c_str());			// some unity versions don't have this method
	printf("Is MobilePlatform: %d\n", Application::get_isMobilePlatform());

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
