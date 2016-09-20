// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


#include "stdafx.h"
#include "panel.h"

// Dispatch interfaces referenced by this interface
#include "picture.h"


/////////////////////////////////////////////////////////////////////////////
// CPanel properties

/////////////////////////////////////////////////////////////////////////////
// CPanel operations

long CPanel::GetAlignment()
{
	long result;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPanel::SetAlignment(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPanel::GetAutoSize()
{
	long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPanel::SetAutoSize(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CPanel::GetBevel()
{
	long result;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPanel::SetBevel(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CPanel::GetEnabled()
{
	BOOL result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CPanel::SetEnabled(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

short CPanel::GetIndex()
{
	short result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CPanel::SetIndex(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

CString CPanel::GetKey()
{
	CString result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CPanel::SetKey(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

float CPanel::GetLeft()
{
	float result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void CPanel::SetLeft(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

float CPanel::GetMinWidth()
{
	float result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void CPanel::SetMinWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

CPicture CPanel::GetPicture()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return CPicture(pDispatch);
}

void CPanel::SetRefPicture(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 newValue);
}

long CPanel::GetStyle()
{
	long result;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CPanel::SetStyle(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

VARIANT CPanel::GetTag()
{
	VARIANT result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CPanel::SetTag(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

CString CPanel::GetText()
{
	CString result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CPanel::SetText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

CString CPanel::GetToolTipText()
{
	CString result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_BSTR, (void*)&result, NULL);
	return result;
}

void CPanel::SetToolTipText(LPCTSTR lpszNewValue)
{
	static BYTE parms[] =
		VTS_BSTR;
	InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 lpszNewValue);
}

BOOL CPanel::GetVisible()
{
	BOOL result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CPanel::SetVisible(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

float CPanel::GetWidth()
{
	float result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_R4, (void*)&result, NULL);
	return result;
}

void CPanel::SetWidth(float newValue)
{
	static BYTE parms[] =
		VTS_R4;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CPanel::SetPicture(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

void CPanel::SetRefTag(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUTREF, VT_EMPTY, NULL, parms,
		 &newValue);
}
