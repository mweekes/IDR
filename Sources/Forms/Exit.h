//----------------------------------------------------------------------------
#ifndef ExitH
#define ExitH
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
//----------------------------------------------------------------------------
#include <vcl.h>
//#include <Vcl.System.hpp>
//#include <Vcl.Windows.hpp>
//#include <vcl\SysUtils.hpp>
//#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.StdCtrls.hpp>
//#include <Vcl.Classes.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <System.Classes.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>

//----------------------------------------------------------------------------
class TFExit_11011981 : public TForm
{
__published:        
	TButton *OKBtn;
	TButton *CancelBtn;
	TBevel *Bevel1;
    TCheckBox *cbDontSaveProject;
    void __fastcall OKBtnClick(TObject *Sender);
    void __fastcall CancelBtnClick(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
private:
public:
	virtual __fastcall TFExit_11011981(TComponent* AOwner);
};
//----------------------------------------------------------------------------
extern PACKAGE TFExit_11011981 *FExit_11011981;
//----------------------------------------------------------------------------
#endif    
