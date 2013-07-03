// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the MMGR_DAL_SMARACT_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// MMGR_DAL_SMARACT_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MMGR_DAL_SMARACT_EXPORTS
#define MMGR_DAL_SMARACT_API __declspec(dllexport)
#else
#define MMGR_DAL_SMARACT_API __declspec(dllimport)
#endif

// This class is exported from the mmgr_dal_smaract.dll
class MMGR_DAL_SMARACT_API Cmmgr_dal_smaract {
public:
	Cmmgr_dal_smaract(void);
	// TODO: add your methods here.
};

extern MMGR_DAL_SMARACT_API int nmmgr_dal_smaract;

MMGR_DAL_SMARACT_API int fnmmgr_dal_smaract(void);
