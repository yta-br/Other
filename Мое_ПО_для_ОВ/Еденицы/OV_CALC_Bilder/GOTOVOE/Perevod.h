//---------------------------------------------------------------------------

#ifndef PerevodH
#define PerevodH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include <OleCtnrs.hpp>
//---------------------------------------------------------------------------
class TFrm_prvd : public TForm
{
__published:	// IDE-managed Components
    TPageControl *PgCntrl;
    TTabSheet *TbSht_Q;
        TLabel *Lbl_Qkkh;
        TLabel *Lbl_QkW;
    TButton *Btn_Exit;
    TButton *Btn_Help;
    TTabSheet *TbSht_QQ;
    TLabel *Lbl_QW;
    TLabel *Lbl_QMW;
        TLabel *Lbl_QMkh;
        TLabel *Lbl_QGkh;
    TEdit *Edt_QGW;
    TLabel *Lbl_QGW;
        TLabel *Lbl_Qkh;
    TEdit *Edt_QMW;
    TEdit *Edt_QkW;
    TEdit *Edt_QW;
        TEdit *Edt_QGkh;
        TEdit *Edt_QMkh;
        TEdit *Edt_Qkkh;
        TEdit *Edt_Qkh;
        TEdit *Edt_QGk;
        TLabel *Lbl_QGk;
        TEdit *Edt_QMk;
        TLabel *Lbl_QMk;
        TEdit *Edt_QGJ;
        TLabel *Lbl_QGJ;
    TEdit *Edt_QMJ;
    TLabel *Lbl_QMJ;
    TEdit *Edt_QkJ;
    TLabel *Lbl_QkJ;
    TEdit *Edt_QJ;
    TLabel *Lbl_QJ;
    TEdit *Edt_Qkk;
    TEdit *Edt_Qk;
    TLabel *Lbl_Qkk;
    TLabel *Lbl_Qk;
    TTabSheet *TbSht_c;
    TEdit *Edt_QGJ_k;
    TLabel *Lbl_QGJ_k;
    TEdit *Edt_QMJ_k;
    TLabel *Lbl_QMJ_k;
    TEdit *Edt_QkJ_k;
    TLabel *Lbl_QkJ_k;
    TEdit *Edt_QJ_k;
    TLabel *Lbl_QJ_k;
    TEdit *Edt_QGk_k;
    TLabel *Lbl_QGk_k;
    TEdit *Edt_QMk_k;
    TLabel *Lbl_QMk_k;
    TEdit *Edt_Qkk_k;
    TLabel *Lbl_Qkk_k;
    TEdit *Edt_Qk_k;
    TLabel *Lbl_Qk_k;
    TTabSheet *TbSht_P;
    TEdit *Edt_PGPa;
    TEdit *Edt_PMPa;
    TLabel *Lbl_PGPa;
    TLabel *Lbl_PMPa;
    TEdit *Edt_PkPa;
    TLabel *Lbl_PkPa;
    TEdit *Edt_PPa;
    TLabel *Lbl_PPa;
    TEdit *Edt_Pkg_cm;
    TLabel *Lbl_Pkg_cm;
    TEdit *Edt_Pkg_m;
    TLabel *Lbl_Pkg_m;
    TEdit *Edt_Pmvst;
    TLabel *Lbl_Pmvst;
    TEdit *Edt_Pmmvst;
    TEdit *Edt_Pmrtst;
    TEdit *Edt_Pmmrtst;
    TLabel *Lbl_Pmmvst;
    TLabel *Lbl_Pmrtst;
    TLabel *Lbl_Pmmrtst;
    TEdit *Edt_Patm;
    TLabel *Lbl_Patm;
    TLabel *Lbl_Index;
    TLabel *Label1;
    TEdit *Edt_Pkg_mm;
    TLabel *Lbl_Pkg_mm;
    TLabel *Label2;
    TTabSheet *TbSht_G;
    TStatusBar *StsBr;
    TEdit *Edt_Gm_h;
    TEdit *Edt_Gm_m;
    TEdit *Edt_Gm_c;
    TLabel *Lbl_Gm_h;
    TLabel *Lbl_Gm_m;
    TLabel *Lbl_Gm_c;
    TEdit *Edt_Gl_h;
    TEdit *Edt_Gl_m;
    TEdit *Edt_Gl_c;
    TLabel *Lbl_Gl_h;
    TLabel *Lbl_Gl_m;
    TLabel *Lbl_Gl_c;
    TLabel *Label3;
    TLabel *Label4;
    TLabel *Label5;
    TEdit *Edt_Pbar;
    TLabel *Lbl_Pbar;
    TEdit *Edt_Pat;
    TLabel *Lbl_Pat;
    TEdit *Edt_Qtut;
    TLabel *Lbl_Qtut;
    TTabSheet *TbSht_Gm;
    TEdit *Edt_Gkg_h;
    TLabel *Lbl_Gkg_h;
    TEdit *Edt_Gkg_m;
    TLabel *Lbl_Gkg_m;
    TLabel *Lbl_Gkg_c;
    TEdit *Edt_Gkg_c;
    TEdit *Edt_Gt_h;
    TLabel *Ll_Gt_h;
    TEdit *Edt_Gt_m;
    TLabel *Ll_Gt_m;
    TEdit *Edt_Gt_c;
    TLabel *Ll_Gt_c;
    void __fastcall Btn_ExitClick(TObject *Sender);
    void __fastcall Edt_QGWKeyPress(TObject *Sender, char &Key);
    void __fastcall Edt_QGWKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall Edt_QGJKeyPress(TObject *Sender, char &Key);
    void __fastcall Edt_QGJKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall Edt_QGJ_kKeyPress(TObject *Sender, char &Key);
    void __fastcall Edt_QGJ_kKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall Edt_PGPaKeyPress(TObject *Sender, char &Key);
    void __fastcall Edt_PGPaKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall Edt_Gm_hKeyPress(TObject *Sender, char &Key);
    void __fastcall Edt_Gm_hKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall Lbl_QtutMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
    void __fastcall TbSht_QQMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
    void __fastcall Edt_QtutMouseMove(TObject *Sender, TShiftState Shift,
          int X, int Y);
    void __fastcall Edt_Gkg_hKeyPress(TObject *Sender, char &Key);
    void __fastcall Edt_Gkg_hKeyUp(TObject *Sender, WORD &Key,
          TShiftState Shift);
private:	// User declarations
public:		// User declarations
        __fastcall TFrm_prvd(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFrm_prvd *Frm_prvd;
//---------------------------------------------------------------------------
enum PRISTAKA{GIGA=1000000000, MEGA=1000000, KILO=1000,MILI=1000,SANTI=100,LITR_FROM_M=1000,
KG_FROM_T=1000};
#endif
