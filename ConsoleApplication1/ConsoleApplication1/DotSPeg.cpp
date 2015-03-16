#include "stdafx.h"
#using <System.dll>
#using <System.Drawing.dll>
#using <System.Windows.Forms.dll>
#include "DotSPeg.h"

using namespace ConsoleApplication1;
using namespace System::Windows::Forms;
using namespace std;

[System::STAThread]
int main(array<System::String^>^args)
{

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew DotSPeg());

	return 0;
}
