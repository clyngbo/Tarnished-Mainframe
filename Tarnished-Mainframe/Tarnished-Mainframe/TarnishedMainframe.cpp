#include "TarnishedMainframe.h"
#include <stdio.h>
#include <string>

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;



[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TarnishedMainframe::TarnishedMainframe start_screen;
	std::printf("Programmet er startet\n");
	Application::Run(%start_screen);
	
	return 0;
}