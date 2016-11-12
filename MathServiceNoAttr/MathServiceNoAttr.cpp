// MathServiceNoAttr.cpp : WinMain 的实现


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
		// TODO : 调用 CoInitializeSecurity 并为服务提供适当的安全设置
		// 建议 - PKT 级别的身份验证、
		// RPC_C_IMP_LEVEL_IDENTIFY 的模拟级别
		// 以及适当的非 NULL 安全描述符。

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

