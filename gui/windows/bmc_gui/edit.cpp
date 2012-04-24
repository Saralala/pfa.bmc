#include "stdafx.h"
#include "MainWindow.h"

namespace bmc_gui {

	System::Void MainWindow::onUndo(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->Undo();	
	}
	System::Void MainWindow::onRedo(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->Redo();	
	}
	System::Void MainWindow::onCut(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->Cut();
	}
	System::Void MainWindow::onCopy(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->Copy();
	}
	System::Void MainWindow::onPaste(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->Paste();
	}
	System::Void MainWindow::onSelectAll(System::Object^  sender, System::EventArgs^  e) {
		richTextBox1->SelectAll();
	}
	System::Void MainWindow::onNext(System::Object^  sender, System::EventArgs^  e) {
		if(richTextBox1->SelectionStart >= richTextBox1->TextLength)
			return;
		int nextPosition = richTextBox1->Find(L"⠀",richTextBox1->SelectionStart+1,RichTextBoxFinds::None);
		if(nextPosition >= 0)
			richTextBox1->Select(nextPosition+1,0);
		else
			richTextBox1->Select(richTextBox1->TextLength,0);
	}
	System::Void MainWindow::onPrevious(System::Object^  sender, System::EventArgs^  e) {
		if(richTextBox1->SelectionStart <= 0)
			return;
		String^ bar = L"⠀";
		int previousPosition = richTextBox1->Find(bar,0,richTextBox1->SelectionStart - bar->Length,RichTextBoxFinds::Reverse);
		if(previousPosition >= 0)
			richTextBox1->Select(previousPosition+1,0);
		else
			richTextBox1->Select(0,0);
	}	

}	