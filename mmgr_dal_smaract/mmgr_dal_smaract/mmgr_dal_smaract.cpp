// mmgr_dal_smaract.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "mmgr_dal_smaract.h"


// This is an example of an exported variable
MMGR_DAL_SMARACT_API int nmmgr_dal_smaract=0;

// This is an example of an exported function.
MMGR_DAL_SMARACT_API int fnmmgr_dal_smaract(void)
{
	return 42;

}

// This is the constructor of a class that has been exported.
// see mmgr_dal_smaract.h for the class definition
Cmmgr_dal_smaract::Cmmgr_dal_smaract()
{
	return;
}
