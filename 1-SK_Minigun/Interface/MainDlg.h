//=====================================================================================

#pragma once

#include "../Resources/Resource.h"
#include "../Interface/WinAPI/Dialog.hpp"
#include "../Interface/WinAPI/Button.hpp"
#include "../Helpers/Message.hpp"
#include "../Helpers/Memory.hpp"

//=====================================================================================

class cMainDlg : public cDialog
{
public:

	cMainDlg(HINSTANCE instance);
	~cMainDlg() {};

private:

	bool GiveMinigun();

	DLG_HANDLER(OnInit);
	DLG_HANDLER(OnClose);
	DLG_HANDLER(OnGiveMinigun);

	DWORD iNoCamo = 0x00000000;
	WORD iNoReticle = 0x0000;
	DWORD64 iMinigunID = 0x000F000F000F0045;

	DWORD_PTR dwOffsets[16] =
	{
		0x14459F552,
		0x14459FAB6,
		0x1445A001A,
		0x1445A057E,
		0x1445A0AE2,
		0x1445A1046,
		0x1445A15AA,
		0x1445A1B0E,
		0x1445A2072,
		0x1445A25D6,
		0x1445A3AEA,
		0x1445A404E,
		0x1445A45B2,
		0x1445A4B16,
		0x1445A507A,
		0x1445A55DE
	};

	ctrl::cButton _giveMinigun;

	HINSTANCE _instance;
};

//=====================================================================================