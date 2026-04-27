#pragma once
#include <cstddef>
#include <string>
/*
	going to switch up how we do the offsets
	utilzie the loader to check for updates		
*/

// migration to new way to handle offsets
// TODO: FINISH THIS
// THIS IS NOT FOR PROD YET, IDGAF ABOUT MACROS JUST DONT USE YET

class PseudoMigration
{
public:
	
	static uintptr_t GrabOffsets(std::string var, std::string dllPath); // foo( dwEntityList, {client.dll, offsets.dll} )
	static void setFolderLoc(std::string fl) { s_folderLoc = fl; };

private:
	static std::string s_folderLoc;
};

namespace Offsets
{

	// -> offsets.h on a2x dumper
	constexpr std::ptrdiff_t dwCSGOInput						   = 0x233DD80;
	constexpr std::ptrdiff_t dwEntityList						   = 0x24CED50;
	constexpr std::ptrdiff_t dwGameEntitySystem					   = 0x24CED50;
	constexpr std::ptrdiff_t dwGameEntitySystem_highestEntityIndex = 0x2090;
	constexpr std::ptrdiff_t dwGameRules						   = 0x2328F38;
	constexpr std::ptrdiff_t dwGlobalVars						   = 0x20496A0;
	constexpr std::ptrdiff_t dwGlowManager						   = 0x2325D30;
	constexpr std::ptrdiff_t dwLocalPlayerController			   = 0x2308520;
	constexpr std::ptrdiff_t dwLocalPlayerPawn					   = 0x20547A0;
	constexpr std::ptrdiff_t dwPlantedC4						   = 0x2336A48;
	constexpr std::ptrdiff_t dwPrediction						   = 0x20546B0;
	constexpr std::ptrdiff_t dwSensitivity						   = 0x2326848;
	constexpr std::ptrdiff_t dwSensitivity_sensitivity			   = 0x58;
	constexpr std::ptrdiff_t dwViewAngles						   = 0x233E408;
	constexpr std::ptrdiff_t dwViewMatrix						   = 0x232EAC0;
	constexpr std::ptrdiff_t dwViewRender						   = 0x232DCB8;
	constexpr std::ptrdiff_t dwWeaponC4							   = 0x22A6CB8;

	////////////// -> client.dll.hpp on a2x dumper and on
	constexpr uintptr_t m_iHealth		 = 0x34C; 
	constexpr uintptr_t m_iTeamNum		 = 0x3EB; 
	constexpr uintptr_t m_vOldOrigin	 = 0x1390; 
	constexpr uintptr_t m_pGameSceneNode = 0x330; 

	// -> CbaseModelEntity
	constexpr uintptr_t m_vecViewOffset = 0xE70;

	// -> C_CSPlayerPawn
	constexpr uintptr_t m_aimPunchAngle = 0x904;

	constexpr uintptr_t m_iShotsFired	= 0x1C5C;
	constexpr uintptr_t m_fFlags		= 0x3F8; 

	constexpr uintptr_t m_szTeamname   = 0x634; 
	constexpr uintptr_t m_hPlayerPawn  = 0x904;
	constexpr uintptr_t m_bPawnIsAlive = 0x90C;

	constexpr uintptr_t m_modelState = 0x150;

	constexpr std::ptrdiff_t m_pObserverServices  = 0x11F8;
	constexpr std::ptrdiff_t m_hObserverTarget	  = 0x4C;
	constexpr std::ptrdiff_t m_iObserverMode	  = 0x48;
	constexpr std::ptrdiff_t m_entitySpottedState = 0x1CC8;




}


