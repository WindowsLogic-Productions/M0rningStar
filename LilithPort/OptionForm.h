#pragma once

#include "stdafx.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::IO;
using namespace System::Diagnostics;

namespace LilithPort {
#pragma region Namespace

	/// <summary>
	/// OptionForm ‚ÌŠT—v
	///
	/// Œx: ‚±‚ÌƒNƒ‰ƒX‚Ì–¼‘O‚ð•ÏX‚·‚éê‡A‚±‚ÌƒNƒ‰ƒX‚ªˆË‘¶‚·‚é‚·‚×‚Ä‚Ì .resx ƒtƒ@ƒCƒ‹‚ÉŠÖ˜A•t‚¯‚ç‚ê‚½
	///          ƒ}ƒl[ƒW ƒŠƒ\[ƒX ƒRƒ“ƒpƒCƒ‰ ƒc[ƒ‹‚É‘Î‚µ‚Ä 'Resource File Name' ƒvƒƒpƒeƒB‚ð
	///          •ÏX‚·‚é•K—v‚ª‚ ‚è‚Ü‚·B‚±‚Ì•ÏX‚ðs‚í‚È‚¢‚ÆA
	///          ƒfƒUƒCƒi‚ÆA‚±‚ÌƒtƒH[ƒ€‚ÉŠÖ˜A•t‚¯‚ç‚ê‚½ƒ[ƒJƒ‰ƒCƒYÏ‚ÝƒŠƒ\[ƒX‚Æ‚ªA
	///          ³‚µ‚­‘ŠŒÝ‚É—˜—p‚Å‚«‚È‚­‚È‚è‚Ü‚·B
	/// </summary>
	public ref class OptionForm : public System::Windows::Forms::Form
	{
	public:
		OptionForm(void)
		{
			InitializeComponent();
			//
			//TODO: ‚±‚±‚ÉƒRƒ“ƒXƒgƒ‰ƒNƒ^ ƒR[ƒh‚ð’Ç‰Á‚µ‚Ü‚·
			//
		}

	protected:
		/// <summary>
		/// Žg—p’†‚ÌƒŠƒ\[ƒX‚ð‚·‚×‚ÄƒNƒŠ[ƒ“ƒAƒbƒv‚µ‚Ü‚·B
		/// </summary>
		~OptionForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  buttonOK;

	private: System::Windows::Forms::Button^  buttonCancel;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ColorDialog^  colorDialog1;
	private: System::Windows::Forms::TabPage^  tabPageSound;
	private: System::Windows::Forms::TabPage^  tabPagePath;
	private: System::Windows::Forms::TextBox^  textBoxGameExe;
	private: System::Windows::Forms::Button^  buttonReplayFolder;
	private: System::Windows::Forms::Button^  buttonGameExe;
	private: System::Windows::Forms::TextBox^  textBoxReplayFolder;
	private: System::Windows::Forms::TextBox^  textBoxVSSound;
	private: System::Windows::Forms::Button^  buttonNoticeSound;
	private: System::Windows::Forms::Button^  buttonVSSound;
	private: System::Windows::Forms::TextBox^  textBoxNoticeSound;
	private: System::Windows::Forms::TabControl^  tabControlOption;
	private: System::Windows::Forms::TabPage^  tabPageGame;
	private: System::Windows::Forms::GroupBox^  groupBoxRun;
	private: System::Windows::Forms::CheckBox^  checkBoxWindowSize;
	private: System::Windows::Forms::CheckBox^  checkBoxHitJudge;
	private: System::Windows::Forms::GroupBox^  groupBoxNet;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownMaxConnection;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBoxView;
	private: System::Windows::Forms::CheckBox^  checkBoxVersus;
	private: System::Windows::Forms::CheckBox^  checkBoxName;
	private: System::Windows::Forms::CheckBox^  checkBoxFramerate;
	private: System::Windows::Forms::CheckBox^  checkBoxRand;
	private: System::Windows::Forms::GroupBox^  groupBoxSetting;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownMaxStage;
	private: System::Windows::Forms::Label^  labelMaxStage;
	private: System::Windows::Forms::Label^  labelStageSelect;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownStageSelect;
	private: System::Windows::Forms::CheckBox^  checkBoxDivide;
	private: System::Windows::Forms::RadioButton^  radioButtonReplayVersion2;
	private: System::Windows::Forms::RadioButton^  radioButtonReplayVersion1;
	private: System::Windows::Forms::TabPage^  tabPageColor;
	private: System::Windows::Forms::GroupBox^  groupBoxMessageColor;
	private: System::Windows::Forms::Button^  buttonDebugMessage;
	private: System::Windows::Forms::Button^  buttonErrorMessage;
	private: System::Windows::Forms::Button^  buttonSystemMessage;
	private: System::Windows::Forms::GroupBox^  groupBoxOthersColor;
	private: System::Windows::Forms::Button^  buttonSecret;
	private: System::Windows::Forms::Button^  buttonCommentBack;
	private: System::Windows::Forms::Button^  buttonNoticeBack;
	private: System::Windows::Forms::GroupBox^  groupBoxStateColor;
	private: System::Windows::Forms::Button^  buttonWatchState;
	private: System::Windows::Forms::Button^  buttonVSState;
	private: System::Windows::Forms::Button^  buttonRestState;
	private: System::Windows::Forms::Button^  buttonSeekState;
	private: System::Windows::Forms::GroupBox^  groupBoxNameColor;
	private: System::Windows::Forms::Button^  buttonClientName;
	private: System::Windows::Forms::Button^  buttonHostName;
	private: System::Windows::Forms::Button^  buttonServerName;
	private: System::Windows::Forms::GroupBox^  groupBoxNoticeSound;
	private: System::Windows::Forms::GroupBox^  groupBoxVSSound;
	private: System::Windows::Forms::GroupBox^  groupBoxEnterSound;
	private: System::Windows::Forms::TextBox^  textBoxEnterSound;
	private: System::Windows::Forms::Button^  buttonEnterSound;
	private: System::Windows::Forms::GroupBox^  groupBoxReplayFolder;
	private: System::Windows::Forms::GroupBox^  groupBoxGameExe;
	private: System::Windows::Forms::GroupBox^  groupBoxSimulate;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownSimDelay;
	private: System::Windows::Forms::Label^  labelSimDelay;


	private: System::Windows::Forms::GroupBox^  groupBoxSave;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownRound;
	private: System::Windows::Forms::Label^  labelRound;
	private: System::Windows::Forms::Label^  labelTimer;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownTimer;
	private: System::Windows::Forms::TabPage^  tabPageVolume;
	private: System::Windows::Forms::Label^  labelSE;
	private: System::Windows::Forms::TrackBar^  trackBarSE;
	private: System::Windows::Forms::GroupBox^  groupBoxBGM;
	private: System::Windows::Forms::Label^  labelBGM;
	private: System::Windows::Forms::TrackBar^  trackBarBGM;

	private: System::Windows::Forms::Label^  labelMidi;
	private: System::Windows::Forms::TrackBar^  trackBarMidi;
	private: System::Windows::Forms::TabPage^  tabPageIP;
	private: System::Windows::Forms::GroupBox^  Base64groupBox;
	private: System::Windows::Forms::TextBox^  Base64textBox;

	private: System::Windows::Forms::GroupBox^  IPgroupBox;
	private: System::Windows::Forms::Button^  Convertbutton;
	private: System::Windows::Forms::TextBox^  IPtextBox;
	private: System::Windows::Forms::Label^  discriptionlabel;
	private: System::Windows::Forms::Button^  AddPortbutton;
private: System::Windows::Forms::GroupBox^  groupBoxName;


	private: System::Windows::Forms::Button^  buttonNameSound;



private: System::Windows::Forms::TextBox^  textBoxNameSound;





private: System::Windows::Forms::GroupBox^  groupBoxTalkSound;
private: System::Windows::Forms::CheckBox^  checkBoxNameSound;
private: System::Windows::Forms::CheckBox^  checkBoxEnterSound;
private: System::Windows::Forms::CheckBox^  checkBoxNoticeSound;
private: System::Windows::Forms::CheckBox^  checkBoxVSSound;
private: System::Windows::Forms::CheckBox^  checkBoxTalkSound;
private: System::Windows::Forms::Button^  buttonTalkSound;
private: System::Windows::Forms::TextBox^  textBoxTalkSound;

private: System::Windows::Forms::Button^  buttonNoticeSoundPlay;

private: System::Windows::Forms::Button^  buttonVSSoundPlay;
private: System::Windows::Forms::Button^  buttonEnterSoundPlay;
private: System::Windows::Forms::Button^  buttonTalkSoundPlay;
private: System::Windows::Forms::Button^  buttonNameSoundPlay;
private: System::Windows::Forms::GroupBox^  groupBoxSeekSound;
private: System::Windows::Forms::Button^  buttonSeekSound;

private: System::Windows::Forms::TextBox^  textBoxSeekSound;
private: System::Windows::Forms::Button^  buttonSeekSoundPlay;
private: System::Windows::Forms::CheckBox^  checkBoxSeekSound;









private: System::Windows::Forms::GroupBox^  groupBoxTeamOption;
private: System::Windows::Forms::CheckBox^  checkBoxTeamRoundHP;
private: System::Windows::Forms::Label^  labelTeamRoundHP;

private: System::Windows::Forms::GroupBox^  groupBoxProfile;
private: System::Windows::Forms::ComboBox^  comboBoxProfile;
private: System::Windows::Forms::Button^  buttonCopyProfile;
private: System::Windows::Forms::Button^  buttonDeleteProfile;
private: System::Windows::Forms::TextBox^  textBoxProfileName;

private: System::Windows::Forms::Button^  buttonAddProfile;
private: System::Windows::Forms::Label^  labelProfileName;
private: System::Windows::Forms::Button^  buttonSaveProfile;
private: System::Windows::Forms::TextBox^  textBoxMTAddr;

private: System::Windows::Forms::Label^  labelAddrBase64;
private: System::Windows::Forms::Label^  labelAddrMT;
private: System::Windows::Forms::CheckBox^  checkBoxShowResult;




private: System::Windows::Forms::ToolTip^  toolTip1;
private: System::Windows::Forms::Label^  backgroundMusicLabel;
private: System::Windows::Forms::Label^  label2;
private: System::Windows::Forms::Label^  seLabel;

private: System::Windows::Forms::GroupBox^  groupBoxMidi;
private: System::Windows::Forms::GroupBox^  groupBoxCA;
private: System::Windows::Forms::GroupBox^  groupBoxAA;
private: System::Windows::Forms::CheckBox^  checkBoxDarkMode;
private: System::Windows::Forms::GroupBox^  groupBoxSysTray;
private: System::Windows::Forms::CheckBox^  checkBoxSysTray;
private: System::Windows::Forms::CheckBox^  chkMuteBGM;
private: System::Windows::Forms::CheckBox^  chkMuteSE;
private: System::Windows::Forms::GroupBox^  groupBoxNotif;
private: System::Windows::Forms::Label^  labelNotif;
private: System::Windows::Forms::CheckBox^  checkBoxKeywordSound;
private: System::Windows::Forms::Label^  labelKeywordSound;
private: System::Windows::Forms::TextBox^  textBoxKeyword;
private: System::Windows::Forms::GroupBox^  groupBoxKeyword;
private: System::Windows::Forms::GroupBox^  groupBoxLog;
private: System::Windows::Forms::CheckBox^  checkBoxLogClearWithoutWelcome;
private: System::Windows::Forms::RadioButton^  radioButtonLogTXT;
private: System::Windows::Forms::RadioButton^  radioButtonLogRTF;
private: System::Windows::Forms::CheckBox^  checkBoxShowGameOption;
private: System::Windows::Forms::CheckBox^  checkBoxGetIP;
private: System::Windows::Forms::Button^  buttonApply;




private: System::ComponentModel::IContainer^  components;








	private:
		/// <summary>
		/// •K—v‚ÈƒfƒUƒCƒi•Ï”‚Å‚·B
		/// </summary>

#pragma endregion
#pragma region Windows Form Designer generated code
		/// <summary>
		/// ƒfƒUƒCƒi ƒTƒ|[ƒg‚É•K—v‚Èƒƒ\ƒbƒh‚Å‚·B‚±‚Ìƒƒ\ƒbƒh‚Ì“à—e‚ð
		/// ƒR[ƒh ƒGƒfƒBƒ^‚Å•ÏX‚µ‚È‚¢‚Å‚­‚¾‚³‚¢B
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(OptionForm::typeid));
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->buttonCancel = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->tabPageSound = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxNotif = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxKeyword = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxKeywordSound = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxKeyword = (gcnew System::Windows::Forms::TextBox());
			this->labelKeywordSound = (gcnew System::Windows::Forms::Label());
			this->groupBoxSeekSound = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSeekSoundPlay = (gcnew System::Windows::Forms::Button());
			this->checkBoxSeekSound = (gcnew System::Windows::Forms::CheckBox());
			this->buttonSeekSound = (gcnew System::Windows::Forms::Button());
			this->textBoxSeekSound = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxName = (gcnew System::Windows::Forms::GroupBox());
			this->buttonNameSoundPlay = (gcnew System::Windows::Forms::Button());
			this->buttonNameSound = (gcnew System::Windows::Forms::Button());
			this->textBoxNameSound = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxNoticeSound = (gcnew System::Windows::Forms::GroupBox());
			this->buttonNoticeSoundPlay = (gcnew System::Windows::Forms::Button());
			this->checkBoxNoticeSound = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxNoticeSound = (gcnew System::Windows::Forms::TextBox());
			this->buttonNoticeSound = (gcnew System::Windows::Forms::Button());
			this->groupBoxVSSound = (gcnew System::Windows::Forms::GroupBox());
			this->buttonVSSoundPlay = (gcnew System::Windows::Forms::Button());
			this->checkBoxVSSound = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxVSSound = (gcnew System::Windows::Forms::TextBox());
			this->buttonVSSound = (gcnew System::Windows::Forms::Button());
			this->groupBoxTalkSound = (gcnew System::Windows::Forms::GroupBox());
			this->buttonTalkSoundPlay = (gcnew System::Windows::Forms::Button());
			this->buttonTalkSound = (gcnew System::Windows::Forms::Button());
			this->textBoxTalkSound = (gcnew System::Windows::Forms::TextBox());
			this->checkBoxTalkSound = (gcnew System::Windows::Forms::CheckBox());
			this->labelNotif = (gcnew System::Windows::Forms::Label());
			this->groupBoxEnterSound = (gcnew System::Windows::Forms::GroupBox());
			this->buttonEnterSoundPlay = (gcnew System::Windows::Forms::Button());
			this->checkBoxEnterSound = (gcnew System::Windows::Forms::CheckBox());
			this->textBoxEnterSound = (gcnew System::Windows::Forms::TextBox());
			this->buttonEnterSound = (gcnew System::Windows::Forms::Button());
			this->checkBoxNameSound = (gcnew System::Windows::Forms::CheckBox());
			this->tabPagePath = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxLog = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxLogClearWithoutWelcome = (gcnew System::Windows::Forms::CheckBox());
			this->radioButtonLogTXT = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonLogRTF = (gcnew System::Windows::Forms::RadioButton());
			this->groupBoxSysTray = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxSysTray = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxProfile = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSaveProfile = (gcnew System::Windows::Forms::Button());
			this->buttonAddProfile = (gcnew System::Windows::Forms::Button());
			this->labelProfileName = (gcnew System::Windows::Forms::Label());
			this->buttonDeleteProfile = (gcnew System::Windows::Forms::Button());
			this->textBoxProfileName = (gcnew System::Windows::Forms::TextBox());
			this->buttonCopyProfile = (gcnew System::Windows::Forms::Button());
			this->comboBoxProfile = (gcnew System::Windows::Forms::ComboBox());
			this->groupBoxReplayFolder = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxReplayFolder = (gcnew System::Windows::Forms::TextBox());
			this->buttonReplayFolder = (gcnew System::Windows::Forms::Button());
			this->checkBoxDivide = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxNet = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxShowGameOption = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxGetIP = (gcnew System::Windows::Forms::CheckBox());
			this->numericUpDownMaxConnection = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBoxGameExe = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxGameExe = (gcnew System::Windows::Forms::TextBox());
			this->buttonGameExe = (gcnew System::Windows::Forms::Button());
			this->groupBoxSave = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonReplayVersion1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonReplayVersion2 = (gcnew System::Windows::Forms::RadioButton());
			this->tabControlOption = (gcnew System::Windows::Forms::TabControl());
			this->tabPageGame = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxTeamOption = (gcnew System::Windows::Forms::GroupBox());
			this->labelTeamRoundHP = (gcnew System::Windows::Forms::Label());
			this->checkBoxTeamRoundHP = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxSimulate = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownSimDelay = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelSimDelay = (gcnew System::Windows::Forms::Label());
			this->groupBoxRun = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxWindowSize = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxHitJudge = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxView = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxShowResult = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxVersus = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxName = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxFramerate = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxRand = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxSetting = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownRound = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelRound = (gcnew System::Windows::Forms::Label());
			this->labelTimer = (gcnew System::Windows::Forms::Label());
			this->numericUpDownTimer = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMaxStage = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelMaxStage = (gcnew System::Windows::Forms::Label());
			this->labelStageSelect = (gcnew System::Windows::Forms::Label());
			this->numericUpDownStageSelect = (gcnew System::Windows::Forms::NumericUpDown());
			this->tabPageColor = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxAA = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxDarkMode = (gcnew System::Windows::Forms::CheckBox());
			this->groupBoxCA = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxNameColor = (gcnew System::Windows::Forms::GroupBox());
			this->buttonClientName = (gcnew System::Windows::Forms::Button());
			this->buttonHostName = (gcnew System::Windows::Forms::Button());
			this->buttonServerName = (gcnew System::Windows::Forms::Button());
			this->groupBoxOthersColor = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSecret = (gcnew System::Windows::Forms::Button());
			this->buttonCommentBack = (gcnew System::Windows::Forms::Button());
			this->buttonNoticeBack = (gcnew System::Windows::Forms::Button());
			this->groupBoxMessageColor = (gcnew System::Windows::Forms::GroupBox());
			this->buttonDebugMessage = (gcnew System::Windows::Forms::Button());
			this->buttonErrorMessage = (gcnew System::Windows::Forms::Button());
			this->buttonSystemMessage = (gcnew System::Windows::Forms::Button());
			this->groupBoxStateColor = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSeekState = (gcnew System::Windows::Forms::Button());
			this->buttonWatchState = (gcnew System::Windows::Forms::Button());
			this->buttonVSState = (gcnew System::Windows::Forms::Button());
			this->buttonRestState = (gcnew System::Windows::Forms::Button());
			this->tabPageVolume = (gcnew System::Windows::Forms::TabPage());
			this->groupBoxMidi = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->labelMidi = (gcnew System::Windows::Forms::Label());
			this->trackBarMidi = (gcnew System::Windows::Forms::TrackBar());
			this->groupBoxBGM = (gcnew System::Windows::Forms::GroupBox());
			this->chkMuteSE = (gcnew System::Windows::Forms::CheckBox());
			this->chkMuteBGM = (gcnew System::Windows::Forms::CheckBox());
			this->labelSE = (gcnew System::Windows::Forms::Label());
			this->seLabel = (gcnew System::Windows::Forms::Label());
			this->trackBarSE = (gcnew System::Windows::Forms::TrackBar());
			this->backgroundMusicLabel = (gcnew System::Windows::Forms::Label());
			this->labelBGM = (gcnew System::Windows::Forms::Label());
			this->trackBarBGM = (gcnew System::Windows::Forms::TrackBar());
			this->tabPageIP = (gcnew System::Windows::Forms::TabPage());
			this->IPgroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->AddPortbutton = (gcnew System::Windows::Forms::Button());
			this->Convertbutton = (gcnew System::Windows::Forms::Button());
			this->IPtextBox = (gcnew System::Windows::Forms::TextBox());
			this->discriptionlabel = (gcnew System::Windows::Forms::Label());
			this->Base64groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->labelAddrMT = (gcnew System::Windows::Forms::Label());
			this->textBoxMTAddr = (gcnew System::Windows::Forms::TextBox());
			this->labelAddrBase64 = (gcnew System::Windows::Forms::Label());
			this->Base64textBox = (gcnew System::Windows::Forms::TextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->buttonApply = (gcnew System::Windows::Forms::Button());
			this->tabPageSound->SuspendLayout();
			this->groupBoxNotif->SuspendLayout();
			this->groupBoxKeyword->SuspendLayout();
			this->groupBoxSeekSound->SuspendLayout();
			this->groupBoxName->SuspendLayout();
			this->groupBoxNoticeSound->SuspendLayout();
			this->groupBoxVSSound->SuspendLayout();
			this->groupBoxTalkSound->SuspendLayout();
			this->groupBoxEnterSound->SuspendLayout();
			this->tabPagePath->SuspendLayout();
			this->groupBoxLog->SuspendLayout();
			this->groupBoxSysTray->SuspendLayout();
			this->groupBoxProfile->SuspendLayout();
			this->groupBoxReplayFolder->SuspendLayout();
			this->groupBoxNet->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownMaxConnection))->BeginInit();
			this->groupBoxGameExe->SuspendLayout();
			this->groupBoxSave->SuspendLayout();
			this->tabControlOption->SuspendLayout();
			this->tabPageGame->SuspendLayout();
			this->groupBoxTeamOption->SuspendLayout();
			this->groupBoxSimulate->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownSimDelay))->BeginInit();
			this->groupBoxRun->SuspendLayout();
			this->groupBoxView->SuspendLayout();
			this->groupBoxSetting->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownRound))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownTimer))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownMaxStage))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownStageSelect))->BeginInit();
			this->tabPageColor->SuspendLayout();
			this->groupBoxAA->SuspendLayout();
			this->groupBoxCA->SuspendLayout();
			this->groupBoxNameColor->SuspendLayout();
			this->groupBoxOthersColor->SuspendLayout();
			this->groupBoxMessageColor->SuspendLayout();
			this->groupBoxStateColor->SuspendLayout();
			this->tabPageVolume->SuspendLayout();
			this->groupBoxMidi->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMidi))->BeginInit();
			this->groupBoxBGM->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarSE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarBGM))->BeginInit();
			this->tabPageIP->SuspendLayout();
			this->IPgroupBox->SuspendLayout();
			this->Base64groupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttonOK
			// 
			this->buttonOK->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonOK->Location = System::Drawing::Point(411, 407);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(80, 22);
			this->buttonOK->TabIndex = 13;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &OptionForm::buttonOK_Click);
			// 
			// buttonCancel
			// 
			this->buttonCancel->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonCancel->Location = System::Drawing::Point(497, 407);
			this->buttonCancel->Name = L"buttonCancel";
			this->buttonCancel->Size = System::Drawing::Size(80, 22);
			this->buttonCancel->TabIndex = 14;
			this->buttonCancel->Text = L"Cancel";
			this->buttonCancel->UseVisualStyleBackColor = true;
			this->buttonCancel->Click += gcnew System::EventHandler(this, &OptionForm::buttonCancel_Click);
			// 
			// folderBrowserDialog1
			// 
			this->folderBrowserDialog1->Description = L"Replay Folder";
			// 
			// colorDialog1
			// 
			this->colorDialog1->FullOpen = true;
			// 
			// tabPageSound
			// 
			this->tabPageSound->AutoScroll = true;
			this->tabPageSound->AutoScrollMinSize = System::Drawing::Size(0, 460);
			this->tabPageSound->Controls->Add(this->groupBoxNotif);
			this->tabPageSound->Location = System::Drawing::Point(4, 22);
			this->tabPageSound->Name = L"tabPageSound";
			this->tabPageSound->Padding = System::Windows::Forms::Padding(3);
			this->tabPageSound->Size = System::Drawing::Size(557, 363);
			this->tabPageSound->TabIndex = 3;
			this->tabPageSound->Text = L"Notifications";
			this->tabPageSound->UseVisualStyleBackColor = true;
			// 
			// groupBoxNotif
			// 
			this->groupBoxNotif->Controls->Add(this->groupBoxKeyword);
			this->groupBoxNotif->Controls->Add(this->groupBoxTalkSound);
			this->groupBoxNotif->Controls->Add(this->labelNotif);
			this->groupBoxNotif->Controls->Add(this->groupBoxEnterSound);
			this->groupBoxNotif->Controls->Add(this->checkBoxNameSound);
			this->groupBoxNotif->Location = System::Drawing::Point(6, 6);
			this->groupBoxNotif->Name = L"groupBoxNotif";
			this->groupBoxNotif->Size = System::Drawing::Size(528, 267);
			this->groupBoxNotif->TabIndex = 8;
			this->groupBoxNotif->TabStop = false;
			this->groupBoxNotif->Text = L"Notification Settings";
			// 
			// groupBoxKeyword
			// 
			this->groupBoxKeyword->Controls->Add(this->checkBoxKeywordSound);
			this->groupBoxKeyword->Controls->Add(this->textBoxKeyword);
			this->groupBoxKeyword->Controls->Add(this->labelKeywordSound);
			this->groupBoxKeyword->Controls->Add(this->groupBoxSeekSound);
			this->groupBoxKeyword->Controls->Add(this->groupBoxName);
			this->groupBoxKeyword->Controls->Add(this->groupBoxNoticeSound);
			this->groupBoxKeyword->Controls->Add(this->groupBoxVSSound);
			this->groupBoxKeyword->Location = System::Drawing::Point(9, 69);
			this->groupBoxKeyword->Name = L"groupBoxKeyword";
			this->groupBoxKeyword->Size = System::Drawing::Size(513, 73);
			this->groupBoxKeyword->TabIndex = 11;
			this->groupBoxKeyword->TabStop = false;
			this->groupBoxKeyword->Text = L"Notify on keyword(s)";
			// 
			// checkBoxKeywordSound
			// 
			this->checkBoxKeywordSound->AutoSize = true;
			this->checkBoxKeywordSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxKeywordSound->Location = System::Drawing::Point(342, 45);
			this->checkBoxKeywordSound->Name = L"checkBoxKeywordSound";
			this->checkBoxKeywordSound->Size = System::Drawing::Size(177, 18);
			this->checkBoxKeywordSound->TabIndex = 10;
			this->checkBoxKeywordSound->Text = L"Enable notification on keyword";
			this->checkBoxKeywordSound->UseVisualStyleBackColor = true;
			this->checkBoxKeywordSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::checkBoxKeywordSound_CheckedChanged);
			// 
			// textBoxKeyword
			// 
			this->textBoxKeyword->Location = System::Drawing::Point(6, 45);
			this->textBoxKeyword->Name = L"textBoxKeyword";
			this->textBoxKeyword->Size = System::Drawing::Size(330, 20);
			this->textBoxKeyword->TabIndex = 6;
			this->textBoxKeyword->TextChanged += gcnew System::EventHandler(this, &OptionForm::textBoxKeyword_TextChanged);
			// 
			// labelKeywordSound
			// 
			this->labelKeywordSound->AutoSize = true;
			this->labelKeywordSound->Location = System::Drawing::Point(6, 16);
			this->labelKeywordSound->Name = L"labelKeywordSound";
			this->labelKeywordSound->Size = System::Drawing::Size(446, 26);
			this->labelKeywordSound->TabIndex = 7;
			this->labelKeywordSound->Text = L"If enabled, will send a notification when a keyword is mentioned. Separate multip" 
				L"le words with\r\ncommas (,)";
			// 
			// groupBoxSeekSound
			// 
			this->groupBoxSeekSound->Controls->Add(this->buttonSeekSoundPlay);
			this->groupBoxSeekSound->Controls->Add(this->checkBoxSeekSound);
			this->groupBoxSeekSound->Controls->Add(this->buttonSeekSound);
			this->groupBoxSeekSound->Controls->Add(this->textBoxSeekSound);
			this->groupBoxSeekSound->Location = System::Drawing::Point(364, 58);
			this->groupBoxSeekSound->Name = L"groupBoxSeekSound";
			this->groupBoxSeekSound->Size = System::Drawing::Size(89, 56);
			this->groupBoxSeekSound->TabIndex = 6;
			this->groupBoxSeekSound->TabStop = false;
			this->groupBoxSeekSound->Text = L"Challenge Request";
			this->groupBoxSeekSound->Visible = false;
			// 
			// buttonSeekSoundPlay
			// 
			this->buttonSeekSoundPlay->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonSeekSoundPlay->Location = System::Drawing::Point(457, 21);
			this->buttonSeekSoundPlay->Name = L"buttonSeekSoundPlay";
			this->buttonSeekSoundPlay->Size = System::Drawing::Size(65, 22);
			this->buttonSeekSoundPlay->TabIndex = 3;
			this->buttonSeekSoundPlay->Text = L"Play";
			this->buttonSeekSoundPlay->UseVisualStyleBackColor = true;
			this->buttonSeekSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonSeekSoundPlay_Click);
			// 
			// checkBoxSeekSound
			// 
			this->checkBoxSeekSound->AutoSize = true;
			this->checkBoxSeekSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxSeekSound->Location = System::Drawing::Point(392, 23);
			this->checkBoxSeekSound->Name = L"checkBoxSeekSound";
			this->checkBoxSeekSound->Size = System::Drawing::Size(65, 18);
			this->checkBoxSeekSound->TabIndex = 2;
			this->checkBoxSeekSound->Text = L"Enable";
			this->checkBoxSeekSound->UseVisualStyleBackColor = true;
			this->checkBoxSeekSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonSeekSound
			// 
			this->buttonSeekSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonSeekSound->Location = System::Drawing::Point(321, 19);
			this->buttonSeekSound->Name = L"buttonSeekSound";
			this->buttonSeekSound->Size = System::Drawing::Size(65, 22);
			this->buttonSeekSound->TabIndex = 1;
			this->buttonSeekSound->Text = L"Browse...";
			this->buttonSeekSound->UseVisualStyleBackColor = true;
			this->buttonSeekSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonSeekSound_Click);
			// 
			// textBoxSeekSound
			// 
			this->textBoxSeekSound->AllowDrop = true;
			this->textBoxSeekSound->Location = System::Drawing::Point(10, 20);
			this->textBoxSeekSound->Name = L"textBoxSeekSound";
			this->textBoxSeekSound->Size = System::Drawing::Size(305, 20);
			this->textBoxSeekSound->TabIndex = 0;
			this->textBoxSeekSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxSeekSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSeekSound_DragDrop);
			this->textBoxSeekSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// groupBoxName
			// 
			this->groupBoxName->Controls->Add(this->buttonNameSoundPlay);
			this->groupBoxName->Controls->Add(this->buttonNameSound);
			this->groupBoxName->Controls->Add(this->textBoxNameSound);
			this->groupBoxName->Location = System::Drawing::Point(281, 61);
			this->groupBoxName->Name = L"groupBoxName";
			this->groupBoxName->Size = System::Drawing::Size(77, 53);
			this->groupBoxName->TabIndex = 4;
			this->groupBoxName->TabStop = false;
			this->groupBoxName->Text = L"Nickname Mentioned";
			this->groupBoxName->Visible = false;
			// 
			// buttonNameSoundPlay
			// 
			this->buttonNameSoundPlay->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonNameSoundPlay->Location = System::Drawing::Point(457, 20);
			this->buttonNameSoundPlay->Name = L"buttonNameSoundPlay";
			this->buttonNameSoundPlay->Size = System::Drawing::Size(65, 22);
			this->buttonNameSoundPlay->TabIndex = 5;
			this->buttonNameSoundPlay->Text = L"Play";
			this->buttonNameSoundPlay->UseVisualStyleBackColor = true;
			this->buttonNameSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonNameSoundPlay_Click);
			// 
			// buttonNameSound
			// 
			this->buttonNameSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonNameSound->Location = System::Drawing::Point(321, 20);
			this->buttonNameSound->Name = L"buttonNameSound";
			this->buttonNameSound->Size = System::Drawing::Size(65, 22);
			this->buttonNameSound->TabIndex = 3;
			this->buttonNameSound->Text = L"Browse...";
			this->buttonNameSound->UseVisualStyleBackColor = true;
			this->buttonNameSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonNameSound_Click);
			// 
			// textBoxNameSound
			// 
			this->textBoxNameSound->AllowDrop = true;
			this->textBoxNameSound->Location = System::Drawing::Point(11, 21);
			this->textBoxNameSound->Name = L"textBoxNameSound";
			this->textBoxNameSound->Size = System::Drawing::Size(304, 20);
			this->textBoxNameSound->TabIndex = 2;
			this->textBoxNameSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxNameSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxNameSound_DragDrop);
			this->textBoxNameSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// groupBoxNoticeSound
			// 
			this->groupBoxNoticeSound->Controls->Add(this->buttonNoticeSoundPlay);
			this->groupBoxNoticeSound->Controls->Add(this->checkBoxNoticeSound);
			this->groupBoxNoticeSound->Controls->Add(this->textBoxNoticeSound);
			this->groupBoxNoticeSound->Controls->Add(this->buttonNoticeSound);
			this->groupBoxNoticeSound->Location = System::Drawing::Point(198, 61);
			this->groupBoxNoticeSound->Name = L"groupBoxNoticeSound";
			this->groupBoxNoticeSound->Size = System::Drawing::Size(77, 56);
			this->groupBoxNoticeSound->TabIndex = 2;
			this->groupBoxNoticeSound->TabStop = false;
			this->groupBoxNoticeSound->Text = L"Announcement";
			this->groupBoxNoticeSound->Visible = false;
			// 
			// buttonNoticeSoundPlay
			// 
			this->buttonNoticeSoundPlay->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonNoticeSoundPlay->Location = System::Drawing::Point(457, 21);
			this->buttonNoticeSoundPlay->Name = L"buttonNoticeSoundPlay";
			this->buttonNoticeSoundPlay->Size = System::Drawing::Size(65, 22);
			this->buttonNoticeSoundPlay->TabIndex = 4;
			this->buttonNoticeSoundPlay->Text = L"Play";
			this->buttonNoticeSoundPlay->UseVisualStyleBackColor = true;
			this->buttonNoticeSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonNoticeSoundPlay_Click);
			// 
			// checkBoxNoticeSound
			// 
			this->checkBoxNoticeSound->AutoSize = true;
			this->checkBoxNoticeSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxNoticeSound->Location = System::Drawing::Point(392, 25);
			this->checkBoxNoticeSound->Name = L"checkBoxNoticeSound";
			this->checkBoxNoticeSound->Size = System::Drawing::Size(65, 18);
			this->checkBoxNoticeSound->TabIndex = 3;
			this->checkBoxNoticeSound->Text = L"Enable";
			this->checkBoxNoticeSound->UseVisualStyleBackColor = true;
			this->checkBoxNoticeSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// textBoxNoticeSound
			// 
			this->textBoxNoticeSound->AllowDrop = true;
			this->textBoxNoticeSound->Location = System::Drawing::Point(11, 22);
			this->textBoxNoticeSound->Name = L"textBoxNoticeSound";
			this->textBoxNoticeSound->Size = System::Drawing::Size(304, 20);
			this->textBoxNoticeSound->TabIndex = 1;
			this->textBoxNoticeSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxNoticeSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxNoticeSound_DragDrop);
			this->textBoxNoticeSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// buttonNoticeSound
			// 
			this->buttonNoticeSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonNoticeSound->Location = System::Drawing::Point(321, 21);
			this->buttonNoticeSound->Name = L"buttonNoticeSound";
			this->buttonNoticeSound->Size = System::Drawing::Size(65, 22);
			this->buttonNoticeSound->TabIndex = 2;
			this->buttonNoticeSound->Text = L"Browse...";
			this->buttonNoticeSound->UseVisualStyleBackColor = true;
			this->buttonNoticeSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonNoticeSound_Click);
			// 
			// groupBoxVSSound
			// 
			this->groupBoxVSSound->Controls->Add(this->buttonVSSoundPlay);
			this->groupBoxVSSound->Controls->Add(this->checkBoxVSSound);
			this->groupBoxVSSound->Controls->Add(this->textBoxVSSound);
			this->groupBoxVSSound->Controls->Add(this->buttonVSSound);
			this->groupBoxVSSound->Location = System::Drawing::Point(115, 63);
			this->groupBoxVSSound->Name = L"groupBoxVSSound";
			this->groupBoxVSSound->Size = System::Drawing::Size(77, 56);
			this->groupBoxVSSound->TabIndex = 1;
			this->groupBoxVSSound->TabStop = false;
			this->groupBoxVSSound->Text = L"Challenge Notification";
			this->groupBoxVSSound->Visible = false;
			// 
			// buttonVSSoundPlay
			// 
			this->buttonVSSoundPlay->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonVSSoundPlay->Location = System::Drawing::Point(457, 21);
			this->buttonVSSoundPlay->Name = L"buttonVSSoundPlay";
			this->buttonVSSoundPlay->Size = System::Drawing::Size(65, 22);
			this->buttonVSSoundPlay->TabIndex = 4;
			this->buttonVSSoundPlay->Text = L"Play";
			this->buttonVSSoundPlay->UseVisualStyleBackColor = true;
			this->buttonVSSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonVSSoundPlay_Click);
			// 
			// checkBoxVSSound
			// 
			this->checkBoxVSSound->AutoSize = true;
			this->checkBoxVSSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxVSSound->Location = System::Drawing::Point(392, 25);
			this->checkBoxVSSound->Name = L"checkBoxVSSound";
			this->checkBoxVSSound->Size = System::Drawing::Size(65, 18);
			this->checkBoxVSSound->TabIndex = 3;
			this->checkBoxVSSound->Text = L"Enable";
			this->checkBoxVSSound->UseVisualStyleBackColor = true;
			this->checkBoxVSSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// textBoxVSSound
			// 
			this->textBoxVSSound->AllowDrop = true;
			this->textBoxVSSound->Location = System::Drawing::Point(11, 22);
			this->textBoxVSSound->Name = L"textBoxVSSound";
			this->textBoxVSSound->Size = System::Drawing::Size(304, 20);
			this->textBoxVSSound->TabIndex = 1;
			this->textBoxVSSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxVSSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxVSSound_DragDrop);
			this->textBoxVSSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// buttonVSSound
			// 
			this->buttonVSSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonVSSound->Location = System::Drawing::Point(321, 21);
			this->buttonVSSound->Name = L"buttonVSSound";
			this->buttonVSSound->Size = System::Drawing::Size(65, 22);
			this->buttonVSSound->TabIndex = 2;
			this->buttonVSSound->Text = L"Browse...";
			this->buttonVSSound->UseVisualStyleBackColor = true;
			this->buttonVSSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonVSSound_Click);
			// 
			// groupBoxTalkSound
			// 
			this->groupBoxTalkSound->Controls->Add(this->buttonTalkSoundPlay);
			this->groupBoxTalkSound->Controls->Add(this->buttonTalkSound);
			this->groupBoxTalkSound->Controls->Add(this->textBoxTalkSound);
			this->groupBoxTalkSound->Controls->Add(this->checkBoxTalkSound);
			this->groupBoxTalkSound->Location = System::Drawing::Point(9, 209);
			this->groupBoxTalkSound->Name = L"groupBoxTalkSound";
			this->groupBoxTalkSound->Size = System::Drawing::Size(513, 51);
			this->groupBoxTalkSound->TabIndex = 5;
			this->groupBoxTalkSound->TabStop = false;
			this->groupBoxTalkSound->Text = L"Play sound on chat message";
			// 
			// buttonTalkSoundPlay
			// 
			this->buttonTalkSoundPlay->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonTalkSoundPlay->Location = System::Drawing::Point(442, 18);
			this->buttonTalkSoundPlay->Name = L"buttonTalkSoundPlay";
			this->buttonTalkSoundPlay->Size = System::Drawing::Size(65, 22);
			this->buttonTalkSoundPlay->TabIndex = 3;
			this->buttonTalkSoundPlay->Text = L"Play";
			this->buttonTalkSoundPlay->UseVisualStyleBackColor = true;
			this->buttonTalkSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonTalkSoundPlay_Click);
			// 
			// buttonTalkSound
			// 
			this->buttonTalkSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonTalkSound->Location = System::Drawing::Point(306, 18);
			this->buttonTalkSound->Name = L"buttonTalkSound";
			this->buttonTalkSound->Size = System::Drawing::Size(65, 22);
			this->buttonTalkSound->TabIndex = 1;
			this->buttonTalkSound->Text = L"Browse...";
			this->buttonTalkSound->UseVisualStyleBackColor = true;
			this->buttonTalkSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonTalkSound_Click);
			// 
			// textBoxTalkSound
			// 
			this->textBoxTalkSound->AllowDrop = true;
			this->textBoxTalkSound->Location = System::Drawing::Point(10, 20);
			this->textBoxTalkSound->Name = L"textBoxTalkSound";
			this->textBoxTalkSound->Size = System::Drawing::Size(290, 20);
			this->textBoxTalkSound->TabIndex = 0;
			this->textBoxTalkSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxTalkSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxTalkSound_DragDrop);
			this->textBoxTalkSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// checkBoxTalkSound
			// 
			this->checkBoxTalkSound->AutoSize = true;
			this->checkBoxTalkSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxTalkSound->Location = System::Drawing::Point(377, 20);
			this->checkBoxTalkSound->Name = L"checkBoxTalkSound";
			this->checkBoxTalkSound->Size = System::Drawing::Size(65, 18);
			this->checkBoxTalkSound->TabIndex = 2;
			this->checkBoxTalkSound->Text = L"Enable";
			this->checkBoxTalkSound->UseVisualStyleBackColor = true;
			this->checkBoxTalkSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// labelNotif
			// 
			this->labelNotif->AutoSize = true;
			this->labelNotif->Location = System::Drawing::Point(6, 16);
			this->labelNotif->Name = L"labelNotif";
			this->labelNotif->Size = System::Drawing::Size(463, 26);
			this->labelNotif->TabIndex = 5;
			this->labelNotif->Text = L"Below you can enable/disable real-time notifications. These will also flash the t" 
				L"askbar/window on\r\nnotification.";
			// 
			// groupBoxEnterSound
			// 
			this->groupBoxEnterSound->Controls->Add(this->buttonEnterSoundPlay);
			this->groupBoxEnterSound->Controls->Add(this->checkBoxEnterSound);
			this->groupBoxEnterSound->Controls->Add(this->textBoxEnterSound);
			this->groupBoxEnterSound->Controls->Add(this->buttonEnterSound);
			this->groupBoxEnterSound->Location = System::Drawing::Point(9, 147);
			this->groupBoxEnterSound->Name = L"groupBoxEnterSound";
			this->groupBoxEnterSound->Size = System::Drawing::Size(513, 56);
			this->groupBoxEnterSound->TabIndex = 3;
			this->groupBoxEnterSound->TabStop = false;
			this->groupBoxEnterSound->Text = L"Play sound on member join";
			// 
			// buttonEnterSoundPlay
			// 
			this->buttonEnterSoundPlay->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonEnterSoundPlay->Location = System::Drawing::Point(442, 20);
			this->buttonEnterSoundPlay->Name = L"buttonEnterSoundPlay";
			this->buttonEnterSoundPlay->Size = System::Drawing::Size(65, 22);
			this->buttonEnterSoundPlay->TabIndex = 4;
			this->buttonEnterSoundPlay->Text = L"Play";
			this->buttonEnterSoundPlay->UseVisualStyleBackColor = true;
			this->buttonEnterSoundPlay->Click += gcnew System::EventHandler(this, &OptionForm::buttonEnterSoundPlay_Click);
			// 
			// checkBoxEnterSound
			// 
			this->checkBoxEnterSound->AutoSize = true;
			this->checkBoxEnterSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxEnterSound->Location = System::Drawing::Point(377, 22);
			this->checkBoxEnterSound->Name = L"checkBoxEnterSound";
			this->checkBoxEnterSound->Size = System::Drawing::Size(65, 18);
			this->checkBoxEnterSound->TabIndex = 3;
			this->checkBoxEnterSound->Text = L"Enable";
			this->checkBoxEnterSound->UseVisualStyleBackColor = true;
			this->checkBoxEnterSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// textBoxEnterSound
			// 
			this->textBoxEnterSound->AllowDrop = true;
			this->textBoxEnterSound->Location = System::Drawing::Point(11, 22);
			this->textBoxEnterSound->Name = L"textBoxEnterSound";
			this->textBoxEnterSound->Size = System::Drawing::Size(289, 20);
			this->textBoxEnterSound->TabIndex = 1;
			this->textBoxEnterSound->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxEnterSound->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxEnterSound_DragDrop);
			this->textBoxEnterSound->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxSound_DragEnter);
			// 
			// buttonEnterSound
			// 
			this->buttonEnterSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonEnterSound->Location = System::Drawing::Point(306, 20);
			this->buttonEnterSound->Name = L"buttonEnterSound";
			this->buttonEnterSound->Size = System::Drawing::Size(65, 22);
			this->buttonEnterSound->TabIndex = 2;
			this->buttonEnterSound->Text = L"Browse...";
			this->buttonEnterSound->UseVisualStyleBackColor = true;
			this->buttonEnterSound->Click += gcnew System::EventHandler(this, &OptionForm::buttonEnterSound_Click);
			// 
			// checkBoxNameSound
			// 
			this->checkBoxNameSound->AutoSize = true;
			this->checkBoxNameSound->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxNameSound->Location = System::Drawing::Point(9, 45);
			this->checkBoxNameSound->Name = L"checkBoxNameSound";
			this->checkBoxNameSound->Size = System::Drawing::Size(223, 18);
			this->checkBoxNameSound->TabIndex = 4;
			this->checkBoxNameSound->Text = L"Enable notification on nickname mention";
			this->checkBoxNameSound->UseVisualStyleBackColor = true;
			this->checkBoxNameSound->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// tabPagePath
			// 
			this->tabPagePath->AutoScroll = true;
			this->tabPagePath->AutoScrollMinSize = System::Drawing::Size(0, 330);
			this->tabPagePath->Controls->Add(this->groupBoxLog);
			this->tabPagePath->Controls->Add(this->groupBoxSysTray);
			this->tabPagePath->Controls->Add(this->groupBoxProfile);
			this->tabPagePath->Controls->Add(this->groupBoxReplayFolder);
			this->tabPagePath->Controls->Add(this->groupBoxNet);
			this->tabPagePath->Controls->Add(this->groupBoxGameExe);
			this->tabPagePath->Location = System::Drawing::Point(4, 22);
			this->tabPagePath->Name = L"tabPagePath";
			this->tabPagePath->Padding = System::Windows::Forms::Padding(3);
			this->tabPagePath->Size = System::Drawing::Size(557, 363);
			this->tabPagePath->TabIndex = 0;
			this->tabPagePath->Text = L"General";
			this->tabPagePath->UseVisualStyleBackColor = true;
			// 
			// groupBoxLog
			// 
			this->groupBoxLog->Controls->Add(this->checkBoxLogClearWithoutWelcome);
			this->groupBoxLog->Controls->Add(this->radioButtonLogTXT);
			this->groupBoxLog->Controls->Add(this->radioButtonLogRTF);
			this->groupBoxLog->Location = System::Drawing::Point(176, 225);
			this->groupBoxLog->Name = L"groupBoxLog";
			this->groupBoxLog->Size = System::Drawing::Size(375, 51);
			this->groupBoxLog->TabIndex = 7;
			this->groupBoxLog->TabStop = false;
			this->groupBoxLog->Text = L"Logging Settings";
			// 
			// checkBoxLogClearWithoutWelcome
			// 
			this->checkBoxLogClearWithoutWelcome->AutoSize = true;
			this->checkBoxLogClearWithoutWelcome->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxLogClearWithoutWelcome->Location = System::Drawing::Point(251, 24);
			this->checkBoxLogClearWithoutWelcome->Name = L"checkBoxLogClearWithoutWelcome";
			this->checkBoxLogClearWithoutWelcome->Size = System::Drawing::Size(73, 18);
			this->checkBoxLogClearWithoutWelcome->TabIndex = 5;
			this->checkBoxLogClearWithoutWelcome->Text = L"Clear log";
			this->checkBoxLogClearWithoutWelcome->UseVisualStyleBackColor = true;
			// 
			// radioButtonLogTXT
			// 
			this->radioButtonLogTXT->AutoSize = true;
			this->radioButtonLogTXT->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->radioButtonLogTXT->Location = System::Drawing::Point(151, 24);
			this->radioButtonLogTXT->Name = L"radioButtonLogTXT";
			this->radioButtonLogTXT->Size = System::Drawing::Size(94, 18);
			this->radioButtonLogTXT->TabIndex = 1;
			this->radioButtonLogTXT->Text = L"Text File (.txt)";
			this->radioButtonLogTXT->UseVisualStyleBackColor = true;
			// 
			// radioButtonLogRTF
			// 
			this->radioButtonLogRTF->AutoSize = true;
			this->radioButtonLogRTF->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->radioButtonLogRTF->Location = System::Drawing::Point(6, 24);
			this->radioButtonLogRTF->Name = L"radioButtonLogRTF";
			this->radioButtonLogRTF->Size = System::Drawing::Size(133, 18);
			this->radioButtonLogRTF->TabIndex = 0;
			this->radioButtonLogRTF->Text = L"Rich Text Format (.rtf)";
			this->radioButtonLogRTF->UseVisualStyleBackColor = true;
			// 
			// groupBoxSysTray
			// 
			this->groupBoxSysTray->Controls->Add(this->checkBoxSysTray);
			this->groupBoxSysTray->Location = System::Drawing::Point(8, 225);
			this->groupBoxSysTray->Name = L"groupBoxSysTray";
			this->groupBoxSysTray->Size = System::Drawing::Size(162, 51);
			this->groupBoxSysTray->TabIndex = 6;
			this->groupBoxSysTray->TabStop = false;
			this->groupBoxSysTray->Text = L"System Tray Settings";
			// 
			// checkBoxSysTray
			// 
			this->checkBoxSysTray->AutoSize = true;
			this->checkBoxSysTray->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxSysTray->Location = System::Drawing::Point(6, 24);
			this->checkBoxSysTray->Name = L"checkBoxSysTray";
			this->checkBoxSysTray->Size = System::Drawing::Size(139, 18);
			this->checkBoxSysTray->TabIndex = 5;
			this->checkBoxSysTray->Text = L"Minimise to system tray";
			this->checkBoxSysTray->UseVisualStyleBackColor = true;
			this->checkBoxSysTray->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::checkBoxSysTray_CheckedChanged);
			// 
			// groupBoxProfile
			// 
			this->groupBoxProfile->Controls->Add(this->buttonSaveProfile);
			this->groupBoxProfile->Controls->Add(this->buttonAddProfile);
			this->groupBoxProfile->Controls->Add(this->labelProfileName);
			this->groupBoxProfile->Controls->Add(this->buttonDeleteProfile);
			this->groupBoxProfile->Controls->Add(this->textBoxProfileName);
			this->groupBoxProfile->Controls->Add(this->buttonCopyProfile);
			this->groupBoxProfile->Controls->Add(this->comboBoxProfile);
			this->groupBoxProfile->ForeColor = System::Drawing::SystemColors::ControlText;
			this->groupBoxProfile->Location = System::Drawing::Point(6, 6);
			this->groupBoxProfile->Name = L"groupBoxProfile";
			this->groupBoxProfile->Size = System::Drawing::Size(545, 92);
			this->groupBoxProfile->TabIndex = 4;
			this->groupBoxProfile->TabStop = false;
			this->groupBoxProfile->Text = L"Profile";
			// 
			// buttonSaveProfile
			// 
			this->buttonSaveProfile->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonSaveProfile->Location = System::Drawing::Point(467, 53);
			this->buttonSaveProfile->Name = L"buttonSaveProfile";
			this->buttonSaveProfile->Size = System::Drawing::Size(55, 24);
			this->buttonSaveProfile->TabIndex = 5;
			this->buttonSaveProfile->Text = L"Save";
			this->buttonSaveProfile->UseVisualStyleBackColor = true;
			this->buttonSaveProfile->Click += gcnew System::EventHandler(this, &OptionForm::buttonSaveProfile_Click);
			// 
			// buttonAddProfile
			// 
			this->buttonAddProfile->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonAddProfile->Location = System::Drawing::Point(406, 53);
			this->buttonAddProfile->Name = L"buttonAddProfile";
			this->buttonAddProfile->Size = System::Drawing::Size(55, 24);
			this->buttonAddProfile->TabIndex = 4;
			this->buttonAddProfile->Text = L"Add";
			this->buttonAddProfile->UseVisualStyleBackColor = true;
			this->buttonAddProfile->Click += gcnew System::EventHandler(this, &OptionForm::buttonAddProfile_Click);
			// 
			// labelProfileName
			// 
			this->labelProfileName->AutoSize = true;
			this->labelProfileName->Location = System::Drawing::Point(10, 59);
			this->labelProfileName->Name = L"labelProfileName";
			this->labelProfileName->Size = System::Drawing::Size(38, 13);
			this->labelProfileName->TabIndex = 5;
			this->labelProfileName->Text = L"Name:";
			// 
			// buttonDeleteProfile
			// 
			this->buttonDeleteProfile->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonDeleteProfile->Location = System::Drawing::Point(467, 20);
			this->buttonDeleteProfile->Name = L"buttonDeleteProfile";
			this->buttonDeleteProfile->Size = System::Drawing::Size(55, 24);
			this->buttonDeleteProfile->TabIndex = 3;
			this->buttonDeleteProfile->Text = L"Delete";
			this->buttonDeleteProfile->UseVisualStyleBackColor = true;
			this->buttonDeleteProfile->Click += gcnew System::EventHandler(this, &OptionForm::buttonDeleteProfile_Click);
			// 
			// textBoxProfileName
			// 
			this->textBoxProfileName->Location = System::Drawing::Point(54, 55);
			this->textBoxProfileName->MaxLength = 63;
			this->textBoxProfileName->Name = L"textBoxProfileName";
			this->textBoxProfileName->Size = System::Drawing::Size(346, 20);
			this->textBoxProfileName->TabIndex = 1;
			this->textBoxProfileName->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// buttonCopyProfile
			// 
			this->buttonCopyProfile->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonCopyProfile->Location = System::Drawing::Point(406, 20);
			this->buttonCopyProfile->Name = L"buttonCopyProfile";
			this->buttonCopyProfile->Size = System::Drawing::Size(55, 24);
			this->buttonCopyProfile->TabIndex = 2;
			this->buttonCopyProfile->Text = L"Copy";
			this->buttonCopyProfile->UseVisualStyleBackColor = true;
			this->buttonCopyProfile->Click += gcnew System::EventHandler(this, &OptionForm::buttonCopyProfile_Click);
			// 
			// comboBoxProfile
			// 
			this->comboBoxProfile->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBoxProfile->FormattingEnabled = true;
			this->comboBoxProfile->ItemHeight = 13;
			this->comboBoxProfile->Location = System::Drawing::Point(12, 22);
			this->comboBoxProfile->MaxDropDownItems = 64;
			this->comboBoxProfile->Name = L"comboBoxProfile";
			this->comboBoxProfile->Size = System::Drawing::Size(388, 21);
			this->comboBoxProfile->TabIndex = 0;
			this->comboBoxProfile->SelectedIndexChanged += gcnew System::EventHandler(this, &OptionForm::comboBoxProfile_SelectedIndexChanged);
			// 
			// groupBoxReplayFolder
			// 
			this->groupBoxReplayFolder->Controls->Add(this->textBoxReplayFolder);
			this->groupBoxReplayFolder->Controls->Add(this->buttonReplayFolder);
			this->groupBoxReplayFolder->Controls->Add(this->checkBoxDivide);
			this->groupBoxReplayFolder->Location = System::Drawing::Point(8, 167);
			this->groupBoxReplayFolder->Name = L"groupBoxReplayFolder";
			this->groupBoxReplayFolder->Size = System::Drawing::Size(543, 52);
			this->groupBoxReplayFolder->TabIndex = 2;
			this->groupBoxReplayFolder->TabStop = false;
			this->groupBoxReplayFolder->Text = L"Replay Folder";
			// 
			// textBoxReplayFolder
			// 
			this->textBoxReplayFolder->AllowDrop = true;
			this->textBoxReplayFolder->Location = System::Drawing::Point(12, 22);
			this->textBoxReplayFolder->Name = L"textBoxReplayFolder";
			this->textBoxReplayFolder->Size = System::Drawing::Size(278, 20);
			this->textBoxReplayFolder->TabIndex = 8;
			this->textBoxReplayFolder->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxReplayFolder->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxReplayFolder_DragDrop);
			this->textBoxReplayFolder->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxReplayFolder_DragEnter);
			// 
			// buttonReplayFolder
			// 
			this->buttonReplayFolder->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonReplayFolder->Location = System::Drawing::Point(296, 21);
			this->buttonReplayFolder->Name = L"buttonReplayFolder";
			this->buttonReplayFolder->Size = System::Drawing::Size(65, 22);
			this->buttonReplayFolder->TabIndex = 9;
			this->buttonReplayFolder->Text = L"Browse...";
			this->buttonReplayFolder->UseVisualStyleBackColor = true;
			this->buttonReplayFolder->Click += gcnew System::EventHandler(this, &OptionForm::buttonReplayFolder_Click);
			// 
			// checkBoxDivide
			// 
			this->checkBoxDivide->AutoSize = true;
			this->checkBoxDivide->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxDivide->Location = System::Drawing::Point(367, 24);
			this->checkBoxDivide->Name = L"checkBoxDivide";
			this->checkBoxDivide->Size = System::Drawing::Size(176, 18);
			this->checkBoxDivide->TabIndex = 10;
			this->checkBoxDivide->Text = L"Name replay files automatically";
			this->checkBoxDivide->UseVisualStyleBackColor = true;
			this->checkBoxDivide->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// groupBoxNet
			// 
			this->groupBoxNet->Controls->Add(this->checkBoxShowGameOption);
			this->groupBoxNet->Controls->Add(this->checkBoxGetIP);
			this->groupBoxNet->Controls->Add(this->numericUpDownMaxConnection);
			this->groupBoxNet->Controls->Add(this->label5);
			this->groupBoxNet->Location = System::Drawing::Point(8, 282);
			this->groupBoxNet->Name = L"groupBoxNet";
			this->groupBoxNet->Size = System::Drawing::Size(543, 51);
			this->groupBoxNet->TabIndex = 3;
			this->groupBoxNet->TabStop = false;
			this->groupBoxNet->Text = L"Networking";
			// 
			// checkBoxShowGameOption
			// 
			this->checkBoxShowGameOption->AutoSize = true;
			this->checkBoxShowGameOption->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxShowGameOption->Location = System::Drawing::Point(344, 24);
			this->checkBoxShowGameOption->Name = L"checkBoxShowGameOption";
			this->checkBoxShowGameOption->Size = System::Drawing::Size(188, 18);
			this->checkBoxShowGameOption->TabIndex = 13;
			this->checkBoxShowGameOption->Text = L"Show fight settings on game start";
			this->checkBoxShowGameOption->UseVisualStyleBackColor = true;
			// 
			// checkBoxGetIP
			// 
			this->checkBoxGetIP->AutoSize = true;
			this->checkBoxGetIP->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxGetIP->Location = System::Drawing::Point(152, 24);
			this->checkBoxGetIP->Name = L"checkBoxGetIP";
			this->checkBoxGetIP->Size = System::Drawing::Size(191, 18);
			this->checkBoxGetIP->TabIndex = 12;
			this->checkBoxGetIP->Text = L"Get IP address when server starts";
			this->checkBoxGetIP->UseVisualStyleBackColor = true;
			// 
			// numericUpDownMaxConnection
			// 
			this->numericUpDownMaxConnection->Location = System::Drawing::Point(106, 24);
			this->numericUpDownMaxConnection->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownMaxConnection->Name = L"numericUpDownMaxConnection";
			this->numericUpDownMaxConnection->Size = System::Drawing::Size(40, 20);
			this->numericUpDownMaxConnection->TabIndex = 11;
			this->numericUpDownMaxConnection->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownMaxConnection->ValueChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 26);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Max. connections:";
			// 
			// groupBoxGameExe
			// 
			this->groupBoxGameExe->Controls->Add(this->textBoxGameExe);
			this->groupBoxGameExe->Controls->Add(this->buttonGameExe);
			this->groupBoxGameExe->Location = System::Drawing::Point(6, 104);
			this->groupBoxGameExe->Name = L"groupBoxGameExe";
			this->groupBoxGameExe->Size = System::Drawing::Size(545, 57);
			this->groupBoxGameExe->TabIndex = 1;
			this->groupBoxGameExe->TabStop = false;
			this->groupBoxGameExe->Text = L"Game Executable Path";
			// 
			// textBoxGameExe
			// 
			this->textBoxGameExe->AllowDrop = true;
			this->textBoxGameExe->Location = System::Drawing::Point(12, 21);
			this->textBoxGameExe->Name = L"textBoxGameExe";
			this->textBoxGameExe->Size = System::Drawing::Size(456, 20);
			this->textBoxGameExe->TabIndex = 6;
			this->textBoxGameExe->TextChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->textBoxGameExe->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxGameExe_DragDrop);
			this->textBoxGameExe->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &OptionForm::textBoxGameExe_DragEnter);
			// 
			// buttonGameExe
			// 
			this->buttonGameExe->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonGameExe->Location = System::Drawing::Point(474, 20);
			this->buttonGameExe->Name = L"buttonGameExe";
			this->buttonGameExe->Size = System::Drawing::Size(65, 22);
			this->buttonGameExe->TabIndex = 7;
			this->buttonGameExe->Text = L"Browse...";
			this->buttonGameExe->UseVisualStyleBackColor = true;
			this->buttonGameExe->Click += gcnew System::EventHandler(this, &OptionForm::buttonGameExe_Click);
			// 
			// groupBoxSave
			// 
			this->groupBoxSave->Controls->Add(this->radioButtonReplayVersion1);
			this->groupBoxSave->Controls->Add(this->radioButtonReplayVersion2);
			this->groupBoxSave->Location = System::Drawing::Point(8, 259);
			this->groupBoxSave->Name = L"groupBoxSave";
			this->groupBoxSave->Size = System::Drawing::Size(130, 46);
			this->groupBoxSave->TabIndex = 4;
			this->groupBoxSave->TabStop = false;
			this->groupBoxSave->Text = L"Replay Compression";
			this->toolTip1->SetToolTip(this->groupBoxSave, L"Replay compression compresses your replay files so they take up less disk space.");
			// 
			// radioButtonReplayVersion1
			// 
			this->radioButtonReplayVersion1->AutoSize = true;
			this->radioButtonReplayVersion1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->radioButtonReplayVersion1->Location = System::Drawing::Point(61, 18);
			this->radioButtonReplayVersion1->Name = L"radioButtonReplayVersion1";
			this->radioButtonReplayVersion1->Size = System::Drawing::Size(45, 18);
			this->radioButtonReplayVersion1->TabIndex = 2;
			this->radioButtonReplayVersion1->TabStop = true;
			this->radioButtonReplayVersion1->Text = L"Off";
			this->radioButtonReplayVersion1->UseVisualStyleBackColor = true;
			this->radioButtonReplayVersion1->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// radioButtonReplayVersion2
			// 
			this->radioButtonReplayVersion2->AutoSize = true;
			this->radioButtonReplayVersion2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->radioButtonReplayVersion2->Location = System::Drawing::Point(16, 18);
			this->radioButtonReplayVersion2->Name = L"radioButtonReplayVersion2";
			this->radioButtonReplayVersion2->Size = System::Drawing::Size(45, 18);
			this->radioButtonReplayVersion2->TabIndex = 1;
			this->radioButtonReplayVersion2->TabStop = true;
			this->radioButtonReplayVersion2->Text = L"On";
			this->radioButtonReplayVersion2->UseVisualStyleBackColor = true;
			this->radioButtonReplayVersion2->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// tabControlOption
			// 
			this->tabControlOption->Controls->Add(this->tabPagePath);
			this->tabControlOption->Controls->Add(this->tabPageSound);
			this->tabControlOption->Controls->Add(this->tabPageGame);
			this->tabControlOption->Controls->Add(this->tabPageColor);
			this->tabControlOption->Controls->Add(this->tabPageVolume);
			this->tabControlOption->Controls->Add(this->tabPageIP);
			this->tabControlOption->Location = System::Drawing::Point(12, 12);
			this->tabControlOption->Name = L"tabControlOption";
			this->tabControlOption->SelectedIndex = 0;
			this->tabControlOption->Size = System::Drawing::Size(565, 389);
			this->tabControlOption->TabIndex = 0;
			// 
			// tabPageGame
			// 
			this->tabPageGame->AutoScroll = true;
			this->tabPageGame->Controls->Add(this->groupBoxTeamOption);
			this->tabPageGame->Controls->Add(this->groupBoxSave);
			this->tabPageGame->Controls->Add(this->groupBoxSimulate);
			this->tabPageGame->Controls->Add(this->groupBoxRun);
			this->tabPageGame->Controls->Add(this->groupBoxView);
			this->tabPageGame->Controls->Add(this->groupBoxSetting);
			this->tabPageGame->Location = System::Drawing::Point(4, 22);
			this->tabPageGame->Name = L"tabPageGame";
			this->tabPageGame->Padding = System::Windows::Forms::Padding(3);
			this->tabPageGame->Size = System::Drawing::Size(557, 363);
			this->tabPageGame->TabIndex = 4;
			this->tabPageGame->Text = L"Game";
			this->tabPageGame->UseVisualStyleBackColor = true;
			// 
			// groupBoxTeamOption
			// 
			this->groupBoxTeamOption->Controls->Add(this->labelTeamRoundHP);
			this->groupBoxTeamOption->Controls->Add(this->checkBoxTeamRoundHP);
			this->groupBoxTeamOption->Location = System::Drawing::Point(8, 191);
			this->groupBoxTeamOption->Name = L"groupBoxTeamOption";
			this->groupBoxTeamOption->Size = System::Drawing::Size(543, 62);
			this->groupBoxTeamOption->TabIndex = 6;
			this->groupBoxTeamOption->TabStop = false;
			this->groupBoxTeamOption->Text = L"Team Play Settings";
			// 
			// labelTeamRoundHP
			// 
			this->labelTeamRoundHP->AutoSize = true;
			this->labelTeamRoundHP->Location = System::Drawing::Point(4, 42);
			this->labelTeamRoundHP->Name = L"labelTeamRoundHP";
			this->labelTeamRoundHP->Size = System::Drawing::Size(166, 13);
			this->labelTeamRoundHP->TabIndex = 1;
			this->labelTeamRoundHP->Text = L"* You need to turn off 1v1 versus!";
			// 
			// checkBoxTeamRoundHP
			// 
			this->checkBoxTeamRoundHP->AutoSize = true;
			this->checkBoxTeamRoundHP->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxTeamRoundHP->Location = System::Drawing::Point(6, 19);
			this->checkBoxTeamRoundHP->Name = L"checkBoxTeamRoundHP";
			this->checkBoxTeamRoundHP->Size = System::Drawing::Size(191, 18);
			this->checkBoxTeamRoundHP->TabIndex = 0;
			this->checkBoxTeamRoundHP->Text = L"Carry over health between rounds";
			this->checkBoxTeamRoundHP->UseVisualStyleBackColor = true;
			this->checkBoxTeamRoundHP->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// groupBoxSimulate
			// 
			this->groupBoxSimulate->Controls->Add(this->numericUpDownSimDelay);
			this->groupBoxSimulate->Controls->Add(this->labelSimDelay);
			this->groupBoxSimulate->Location = System::Drawing::Point(144, 257);
			this->groupBoxSimulate->Name = L"groupBoxSimulate";
			this->groupBoxSimulate->Size = System::Drawing::Size(407, 48);
			this->groupBoxSimulate->TabIndex = 5;
			this->groupBoxSimulate->TabStop = false;
			this->groupBoxSimulate->Text = L"Delay Simulation (Single Player)";
			// 
			// numericUpDownSimDelay
			// 
			this->numericUpDownSimDelay->Location = System::Drawing::Point(59, 20);
			this->numericUpDownSimDelay->Name = L"numericUpDownSimDelay";
			this->numericUpDownSimDelay->Size = System::Drawing::Size(40, 20);
			this->numericUpDownSimDelay->TabIndex = 1;
			this->toolTip1->SetToolTip(this->numericUpDownSimDelay, L"This option allows you to create a simulated delay as if you\'re online while you\'" 
				L"re in a single player game.");
			this->numericUpDownSimDelay->ValueChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// labelSimDelay
			// 
			this->labelSimDelay->AutoSize = true;
			this->labelSimDelay->Location = System::Drawing::Point(16, 22);
			this->labelSimDelay->Name = L"labelSimDelay";
			this->labelSimDelay->Size = System::Drawing::Size(37, 13);
			this->labelSimDelay->TabIndex = 0;
			this->labelSimDelay->Text = L"Delay:";
			this->toolTip1->SetToolTip(this->labelSimDelay, L"This option allows you to create a simulated delay as if you\'re online while you\'" 
				L"re in a single player game.");
			// 
			// groupBoxRun
			// 
			this->groupBoxRun->Controls->Add(this->checkBoxWindowSize);
			this->groupBoxRun->Controls->Add(this->checkBoxHitJudge);
			this->groupBoxRun->Location = System::Drawing::Point(8, 138);
			this->groupBoxRun->Name = L"groupBoxRun";
			this->groupBoxRun->Size = System::Drawing::Size(543, 47);
			this->groupBoxRun->TabIndex = 3;
			this->groupBoxRun->TabStop = false;
			this->groupBoxRun->Text = L"Debugging Settings";
			// 
			// checkBoxWindowSize
			// 
			this->checkBoxWindowSize->AutoSize = true;
			this->checkBoxWindowSize->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxWindowSize->Location = System::Drawing::Point(104, 19);
			this->checkBoxWindowSize->Name = L"checkBoxWindowSize";
			this->checkBoxWindowSize->Size = System::Drawing::Size(148, 18);
			this->checkBoxWindowSize->TabIndex = 2;
			this->checkBoxWindowSize->Text = L"Start in 640 x 480 (480p)";
			this->toolTip1->SetToolTip(this->checkBoxWindowSize, L"This option will start the game in 480p regardless of your external settings.");
			this->checkBoxWindowSize->UseVisualStyleBackColor = true;
			this->checkBoxWindowSize->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxHitJudge
			// 
			this->checkBoxHitJudge->AutoSize = true;
			this->checkBoxHitJudge->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxHitJudge->Location = System::Drawing::Point(6, 19);
			this->checkBoxHitJudge->Name = L"checkBoxHitJudge";
			this->checkBoxHitJudge->Size = System::Drawing::Size(98, 18);
			this->checkBoxHitJudge->TabIndex = 1;
			this->checkBoxHitJudge->Text = L"Enable debug";
			this->toolTip1->SetToolTip(this->checkBoxHitJudge, L"This option will enable visible hitboxes and script line being used, perfect for " 
				L"debugging.");
			this->checkBoxHitJudge->UseVisualStyleBackColor = true;
			this->checkBoxHitJudge->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// groupBoxView
			// 
			this->groupBoxView->Controls->Add(this->checkBoxShowResult);
			this->groupBoxView->Controls->Add(this->checkBoxVersus);
			this->groupBoxView->Controls->Add(this->checkBoxName);
			this->groupBoxView->Controls->Add(this->checkBoxFramerate);
			this->groupBoxView->Controls->Add(this->checkBoxRand);
			this->groupBoxView->Location = System::Drawing::Point(8, 67);
			this->groupBoxView->Name = L"groupBoxView";
			this->groupBoxView->Size = System::Drawing::Size(543, 65);
			this->groupBoxView->TabIndex = 4;
			this->groupBoxView->TabStop = false;
			this->groupBoxView->Text = L"Title Bar Settings";
			// 
			// checkBoxShowResult
			// 
			this->checkBoxShowResult->AutoSize = true;
			this->checkBoxShowResult->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxShowResult->Location = System::Drawing::Point(254, 22);
			this->checkBoxShowResult->Name = L"checkBoxShowResult";
			this->checkBoxShowResult->Size = System::Drawing::Size(132, 18);
			this->checkBoxShowResult->TabIndex = 3;
			this->checkBoxShowResult->Text = L"Enable fight outcome";
			this->toolTip1->SetToolTip(this->checkBoxShowResult, L"This option will enable fight outcomes (eg. 1 - 0) on the title bar during a figh" 
				L"t.");
			this->checkBoxShowResult->UseVisualStyleBackColor = true;
			this->checkBoxShowResult->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxVersus
			// 
			this->checkBoxVersus->AutoSize = true;
			this->checkBoxVersus->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxVersus->Location = System::Drawing::Point(136, 22);
			this->checkBoxVersus->Name = L"checkBoxVersus";
			this->checkBoxVersus->Size = System::Drawing::Size(118, 18);
			this->checkBoxVersus->TabIndex = 2;
			this->checkBoxVersus->Text = L"Enable fight count";
			this->toolTip1->SetToolTip(this->checkBoxVersus, L"This option will enable fight count on the title bar during a fight.");
			this->checkBoxVersus->UseVisualStyleBackColor = true;
			this->checkBoxVersus->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxName
			// 
			this->checkBoxName->AutoSize = true;
			this->checkBoxName->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxName->Location = System::Drawing::Point(6, 22);
			this->checkBoxName->Name = L"checkBoxName";
			this->checkBoxName->Size = System::Drawing::Size(130, 18);
			this->checkBoxName->TabIndex = 1;
			this->checkBoxName->Text = L"Enable player names";
			this->toolTip1->SetToolTip(this->checkBoxName, L"This option will enable usernames on the title bar during a fight.");
			this->checkBoxName->UseVisualStyleBackColor = true;
			this->checkBoxName->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxFramerate
			// 
			this->checkBoxFramerate->AutoSize = true;
			this->checkBoxFramerate->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxFramerate->Location = System::Drawing::Point(386, 22);
			this->checkBoxFramerate->Name = L"checkBoxFramerate";
			this->checkBoxFramerate->Size = System::Drawing::Size(141, 18);
			this->checkBoxFramerate->TabIndex = 4;
			this->checkBoxFramerate->Text = L"Enable framerate (FPS)";
			this->toolTip1->SetToolTip(this->checkBoxFramerate, L"This option will enable FPS on the title bar during a fight.");
			this->checkBoxFramerate->UseVisualStyleBackColor = true;
			this->checkBoxFramerate->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// checkBoxRand
			// 
			this->checkBoxRand->AutoSize = true;
			this->checkBoxRand->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->checkBoxRand->Location = System::Drawing::Point(6, 45);
			this->checkBoxRand->Name = L"checkBoxRand";
			this->checkBoxRand->Size = System::Drawing::Size(141, 18);
			this->checkBoxRand->TabIndex = 5;
			this->checkBoxRand->Text = L"Enable random number";
			this->toolTip1->SetToolTip(this->checkBoxRand, L"This option will display a random number on the title bar during a fight.");
			this->checkBoxRand->UseVisualStyleBackColor = true;
			this->checkBoxRand->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// groupBoxSetting
			// 
			this->groupBoxSetting->Controls->Add(this->numericUpDownRound);
			this->groupBoxSetting->Controls->Add(this->labelRound);
			this->groupBoxSetting->Controls->Add(this->labelTimer);
			this->groupBoxSetting->Controls->Add(this->numericUpDownTimer);
			this->groupBoxSetting->Controls->Add(this->numericUpDownMaxStage);
			this->groupBoxSetting->Controls->Add(this->labelMaxStage);
			this->groupBoxSetting->Controls->Add(this->labelStageSelect);
			this->groupBoxSetting->Controls->Add(this->numericUpDownStageSelect);
			this->groupBoxSetting->Location = System::Drawing::Point(8, 9);
			this->groupBoxSetting->Name = L"groupBoxSetting";
			this->groupBoxSetting->Size = System::Drawing::Size(543, 52);
			this->groupBoxSetting->TabIndex = 1;
			this->groupBoxSetting->TabStop = false;
			this->groupBoxSetting->Text = L"Fighter Maker Settings";
			// 
			// numericUpDownRound
			// 
			this->numericUpDownRound->Location = System::Drawing::Point(303, 20);
			this->numericUpDownRound->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {9, 0, 0, 0});
			this->numericUpDownRound->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownRound->Name = L"numericUpDownRound";
			this->numericUpDownRound->Size = System::Drawing::Size(40, 20);
			this->numericUpDownRound->TabIndex = 3;
			this->toolTip1->SetToolTip(this->numericUpDownRound, L"Number of rounds a fight will have.");
			this->numericUpDownRound->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownRound->ValueChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// labelRound
			// 
			this->labelRound->AutoSize = true;
			this->labelRound->Location = System::Drawing::Point(250, 22);
			this->labelRound->Name = L"labelRound";
			this->labelRound->Size = System::Drawing::Size(47, 13);
			this->labelRound->TabIndex = 0;
			this->labelRound->Text = L"Rounds:";
			this->toolTip1->SetToolTip(this->labelRound, L"Number of rounds a fight will have.");
			// 
			// labelTimer
			// 
			this->labelTimer->AutoSize = true;
			this->labelTimer->Location = System::Drawing::Point(349, 22);
			this->labelTimer->Name = L"labelTimer";
			this->labelTimer->Size = System::Drawing::Size(36, 13);
			this->labelTimer->TabIndex = 0;
			this->labelTimer->Text = L"Timer:";
			// 
			// numericUpDownTimer
			// 
			this->numericUpDownTimer->Location = System::Drawing::Point(391, 20);
			this->numericUpDownTimer->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) {99, 0, 0, 0});
			this->numericUpDownTimer->Name = L"numericUpDownTimer";
			this->numericUpDownTimer->Size = System::Drawing::Size(40, 20);
			this->numericUpDownTimer->TabIndex = 4;
			this->toolTip1->SetToolTip(this->numericUpDownTimer, L"How long a fight will take place for.");
			this->numericUpDownTimer->ValueChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			// 
			// numericUpDownMaxStage
			// 
			this->numericUpDownMaxStage->Location = System::Drawing::Point(73, 20);
			this->numericUpDownMaxStage->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownMaxStage->Name = L"numericUpDownMaxStage";
			this->numericUpDownMaxStage->Size = System::Drawing::Size(40, 20);
			this->numericUpDownMaxStage->TabIndex = 1;
			this->toolTip1->SetToolTip(this->numericUpDownMaxStage, L"This option allows you to set the maximum stages\r\nthe selected game has, or choos" 
				L"e a start stage.");
			this->numericUpDownMaxStage->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {1, 0, 0, 0});
			this->numericUpDownMaxStage->ValueChanged += gcnew System::EventHandler(this, &OptionForm::numericUpDownStage_ValueChanged);
			// 
			// labelMaxStage
			// 
			this->labelMaxStage->AutoSize = true;
			this->labelMaxStage->Location = System::Drawing::Point(6, 22);
			this->labelMaxStage->Name = L"labelMaxStage";
			this->labelMaxStage->Size = System::Drawing::Size(61, 13);
			this->labelMaxStage->TabIndex = 0;
			this->labelMaxStage->Text = L"Start stage:";
			this->toolTip1->SetToolTip(this->labelMaxStage, L"This option allows you to set the maximum stages\r\nthe selected game has, or choos" 
				L"e a start stage.");
			// 
			// labelStageSelect
			// 
			this->labelStageSelect->AutoSize = true;
			this->labelStageSelect->Location = System::Drawing::Point(119, 22);
			this->labelStageSelect->Name = L"labelStageSelect";
			this->labelStageSelect->Size = System::Drawing::Size(79, 13);
			this->labelStageSelect->TabIndex = 0;
			this->labelStageSelect->Text = L"Random stage:";
			this->toolTip1->SetToolTip(this->labelStageSelect, L"This option allows you to choose a specific stage,\r\nrandomise out of the maximum " 
				L"stages you\'ve specified,\r\nor choose an end stage.");
			// 
			// numericUpDownStageSelect
			// 
			this->numericUpDownStageSelect->Location = System::Drawing::Point(204, 20);
			this->numericUpDownStageSelect->Name = L"numericUpDownStageSelect";
			this->numericUpDownStageSelect->Size = System::Drawing::Size(40, 20);
			this->numericUpDownStageSelect->TabIndex = 2;
			this->toolTip1->SetToolTip(this->numericUpDownStageSelect, L"This option allows you to choose a specific stage,\r\nrandomise out of the maximum " 
				L"stages you\'ve specified,\r\nor choose an end stage.");
			this->numericUpDownStageSelect->ValueChanged += gcnew System::EventHandler(this, &OptionForm::numericUpDownStage_ValueChanged);
			// 
			// tabPageColor
			// 
			this->tabPageColor->Controls->Add(this->groupBoxAA);
			this->tabPageColor->Controls->Add(this->groupBoxCA);
			this->tabPageColor->Location = System::Drawing::Point(4, 22);
			this->tabPageColor->Name = L"tabPageColor";
			this->tabPageColor->Padding = System::Windows::Forms::Padding(3);
			this->tabPageColor->Size = System::Drawing::Size(557, 363);
			this->tabPageColor->TabIndex = 5;
			this->tabPageColor->Text = L"Appearance";
			this->tabPageColor->UseVisualStyleBackColor = true;
			// 
			// groupBoxAA
			// 
			this->groupBoxAA->Controls->Add(this->checkBoxDarkMode);
			this->groupBoxAA->Location = System::Drawing::Point(6, 6);
			this->groupBoxAA->Name = L"groupBoxAA";
			this->groupBoxAA->Size = System::Drawing::Size(545, 52);
			this->groupBoxAA->TabIndex = 6;
			this->groupBoxAA->TabStop = false;
			this->groupBoxAA->Text = L"Application Appearance Settings";
			// 
			// checkBoxDarkMode
			// 
			this->checkBoxDarkMode->AutoSize = true;
			this->checkBoxDarkMode->Enabled = false;
			this->checkBoxDarkMode->Location = System::Drawing::Point(6, 23);
			this->checkBoxDarkMode->Name = L"checkBoxDarkMode";
			this->checkBoxDarkMode->Size = System::Drawing::Size(112, 17);
			this->checkBoxDarkMode->TabIndex = 0;
			this->checkBoxDarkMode->Text = L"Enable dark mode";
			this->checkBoxDarkMode->UseVisualStyleBackColor = true;
			this->checkBoxDarkMode->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::checkBoxDarkMode_CheckedChanged);
			// 
			// groupBoxCA
			// 
			this->groupBoxCA->Controls->Add(this->groupBoxNameColor);
			this->groupBoxCA->Controls->Add(this->groupBoxOthersColor);
			this->groupBoxCA->Controls->Add(this->groupBoxMessageColor);
			this->groupBoxCA->Controls->Add(this->groupBoxStateColor);
			this->groupBoxCA->Location = System::Drawing::Point(6, 64);
			this->groupBoxCA->Name = L"groupBoxCA";
			this->groupBoxCA->Size = System::Drawing::Size(545, 293);
			this->groupBoxCA->TabIndex = 5;
			this->groupBoxCA->TabStop = false;
			this->groupBoxCA->Text = L"Chat Appearance Settings";
			// 
			// groupBoxNameColor
			// 
			this->groupBoxNameColor->Controls->Add(this->buttonClientName);
			this->groupBoxNameColor->Controls->Add(this->buttonHostName);
			this->groupBoxNameColor->Controls->Add(this->buttonServerName);
			this->groupBoxNameColor->Location = System::Drawing::Point(6, 19);
			this->groupBoxNameColor->Name = L"groupBoxNameColor";
			this->groupBoxNameColor->Size = System::Drawing::Size(533, 55);
			this->groupBoxNameColor->TabIndex = 1;
			this->groupBoxNameColor->TabStop = false;
			this->groupBoxNameColor->Text = L"Name Colour Settings";
			// 
			// buttonClientName
			// 
			this->buttonClientName->BackColor = System::Drawing::SystemColors::Window;
			this->buttonClientName->Location = System::Drawing::Point(300, 22);
			this->buttonClientName->Name = L"buttonClientName";
			this->buttonClientName->Size = System::Drawing::Size(136, 22);
			this->buttonClientName->TabIndex = 3;
			this->buttonClientName->Text = L"Client";
			this->buttonClientName->UseVisualStyleBackColor = false;
			this->buttonClientName->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonClientName->Click += gcnew System::EventHandler(this, &OptionForm::buttonClientName_Click);
			// 
			// buttonHostName
			// 
			this->buttonHostName->BackColor = System::Drawing::SystemColors::Window;
			this->buttonHostName->Location = System::Drawing::Point(158, 22);
			this->buttonHostName->Name = L"buttonHostName";
			this->buttonHostName->Size = System::Drawing::Size(136, 22);
			this->buttonHostName->TabIndex = 2;
			this->buttonHostName->Text = L"Host";
			this->buttonHostName->UseVisualStyleBackColor = false;
			this->buttonHostName->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonHostName->Click += gcnew System::EventHandler(this, &OptionForm::buttonHostName_Click);
			// 
			// buttonServerName
			// 
			this->buttonServerName->BackColor = System::Drawing::SystemColors::Window;
			this->buttonServerName->Location = System::Drawing::Point(16, 22);
			this->buttonServerName->Name = L"buttonServerName";
			this->buttonServerName->Size = System::Drawing::Size(136, 22);
			this->buttonServerName->TabIndex = 1;
			this->buttonServerName->Text = L"Server";
			this->buttonServerName->UseVisualStyleBackColor = false;
			this->buttonServerName->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonServerName->Click += gcnew System::EventHandler(this, &OptionForm::buttonServerName_Click);
			// 
			// groupBoxOthersColor
			// 
			this->groupBoxOthersColor->Controls->Add(this->buttonSecret);
			this->groupBoxOthersColor->Controls->Add(this->buttonCommentBack);
			this->groupBoxOthersColor->Controls->Add(this->buttonNoticeBack);
			this->groupBoxOthersColor->Location = System::Drawing::Point(6, 231);
			this->groupBoxOthersColor->Name = L"groupBoxOthersColor";
			this->groupBoxOthersColor->Size = System::Drawing::Size(533, 52);
			this->groupBoxOthersColor->TabIndex = 4;
			this->groupBoxOthersColor->TabStop = false;
			this->groupBoxOthersColor->Text = L"Other Colour Settings";
			// 
			// buttonSecret
			// 
			this->buttonSecret->BackColor = System::Drawing::SystemColors::Window;
			this->buttonSecret->Location = System::Drawing::Point(300, 22);
			this->buttonSecret->Name = L"buttonSecret";
			this->buttonSecret->Size = System::Drawing::Size(136, 22);
			this->buttonSecret->TabIndex = 3;
			this->buttonSecret->Text = L"Long Form Date";
			this->buttonSecret->UseVisualStyleBackColor = false;
			this->buttonSecret->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonSecret->Click += gcnew System::EventHandler(this, &OptionForm::buttonSecret_Click);
			// 
			// buttonCommentBack
			// 
			this->buttonCommentBack->ForeColor = System::Drawing::SystemColors::WindowText;
			this->buttonCommentBack->Location = System::Drawing::Point(158, 22);
			this->buttonCommentBack->Name = L"buttonCommentBack";
			this->buttonCommentBack->Size = System::Drawing::Size(136, 22);
			this->buttonCommentBack->TabIndex = 2;
			this->buttonCommentBack->Text = L"Comment Background";
			this->buttonCommentBack->UseVisualStyleBackColor = false;
			this->buttonCommentBack->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonCommentBack->Click += gcnew System::EventHandler(this, &OptionForm::buttonCommentBack_Click);
			// 
			// buttonNoticeBack
			// 
			this->buttonNoticeBack->ForeColor = System::Drawing::SystemColors::WindowText;
			this->buttonNoticeBack->Location = System::Drawing::Point(16, 22);
			this->buttonNoticeBack->Name = L"buttonNoticeBack";
			this->buttonNoticeBack->Size = System::Drawing::Size(136, 22);
			this->buttonNoticeBack->TabIndex = 1;
			this->buttonNoticeBack->Text = L"Notification Background";
			this->buttonNoticeBack->UseVisualStyleBackColor = false;
			this->buttonNoticeBack->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonNoticeBack->Click += gcnew System::EventHandler(this, &OptionForm::buttonNoticeBack_Click);
			// 
			// groupBoxMessageColor
			// 
			this->groupBoxMessageColor->Controls->Add(this->buttonDebugMessage);
			this->groupBoxMessageColor->Controls->Add(this->buttonErrorMessage);
			this->groupBoxMessageColor->Controls->Add(this->buttonSystemMessage);
			this->groupBoxMessageColor->Location = System::Drawing::Point(6, 80);
			this->groupBoxMessageColor->Name = L"groupBoxMessageColor";
			this->groupBoxMessageColor->Size = System::Drawing::Size(533, 55);
			this->groupBoxMessageColor->TabIndex = 3;
			this->groupBoxMessageColor->TabStop = false;
			this->groupBoxMessageColor->Text = L"Message Colour Settings";
			// 
			// buttonDebugMessage
			// 
			this->buttonDebugMessage->BackColor = System::Drawing::SystemColors::Window;
			this->buttonDebugMessage->Location = System::Drawing::Point(301, 22);
			this->buttonDebugMessage->Name = L"buttonDebugMessage";
			this->buttonDebugMessage->Size = System::Drawing::Size(136, 22);
			this->buttonDebugMessage->TabIndex = 3;
			this->buttonDebugMessage->Text = L"Debug";
			this->buttonDebugMessage->UseVisualStyleBackColor = false;
			this->buttonDebugMessage->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonDebugMessage->Click += gcnew System::EventHandler(this, &OptionForm::buttonDebugMessage_Click);
			// 
			// buttonErrorMessage
			// 
			this->buttonErrorMessage->BackColor = System::Drawing::SystemColors::Window;
			this->buttonErrorMessage->Location = System::Drawing::Point(158, 22);
			this->buttonErrorMessage->Name = L"buttonErrorMessage";
			this->buttonErrorMessage->Size = System::Drawing::Size(136, 22);
			this->buttonErrorMessage->TabIndex = 2;
			this->buttonErrorMessage->Text = L"Error";
			this->buttonErrorMessage->UseVisualStyleBackColor = false;
			this->buttonErrorMessage->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonErrorMessage->Click += gcnew System::EventHandler(this, &OptionForm::buttonErrorMessage_Click);
			// 
			// buttonSystemMessage
			// 
			this->buttonSystemMessage->BackColor = System::Drawing::SystemColors::Window;
			this->buttonSystemMessage->Location = System::Drawing::Point(16, 22);
			this->buttonSystemMessage->Name = L"buttonSystemMessage";
			this->buttonSystemMessage->Size = System::Drawing::Size(136, 22);
			this->buttonSystemMessage->TabIndex = 1;
			this->buttonSystemMessage->Text = L"System";
			this->buttonSystemMessage->UseVisualStyleBackColor = false;
			this->buttonSystemMessage->ForeColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonSystemMessage->Click += gcnew System::EventHandler(this, &OptionForm::buttonSystemMessage_Click);
			// 
			// groupBoxStateColor
			// 
			this->groupBoxStateColor->Controls->Add(this->buttonSeekState);
			this->groupBoxStateColor->Controls->Add(this->buttonWatchState);
			this->groupBoxStateColor->Controls->Add(this->buttonVSState);
			this->groupBoxStateColor->Controls->Add(this->buttonRestState);
			this->groupBoxStateColor->Location = System::Drawing::Point(6, 141);
			this->groupBoxStateColor->Name = L"groupBoxStateColor";
			this->groupBoxStateColor->Size = System::Drawing::Size(533, 84);
			this->groupBoxStateColor->TabIndex = 2;
			this->groupBoxStateColor->TabStop = false;
			this->groupBoxStateColor->Text = L"State Colour Settings";
			// 
			// buttonSeekState
			// 
			this->buttonSeekState->Location = System::Drawing::Point(16, 50);
			this->buttonSeekState->Name = L"buttonSeekState";
			this->buttonSeekState->Size = System::Drawing::Size(136, 23);
			this->buttonSeekState->TabIndex = 4;
			this->buttonSeekState->Text = L"Joining";
			this->buttonSeekState->UseVisualStyleBackColor = true;
			this->buttonSeekState->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonSeekState->Click += gcnew System::EventHandler(this, &OptionForm::buttonSeekState_Click);
			// 
			// buttonWatchState
			// 
			this->buttonWatchState->ForeColor = System::Drawing::SystemColors::WindowText;
			this->buttonWatchState->Location = System::Drawing::Point(300, 22);
			this->buttonWatchState->Name = L"buttonWatchState";
			this->buttonWatchState->Size = System::Drawing::Size(136, 22);
			this->buttonWatchState->TabIndex = 3;
			this->buttonWatchState->Text = L"Spectating";
			this->buttonWatchState->UseVisualStyleBackColor = false;
			this->buttonWatchState->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonWatchState->Click += gcnew System::EventHandler(this, &OptionForm::buttonWatchState_Click);
			// 
			// buttonVSState
			// 
			this->buttonVSState->ForeColor = System::Drawing::SystemColors::WindowText;
			this->buttonVSState->Location = System::Drawing::Point(158, 22);
			this->buttonVSState->Name = L"buttonVSState";
			this->buttonVSState->Size = System::Drawing::Size(136, 22);
			this->buttonVSState->TabIndex = 2;
			this->buttonVSState->Text = L"Fighting";
			this->buttonVSState->UseVisualStyleBackColor = false;
			this->buttonVSState->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonVSState->Click += gcnew System::EventHandler(this, &OptionForm::buttonVSState_Click);
			// 
			// buttonRestState
			// 
			this->buttonRestState->ForeColor = System::Drawing::SystemColors::WindowText;
			this->buttonRestState->Location = System::Drawing::Point(16, 22);
			this->buttonRestState->Name = L"buttonRestState";
			this->buttonRestState->Size = System::Drawing::Size(136, 22);
			this->buttonRestState->TabIndex = 1;
			this->buttonRestState->Text = L"Resting";
			this->buttonRestState->UseVisualStyleBackColor = false;
			this->buttonRestState->BackColorChanged += gcnew System::EventHandler(this, &OptionForm::ApplyButtonEnable);
			this->buttonRestState->Click += gcnew System::EventHandler(this, &OptionForm::buttonRestState_Click);
			// 
			// tabPageVolume
			// 
			this->tabPageVolume->Controls->Add(this->groupBoxMidi);
			this->tabPageVolume->Controls->Add(this->groupBoxBGM);
			this->tabPageVolume->Location = System::Drawing::Point(4, 22);
			this->tabPageVolume->Name = L"tabPageVolume";
			this->tabPageVolume->Padding = System::Windows::Forms::Padding(3);
			this->tabPageVolume->Size = System::Drawing::Size(557, 363);
			this->tabPageVolume->TabIndex = 6;
			this->tabPageVolume->Text = L"Volume";
			this->tabPageVolume->UseVisualStyleBackColor = true;
			// 
			// groupBoxMidi
			// 
			this->groupBoxMidi->Controls->Add(this->label2);
			this->groupBoxMidi->Controls->Add(this->labelMidi);
			this->groupBoxMidi->Controls->Add(this->trackBarMidi);
			this->groupBoxMidi->Location = System::Drawing::Point(6, 162);
			this->groupBoxMidi->Name = L"groupBoxMidi";
			this->groupBoxMidi->Size = System::Drawing::Size(545, 63);
			this->groupBoxMidi->TabIndex = 2;
			this->groupBoxMidi->TabStop = false;
			this->groupBoxMidi->Text = L"Musical Instrument Digital Interface";
			this->groupBoxMidi->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(34, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(71, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"MIDI Volume:";
			// 
			// labelMidi
			// 
			this->labelMidi->AutoSize = true;
			this->labelMidi->Location = System::Drawing::Point(504, 31);
			this->labelMidi->Name = L"labelMidi";
			this->labelMidi->Size = System::Drawing::Size(33, 13);
			this->labelMidi->TabIndex = 0;
			this->labelMidi->Text = L"100%";
			// 
			// trackBarMidi
			// 
			this->trackBarMidi->AutoSize = false;
			this->trackBarMidi->BackColor = System::Drawing::SystemColors::Control;
			this->trackBarMidi->LargeChange = 10;
			this->trackBarMidi->Location = System::Drawing::Point(111, 20);
			this->trackBarMidi->Maximum = 100;
			this->trackBarMidi->Name = L"trackBarMidi";
			this->trackBarMidi->Size = System::Drawing::Size(387, 35);
			this->trackBarMidi->TabIndex = 1;
			this->trackBarMidi->TickFrequency = 10;
			this->trackBarMidi->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->trackBarMidi->Scroll += gcnew System::EventHandler(this, &OptionForm::trackBarMidi_Scroll);
			// 
			// groupBoxBGM
			// 
			this->groupBoxBGM->Controls->Add(this->chkMuteSE);
			this->groupBoxBGM->Controls->Add(this->chkMuteBGM);
			this->groupBoxBGM->Controls->Add(this->labelSE);
			this->groupBoxBGM->Controls->Add(this->seLabel);
			this->groupBoxBGM->Controls->Add(this->trackBarSE);
			this->groupBoxBGM->Controls->Add(this->backgroundMusicLabel);
			this->groupBoxBGM->Controls->Add(this->labelBGM);
			this->groupBoxBGM->Controls->Add(this->trackBarBGM);
			this->groupBoxBGM->Location = System::Drawing::Point(6, 9);
			this->groupBoxBGM->Name = L"groupBoxBGM";
			this->groupBoxBGM->Size = System::Drawing::Size(545, 147);
			this->groupBoxBGM->TabIndex = 1;
			this->groupBoxBGM->TabStop = false;
			this->groupBoxBGM->Text = L"Sound Settings";
			// 
			// chkMuteSE
			// 
			this->chkMuteSE->AutoSize = true;
			this->chkMuteSE->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkMuteSE->Location = System::Drawing::Point(111, 119);
			this->chkMuteSE->Name = L"chkMuteSE";
			this->chkMuteSE->Size = System::Drawing::Size(56, 18);
			this->chkMuteSE->TabIndex = 5;
			this->chkMuteSE->Text = L"Mute";
			this->chkMuteSE->UseVisualStyleBackColor = true;
			this->chkMuteSE->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::chkMuteSE_CheckedChanged);
			// 
			// chkMuteBGM
			// 
			this->chkMuteBGM->AutoSize = true;
			this->chkMuteBGM->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->chkMuteBGM->Location = System::Drawing::Point(111, 54);
			this->chkMuteBGM->Name = L"chkMuteBGM";
			this->chkMuteBGM->Size = System::Drawing::Size(56, 18);
			this->chkMuteBGM->TabIndex = 4;
			this->chkMuteBGM->Text = L"Mute";
			this->chkMuteBGM->UseVisualStyleBackColor = true;
			this->chkMuteBGM->CheckedChanged += gcnew System::EventHandler(this, &OptionForm::chkMuteBGM_CheckedChanged);
			// 
			// labelSE
			// 
			this->labelSE->AutoSize = true;
			this->labelSE->Location = System::Drawing::Point(504, 89);
			this->labelSE->Name = L"labelSE";
			this->labelSE->Size = System::Drawing::Size(33, 13);
			this->labelSE->TabIndex = 0;
			this->labelSE->Text = L"100%";
			// 
			// seLabel
			// 
			this->seLabel->AutoSize = true;
			this->seLabel->Location = System::Drawing::Point(28, 89);
			this->seLabel->Name = L"seLabel";
			this->seLabel->Size = System::Drawing::Size(77, 13);
			this->seLabel->TabIndex = 3;
			this->seLabel->Text = L"Sound Effects:";
			// 
			// trackBarSE
			// 
			this->trackBarSE->AutoSize = false;
			this->trackBarSE->LargeChange = 2;
			this->trackBarSE->Location = System::Drawing::Point(111, 78);
			this->trackBarSE->Maximum = 20;
			this->trackBarSE->Name = L"trackBarSE";
			this->trackBarSE->Size = System::Drawing::Size(387, 35);
			this->trackBarSE->TabIndex = 2;
			this->trackBarSE->TickFrequency = 2;
			this->trackBarSE->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->trackBarSE->Scroll += gcnew System::EventHandler(this, &OptionForm::trackBarSE_Scroll);
			// 
			// backgroundMusicLabel
			// 
			this->backgroundMusicLabel->AutoSize = true;
			this->backgroundMusicLabel->Location = System::Drawing::Point(6, 26);
			this->backgroundMusicLabel->Name = L"backgroundMusicLabel";
			this->backgroundMusicLabel->Size = System::Drawing::Size(99, 13);
			this->backgroundMusicLabel->TabIndex = 2;
			this->backgroundMusicLabel->Text = L"Background Music:";
			// 
			// labelBGM
			// 
			this->labelBGM->AutoSize = true;
			this->labelBGM->Location = System::Drawing::Point(504, 26);
			this->labelBGM->Name = L"labelBGM";
			this->labelBGM->Size = System::Drawing::Size(33, 13);
			this->labelBGM->TabIndex = 0;
			this->labelBGM->Text = L"100%";
			// 
			// trackBarBGM
			// 
			this->trackBarBGM->AutoSize = false;
			this->trackBarBGM->LargeChange = 2;
			this->trackBarBGM->Location = System::Drawing::Point(111, 13);
			this->trackBarBGM->Maximum = 20;
			this->trackBarBGM->Name = L"trackBarBGM";
			this->trackBarBGM->Size = System::Drawing::Size(387, 35);
			this->trackBarBGM->TabIndex = 1;
			this->trackBarBGM->TickFrequency = 2;
			this->trackBarBGM->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
			this->trackBarBGM->Scroll += gcnew System::EventHandler(this, &OptionForm::trackBarBGM_Scroll);
			// 
			// tabPageIP
			// 
			this->tabPageIP->Controls->Add(this->IPgroupBox);
			this->tabPageIP->Location = System::Drawing::Point(4, 22);
			this->tabPageIP->Name = L"tabPageIP";
			this->tabPageIP->Padding = System::Windows::Forms::Padding(3);
			this->tabPageIP->Size = System::Drawing::Size(557, 363);
			this->tabPageIP->TabIndex = 7;
			this->tabPageIP->Text = L"IP Conversion";
			this->tabPageIP->UseVisualStyleBackColor = true;
			// 
			// IPgroupBox
			// 
			this->IPgroupBox->Controls->Add(this->AddPortbutton);
			this->IPgroupBox->Controls->Add(this->Convertbutton);
			this->IPgroupBox->Controls->Add(this->IPtextBox);
			this->IPgroupBox->Controls->Add(this->discriptionlabel);
			this->IPgroupBox->Controls->Add(this->Base64groupBox);
			this->IPgroupBox->Location = System::Drawing::Point(8, 6);
			this->IPgroupBox->Name = L"IPgroupBox";
			this->IPgroupBox->Size = System::Drawing::Size(543, 223);
			this->IPgroupBox->TabIndex = 0;
			this->IPgroupBox->TabStop = false;
			this->IPgroupBox->Text = L"IP Address Settings";
			// 
			// AddPortbutton
			// 
			this->AddPortbutton->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->AddPortbutton->Location = System::Drawing::Point(434, 190);
			this->AddPortbutton->Name = L"AddPortbutton";
			this->AddPortbutton->Size = System::Drawing::Size(103, 26);
			this->AddPortbutton->TabIndex = 2;
			this->AddPortbutton->Text = L"Convert With Port";
			this->AddPortbutton->UseVisualStyleBackColor = true;
			this->AddPortbutton->Click += gcnew System::EventHandler(this, &OptionForm::AddPortbutton_Click);
			// 
			// Convertbutton
			// 
			this->Convertbutton->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->Convertbutton->Location = System::Drawing::Point(364, 190);
			this->Convertbutton->Name = L"Convertbutton";
			this->Convertbutton->Size = System::Drawing::Size(64, 26);
			this->Convertbutton->TabIndex = 1;
			this->Convertbutton->Text = L"Convert";
			this->Convertbutton->UseVisualStyleBackColor = true;
			this->Convertbutton->Click += gcnew System::EventHandler(this, &OptionForm::Convertbutton_Click);
			// 
			// IPtextBox
			// 
			this->IPtextBox->AccessibleDescription = L"";
			this->IPtextBox->Location = System::Drawing::Point(9, 67);
			this->IPtextBox->MaxLength = 20;
			this->IPtextBox->Name = L"IPtextBox";
			this->IPtextBox->Size = System::Drawing::Size(528, 20);
			this->IPtextBox->TabIndex = 0;
			this->IPtextBox->TextChanged += gcnew System::EventHandler(this, &OptionForm::IPtextBox_TextChanged);
			// 
			// discriptionlabel
			// 
			this->discriptionlabel->AutoSize = true;
			this->discriptionlabel->Location = System::Drawing::Point(6, 16);
			this->discriptionlabel->Name = L"discriptionlabel";
			this->discriptionlabel->Size = System::Drawing::Size(466, 39);
			this->discriptionlabel->TabIndex = 3;
			this->discriptionlabel->Text = L"By obfuscating your IP address, you can reduce security risks associated with pub" 
				L"lishing a server.\r\n\r\nWhen you create a server, you should use your converted IP " 
				L"address rather than your real one.";
			// 
			// Base64groupBox
			// 
			this->Base64groupBox->Controls->Add(this->labelAddrMT);
			this->Base64groupBox->Controls->Add(this->textBoxMTAddr);
			this->Base64groupBox->Controls->Add(this->labelAddrBase64);
			this->Base64groupBox->Controls->Add(this->Base64textBox);
			this->Base64groupBox->Location = System::Drawing::Point(9, 93);
			this->Base64groupBox->Name = L"Base64groupBox";
			this->Base64groupBox->Size = System::Drawing::Size(528, 91);
			this->Base64groupBox->TabIndex = 1;
			this->Base64groupBox->TabStop = false;
			this->Base64groupBox->Text = L"Converted IP Address";
			// 
			// labelAddrMT
			// 
			this->labelAddrMT->AutoSize = true;
			this->labelAddrMT->Location = System::Drawing::Point(6, 57);
			this->labelAddrMT->Name = L"labelAddrMT";
			this->labelAddrMT->Size = System::Drawing::Size(40, 13);
			this->labelAddrMT->TabIndex = 3;
			this->labelAddrMT->Text = L"MTSP:";
			// 
			// textBoxMTAddr
			// 
			this->textBoxMTAddr->Location = System::Drawing::Point(52, 54);
			this->textBoxMTAddr->Name = L"textBoxMTAddr";
			this->textBoxMTAddr->ReadOnly = true;
			this->textBoxMTAddr->Size = System::Drawing::Size(470, 20);
			this->textBoxMTAddr->TabIndex = 2;
			// 
			// labelAddrBase64
			// 
			this->labelAddrBase64->AutoSize = true;
			this->labelAddrBase64->Location = System::Drawing::Point(6, 23);
			this->labelAddrBase64->Name = L"labelAddrBase64";
			this->labelAddrBase64->Size = System::Drawing::Size(67, 13);
			this->labelAddrBase64->TabIndex = 1;
			this->labelAddrBase64->Text = L"MorningStar:";
			// 
			// Base64textBox
			// 
			this->Base64textBox->Location = System::Drawing::Point(79, 20);
			this->Base64textBox->MaxLength = 100;
			this->Base64textBox->Name = L"Base64textBox";
			this->Base64textBox->ReadOnly = true;
			this->Base64textBox->Size = System::Drawing::Size(443, 20);
			this->Base64textBox->TabIndex = 0;
			// 
			// buttonApply
			// 
			this->buttonApply->Location = System::Drawing::Point(12, 407);
			this->buttonApply->Name = L"buttonApply";
			this->buttonApply->Size = System::Drawing::Size(75, 23);
			this->buttonApply->TabIndex = 15;
			this->buttonApply->Text = L"button1";
			this->buttonApply->UseVisualStyleBackColor = true;
			this->buttonApply->Visible = false;
			// 
			// OptionForm
			// 
			this->AcceptButton = this->buttonOK;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::Black;
			this->ClientSize = System::Drawing::Size(587, 439);
			this->Controls->Add(this->buttonApply);
			this->Controls->Add(this->tabControlOption);
			this->Controls->Add(this->buttonCancel);
			this->Controls->Add(this->buttonOK);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"OptionForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"MorningStar Settings";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &OptionForm::OptionForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &OptionForm::OptionForm_Load);
			this->Shown += gcnew System::EventHandler(this, &OptionForm::OptionForm_Shown);
			this->tabPageSound->ResumeLayout(false);
			this->groupBoxNotif->ResumeLayout(false);
			this->groupBoxNotif->PerformLayout();
			this->groupBoxKeyword->ResumeLayout(false);
			this->groupBoxKeyword->PerformLayout();
			this->groupBoxSeekSound->ResumeLayout(false);
			this->groupBoxSeekSound->PerformLayout();
			this->groupBoxName->ResumeLayout(false);
			this->groupBoxName->PerformLayout();
			this->groupBoxNoticeSound->ResumeLayout(false);
			this->groupBoxNoticeSound->PerformLayout();
			this->groupBoxVSSound->ResumeLayout(false);
			this->groupBoxVSSound->PerformLayout();
			this->groupBoxTalkSound->ResumeLayout(false);
			this->groupBoxTalkSound->PerformLayout();
			this->groupBoxEnterSound->ResumeLayout(false);
			this->groupBoxEnterSound->PerformLayout();
			this->tabPagePath->ResumeLayout(false);
			this->groupBoxLog->ResumeLayout(false);
			this->groupBoxLog->PerformLayout();
			this->groupBoxSysTray->ResumeLayout(false);
			this->groupBoxSysTray->PerformLayout();
			this->groupBoxProfile->ResumeLayout(false);
			this->groupBoxProfile->PerformLayout();
			this->groupBoxReplayFolder->ResumeLayout(false);
			this->groupBoxReplayFolder->PerformLayout();
			this->groupBoxNet->ResumeLayout(false);
			this->groupBoxNet->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownMaxConnection))->EndInit();
			this->groupBoxGameExe->ResumeLayout(false);
			this->groupBoxGameExe->PerformLayout();
			this->groupBoxSave->ResumeLayout(false);
			this->groupBoxSave->PerformLayout();
			this->tabControlOption->ResumeLayout(false);
			this->tabPageGame->ResumeLayout(false);
			this->groupBoxTeamOption->ResumeLayout(false);
			this->groupBoxTeamOption->PerformLayout();
			this->groupBoxSimulate->ResumeLayout(false);
			this->groupBoxSimulate->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownSimDelay))->EndInit();
			this->groupBoxRun->ResumeLayout(false);
			this->groupBoxRun->PerformLayout();
			this->groupBoxView->ResumeLayout(false);
			this->groupBoxView->PerformLayout();
			this->groupBoxSetting->ResumeLayout(false);
			this->groupBoxSetting->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownRound))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownTimer))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownMaxStage))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->numericUpDownStageSelect))->EndInit();
			this->tabPageColor->ResumeLayout(false);
			this->groupBoxAA->ResumeLayout(false);
			this->groupBoxAA->PerformLayout();
			this->groupBoxCA->ResumeLayout(false);
			this->groupBoxNameColor->ResumeLayout(false);
			this->groupBoxOthersColor->ResumeLayout(false);
			this->groupBoxMessageColor->ResumeLayout(false);
			this->groupBoxStateColor->ResumeLayout(false);
			this->tabPageVolume->ResumeLayout(false);
			this->groupBoxMidi->ResumeLayout(false);
			this->groupBoxMidi->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarMidi))->EndInit();
			this->groupBoxBGM->ResumeLayout(false);
			this->groupBoxBGM->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarSE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBarBGM))->EndInit();
			this->tabPageIP->ResumeLayout(false);
			this->IPgroupBox->ResumeLayout(false);
			this->IPgroupBox->PerformLayout();
			this->Base64groupBox->ResumeLayout(false);
			this->Base64groupBox->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
#pragma region Variables
	protected:
		HMIXER hMixer;
		DWORD MixerControlID;
		DWORD MixerVolumeMin, MixerVolumeMax;

		void AdviceGameExe(){
			textBoxGameExe->Text = gcnew String("No game executable selected.");
			textBoxGameExe->Focus();
		}

		void CheckStageValue(){
			if(numericUpDownStageSelect->Value > numericUpDownMaxStage->Value){
				labelMaxStage->Text    = gcnew String("Start stage:");
				labelStageSelect->Text = gcnew String("End stage:");
			}
			else{
				labelMaxStage->Text    = gcnew String("Max. stage:");
				labelStageSelect->Text = gcnew String("Selected stage:");
			}

			if(numericUpDownStageSelect->Value == 0){
				labelStageSelect->Text = gcnew String("Random stage:");
			}
		}

		// OptionForm.cpp
		void SaveOption(bool apply);
		void CloseOption();
		void DeleteProfile(String^ buf);
		bool CheckTextProfileName(String^ buf);
		void OverWriteProfile(String^ buf);

	public:
		bool GameExePathError;

		void SetGameExePath(String^% path){
			textBoxGameExe->Text = path;
		}

	private:
		void TooManyWaves(){
			openFileDialog1->Title  = gcnew String("Open a WAVE (.wav) file");
			openFileDialog1->Filter = gcnew String("WAVE File (*.wav)|*.wav");
		}
#pragma endregion
#pragma region Load Settings
		System::Void OptionForm_Load(System::Object^  sender, System::EventArgs^  e) {

			textBoxGameExe->MaxLength          = _MAX_PATH;
			textBoxReplayFolder->MaxLength     = _MAX_PATH;
			textBoxVSSound->MaxLength          = _MAX_PATH;
			textBoxNoticeSound->MaxLength      = _MAX_PATH;
			textBoxEnterSound->MaxLength       = _MAX_PATH;
			textBoxTalkSound->MaxLength        = _MAX_PATH;
			textBoxSeekSound->MaxLength        = _MAX_PATH;

			// textBoxComment->MaxLength = MAX_NAME;

			comboBoxProfile->Items->Clear();
			for(int i=0; i < Profile::ProfileList->Count; i++){
				comboBoxProfile->Items->Add(Profile::ProfileList[i]);
				if(Profile::ProfileList[i] == gcnew String(MTOPTION.PROFILE)){
					comboBoxProfile->SelectedIndex = i;
				}
			}

			textBoxGameExe->Text          = gcnew String(MTOPTION.GAME_EXE);
			textBoxReplayFolder->Text     = gcnew String(MTOPTION.REPLAY_FOLDER);
			textBoxVSSound->Text          = gcnew String(MTOPTION.VS_SOUND);
			textBoxNoticeSound->Text      = gcnew String(MTOPTION.NOTICE_SOUND);
			textBoxEnterSound->Text       = gcnew String(MTOPTION.ENTER_SOUND);
			textBoxNameSound->Text        = gcnew String(MTOPTION.NAME_SOUND);
			textBoxTalkSound->Text        = gcnew String(MTOPTION.TALK_SOUND);
			textBoxSeekSound->Text        = gcnew String(MTOPTION.SEEK_SOUND);
			textBoxKeyword->Text          = gcnew String(MTOPTION.KEYWORD);

			// ƒpƒX‚ÌƒZƒŒƒNƒVƒ‡ƒ“‚ð––”ö‚É
			textBoxGameExe->SelectionStart          = textBoxGameExe->Text->Length;
			textBoxReplayFolder->SelectionStart     = textBoxReplayFolder->Text->Length;
			textBoxVSSound->SelectionStart          = textBoxVSSound->Text->Length;
			textBoxNoticeSound->SelectionStart      = textBoxNoticeSound->Text->Length;
			textBoxEnterSound->SelectionStart       = textBoxEnterSound->Text->Length;
			textBoxNameSound->SelectionStart        = textBoxNameSound->Text->Length;
			textBoxTalkSound->SelectionStart        = textBoxTalkSound->Text->Length;
			textBoxSeekSound->SelectionStart        = textBoxSeekSound->Text->Length;

			checkBoxVSSound->Checked          = MTOPTION.VS_SOUND_ENABLE;
			checkBoxNoticeSound->Checked      = MTOPTION.NOTICE_SOUND_ENABLE;
			checkBoxEnterSound->Checked       = MTOPTION.ENTER_SOUND_ENABLE;
			checkBoxNameSound->Checked        = MTOPTION.NAME_SOUND_ENABLE;
			checkBoxTalkSound->Checked        = MTOPTION.TALK_SOUND_ENABLE;
			checkBoxSeekSound->Checked        = MTOPTION.SEEK_SOUND_ENABLE;
			checkBoxKeywordSound->Checked     = MTOPTION.KEYWORD_SOUND_ENABLE;

			checkBoxGetIP->Checked            = MTOPTION.GET_IP_ENABLE;
			checkBoxShowGameOption->Checked   = MTOPTION.SHOW_GAME_OPTION;
			checkBoxShowResult->Checked       = MTOPTION.SHOW_RESULT;
			checkBoxLogClearWithoutWelcome->Checked = MTOPTION.LOG_CLEAR_WITHOUT_WELCOME;

			numericUpDownMaxConnection->Value = MTOPTION.MAX_CONNECTION;
			trackBarBGM->Value                = MTOPTION.BGM_VOLUME / 5;
			trackBarSE->Value                 = MTOPTION.SE_VOLUME / 5;
			numericUpDownMaxStage->Value      = MTOPTION.MAX_STAGE;
			numericUpDownStageSelect->Value   = MTOPTION.STAGE_SELECT;
			numericUpDownRound->Value         = MTOPTION.ROUND;
			numericUpDownTimer->Value         = MTOPTION.TIMER;
			numericUpDownSimDelay->Value      = MTOPTION.SIMULATE_DELAY;
			checkBoxHitJudge->Checked         = MTOPTION.HIT_JUDGE;
			checkBoxName->Checked             = MTOPTION.DISPLAY_NAME;
			checkBoxVersus->Checked           = MTOPTION.DISPLAY_VERSUS;
			checkBoxFramerate->Checked        = MTOPTION.DISPLAY_FRAMERATE;
			checkBoxRand->Checked             = MTOPTION.DISPLAY_RAND;
			checkBoxDivide->Checked           = MTOPTION.REPLAY_DIVIDE;
			checkBoxWindowSize->Checked       = MTOPTION.CHANGE_WINDOW_SIZE;
			checkBoxSysTray->Checked		  = MTOPTION.SYS_TRAY;

			if(MTOPTION.LOG_FORMAT_RTF){
				radioButtonLogRTF->Checked    = true;
				radioButtonLogTXT->Checked    = false;
			}else{
				radioButtonLogRTF->Checked    = false;
				radioButtonLogTXT->Checked    = true;
			}

			checkBoxTeamRoundHP->Checked      = MTOPTION.TEAM_ROUND_HP;

			CheckStageValue();

			labelBGM->Text = String::Format("{0,3}%", trackBarBGM->Value * 5);
			labelSE->Text = String::Format("{0,3}%", trackBarSE->Value * 5);

			if(MTOPTION.REPLAY_VERSION == 2){
				radioButtonReplayVersion1->Checked = false;
				radioButtonReplayVersion2->Checked = true;
			}
			else{
				radioButtonReplayVersion1->Checked = true;
				radioButtonReplayVersion2->Checked = false;
			}

			// TODO: Finish dark mode.
			if (MTOPTION.DARK_MODE == true){
				checkBoxDarkMode->Checked = true;

				// Colour first tab page black.
				tabPagePath->BackColor = Color::Black;
				groupBoxProfile->ForeColor = Color::White;
				groupBoxGameExe->ForeColor = Color::White;
				groupBoxReplayFolder->ForeColor = Color::White;
				groupBoxNet->ForeColor = Color::White;
				checkBoxDivide->FlatStyle = FlatStyle::Standard;
				checkBoxDivide->ForeColor = Color::White;

				// Colour second tab page black.
				tabPageSound->BackColor = Color::Black;
				groupBoxVSSound->ForeColor = Color::White;
				groupBoxNoticeSound->ForeColor = Color::White;
			}else{

				// Colour first tab page white.
				checkBoxDarkMode->Checked = false;
				tabPagePath->BackColor = Color::White;
				groupBoxProfile->ForeColor = Color::Black;
				groupBoxGameExe->ForeColor = Color::Black;
				groupBoxReplayFolder->ForeColor = Color::Black;
				groupBoxNet->ForeColor = Color::Black;
				checkBoxDivide->FlatStyle = FlatStyle::System;
				checkBoxDivide->ForeColor = Color::Black;
			}
			buttonServerName->ForeColor    = Color::FromArgb(MTCOLOR.SERVER_NAME);
			buttonHostName->ForeColor      = Color::FromArgb(MTCOLOR.HOST_NAME);
			buttonClientName->ForeColor    = Color::FromArgb(MTCOLOR.CLIENT_NAME);
			buttonRestState->BackColor     = Color::FromArgb(MTCOLOR.REST_STATE);
			buttonVSState->BackColor       = Color::FromArgb(MTCOLOR.VS_STATE);
			buttonWatchState->BackColor    = Color::FromArgb(MTCOLOR.WATCH_STATE);
			buttonSeekState->BackColor     = Color::FromArgb(MTCOLOR.SEEK_STATE);

			buttonSystemMessage->ForeColor = Color::FromArgb(MTCOLOR.SYSTEM_MESSAGE);
			buttonErrorMessage->ForeColor  = Color::FromArgb(MTCOLOR.ERROR_MESSAGE);
			buttonDebugMessage->ForeColor  = Color::FromArgb(MTCOLOR.DEBUG_MESSAGE);
			buttonNoticeBack->BackColor    = Color::FromArgb(MTCOLOR.NOTICE_BACK);
			buttonCommentBack->BackColor   = Color::FromArgb(MTCOLOR.COMMENT_BACK);
			buttonSecret->ForeColor        = Color::FromArgb(MTCOLOR.SECRET);

			// SWƒVƒ“ƒZ
			try{
				hMixer = NULL;
				pin_ptr<HMIXER> p_hm = &hMixer;

				if(mixerOpen(p_hm, 0, 0, 0, MIXER_OBJECTF_MIXER) != MMSYSERR_NOERROR){
					throw gcnew Exception;
				}
				else{
					// €”õ
					MIXERLINE line;
					MIXERLINECONTROLS lc;
					MIXERCONTROL ctrl;

					line.cbStruct        = sizeof(MIXERLINE);
					line.dwComponentType = MIXERLINE_COMPONENTTYPE_SRC_SYNTHESIZER;

					if(mixerGetLineInfo((HMIXEROBJ)hMixer, &line, MIXER_OBJECTF_HMIXER | MIXER_GETLINEINFOF_COMPONENTTYPE) != MMSYSERR_NOERROR){
						throw gcnew Exception;
					}

					lc.cbStruct      = sizeof(MIXERLINECONTROLS);
					lc.dwLineID      = line.dwLineID;
					lc.dwControlType = MIXERCONTROL_CONTROLTYPE_VOLUME;
					lc.cControls     = 1;
					lc.cbmxctrl      = sizeof(MIXERCONTROL);
					lc.pamxctrl      = &ctrl;

					if(mixerGetLineControls((HMIXEROBJ)hMixer, &lc, MIXER_OBJECTF_HMIXER | MIXER_GETLINECONTROLSF_ONEBYTYPE) != MMSYSERR_NOERROR){
						throw gcnew Exception;
					}

					MixerControlID = ctrl.dwControlID;
					MixerVolumeMin = ctrl.Bounds.dwMinimum;
					MixerVolumeMax = ctrl.Bounds.dwMaximum;

					// ‰¹—ÊŽæ“¾
					MIXERCONTROLDETAILS mcd;
					MIXERCONTROLDETAILS_UNSIGNED vol;

					mcd.cbStruct       = sizeof(MIXERCONTROLDETAILS);
					mcd.dwControlID    = ctrl.dwControlID;
					mcd.cChannels      = 1;
					mcd.cMultipleItems = 0;
					mcd.cbDetails      = sizeof(MIXERCONTROLDETAILS_UNSIGNED);
					mcd.paDetails      = &vol;

					if(mixerGetControlDetails((HMIXEROBJ)hMixer, &mcd, MIXER_OBJECTF_HMIXER | MIXER_GETCONTROLDETAILSF_VALUE) != MMSYSERR_NOERROR){
						throw gcnew Exception;
					}

					DWORD delta = MixerVolumeMax - MixerVolumeMin;
					trackBarMidi->Value = ((vol.dwValue - MixerVolumeMin)*100 + delta/2)/delta;

					labelMidi->Text = String::Format("{0,3}%", trackBarMidi->Value);
				}
			}
			catch(Exception^){
				if(hMixer != NULL){
					mixerClose(hMixer);
					hMixer = NULL;
				}

				labelMidi->Text = gcnew String("xxx");
				groupBoxMidi->Enabled = false;
			}

			if(MTWS.DIALOG_LEFT > 0 && MTWS.DIALOG_TOP > 0){
				this->StartPosition = FormStartPosition::Manual;
				this->Location = Point(MTWS.DIALOG_LEFT, MTWS.DIALOG_TOP);
			}

			buttonApply->Enabled = false;
		}

		System::Void OptionForm_Shown(System::Object^  sender, System::EventArgs^  e) {
			if(GameExePathError){
				AdviceGameExe();
			}
		}
#pragma endregion
#pragma region General
// ƒvƒƒtƒ@ƒCƒ‹ƒRƒ“ƒ{ƒ{ƒbƒNƒX•ÏX
		System::Void comboBoxProfile_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			String^ buf = ((ComboBox^)sender)->Text;
			String^ bufProfile = gcnew String(MTOPTION.PROFILE);

			if(buf != bufProfile){
				// Ø‚è‘Ö‚¦
				IntPtr mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(buf);
				_tcscpy_s(MTOPTION.PROFILE, static_cast<PTCHAR>(mp.ToPointer()));
				Runtime::InteropServices::Marshal::FreeHGlobal(mp);

				LoadMTOption();

				// ƒvƒƒtƒ@ƒCƒ‹ƒZƒNƒVƒ‡ƒ“‚ÌÝ’è’l‚ðXV
				textBoxGameExe->Text                = gcnew String(MTOPTION.GAME_EXE);
				textBoxReplayFolder->Text           = gcnew String(MTOPTION.REPLAY_FOLDER);
				textBoxGameExe->SelectionStart      = textBoxGameExe->Text->Length;
				textBoxReplayFolder->SelectionStart = textBoxReplayFolder->Text->Length;
				numericUpDownMaxStage->Value        = MTOPTION.MAX_STAGE;
				numericUpDownStageSelect->Value     = MTOPTION.STAGE_SELECT;
				numericUpDownRound->Value           = MTOPTION.ROUND;
				numericUpDownTimer->Value           = MTOPTION.TIMER;
				numericUpDownSimDelay->Value        = MTOPTION.SIMULATE_DELAY;
				checkBoxHitJudge->Checked           = MTOPTION.HIT_JUDGE;
				checkBoxName->Checked               = MTOPTION.DISPLAY_NAME;
				checkBoxVersus->Checked             = MTOPTION.DISPLAY_VERSUS;
				checkBoxFramerate->Checked          = MTOPTION.DISPLAY_FRAMERATE;
				checkBoxRand->Checked               = MTOPTION.DISPLAY_RAND;
				checkBoxDivide->Checked             = MTOPTION.REPLAY_DIVIDE;
				checkBoxWindowSize->Checked         = MTOPTION.CHANGE_WINDOW_SIZE;
				checkBoxTeamRoundHP->Checked        = MTOPTION.TEAM_ROUND_HP;
				CheckStageValue();
				if(MTOPTION.REPLAY_VERSION == 2){
					radioButtonReplayVersion1->Checked = false;
					radioButtonReplayVersion2->Checked = true;
				}
				else{
					radioButtonReplayVersion1->Checked = true;
					radioButtonReplayVersion2->Checked = false;
				}
			}
			textBoxProfileName->Text = buf;
			buttonApply->Enabled = false;
		}
		System::Void buttonCopyProfile_Click(System::Object^ sender, System::EventArgs^ e) {
			// ƒvƒƒtƒ@ƒCƒ‹•¡»
			String^ mes;
			String^ buf = comboBoxProfile->Items[comboBoxProfile->SelectedIndex]->ToString();
			String^ bufClone = String::Format("{0}{1}", buf, "_");
			if(buf->Length > MAX_ARRAY-1){
				mes = "Profile name is too long.\nPlease shorten the profile name to allow cloning.";
			}
			for(int i=0; i < Profile::ProfileList->Count; i++){
				if(Profile::ProfileList[i] == bufClone){
					mes = "A duplicate profile already exists.";
				}
			}
			if(Profile::ProfileList->Count > 31){
				mes = "No more profiles can be created.";
				return;
			}
			if(mes != nullptr){
				MessageBox::Show(mes, "Duplicating Profile", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}
			Profile::ProfileList->Add(bufClone);
			comboBoxProfile->Items->Add(bufClone);

			IntPtr mp = Runtime::InteropServices::Marshal::StringToHGlobalAuto(bufClone);
			_tcscpy_s(MTOPTION.PROFILE, static_cast<PTCHAR>(mp.ToPointer()));
			Runtime::InteropServices::Marshal::FreeHGlobal(mp);

			SaveOption(true);

			comboBoxProfile->SelectedIndex = comboBoxProfile->Items->Count-1;
			buttonApply->Enabled = false;

		}
		System::Void buttonDeleteProfile_Click(System::Object^ sender, System::EventArgs^ e) {
			// ƒvƒƒtƒ@ƒCƒ‹íœ
			int index = comboBoxProfile->SelectedIndex;
			String^ buf = comboBoxProfile->Items[index]->ToString();
			if(MessageBox::Show(String::Format("{0} will be deleted.\nAre you sure?", buf), "Delete Profile", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::DialogResult::Yes){
				Profile::ProfileList->RemoveAt(index);
				comboBoxProfile->Items->RemoveAt(index);

				DeleteProfile(buf);

				comboBoxProfile->SelectedIndex = 0;
			}else{
				return;
			}
		}
		System::Void buttonAddProfile_Click(System::Object^ sender, System::EventArgs^ e) {
			// ƒvƒƒtƒ@ƒCƒ‹’Ç‰Á
			String^ bufText = textBoxProfileName->Text;
			if(CheckTextProfileName(bufText)){
				return;
			}
			if(Profile::ProfileList->Count > 31){
				MessageBox::Show("No more profiles can be created.", "Add Profile", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				return;
			}

			Profile::ProfileList->Add(bufText);
			comboBoxProfile->Items->Add(bufText);

			SaveOption(true);

			buttonApply->Enabled = false;
		}
		System::Void buttonSaveProfile_Click(System::Object^ sender, System::EventArgs^ e) {
			// ƒvƒƒtƒ@ƒCƒ‹•Û‘¶
			String^ bufText         = textBoxProfileName->Text;
			String^ bufSelectedItem = comboBoxProfile->SelectedItem->ToString();
			if(CheckTextProfileName(bufText)){
				return;
			}
			// ã‘‚«
			if(bufText != bufSelectedItem){
				for(int i=0; i < Profile::ProfileList->Count; i++){
					if(Profile::ProfileList[i] == gcnew String(MTOPTION.PROFILE)){
						Profile::ProfileList[i] = bufText;
					}
				}
				OverWriteProfile(bufText);

				comboBoxProfile->Items[comboBoxProfile->SelectedIndex] = bufText;
			}
		}
		System::Void buttonGameExe_Click(System::Object^  sender, System::EventArgs^  e) {
			openFileDialog1->Title  = gcnew String("Open Executable");
			openFileDialog1->Filter = gcnew String("EXE File (*.exe)|*.exe");

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				FileVersionInfo^ info = FileVersionInfo::GetVersionInfo(openFileDialog1->FileName);

				if(info->FileDescription == "Fighting is Magic: Aurora" || info->LegalCopyright == "(C)2001 ENTERBRAIN,INC / OUTBACK" || info->FileDescription == "２Ｄ格闘ツクール2nd." || info->FileDescription == "２Ｄ格闘ツクール９５"){
					textBoxGameExe->Text = openFileDialog1->FileName;
				}else{
					textBoxGameExe->Text = "Invalid File. Choose a Fighter Maker executable.";
					textBoxGameExe->SelectAll();
					textBoxGameExe->Focus();
				}
			}
		}
		System::Void buttonReplayFolder_Click(System::Object^  sender, System::EventArgs^  e) {
			if(folderBrowserDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxReplayFolder->Text = folderBrowserDialog1->SelectedPath;
			}
		}
		System::Void textBoxGameExe_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			e->Effect = DragDropEffects::None;

			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				array<String^>^ file = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false));
				String^ extension = Path::GetExtension(file[0])->ToLower();
				FileVersionInfo^ info = FileVersionInfo::GetVersionInfo(file[0]);

				if(extension == ".exe" && (info->FileDescription == "‚Q‚cŠi“¬ƒcƒN[ƒ‹2nd." || info->FileDescription == "‚Q‚cŠi“¬ƒcƒN[ƒ‹‚X‚T")){
					e->Effect = DragDropEffects::All;
				}
			}
		}

		System::Void textBoxGameExe_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxGameExe->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxReplayFolder_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			e->Effect = DragDropEffects::None;

			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				array<String^>^ file = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false));
				String^ extension = Path::GetExtension(file[0]);

				if(extension == String::Empty){
					e->Effect = DragDropEffects::All;
				}
			}
		}

		System::Void textBoxReplayFolder_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxReplayFolder->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}
		// Allows users to run MorningStar in the background (as God intended).
		System::Void checkBoxSysTray_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBoxSysTray->Checked == true){
				MTOPTION.SYS_TRAY = true;
			}else{
				MTOPTION.SYS_TRAY = false;
			}
			buttonApply->Enabled = true;
		 }
#pragma endregion
#pragma region Sounds
		System::Void buttonVSSound_Click(System::Object^  sender, System::EventArgs^  e) {
			TooManyWaves();

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxVSSound->Text = openFileDialog1->FileName;
			}
		}
		System::Void buttonNoticeSound_Click(System::Object^  sender, System::EventArgs^  e) {
			TooManyWaves();

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxNoticeSound->Text = openFileDialog1->FileName;
			}
		}

		System::Void buttonEnterSound_Click(System::Object^  sender, System::EventArgs^  e) {
			TooManyWaves();

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxEnterSound->Text = openFileDialog1->FileName;
			}
		}

		System::Void buttonNameSound_Click(System::Object^  sender, System::EventArgs^  e) {
			TooManyWaves();

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxNameSound->Text = openFileDialog1->FileName;
			}
		}

		System::Void buttonTalkSound_Click(System::Object^  sender, System::EventArgs^  e) {
			TooManyWaves();

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxTalkSound->Text = openFileDialog1->FileName;
			}
		}

		System::Void buttonSeekSound_Click(System::Object^  sender, System::EventArgs^  e) {
			TooManyWaves();

			if(openFileDialog1->ShowDialog() == ::DialogResult::OK){
				textBoxSeekSound->Text = openFileDialog1->FileName;
			}
		}
		System::Void textBoxSound_DragEnter(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			e->Effect = DragDropEffects::None;

			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				array<String^>^ file = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false));
				String^ extension = Path::GetExtension(file[0])->ToLower();

				if(extension == ".wav"){
					e->Effect = DragDropEffects::All;
				}
			}
		}

		System::Void textBoxVSSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxVSSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxNoticeSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxNoticeSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxEnterSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxEnterSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxNameSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxNameSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxTalkSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxTalkSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		System::Void textBoxSeekSound_DragDrop(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
			if(e->Data->GetDataPresent(DataFormats::FileDrop)){
				textBoxSeekSound->Text = safe_cast<array<String^>^>(e->Data->GetData(DataFormats::FileDrop, false))[0];
			}
		}

		// Ä¶ƒ{ƒ^ƒ“
		System::Void buttonVSSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.VS_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonEnterSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.ENTER_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonNoticeSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.NOTICE_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonNameSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.NAME_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonTalkSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.TALK_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonSeekSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.SEEK_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
		System::Void buttonKeywordSoundPlay_Click(System::Object^  sender, System::EventArgs^  e) {
			try{
				Media::SoundPlayer^ wav = gcnew Media::SoundPlayer(gcnew String(MTOPTION.KEYWORD_SOUND));
				wav->Play();
			}
			catch(Exception^){
			}
		}
#pragma endregion
#pragma region Game
		System::Void numericUpDownStage_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			buttonApply->Enabled = true;

			CheckStageValue();
		}

#pragma endregion
#pragma region Appearance
		// Allows user to enable a dark mode if the standard Windows control colour is too birght.
		System::Void checkBoxDarkMode_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (checkBoxDarkMode->Checked == true){
				MTOPTION.DARK_MODE = true;
				// Colour first tab page black.
				tabPagePath->BackColor = Color::Black;
				groupBoxProfile->ForeColor = Color::White;
				groupBoxGameExe->ForeColor = Color::White;
				groupBoxReplayFolder->ForeColor = Color::White;
				groupBoxNet->ForeColor = Color::White;
				checkBoxDivide->ForeColor = Color::White;
			}else{
				MTOPTION.DARK_MODE = false;
				// Colour first tab page white.
				checkBoxDarkMode->Checked = false;
				tabPagePath->BackColor = Color::White;
				groupBoxProfile->ForeColor = Color::Black;
				groupBoxGameExe->ForeColor = Color::Black;
				groupBoxReplayFolder->ForeColor = Color::Black;
				groupBoxNet->ForeColor = Color::Black;
				checkBoxDivide->ForeColor = Color::Black;
			}
			buttonApply->Enabled = true;
		 }

		System::Void buttonServerName_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonServerName->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonHostName_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonHostName->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonClientName_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonClientName->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonRestState_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonRestState->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonVSState_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonVSState->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonWatchState_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonWatchState->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonSeekState_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonSeekState->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonSystemMessage_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonSystemMessage->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonErrorMessage_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonErrorMessage->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonDebugMessage_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonDebugMessage->ForeColor = colorDialog1->Color;
			}
		}

		System::Void buttonNoticeBack_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonNoticeBack->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonCommentBack_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonCommentBack->BackColor = colorDialog1->Color;
			}
		}

		System::Void buttonSecret_Click(System::Object^  sender, System::EventArgs^  e) {
			if(colorDialog1->ShowDialog() == ::DialogResult::OK){
				buttonSecret->ForeColor = colorDialog1->Color;
			}
		}
#pragma endregion
#pragma region Volume
		System::Void trackBarBGM_Scroll(System::Object^  sender, System::EventArgs^  e) {
			buttonApply->Enabled = true;

			labelBGM->Text = String::Format("{0,3}%", trackBarBGM->Value * 5);
		}

		System::Void trackBarSE_Scroll(System::Object^  sender, System::EventArgs^  e) {
			buttonApply->Enabled = true;

			labelSE->Text = String::Format("{0,3}%", trackBarSE->Value * 5);
		}

		System::Void trackBarMidi_Scroll(System::Object^  sender, System::EventArgs^  e) {
			labelMidi->Text = String::Format("{0,3}%", trackBarMidi->Value);

			MIXERCONTROLDETAILS mcd;
			MIXERCONTROLDETAILS_UNSIGNED vol;

			vol.dwValue = trackBarMidi->Value*(MixerVolumeMax - MixerVolumeMin)/100 + MixerVolumeMin;

			mcd.cbStruct       = sizeof(MIXERCONTROLDETAILS);
			mcd.dwControlID    = MixerControlID;
			mcd.cChannels      = 1;
			mcd.cMultipleItems = 0;
			mcd.cbDetails      = sizeof(MIXERCONTROLDETAILS_UNSIGNED);
			mcd.paDetails      = &vol;

			if(mixerSetControlDetails((HMIXEROBJ)hMixer, &mcd, MIXER_OBJECTF_HMIXER | MIXER_SETCONTROLDETAILSF_VALUE) != MMSYSERR_NOERROR){
				if(hMixer != NULL){
					mixerClose(hMixer);
					hMixer = NULL;
				}

				labelMidi->Text = gcnew String("xxx");
				groupBoxMidi->Enabled = false;
			}
		}
		System::Void chkMuteBGM_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (chkMuteBGM->Checked == true) {
				trackBarBGM->Value = 0;
				trackBarBGM->Enabled = false;
				labelBGM->Text = "0%";
			}else{
				trackBarBGM->Value = MTOPTION.BGM_VOLUME / 5;
				trackBarBGM->Enabled = true;
				labelBGM->Text = String::Format("{0,3}%", trackBarBGM->Value * 5);
			}
		 }
		System::Void chkMuteSE_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			if (chkMuteSE->Checked == true) {
				trackBarSE->Value = 0;
				trackBarSE->Enabled = false;
				labelSE->Text = "0%";
			}else{
				trackBarSE->Value = MTOPTION.SE_VOLUME / 5;
				trackBarSE->Enabled = true;
				labelSE->Text = String::Format("{0,3}%", trackBarSE->Value * 5);
			}
		 }
#pragma endregion
#pragma region IP Conversion
		// IP“ü—Íƒ`ƒFƒbƒN
		System::Void IPtextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			if(Net::IPAddress::TryParse(IPtextBox->Text, gcnew Net::IPAddress(0)) == false){
				Convertbutton->Enabled = false;
				AddPortbutton->Enabled = false;
			}
			else{
				Convertbutton->Enabled = true;
				AddPortbutton->Enabled = true;
			}
		}
		// IP‚Ì•ÏŠ·
		System::Void Convertbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			Base64textBox->Text = EncryptionIP(IPtextBox->Text);
			textBoxMTAddr->Text = MTEncryptionIP(IPtextBox->Text);
		}
		// ƒ|[ƒg•t‚«IP‚Ì•ÏŠ·
		System::Void AddPortbutton_Click(System::Object^  sender, System::EventArgs^  e) {
			Base64textBox->Text = String::Format("{0}:{1}", EncryptionIP(IPtextBox->Text), MTOPTION.OPEN_PORT);
			textBoxMTAddr->Text = String::Format("{0}:{1}", MTEncryptionIP(IPtextBox->Text), MTOPTION.OPEN_PORT);
		}
#pragma endregion
#pragma region Misc
		System::Void radioButtonLogRTF_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			// ƒƒO•Û‘¶Œ`Ž® > rtf
			buttonApply->Enabled = true;
		}
		System::Void radioButtonLogTXT_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			// ƒƒO•Û‘¶Œ`Ž® > txt
			buttonApply->Enabled = true;
		}
#pragma endregion
#pragma region Functions
		System::Void OptionForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
			if(hMixer != NULL){
				mixerClose(hMixer);
				hMixer = NULL;
			}

			MTWS.DIALOG_LEFT = this->Location.X;
			MTWS.DIALOG_TOP  = this->Location.Y;

			CloseOption();

			this->Owner->Focus();
		}
#pragma endregion
#pragma region Buttons
		System::Void buttonOK_Click(System::Object^  sender, System::EventArgs^  e) {
			/*if(buttonApply->Enabled){
				buttonApply->Enabled = false;

				SaveOption(false);
			}*/
			SaveOption(true);
			this->Close();
		}

		System::Void buttonApply_Click(System::Object^  sender, System::EventArgs^  e) {
			buttonApply->Enabled = false;

			SaveOption(true);
		}

		System::Void buttonCancel_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Close();
		}

		System::Void ApplyButtonEnable(System::Object^  sender, System::EventArgs^  e) {
			buttonApply->Enabled = true;
		}
#pragma endregion
private: System::Void checkBoxKeywordSound_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 buttonApply->Enabled = true;
		 }
private: System::Void textBoxKeyword_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 buttonApply->Enabled = true;
		 }
};
}