#include "MyForm1.h"


using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall Main1(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	prosit6::MyForm1 monFormulaire1;

	Application::Run(% monFormulaire1);
	return 0;
}