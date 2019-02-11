#include "TarnishedMainframe.h"


using namespace System;
using namespace System::Windows::Forms;
#include <string>

[STAThread]
int main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TarnishedMainframe::TarnishedMainframe start_screen;
	Application::Run(%start_screen);

	return 0;
}