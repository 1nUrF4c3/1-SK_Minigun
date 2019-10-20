//=====================================================================================

#include "MainDlg.h"

//=====================================================================================

bool cMainDlg::GiveMinigun()
{
	bool bSuccess = true;

	for (int i = 0; i < ARRAYSIZE(dwOffsets); i++)
	{
		if (!cMemory::MemWrite("iw6mp64_ship.exe", dwOffsets[i] - 0x6, iNoCamo) ||
			!cMemory::MemWrite("iw6mp64_ship.exe", dwOffsets[i] - 0x2, iNoReticle) ||
			!cMemory::MemWrite("iw6mp64_ship.exe", dwOffsets[i], iMinigunID))
		{
			bSuccess = false;
			break;
		}
	}

	return bSuccess;
}

//=====================================================================================