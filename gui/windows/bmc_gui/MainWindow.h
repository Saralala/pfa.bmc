#pragma once

namespace bmc_gui {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStrip^  toolbar;



	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;


	private: System::Windows::Forms::ToolStripMenuItem^  editToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  undoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  redoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  cutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  copyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pasteToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator3;
	private: System::Windows::Forms::ToolStripMenuItem^  selectAllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  nextMeasureToolStripMenuItem;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator4;
	private: System::Windows::Forms::ToolStripMenuItem^  quitToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  previousToolStripMenuItem;

	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator5;
	private: System::Windows::Forms::ToolStripButton^  newButton;
	private: System::Windows::Forms::ToolStripButton^  openButton;
	private: System::Windows::Forms::ToolStripButton^  saveButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator6;
	private: System::Windows::Forms::ToolStripButton^  undoButton;
	private: System::Windows::Forms::ToolStripButton^  redoButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator7;
	private: System::Windows::Forms::ToolStripButton^  cutButton;
	private: System::Windows::Forms::ToolStripButton^  copyButton;
	private: System::Windows::Forms::ToolStripButton^  pasteButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator8;
	private: System::Windows::Forms::ToolStripButton^  compileButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator9;
	private: System::Windows::Forms::ToolStripButton^  playButton;
	private: System::Windows::Forms::ToolStripButton^  pauseButton;
	private: System::Windows::Forms::ToolStripButton^  stopButton;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator10;
	private: System::Windows::Forms::ToolStripButton^  quitButton;


	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator4 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->quitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->undoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->redoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->copyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pasteToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->nextMeasureToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->previousToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator5 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->selectAllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolbar = (gcnew System::Windows::Forms::ToolStrip());
			this->newButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->openButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->saveButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator6 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->undoButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->redoButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator7 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->cutButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->copyButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pasteButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator8 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->compileButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator9 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->playButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->pauseButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->stopButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripSeparator10 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->quitButton = (gcnew System::Windows::Forms::ToolStripButton());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1->SuspendLayout();
			this->toolbar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->fileToolStripMenuItem, 
				this->editToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(738, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {this->newToolStripMenuItem, 
				this->openToolStripMenuItem, this->toolStripSeparator1, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->toolStripSeparator4, 
				this->quitToolStripMenuItem});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->newToolStripMenuItem->Text = L"New";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::onOpen);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(111, 6);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->saveToolStripMenuItem->Text = L"Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::onSave);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			// 
			// toolStripSeparator4
			// 
			this->toolStripSeparator4->Name = L"toolStripSeparator4";
			this->toolStripSeparator4->Size = System::Drawing::Size(111, 6);
			// 
			// quitToolStripMenuItem
			// 
			this->quitToolStripMenuItem->Name = L"quitToolStripMenuItem";
			this->quitToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->quitToolStripMenuItem->Text = L"Quit";
			this->quitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::onQuit);
			// 
			// editToolStripMenuItem
			// 
			this->editToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(11) {this->undoToolStripMenuItem, 
				this->redoToolStripMenuItem, this->toolStripSeparator2, this->cutToolStripMenuItem, this->copyToolStripMenuItem, this->pasteToolStripMenuItem, 
				this->toolStripSeparator3, this->nextMeasureToolStripMenuItem, this->previousToolStripMenuItem, this->toolStripSeparator5, this->selectAllToolStripMenuItem});
			this->editToolStripMenuItem->Name = L"editToolStripMenuItem";
			this->editToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->editToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			this->editToolStripMenuItem->Text = L"Edit";
			// 
			// undoToolStripMenuItem
			// 
			this->undoToolStripMenuItem->Name = L"undoToolStripMenuItem";
			this->undoToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->undoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Z));
			this->undoToolStripMenuItem->Size = System::Drawing::Size(253, 22);
			this->undoToolStripMenuItem->Text = L"Undo";
			this->undoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::onUndo);
			// 
			// redoToolStripMenuItem
			// 
			this->redoToolStripMenuItem->Name = L"redoToolStripMenuItem";
			this->redoToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->redoToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::Z));
			this->redoToolStripMenuItem->Size = System::Drawing::Size(253, 22);
			this->redoToolStripMenuItem->Text = L"Redo";
			this->redoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::onRedo);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(250, 6);
			// 
			// cutToolStripMenuItem
			// 
			this->cutToolStripMenuItem->Name = L"cutToolStripMenuItem";
			this->cutToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->cutToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->cutToolStripMenuItem->Size = System::Drawing::Size(253, 22);
			this->cutToolStripMenuItem->Text = L"Cut";
			this->cutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::onCut);
			// 
			// copyToolStripMenuItem
			// 
			this->copyToolStripMenuItem->Name = L"copyToolStripMenuItem";
			this->copyToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->copyToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->copyToolStripMenuItem->Size = System::Drawing::Size(253, 22);
			this->copyToolStripMenuItem->Text = L"Copy";
			this->copyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::onCopy);
			// 
			// pasteToolStripMenuItem
			// 
			this->pasteToolStripMenuItem->Name = L"pasteToolStripMenuItem";
			this->pasteToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->pasteToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->pasteToolStripMenuItem->Size = System::Drawing::Size(253, 22);
			this->pasteToolStripMenuItem->Text = L"Paste";
			this->pasteToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::onPaste);
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(250, 6);
			// 
			// nextMeasureToolStripMenuItem
			// 
			this->nextMeasureToolStripMenuItem->Name = L"nextMeasureToolStripMenuItem";
			this->nextMeasureToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::Right));
			this->nextMeasureToolStripMenuItem->Size = System::Drawing::Size(253, 22);
			this->nextMeasureToolStripMenuItem->Text = L"Next Measure";
			this->nextMeasureToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::onNext);
			// 
			// previousToolStripMenuItem
			// 
			this->previousToolStripMenuItem->Name = L"previousToolStripMenuItem";
			this->previousToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>(((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Shift) 
				| System::Windows::Forms::Keys::Left));
			this->previousToolStripMenuItem->Size = System::Drawing::Size(253, 22);
			this->previousToolStripMenuItem->Text = L"Previous Measure";
			this->previousToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::onPrevious);
			// 
			// toolStripSeparator5
			// 
			this->toolStripSeparator5->Name = L"toolStripSeparator5";
			this->toolStripSeparator5->Size = System::Drawing::Size(250, 6);
			// 
			// selectAllToolStripMenuItem
			// 
			this->selectAllToolStripMenuItem->Name = L"selectAllToolStripMenuItem";
			this->selectAllToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->selectAllToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->selectAllToolStripMenuItem->Size = System::Drawing::Size(253, 22);
			this->selectAllToolStripMenuItem->Text = L"Select All";
			this->selectAllToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::onSelectAll);
			// 
			// toolbar
			// 
			this->toolbar->GripStyle = System::Windows::Forms::ToolStripGripStyle::Hidden;
			this->toolbar->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(18) {this->newButton, this->openButton, 
				this->saveButton, this->toolStripSeparator6, this->undoButton, this->redoButton, this->toolStripSeparator7, this->cutButton, 
				this->copyButton, this->pasteButton, this->toolStripSeparator8, this->compileButton, this->toolStripSeparator9, this->playButton, 
				this->pauseButton, this->stopButton, this->toolStripSeparator10, this->quitButton});
			this->toolbar->Location = System::Drawing::Point(0, 24);
			this->toolbar->Name = L"toolbar";
			this->toolbar->Size = System::Drawing::Size(738, 25);
			this->toolbar->TabIndex = 1;
			this->toolbar->Text = L"New (Ctrl+N)";
			// 
			// newButton
			// 
			this->newButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->newButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"newButton.Image")));
			this->newButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->newButton->Name = L"newButton";
			this->newButton->Size = System::Drawing::Size(23, 22);
			this->newButton->Text = L"New File (Ctrl+N)";
			// 
			// openButton
			// 
			this->openButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->openButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"openButton.Image")));
			this->openButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openButton->Name = L"openButton";
			this->openButton->Size = System::Drawing::Size(23, 22);
			this->openButton->Text = L"Open File (Ctrl+O)";
			this->openButton->Click += gcnew System::EventHandler(this, &MainWindow::onOpen);
			// 
			// saveButton
			// 
			this->saveButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->saveButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"saveButton.Image")));
			this->saveButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(23, 22);
			this->saveButton->Text = L"Save File (Ctrl+S)";
			this->saveButton->Click += gcnew System::EventHandler(this, &MainWindow::onSave);
			// 
			// toolStripSeparator6
			// 
			this->toolStripSeparator6->Name = L"toolStripSeparator6";
			this->toolStripSeparator6->Size = System::Drawing::Size(6, 25);
			// 
			// undoButton
			// 
			this->undoButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->undoButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"undoButton.Image")));
			this->undoButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->undoButton->Name = L"undoButton";
			this->undoButton->Size = System::Drawing::Size(23, 22);
			this->undoButton->Text = L"toolStripButton1";
			this->undoButton->Click += gcnew System::EventHandler(this, &MainWindow::onUndo);
			// 
			// redoButton
			// 
			this->redoButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->redoButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"redoButton.Image")));
			this->redoButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->redoButton->Name = L"redoButton";
			this->redoButton->Size = System::Drawing::Size(23, 22);
			this->redoButton->Text = L"Redo (Ctrl+Shift+Z)";
			this->redoButton->Click += gcnew System::EventHandler(this, &MainWindow::onRedo);
			// 
			// toolStripSeparator7
			// 
			this->toolStripSeparator7->Name = L"toolStripSeparator7";
			this->toolStripSeparator7->Size = System::Drawing::Size(6, 25);
			// 
			// cutButton
			// 
			this->cutButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->cutButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"cutButton.Image")));
			this->cutButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->cutButton->Name = L"cutButton";
			this->cutButton->Size = System::Drawing::Size(23, 22);
			this->cutButton->Text = L"Cut (Ctrl+X)";
			this->cutButton->Click += gcnew System::EventHandler(this, &MainWindow::onCut);
			// 
			// copyButton
			// 
			this->copyButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->copyButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"copyButton.Image")));
			this->copyButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->copyButton->Name = L"copyButton";
			this->copyButton->Size = System::Drawing::Size(23, 22);
			this->copyButton->Text = L"Copy (Ctrl+C)";
			this->copyButton->Click += gcnew System::EventHandler(this, &MainWindow::onCopy);
			// 
			// pasteButton
			// 
			this->pasteButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pasteButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pasteButton.Image")));
			this->pasteButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pasteButton->Name = L"pasteButton";
			this->pasteButton->Size = System::Drawing::Size(23, 22);
			this->pasteButton->Text = L"Paste (Ctrl+V)";
			this->pasteButton->Click += gcnew System::EventHandler(this, &MainWindow::onPaste);
			// 
			// toolStripSeparator8
			// 
			this->toolStripSeparator8->Name = L"toolStripSeparator8";
			this->toolStripSeparator8->Size = System::Drawing::Size(6, 25);
			// 
			// compileButton
			// 
			this->compileButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->compileButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"compileButton.Image")));
			this->compileButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->compileButton->Name = L"compileButton";
			this->compileButton->Size = System::Drawing::Size(23, 22);
			this->compileButton->Text = L"Compile (F4)";
			// 
			// toolStripSeparator9
			// 
			this->toolStripSeparator9->Name = L"toolStripSeparator9";
			this->toolStripSeparator9->Size = System::Drawing::Size(6, 25);
			// 
			// playButton
			// 
			this->playButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->playButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"playButton.Image")));
			this->playButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->playButton->Name = L"playButton";
			this->playButton->Size = System::Drawing::Size(23, 22);
			this->playButton->Text = L"Play (F5)";
			// 
			// pauseButton
			// 
			this->pauseButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->pauseButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pauseButton.Image")));
			this->pauseButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->pauseButton->Name = L"pauseButton";
			this->pauseButton->Size = System::Drawing::Size(23, 22);
			this->pauseButton->Text = L"Pause (F6)";
			// 
			// stopButton
			// 
			this->stopButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->stopButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"stopButton.Image")));
			this->stopButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->stopButton->Name = L"stopButton";
			this->stopButton->Size = System::Drawing::Size(23, 22);
			this->stopButton->Text = L"Stop (F7)";
			// 
			// toolStripSeparator10
			// 
			this->toolStripSeparator10->Name = L"toolStripSeparator10";
			this->toolStripSeparator10->Size = System::Drawing::Size(6, 25);
			// 
			// quitButton
			// 
			this->quitButton->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->quitButton->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"quitButton.Image")));
			this->quitButton->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->quitButton->Name = L"quitButton";
			this->quitButton->Size = System::Drawing::Size(23, 22);
			this->quitButton->Text = L"Quit (Ctrl+Q)";
			this->quitButton->Click += gcnew System::EventHandler(this, &MainWindow::onQuit);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 49);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->richTextBox1);
			this->splitContainer1->Size = System::Drawing::Size(738, 258);
			this->splitContainer1->SplitterDistance = 359;
			this->splitContainer1->TabIndex = 2;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(359, 258);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 307);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->toolbar);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainWindow";
			this->Text = L"MainWindow";
			this->Load += gcnew System::EventHandler(this, &MainWindow::MainWindow_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolbar->ResumeLayout(false);
			this->toolbar->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MainWindow_Load(System::Object^  sender, System::EventArgs^  e) {
			 }
	
	
	//
	//Edit Menu Callbacks
	//
	private: System::Void onUndo(System::Object^  sender, System::EventArgs^  e);
	private: System::Void onRedo(System::Object^  sender, System::EventArgs^  e);
	private: System::Void onCut(System::Object^  sender, System::EventArgs^  e);
	private: System::Void onCopy(System::Object^  sender, System::EventArgs^  e);
	private: System::Void onPaste(System::Object^  sender, System::EventArgs^  e);
	private: System::Void onSelectAll(System::Object^  sender, System::EventArgs^  e);
	private: System::Void onNext(System::Object^  sender, System::EventArgs^  e);
	
	private: System::Void onOpen(System::Object^  sender, System::EventArgs^  e);
	private: System::Void onQuit(System::Object^  sender, System::EventArgs^  e);
	private: System::Void onSave(System::Object^  sender, System::EventArgs^  e);
	private: System::Void onPrevious(System::Object^  sender, System::EventArgs^  e);
};
}
