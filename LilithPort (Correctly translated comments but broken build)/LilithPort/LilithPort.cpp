// LilithPort.cpp : ���C�� �v���W�F�N�g �t�@�C���ł��B

#include "stdafx.h"
#include "MainForm.h"
#include <math.h>

using namespace LilithPort;

// �O���[�o��
// Globals
MT_SP_INFORMATION  MTINFO;
MT_SP_OPTION       MTOPTION;
MT_SP_WINDOW_STATE MTWS;
MT_SP_COLOR        MTCOLOR;

CRITICAL_SECTION CS_CAPTION;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// �R���g���[�����쐬�����O�ɁAWindows XP �r�W���A�����ʂ�L���ɂ��܂�
	// Before making any controls, enable Windows XP visual effects
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(true);

	// ���v���O�����̃p�X
	// Path to own process
	TCHAR drive[_MAX_DRIVE], dir[_MAX_DIR];

	GetModuleFileName(NULL, MTOPTION.PATH, _MAX_PATH);
	_tsplitpath_s(MTOPTION.PATH, drive, _MAX_DRIVE, dir, _MAX_DIR, NULL, 0, NULL, 0);
	_stprintf_s(MTOPTION.PATH, _T("%s%s"), drive, dir);

	// �R�}���h���C������
	// Command line arguments
	if(args->Length > 0){
		if(args[0] == "-s"){
			MTINFO.SERVER_MODE = true;
			if(args->Length > 1){
				try{
					MTINFO.SERVER_MODE_PORT = (UINT)Convert::ToInt32(args[1]);
				}
				catch(Exception^){
					MTINFO.SERVER_MODE_PORT = 0;
				}
			}else{
				MTINFO.SERVER_MODE_PORT = 0;
			}
		}
		
	}

#ifdef _DEBUG
	MTINFO.DEBUG = false;
#endif

	LoadMTOption();
	CheckMTOption();

	// �����̏��������܂��܂�
	// Random number generator initialisation and mixing
	XorShift((UINT)DateTime::Now.Ticks);
	XorShift();
	XorShift();
	XorShift();

	// ����(dB)�����炩���ߌv�Z���Ă���
	// Calculate the volume (dB) in advance
	MTINFO.VOLUME[0] = -10000;

	for(int i = 1; i < 21; i++){
		// -6dB is half the volume, which is -600 in DirectSound terms
		// 19.931568f = -6.0f / log10(0.5f); 
		//
		// -6dB�ŉ��ʔ����ADirectSound�I�ɂ�-600
		// 19.931568f = -6.0f / log10(0.5f); 
		MTINFO.VOLUME[i] = (INT32)(19.931568f*log10((float)(i*5)/100.0f)*100.0f);
	}

	InitializeCriticalSection(&CS_CAPTION);

	// �������̗�O���L���b�`
	// Catch nhandled exceptions
	Application::ThreadException += gcnew ThreadExceptionEventHandler(ApplicationThreadException);
	Threading::Thread::GetDomain()->UnhandledException += gcnew UnhandledExceptionEventHandler(ApplicationUnhandledException);

	// ���C�� �E�B���h�E���쐬���āA���s���܂�
	// Create and show main window
	Application::Run(gcnew MainForm());

	DeleteCriticalSection(&CS_CAPTION);

	SaveMTOption();

	return 0;
}
