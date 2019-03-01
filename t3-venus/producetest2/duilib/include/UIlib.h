#include <windows.h>
#include <windowsx.h>
#include <commctrl.h>
#include <stddef.h>
#include <richedit.h>
#include <tchar.h>
#include <assert.h>
#include <crtdbg.h>
#include <malloc.h>

#include "UIBase.h"
#include "UIManager.h"
#include "UIDelegate.h"
#include "UIControl.h"
#include "UIContainer.h"
#include "UICommonControls.h"
#include "UIList.h"
#include "UICombo.h"
#include "UIActiveX.h"
#include "UIRichEdit.h"

#include "UIMarkup.h"
#include "UIDlgBuilder.h"
#include "UIRender.h"

#include "AppWindow.h"
#pragma comment(lib,"oledlg.lib")
#pragma comment(lib,"winmm.lib")
#pragma comment(lib,"comctl32.lib") 
#pragma comment(lib,"Riched20.lib")

