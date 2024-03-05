#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

System::Void AddButton_Click(System::Object^ sender, System::EventArgs^ e);


void main(array<String> args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	$safeprojectname$::MyForm form;
	Application::Run(% form);
}