
#include "Unit.h"
#include "Tools.h"
#include <iostream>
using namespace std;

CUnit::CUnit(int x, int y, char pic)
{
	m_iX = x;
	m_iY = y;
	m_cPic = pic;
}


CUnit::~CUnit()
{
}


void CUnit::show()
{
	CTools::gotoxy(m_iX, m_iY);
	cout << m_cPic;
}

void CUnit::erase()
{
	CTools::gotoxy(m_iX, m_iY);
	cout << " ";
}