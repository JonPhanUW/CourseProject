// MacroTracker.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Welcome_Screen.h"
#include "DiaryPage.h"
#include "editPage.h"
#include "progressPage.h"
#include "FoodPage.h"

int main()
{

	Welcome_Screen ws;
	ws.landing_page();

	DiaryPage dp;
	dp.landing_page();

	editPage ep;
	ep.landing_page();

	progressPage pp;
	pp.landing_page();

	FoodPage fp;
	fp.landing_page();
}


