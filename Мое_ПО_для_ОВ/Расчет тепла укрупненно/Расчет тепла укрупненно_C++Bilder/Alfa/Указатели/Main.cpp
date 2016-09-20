//============================================================================//
#include <math.h>
#include <conio.h>
#include <stdio.h>
double INTERPOL(double **parr, double t);
double interpol(double x_znachenie_y, double x, double y, double f_x, double f_y);
double exterpol_min(double znachenie_x,double x,double y,double f_x,double f_y);
double exterpol_max(double y_znachenie,double x,double y,double f_x,double f_y);
void main();
//============================================================================//
double INTERPOL(double **parr, double t)
{
   /*************************************************************************
	*** ������� ���������� ������������ ����� � ����������� �� ����������� **
	*************************************************************************/
   int i;
   double alf;
   for (i=0;i<sizeof(*parr);i++)
	  if (parr[0][i]==t)
		 alf=parr[1][i];
	  else if (i<(sizeof(*parr)-1) && fabs(t)> fabs(parr[0][i])&& fabs(t) < fabs(parr[0][i + 1]))
			alf=interpol(t, parr[0][i], parr[0][i + 1], parr[1][i], parr[1][i+ 1]);
		 else if(fabs(t) < fabs(parr[0][0]))
			   alf = exterpol_min(t, parr[0][0], parr[0][1], parr[1][0], parr[1][1]);
			else if (fabs(t) > fabs(parr[0][11]))
				  alf = exterpol_max(t, parr[0][10], parr[0][11], parr[1][10], parr[1][11]);
   return alf;
}
//============================================================================//
double interpol(double x_znachenie_y, double x, double y, double f_x, double f_y)
{
   /***************************************************
   *** ������� ������������ ����� ����� ���������� ***
   ***************************************************/
   double interp;
   interp=(((f_y - f_x) / (y - x)) * (x_znachenie_y - x)) + f_x;
   return interp;
}
//============================================================================//
double exterpol_min(double znachenie_x,double x,double y,double f_x,double f_y)
{  /**************************************************************************
	*** ������� �������������� ���� ���� ����� �������� ������ ����������� ***
	**************************************************************************/
   double exterp;
	exterp= f_x - (((f_y - f_x) / (y - x)) * (x - znachenie_x));
	return exterp;
}

double exterpol_max(double y_znachenie,double x,double y,double f_x,double f_y)
{  /**************************************************************************
	*** ������� �������������� ���� ���� ����� �������� ������ ����������� ***
	**************************************************************************/
	double exterp;
	exterp= (((f_y - f_x) / (y - x)) * (y_znachenie - y)) + f_y;
	return exterp;
}
//============================================================================//
void main()
{
	 double a[2][12]={
						{   0,  -5, -10, -15, -20, -25, -30, -35, -40, -45, -50, -55},
						{2.05,1.67,1.45,1.29,1.17,1.08,1.00,0.95,0.90,0.85,0.82,0.80}
					 };
	double alf;
	alf=INTERPOL(a,-2.3);

   printf("\n%lf",alf);
   getch();
}

