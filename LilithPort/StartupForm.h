#pragma once

#include "stdafx.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text;


namespace LilithPort {

	/// <summary>
	/// StartupForm �̊T�v
	///
	/// �x��: ���̃N���X�̖��O��ύX����ꍇ�A���̃N���X���ˑ����邷�ׂĂ� .resx �t�@�C���Ɋ֘A�t����ꂽ
	///          �}�l�[�W ���\�[�X �R���p�C�� �c�[���ɑ΂��� 'Resource File Name' �v���p�e�B��
	///          �ύX����K�v������܂��B���̕ύX���s��Ȃ��ƁA
	///          �f�U�C�i�ƁA���̃t�H�[���Ɋ֘A�t����ꂽ���[�J���C�Y�ς݃��\�[�X�Ƃ��A
	///          ���������݂ɗ��p�ł��Ȃ��Ȃ�܂��B
	/// </summary>
	public ref class StartupForm : public System::Windows::Forms::Form
	{
	public:
		StartupForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^ �R�[�h��ǉ����܂�
			//
		}

	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
		/// </summary>
		~StartupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^  radioButtonServer;
	private: System::Windows::Forms::RadioButton^  radioButtonHost;
	private: System::Windows::Forms::RadioButton^  radioButtonClient;
	private: System::Windows::Forms::Label^  labelServerName;
	private: System::Windows::Forms::TextBox^  textBoxIP;
	private: System::Windows::Forms::Label^  labelOpenPort;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownOpenPort;
	private: System::Windows::Forms::Button^  buttonOK;
	private: System::Windows::Forms::Button^  buttonCancel;







	private: System::Windows::Forms::GroupBox^  groupBoxStartMode;
	private: System::Windows::Forms::TextBox^  textBoxServerName;
	private: System::Windows::Forms::GroupBox^  groupBoxConnection;



	private: System::Windows::Forms::GroupBox^  groupBoxWelcome;
	private: System::Windows::Forms::RichTextBox^  textBoxWelcome;
	private: System::Windows::Forms::ToolTip^  toolTipStartupForm;
	private: System::Windows::Forms::Button^  buttonConnect;



	private: System::Windows::Forms::TabControl^  startupTabs;

	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::Label^  labelComment;
	private: System::Windows::Forms::Label^  labelName;
	private: System::Windows::Forms::TextBox^  textBoxComment;
	private: System::Windows::Forms::TextBox^  textBoxName;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBoxUser;




	private: System::Windows::Forms::CheckBox^  checkBoxUpnp;







	private: System::ComponentModel::IContainer^  components;
	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�ϐ��ł��B
		/// </summary>

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(StartupForm::typeid));
			this->radioButtonServer = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonHost = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonClient = (gcnew System::Windows::Forms::RadioButton());
			this->labelServerName = (gcnew System::Windows::Forms::Label());
			this->textBoxIP = (gcnew System::Windows::Forms::TextBox());
			this->labelOpenPort = (gcnew System::Windows::Forms::Label());
			this->numericUpDownOpenPort = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->groupBoxStartMode = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxUpnp = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxServerName = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxConnection = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxWelcome = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxWelcome = (gcnew System::Windows::Forms::RichTextBox());
			this->toolTipStartupForm = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->buttonConnect = (gcnew System::Windows::Forms::Button());
			this->labelComment = (gcnew System::Windows::Forms::Label());
			this->labelName = (gcnew System::Windows::Forms::Label());
			this->startupTabs = (gcnew System::Windows::Forms::TabControl());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxUser = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->textBoxComment = (gcnew System::Windows::Forms::TextBox());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownOpenPort))->BeginInit();
			this->groupBoxStartMode->SuspendLayout();
			this->groupBoxConnection->SuspendLayout();
			this->groupBoxWelcome->SuspendLayout();
			this->startupTabs->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBoxUser->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// radioButtonServer
			// 
			this->radioButtonServer->AutoSize = true;
			this->radioButtonServer->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->radioButtonServer->Location = System::Drawing::Point(6, 6);
			this->radioButtonServer->Name = L"radioButtonServer";
			this->radioButtonServer->Size = System::Drawing::Size(62, 18);
			this->radioButtonServer->TabIndex = 0;
			this->radioButtonServer->Text = L"Server";
			this->toolTipStartupForm->SetToolTip(this->radioButtonServer, L"Set up a server and wait for other connections.\r\nThe specified listening port (UD" 
				L"P) must be open.");
			this->radioButtonServer->UseVisualStyleBackColor = true;
			this->radioButtonServer->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonServer_CheckedChanged);
			// 
			// radioButtonHost
			// 
			this->radioButtonHost->AutoSize = true;
			this->radioButtonHost->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->radioButtonHost->Location = System::Drawing::Point(6, 29);
			this->radioButtonHost->Name = L"radioButtonHost";
			this->radioButtonHost->Size = System::Drawing::Size(53, 18);
			this->radioButtonHost->TabIndex = 1;
			this->radioButtonHost->Text = L"Host";
			this->toolTipStartupForm->SetToolTip(this->radioButtonHost, L"Connect to the server. \r\nThe specified listening port (UDP) will be used for comm" 
				L"unication. \r\n(Opening the port will ensure stable operation.)");
			this->radioButtonHost->UseVisualStyleBackColor = true;
			this->radioButtonHost->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonHost_CheckedChanged);
			// 
			// radioButtonClient
			// 
			this->radioButtonClient->AutoSize = true;
			this->radioButtonClient->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->radioButtonClient->Location = System::Drawing::Point(6, 52);
			this->radioButtonClient->Name = L"radioButtonClient";
			this->radioButtonClient->Size = System::Drawing::Size(57, 18);
			this->radioButtonClient->TabIndex = 2;
			this->radioButtonClient->Text = L"Client";
			this->toolTipStartupForm->SetToolTip(this->radioButtonClient, L"Connect to the server. \r\nThe port will be assigned automatically. \r\n(You can conn" 
				L"ect without opening the port, but the operation will be slightly unstable.)");
			this->radioButtonClient->UseVisualStyleBackColor = true;
			this->radioButtonClient->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::radioButtonClient_CheckedChanged);
			// 
			// labelServerName
			// 
			this->labelServerName->AutoSize = true;
			this->labelServerName->Location = System::Drawing::Point(9, 27);
			this->labelServerName->Name = L"labelServerName";
			this->labelServerName->Size = System::Drawing::Size(70, 13);
			this->labelServerName->TabIndex = 0;
			this->labelServerName->Text = L"Server name:";
			this->toolTipStartupForm->SetToolTip(this->labelServerName, L"The name your server will have.\nThis is not the address.");
			// 
			// textBoxIP
			// 
			this->textBoxIP->Location = System::Drawing::Point(81, 25);
			this->textBoxIP->Name = L"textBoxIP";
			this->textBoxIP->Size = System::Drawing::Size(256, 20);
			this->textBoxIP->TabIndex = 6;
			this->textBoxIP->WordWrap = false;
			// 
			// labelOpenPort
			// 
			this->labelOpenPort->AutoSize = true;
			this->labelOpenPort->Location = System::Drawing::Point(9, 56);
			this->labelOpenPort->Name = L"labelOpenPort";
			this->labelOpenPort->Size = System::Drawing::Size(62, 13);
			this->labelOpenPort->TabIndex = 0;
			this->labelOpenPort->Text = L"Server port:";
			this->toolTipStartupForm->SetToolTip(this->labelOpenPort, resources->GetString(L"labelOpenPort.ToolTip"));
			// 
			// numericUpDownOpenPort
			// 
			this->numericUpDownOpenPort->Location = System::Drawing::Point(77, 54);
			this->numericUpDownOpenPort->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {65535, 0, 0, 0});
			this->numericUpDownOpenPort->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1024, 0, 0, 0});
			this->numericUpDownOpenPort->Name = L"numericUpDownOpenPort";
			this->numericUpDownOpenPort->Size = System::Drawing::Size(53, 20);
			this->numericUpDownOpenPort->TabIndex = 4;
			this->numericUpDownOpenPort->Tag = L"";
			this->numericUpDownOpenPort->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {7500, 0, 0, 0});
			// 
			// buttonOK
			// 
			this->buttonOK->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonOK->Location = System::Drawing::Point(272, 279);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(80, 26);
			this->buttonOK->TabIndex = 0;
			this->buttonOK->Text = L"OK";
			this->toolTipStartupForm->SetToolTip(this->buttonOK, L"Confirm the settings you\'ve chosen above.");
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &StartupForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonCancel->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonCancel->Location = System::Drawing::Point(358, 279);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(80, 26);
			this->buttonCancel->TabIndex = 1;
			this->buttonCancel->Text = L"Cancel";
			this->toolTipStartupForm->SetToolTip(this->buttonCancel, L"Switch to offline free play mode.");
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &StartupForm::buttonCancel_Click);
			// 
			// groupBoxStartMode
			// 
			this->groupBoxStartMode->Controls->Add(this->checkBoxUpnp);
			this->groupBoxStartMode->Controls->Add(this->textBoxServerName);
			this->groupBoxStartMode->Controls->Add(this->labelOpenPort);
			this->groupBoxStartMode->Controls->Add(this->labelServerName);
			this->groupBoxStartMode->Controls->Add(this->numericUpDownOpenPort);
			this->groupBoxStartMode->Location = System::Drawing::Point(68, 6);
			this->groupBoxStartMode->Name = L"groupBoxStartMode";
			this->groupBoxStartMode->Size = System::Drawing::Size(343, 105);
			this->groupBoxStartMode->TabIndex = 8;
			this->groupBoxStartMode->TabStop = false;
			this->groupBoxStartMode->Text = L"Server";
			// 
			// checkBoxUpnp
			// 
			this->checkBoxUpnp->AutoSize = true;
			this->checkBoxUpnp->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxUpnp->Location = System::Drawing::Point(12, 80);
			this->checkBoxUpnp->Name = L"checkBoxUpnp";
			this->checkBoxUpnp->Size = System::Drawing::Size(96, 18);
			this->checkBoxUpnp->TabIndex = 5;
			this->checkBoxUpnp->Text = L"Enable UPnP";
			this->checkBoxUpnp->UseVisualStyleBackColor = true;
			this->checkBoxUpnp->CheckedChanged += gcnew System::EventHandler(this, &StartupForm::checkBoxUpnp_CheckedChanged);
			// 
			// textBoxServerName
			// 
			this->textBoxServerName->Location = System::Drawing::Point(85, 24);
			this->textBoxServerName->Name = L"textBoxServerName";
			this->textBoxServerName->Size = System::Drawing::Size(252, 20);
			this->textBoxServerName->TabIndex = 3;
			this->textBoxServerName->WordWrap = false;
			// 
			// groupBoxConnection
			// 
			this->groupBoxConnection->Controls->Add(this->label1);
			this->groupBoxConnection->Controls->Add(this->textBoxIP);
			this->groupBoxConnection->Location = System::Drawing::Point(68, 117);
			this->groupBoxConnection->Name = L"groupBoxConnection";
			this->groupBoxConnection->Size = System::Drawing::Size(343, 52);
			this->groupBoxConnection->TabIndex = 9;
			this->groupBoxConnection->TabStop = false;
			this->groupBoxConnection->Text = L"Client";
			this->toolTipStartupForm->SetToolTip(this->groupBoxConnection, resources->GetString(L"groupBoxConnection.ToolTip"));
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(69, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Address / IP:";
			this->toolTipStartupForm->SetToolTip(this->label1, L"Specify the server address or IP you want to connect to.\r\n[<address/ip>:<port>]");
			// 
			// groupBoxWelcome
			// 
			this->groupBoxWelcome->Controls->Add(this->textBoxWelcome);
			this->groupBoxWelcome->Location = System::Drawing::Point(6, 6);
			this->groupBoxWelcome->Name = L"groupBoxWelcome";
			this->groupBoxWelcome->Size = System::Drawing::Size(409, 223);
			this->groupBoxWelcome->TabIndex = 11;
			this->groupBoxWelcome->TabStop = false;
			this->groupBoxWelcome->Text = L"Server Welcome Message";
			this->toolTipStartupForm->SetToolTip(this->groupBoxWelcome, L"This Welcome message will be shown when players join your server.");
			// 
			// textBoxWelcome
			// 
			this->textBoxWelcome->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBoxWelcome->Location = System::Drawing::Point(6, 19);
			this->textBoxWelcome->MaxLength = 254;
			this->textBoxWelcome->Name = L"textBoxWelcome";
			this->textBoxWelcome->Size = System::Drawing::Size(397, 198);
			this->textBoxWelcome->TabIndex = 0;
			this->textBoxWelcome->Text = L"";
			this->toolTipStartupForm->SetToolTip(this->textBoxWelcome, L"When running a server, this message will appear to everyone who joins.");
			// 
			// toolTipStartupForm
			// 
			this->toolTipStartupForm->AutomaticDelay = 0;
			this->toolTipStartupForm->AutoPopDelay = 30000;
			this->toolTipStartupForm->InitialDelay = 0;
			this->toolTipStartupForm->ReshowDelay = 0;
			this->toolTipStartupForm->UseAnimation = false;
			this->toolTipStartupForm->UseFading = false;
			// 
			// buttonConnect
			// 
			this->buttonConnect->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonConnect->Location = System::Drawing::Point(272, 279);
			this->buttonConnect->Name = L"buttonConnect";
			this->buttonConnect->Size = System::Drawing::Size(80, 26);
			this->buttonConnect->TabIndex = 8;
			this->buttonConnect->Text = L"Connect";
			this->toolTipStartupForm->SetToolTip(this->buttonConnect, L"Start an online connection.");
			this->buttonConnect->UseVisualStyleBackColor = true;
			this->buttonConnect->Click += gcnew System::EventHandler(this, &StartupForm::buttonOK_Click);
			// 
			// labelComment
			// 
			this->labelComment->AutoSize = true;
			this->labelComment->Location = System::Drawing::Point(20, 52);
			this->labelComment->Name = L"labelComment";
			this->labelComment->Size = System::Drawing::Size(54, 13);
			this->labelComment->TabIndex = 8;
			this->labelComment->Text = L"Comment:";
			this->toolTipStartupForm->SetToolTip(this->labelComment, L"You will automatically say this message when you join.");
			// 
			// labelName
			// 
			this->labelName->AutoSize = true;
			this->labelName->Location = System::Drawing::Point(36, 25);
			this->labelName->Name = L"labelName";
			this->labelName->Size = System::Drawing::Size(38, 13);
			this->labelName->TabIndex = 5;
			this->labelName->Text = L"Name:";
			this->toolTipStartupForm->SetToolTip(this->labelName, L"Your username. Don\'t use special characters.");
			// 
			// startupTabs
			// 
			this->startupTabs->Controls->Add(this->tabPage2);
			this->startupTabs->Controls->Add(this->tabPage1);
			this->startupTabs->Controls->Add(this->tabPage3);
			this->startupTabs->Location = System::Drawing::Point(9, 12);
			this->startupTabs->Name = L"startupTabs";
			this->startupTabs->SelectedIndex = 0;
			this->startupTabs->Size = System::Drawing::Size(429, 261);
			this->startupTabs->TabIndex = 15;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->groupBoxStartMode);
			this->tabPage2->Controls->Add(this->radioButtonServer);
			this->tabPage2->Controls->Add(this->groupBoxConnection);
			this->tabPage2->Controls->Add(this->radioButtonHost);
			this->tabPage2->Controls->Add(this->radioButtonClient);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(421, 235);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Connection";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->groupBoxUser);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(421, 235);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"User Profile";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// groupBoxUser
			// 
			this->groupBoxUser->Controls->Add(this->labelName);
			this->groupBoxUser->Controls->Add(this->labelComment);
			this->groupBoxUser->Controls->Add(this->textBoxName);
			this->groupBoxUser->Controls->Add(this->textBoxComment);
			this->groupBoxUser->Location = System::Drawing::Point(6, 6);
			this->groupBoxUser->Name = L"groupBoxUser";
			this->groupBoxUser->Size = System::Drawing::Size(409, 77);
			this->groupBoxUser->TabIndex = 9;
			this->groupBoxUser->TabStop = false;
			this->groupBoxUser->Text = L"User Profile Settings";
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(80, 22);
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(323, 20);
			this->textBoxName->TabIndex = 0;
			this->textBoxName->WordWrap = false;
			// 
			// textBoxComment
			// 
			this->textBoxComment->Location = System::Drawing::Point(80, 49);
			this->textBoxComment->Name = L"textBoxComment";
			this->textBoxComment->Size = System::Drawing::Size(323, 20);
			this->textBoxComment->TabIndex = 1;
			this->textBoxComment->WordWrap = false;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->groupBoxWelcome);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(421, 235);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Welcome Message";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// StartupForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Black;
			this->CancelButton = this->buttonCancel;
			this->ClientSize = System::Drawing::Size(450, 317);
			this->ControlBox = false;
			this->Controls->Add(this->startupTabs);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonConnect);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"StartupForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"LilithPort LTS - Welcome";
			this->TopMost = true;
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &StartupForm::StartupForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &StartupForm::StartupForm_Load);
			this->Shown += gcnew System::EventHandler(this, &StartupForm::StartupForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownOpenPort))->EndInit();
			this->groupBoxStartMode->ResumeLayout(false);
			this->groupBoxStartMode->PerformLayout();
			this->groupBoxConnection->ResumeLayout(false);
			this->groupBoxConnection->PerformLayout();
			this->groupBoxWelcome->ResumeLayout(false);
			this->startupTabs->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage1->ResumeLayout(false);
			this->groupBoxUser->ResumeLayout(false);
			this->groupBoxUser->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	protected:

		// StartupForm.cpp
		bool StartupForm::CheckValidate();

	private:

		// �R���g���[���{�b�N�X����̕���F���p
		static bool ConnectionStart = false;

		System::Void StartupForm_Load(System::Object^  sender, System::EventArgs^  e) {
			ConnectionStart = false;

			textBoxServerName->MaxLength      = MAX_NAME;
			textBoxIP->MaxLength              = MAX_ARRAY;
			textBoxName->MaxLength            = MAX_NAME;
			textBoxComment->MaxLength         = MAX_NAME;

			switch(MTOPTION.CONNECTION_TYPE){
			case CT_SERVER:
			default:
				radioButtonServer->Checked = true;

				break;
			case CT_HOST:
				radioButtonHost->Checked = true;

				break;
			case CT_CLIENT:
				radioButtonClient->Checked = true;

				numericUpDownOpenPort->Enabled = false;
				break;
			}

			textBoxServerName->Text = gcnew String(MTOPTION.SERVER_NAME);
			textBoxIP->Text = gcnew String(MTOPTION.CONNECTION_IP);
			
			numericUpDownOpenPort->Value = MTOPTION.OPEN_PORT;
			textBoxName->Text = gcnew String(MTOPTION.NAME);

			textBoxComment->Text = gcnew String(MTOPTION.COMMENT);
			// �^�u�����s��
			ReplaceWelcomeTab(true);
			textBoxWelcome->Text = gcnew String(MTOPTION.WELCOME);

		}
		System::Void StartupForm_Shown(System::Object^  sender, System::EventArgs^  e) {
		}
		System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {
			// �N���E�ڑ��{�^��
			String^ text = textBoxName->Text;
			array<Char>^ charactersToFind = { '<', '>', ':', '/', '|', '?', '*', '!', '@' };

			if (String::IsNullOrEmpty(textBoxName->Text)){
				MessageBox::Show("Your username cannot be blank.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
			
			for each (Char character in charactersToFind) {
				String^ charAsString = gcnew String(&character, 0, 1);
				if (text->Contains(charAsString)) {
					MessageBox::Show("Your username cannot contain special characters < > : | ? *, !, @.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
					return;
				}
			}

			if(!CheckValidate()){
				return;
			}
			ConnectionStart = true;
			
			if (MTOPTION.REST_CONNECT = true){
				
			}else{
				return;
			};

			this->Close();
		}
		System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			// ����{�^��
			MTOPTION.CONNECTION_TYPE = CT_FREE;
			ConnectionStart = false;

			this->Close();
		}
		System::Void StartupForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			if(!ConnectionStart){
				MTOPTION.CONNECTION_TYPE = CT_FREE;
			}
		}
		System::Void radioButtonServer_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = true;
			labelOpenPort->Enabled         = true;
			labelServerName->Enabled       = true;
			textBoxServerName->Enabled     = true;
			textBoxIP->Enabled             = false;
			groupBoxConnection->Enabled    = false;
			groupBoxWelcome->Enabled       = true;
			checkBoxUpnp->Enabled          = true;
		}

		System::Void radioButtonHost_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = true;
			labelOpenPort->Enabled         = true;
			labelServerName->Enabled       = false;
			textBoxServerName->Enabled     = false;
			textBoxIP->Enabled             = true;
			groupBoxConnection->Enabled    = true;
			groupBoxWelcome->Enabled       = false;
			checkBoxUpnp->Enabled          = true;
		}
		System::Void radioButtonClient_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			numericUpDownOpenPort->Enabled = false;
			labelOpenPort->Enabled         = false;
			labelServerName->Enabled       = false;
			textBoxServerName->Enabled     = false;
			textBoxIP->Enabled             = true;
			groupBoxConnection->Enabled    = true;
			groupBoxWelcome->Enabled       = false;
			checkBoxUpnp->Enabled          = false;
		}
		System::Void checkBoxUpnp_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			//Checkbox for enabling/disabling UPnP.
			if(checkBoxUpnp->Checked == true)
			{
				MTOPTION.OPEN_PORT = (UINT)numericUpDownOpenPort->Value;
				UPnP_PortOpenClose(true, false);
			}
			else
			{
				MTOPTION.OPEN_PORT = (UINT)numericUpDownOpenPort->Value;
				UPnP_PortOpenClose(false, false);
			}
		}
};
}
