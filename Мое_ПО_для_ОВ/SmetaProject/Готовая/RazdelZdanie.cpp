// RazdelZdanie.cpp: implementation of the CZdanieRazdel class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "SmetaProject.h"
#include "RazdelZdanie.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CRazdelZdanie::CRazdelZdanie()
{
//	Name = NULL;
}

CRazdelZdanie::CRazdelZdanie(const CRazdelZdanie& razdel)
				:Analog(razdel.GetAnalog())
{
	SetName(razdel.GetName());
	KoefNaRaznV = razdel.GetKoefNaRaznV();
	UdStoimost = razdel.GetUdStoimost();
	SumStoimost = razdel.GetSumStoimost();
}

CRazdelZdanie&  CRazdelZdanie::operator=(CRazdelZdanie& razdel)
{
	if(this == &razdel) return *this;
	delete this;
	*this = *(new CRazdelZdanie(razdel));
	return *this;
}
CRazdelZdanie* CRazdelZdanie::Duplicate()
{
	return new CRazdelZdanie(*this);
}

void CRazdelZdanie::SetAnalog(CRazdelAnalog& analog)
{
	Analog = analog;
}
const CRazdelAnalog& CRazdelZdanie::GetAnalog()const
{
	return Analog;
}

void CRazdelZdanie::SetKoefNaRaznV(double value)
{
	KoefNaRaznV = value;
}

double CRazdelZdanie::GetKoefNaRaznV()const
{
	return KoefNaRaznV;
}

void CRazdelZdanie::SetUdStoimost(double value)
{
	UdStoimost = value;
}

double CRazdelZdanie::GetUdStoimost()const
{
	return UdStoimost;
}

void CRazdelZdanie::SetSumStoimost(double value)
{
	SumStoimost = value;
}

double CRazdelZdanie::GetSumStoimost()const
{
	return SumStoimost;
}

int CRazdelZdanie::GetData()
{
	if(m_Dlg->DoModal()==1)
	{	m_Dlg->m_K1.Replace(',','.');
		KoefNaRaznV = atof(m_Dlg->m_K1);
		m_Dlg->m_S1.Replace(',','.');
		Analog.SetVsegoStstOborudov(atof(m_Dlg->m_S1));
		m_Dlg->m_S2.Replace(',','.');
		Analog.SetVsegoStstMontaga(atof(m_Dlg->m_S2));
		m_Dlg->m_S3.Replace(',','.');
		Analog.SetVsegoStstSantehRabot(atof(m_Dlg->m_S3));
		m_Dlg->m_S4.Replace(',','.');
		Analog.SetVsegoStstObshestrRabot(atof(m_Dlg->m_S4));
		m_Dlg->m_VA.Replace(',','.');
		Analog.SetV(atof(m_Dlg->m_VA));
		SetName((LPCTSTR)m_Dlg->m_N);
		Analog.SetName((LPCTSTR)m_Dlg->m_NA);
		m_Dlg->Clear();
		return 1;
	}
	m_Dlg->Clear();
	return 0;
}
void CRazdelZdanie::SetData()
{
	m_Dlg->m_K1.Format("%f", KoefNaRaznV);
	m_Dlg->m_VA.Format("%f", Analog.GetV());
	m_Dlg->m_S1.Format("%f", Analog.GetVsegoStstOborudov());
	m_Dlg->m_S2.Format("%f", Analog.GetVsegoStstMontaga());
	m_Dlg->m_S3.Format("%f", Analog.GetVsegoStstSantehRabot());
	m_Dlg->m_S4.Format("%f", Analog.GetVsegoStstObshestrRabot());
	m_Dlg->m_N = GetName();
	m_Dlg->m_NA = Analog.GetName();
//	m_Dlg->UpdateData(FALSE);
}

istream & operator>>(istream & istrm, CRazdelZdanie& rz)
{
	return istrm>>rz.Analog>>*(CRazdel*)&rz>>
			      rz.KoefNaRaznV>>rz.UdStoimost>>rz.SumStoimost;
    
}

ostream & operator<<(ostream & ostrm, CRazdelZdanie const& rz)
{
	return ostrm<<rz.Analog<<" "<<*(CRazdel*)&rz<<" "<<
			      rz.KoefNaRaznV<<" "<<rz.UdStoimost<<" "<<
				  rz.SumStoimost;
    
}
