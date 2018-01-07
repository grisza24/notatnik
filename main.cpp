//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "main.h"
#include "o_programie.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Oprogramie1Click(TObject *Sender)
{
Form2->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
Memo1->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PasekStanu1Click(TObject *Sender)
{
if(!PasekStanu1->Checked)
{
PasekStanu1->Checked = true;
StatusBar1->Visible = true;
}
else
{
PasekStanu1->Checked = false;
StatusBar1->Visible = false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::PasekNarzdzi1Click(TObject *Sender)
{
if(!PasekNarzdzi1->Checked)
{
PasekNarzdzi1->Checked = true;
ToolBar1->Visible = true;
}
else
{
PasekNarzdzi1->Checked = false;
ToolBar1->Visible = false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zawijaniewierszy1Click(TObject *Sender)
{
if(!Zawijaniewierszy1->Checked)
{
Zawijaniewierszy1->Checked = true;
Memo1->WordWrap = true;
Memo1->ScrollBars = ssVertical;
}
else
{
Zawijaniewierszy1->Checked = false;
Memo1->WordWrap = false;
Memo1->ScrollBars = ssBoth;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Czcionka1Click(TObject *Sender)
{
if(FontDialog1->Execute())
Memo1->Font=FontDialog1->Font;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ToolButton2Click(TObject *Sender)
{
if (OpenDialog1->Execute())
{
Memo1->Lines->LoadFromFile(OpenDialog1->FileName);
SaveDialog1->FileName=OpenDialog1->FileName;
Caption=OpenDialog1->FileName;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ToolButton3Click(TObject *Sender)
{
if (Memo1->Modified && SaveDialog1->Execute())
{
Memo1->Lines->SaveToFile(SaveDialog1->FileName);
Caption=SaveDialog1->FileName;
Memo1->Modified=false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ToolButton4Click(TObject *Sender)
{
Memo1->CutToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ToolButton6Click(TObject *Sender)
{
Memo1->CopyToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ToolButton7Click(TObject *Sender)
{
Memo1->PasteFromClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Usu1Click(TObject *Sender)
{
Memo1->ClearSelection();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ZaznaczWszystko1Click(TObject *Sender)
{
Memo1->SelectAll();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DataGodzina1Click(TObject *Sender)
{
Memo1->SelText = DateToStr(Date());
Memo1->SelText = " ";
Memo1->SelText = TimeToStr(Time());
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zamknij1Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Nowy1Click(TObject *Sender)
{
if(Memo1->Modified)
{
int x = Application->MessageBox("Plik zostal zmieniony. Czy chcesz go zapisac?", "Uwaga", MB_YESNOCANCEL | MB_ICONQUESTION);
if(x == IDYES)
{
if (SaveDialog1->Execute())
{
Memo1->Lines->SaveToFile(SaveDialog1->FileName);
Caption=SaveDialog1->FileName;
Memo1->Modified=false;
}
}
}
Memo1->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Otwrz1Click(TObject *Sender)
{
if(Memo1->Modified)
{
int x = Application->MessageBox("Plik zostal zmieniony. Czy chcesz go zapisac?", "Uwaga", MB_YESNOCANCEL | MB_ICONQUESTION);
if(x == IDYES)
{
if (SaveDialog1->Execute())
{
Memo1->Lines->SaveToFile(SaveDialog1->FileName);
Caption=SaveDialog1->FileName;
Memo1->Modified=false;
}
}
}
if (OpenDialog1->Execute())
{
Memo1->Lines->LoadFromFile(OpenDialog1->FileName);
SaveDialog1->FileName = OpenDialog1->FileName;
Caption = OpenDialog1->FileName;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Zapiszjako1Click(TObject *Sender)
{
if (SaveDialog1->Execute())
{
Memo1->Lines->SaveToFile(SaveDialog1->FileName);
Caption=SaveDialog1->FileName;
Memo1->Modified=false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo1MouseUp(TObject *Sender, TMouseButton Button,
      TShiftState Shift, int X, int Y)
{
Funkcja();
TPoint P = Memo1->CaretPos;
AnsiString pom=IntToStr(P.x+1)+":"+IntToStr(P.y+1);
StatusBar1->Panels->Items[0]->Text=pom;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo1MouseDown(TObject *Sender,
      TMouseButton Button, TShiftState Shift, int X, int Y)
{
Funkcja();
}

void __fastcall TForm1::Funkcja()
{
if(Memo1->SelLength != 0)
{
ij1->Enabled = true;
Kopiuj1->Enabled = true;
Usu1->Enabled = true;
ToolButton4->Enabled = true;
ToolButton6->Enabled = true;
Wytnij1->Enabled = true;
Kopiuj2->Enabled = true;
}
else
{
ij1->Enabled = false;
Kopiuj1->Enabled = false;
Usu1->Enabled = false;
ToolButton4->Enabled = false;
ToolButton6->Enabled = false;
Wytnij1->Enabled = false;
Kopiuj2->Enabled = false;
Zaznaczwszystko2->Enabled = false;
ZaznaczWszystko1->Enabled = false;
}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Memo1Change(TObject *Sender)
{
TPoint P = Memo1->CaretPos;
AnsiString pom=IntToStr(P.x+1)+":"+IntToStr(P.y+1);
StatusBar1->Panels->Items[0]->Text=pom;
ZaznaczWszystko1->Enabled = true;
Zaznaczwszystko2->Enabled = true;

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Memo1KeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
TPoint P = Memo1->CaretPos;
AnsiString pom=IntToStr(P.x+1)+":"+IntToStr(P.y+1);
StatusBar1->Panels->Items[0]->Text=pom;          
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Memo1KeyPress(TObject *Sender, char &Key)
{
TPoint P = Memo1->CaretPos;
AnsiString pom=IntToStr(P.x+1)+":"+IntToStr(P.y+1);
StatusBar1->Panels->Items[0]->Text=pom;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Memo1MouseMove(TObject *Sender, TShiftState Shift,
      int X, int Y)
{
TPoint P = Memo1->CaretPos;
AnsiString pom=IntToStr(P.x+1)+":"+IntToStr(P.y+1);
StatusBar1->Panels->Items[0]->Text=pom;
}
//---------------------------------------------------------------------------

