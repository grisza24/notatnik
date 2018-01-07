//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Menus.hpp>
#include <ComCtrls.hpp>
#include <ToolWin.hpp>
#include <ImgList.hpp>
#include <Dialogs.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TMenuItem *Plik1;
    TMenuItem *Nowy1;
    TMenuItem *Otwrz1;
    TMenuItem *Zapisz1;
    TMenuItem *Zapiszjako1;
    TMenuItem *Zamknij1;
    TMenuItem *Edycja1;
    TMenuItem *ij1;
    TMenuItem *Kopiuj1;
    TMenuItem *Wklwj1;
    TMenuItem *Usu1;
    TMenuItem *ZaznaczWszystko1;
    TMenuItem *DataGodzina1;
    TMenuItem *Widok1;
    TMenuItem *PasekStanu1;
    TMenuItem *PasekNarzdzi1;
    TMenuItem *Format1;
    TMenuItem *Zawijaniewierszy1;
    TMenuItem *Czcionka1;
    TMenuItem *Pomoc1;
    TMenuItem *Oprogramie1;
    TMemo *Memo1;
    TImageList *ImageList1;
    TMainMenu *MainMenu1;
    TStatusBar *StatusBar1;
    TToolBar *ToolBar1;
    TToolButton *ToolButton1;
    TToolButton *ToolButton2;
    TToolButton *ToolButton3;
    TToolButton *ToolButton5;
    TToolButton *ToolButton4;
    TToolButton *ToolButton6;
    TToolButton *ToolButton7;
    TFontDialog *FontDialog1;
    TOpenDialog *OpenDialog1;
    TSaveDialog *SaveDialog1;
    TPopupMenu *PopupMenu1;
    TMenuItem *Wytnij1;
    TMenuItem *Kopiuj2;
    TMenuItem *Wklej1;
    TMenuItem *Zaznaczwszystko2;
    void __fastcall Oprogramie1Click(TObject *Sender);
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall PasekStanu1Click(TObject *Sender);
    void __fastcall PasekNarzdzi1Click(TObject *Sender);
    void __fastcall Zawijaniewierszy1Click(TObject *Sender);
    void __fastcall Czcionka1Click(TObject *Sender);
    void __fastcall ToolButton2Click(TObject *Sender);
    void __fastcall ToolButton3Click(TObject *Sender);
    void __fastcall ToolButton4Click(TObject *Sender);
    void __fastcall ToolButton6Click(TObject *Sender);
    void __fastcall ToolButton7Click(TObject *Sender);
    void __fastcall Usu1Click(TObject *Sender);
    void __fastcall ZaznaczWszystko1Click(TObject *Sender);
    void __fastcall DataGodzina1Click(TObject *Sender);
    void __fastcall Zamknij1Click(TObject *Sender);
    void __fastcall Nowy1Click(TObject *Sender);
    void __fastcall Otwrz1Click(TObject *Sender);
    void __fastcall Zapiszjako1Click(TObject *Sender);
    void __fastcall Memo1MouseUp(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall Memo1MouseDown(TObject *Sender, TMouseButton Button,
          TShiftState Shift, int X, int Y);
    void __fastcall Memo1Change(TObject *Sender);
        void __fastcall Memo1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
        void __fastcall Memo1KeyPress(TObject *Sender, char &Key);
        void __fastcall Memo1MouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
    void __fastcall Funkcja();
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
