// MathServiceNoAttr.cpp : WinMain ��ʵ��


#include "stdafx.h"
#include "resource.h"
#include "MathServiceNoAttr_i.h"


using namespace ATL;

#include <stdio.h>

class CMathServiceNoAttrModule : public ATL::CAtlServiceModuleT< CMathServiceNoAttrModule, IDS_SERVICENAME >
{
public :
	DECLARE_LIBID(LIBID_MathServiceNoAttrLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_MATHSERVICENOATTR, "{BADA15F2-E1AA-47C4-8928-D6EE96741594}")
		HRESULT InitializeSecurity() throw()
	{
		// TODO : ���� CoInitializeSecurity ��Ϊ�����ṩ�ʵ��İ�ȫ����
		// ���� - PKT ����������֤��
		// RPC_C_IMP_LEVEL_IDENTIFY ��ģ�⼶��
		// �Լ��ʵ��ķ� NULL ��ȫ��������

		return S_OK;
	}
};

CMathServiceNoAttrModule _AtlModule;

//
extern "C" int WINAPI _tWinMain(HINSTANCE /*hInstance*/, HINSTANCE /*hPrevInstance*/, 
								LPTSTR /*lpCmdLine*/, int nShowCmd)
{
	return _AtlModule.WinMain(nShowCmd);
}

