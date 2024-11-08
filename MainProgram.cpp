#include "MainProgram.h"
#include "MainFrame.h"
#include <wx/wx.h>



namespace UMHH
{
	void wxIMPLIMENT_APP(MainProgram);

	bool MainProgram::OnInit()
	{
		MainFrame* mainFrame = new MainFrame("title");
		mainFrame->SetClientSize(1000, 800);
		mainFrame->Show();
		return true;
	}
}