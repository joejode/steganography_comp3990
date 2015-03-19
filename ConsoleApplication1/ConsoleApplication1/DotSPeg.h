#pragma once
#include <msclr\marshal_cppstd.h>
#include <bitset>
#include <string.h>
#include <iostream>
#include <fstream>
#include "Header.h"
#include <string>

using namespace System::IO;
#define MAX 128

namespace ConsoleApplication1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DotSPeg
	/// </summary>
	public ref class DotSPeg : public System::Windows::Forms::Form
	{
	public:
		DotSPeg(void)
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
		~DotSPeg()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  lena;
	protected:

	protected:

	private: System::Windows::Forms::Button^  convertMsg2Bin;
	protected:

	private: System::Windows::Forms::TextBox^  inputSecretMsg;
	private: System::Windows::Forms::Label^  origImgLbl;



	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  secretMsgBin;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  encodeMsg;

	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  exMsgLbl;


	private: System::Windows::Forms::Button^  convExMsg2Str;
	private: System::Windows::Forms::TextBox^  exMsg;

	private: System::Windows::Forms::Label^  exMsgBinLbl;
	private: System::Windows::Forms::Label^  stegoImg;
	private: System::Windows::Forms::TextBox^  exBinMsg;

	private: System::Windows::Forms::PictureBox^  encodedImg;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  nVal;
	private: System::Windows::Forms::ImageList^  imageList1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::PictureBox^  boats;
	private: System::Windows::Forms::PictureBox^  baboon;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;






	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::TextBox^  encodingSuccess;
	private: System::Windows::Forms::TextBox^  encodedNS;


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
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DotSPeg::typeid));
			this->lena = (gcnew System::Windows::Forms::PictureBox());
			this->convertMsg2Bin = (gcnew System::Windows::Forms::Button());
			this->inputSecretMsg = (gcnew System::Windows::Forms::TextBox());
			this->origImgLbl = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->secretMsgBin = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->encodeMsg = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->encodingSuccess = (gcnew System::Windows::Forms::TextBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->nVal = (gcnew System::Windows::Forms::NumericUpDown());
			this->encodedNS = (gcnew System::Windows::Forms::TextBox());
			this->baboon = (gcnew System::Windows::Forms::PictureBox());
			this->boats = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->exMsgLbl = (gcnew System::Windows::Forms::Label());
			this->convExMsg2Str = (gcnew System::Windows::Forms::Button());
			this->exMsg = (gcnew System::Windows::Forms::TextBox());
			this->exMsgBinLbl = (gcnew System::Windows::Forms::Label());
			this->stegoImg = (gcnew System::Windows::Forms::Label());
			this->exBinMsg = (gcnew System::Windows::Forms::TextBox());
			this->encodedImg = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lena))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nVal))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->baboon))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boats))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->encodedImg))->BeginInit();
			this->SuspendLayout();
			// 
			// lena
			// 
			this->lena->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"lena.Image")));
			this->lena->Location = System::Drawing::Point(22, 63);
			this->lena->Name = L"lena";
			this->lena->Size = System::Drawing::Size(256, 256);
			this->lena->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->lena->TabIndex = 0;
			this->lena->TabStop = false;
			this->lena->Visible = false;
			// 
			// convertMsg2Bin
			// 
			this->convertMsg2Bin->Location = System::Drawing::Point(569, 163);
			this->convertMsg2Bin->Name = L"convertMsg2Bin";
			this->convertMsg2Bin->Size = System::Drawing::Size(75, 38);
			this->convertMsg2Bin->TabIndex = 1;
			this->convertMsg2Bin->Text = L"Convert to Binary";
			this->convertMsg2Bin->UseVisualStyleBackColor = true;
			this->convertMsg2Bin->Click += gcnew System::EventHandler(this, &DotSPeg::convertMsg2Bin_Click);
			// 
			// inputSecretMsg
			// 
			this->inputSecretMsg->Location = System::Drawing::Point(343, 154);
			this->inputSecretMsg->Multiline = true;
			this->inputSecretMsg->Name = L"inputSecretMsg";
			this->inputSecretMsg->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->inputSecretMsg->Size = System::Drawing::Size(205, 55);
			this->inputSecretMsg->TabIndex = 2;
			this->inputSecretMsg->TextChanged += gcnew System::EventHandler(this, &DotSPeg::inputSecretMsg_TextChanged);
			// 
			// origImgLbl
			// 
			this->origImgLbl->AutoSize = true;
			this->origImgLbl->Location = System::Drawing::Point(95, 18);
			this->origImgLbl->Name = L"origImgLbl";
			this->origImgLbl->Size = System::Drawing::Size(74, 13);
			this->origImgLbl->TabIndex = 3;
			this->origImgLbl->Text = L"Original Image";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(340, 139);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Input Secret Message:";
			// 
			// secretMsgBin
			// 
			this->secretMsgBin->Location = System::Drawing::Point(343, 229);
			this->secretMsgBin->Multiline = true;
			this->secretMsgBin->Name = L"secretMsgBin";
			this->secretMsgBin->ReadOnly = true;
			this->secretMsgBin->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->secretMsgBin->Size = System::Drawing::Size(205, 90);
			this->secretMsgBin->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(340, 212);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Secret Message in Binary:";
			// 
			// encodeMsg
			// 
			this->encodeMsg->Location = System::Drawing::Point(569, 257);
			this->encodeMsg->Name = L"encodeMsg";
			this->encodeMsg->Size = System::Drawing::Size(75, 37);
			this->encodeMsg->TabIndex = 7;
			this->encodeMsg->Text = L"Encode Message";
			this->encodeMsg->UseVisualStyleBackColor = true;
			this->encodeMsg->Click += gcnew System::EventHandler(this, &DotSPeg::encodeMsg_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(3, 1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(687, 357);
			this->tabControl1->TabIndex = 17;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->encodingSuccess);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->nVal);
			this->tabPage1->Controls->Add(this->encodeMsg);
			this->tabPage1->Controls->Add(this->secretMsgBin);
			this->tabPage1->Controls->Add(this->convertMsg2Bin);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->inputSecretMsg);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->origImgLbl);
			this->tabPage1->Controls->Add(this->encodedNS);
			this->tabPage1->Controls->Add(this->baboon);
			this->tabPage1->Controls->Add(this->boats);
			this->tabPage1->Controls->Add(this->lena);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(679, 331);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Encode Message";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// encodingSuccess
			// 
			this->encodingSuccess->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->encodingSuccess->Location = System::Drawing::Point(343, 18);
			this->encodingSuccess->Multiline = true;
			this->encodingSuccess->Name = L"encodingSuccess";
			this->encodingSuccess->ReadOnly = true;
			this->encodingSuccess->Size = System::Drawing::Size(294, 32);
			this->encodingSuccess->TabIndex = 13;
			this->encodingSuccess->Text = L"Encoding Successful!";
			this->encodingSuccess->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->encodingSuccess->Visible = false;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Boats", L"Baboon", L"Lena" });
			this->comboBox1->Location = System::Drawing::Point(22, 39);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(256, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Text = L"Choose Image";
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &DotSPeg::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(340, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(122, 13);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Select Encoding Option:";
			// 
			// nVal
			// 
			this->nVal->Location = System::Drawing::Point(468, 87);
			this->nVal->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			this->nVal->Name = L"nVal";
			this->nVal->Size = System::Drawing::Size(120, 20);
			this->nVal->TabIndex = 8;
			this->nVal->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nVal->ValueChanged += gcnew System::EventHandler(this, &DotSPeg::nVal_ValueChanged);
			// 
			// encodedNS
			// 
			this->encodedNS->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->encodedNS->Location = System::Drawing::Point(343, 18);
			this->encodedNS->Multiline = true;
			this->encodedNS->Name = L"encodedNS";
			this->encodedNS->ReadOnly = true;
			this->encodedNS->Size = System::Drawing::Size(294, 32);
			this->encodedNS->TabIndex = 14;
			this->encodedNS->Text = L"Encoding Not Successful.";
			this->encodedNS->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->encodedNS->Visible = false;
			// 
			// baboon
			// 
			this->baboon->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"baboon.Image")));
			this->baboon->Location = System::Drawing::Point(22, 63);
			this->baboon->Name = L"baboon";
			this->baboon->Size = System::Drawing::Size(256, 256);
			this->baboon->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->baboon->TabIndex = 12;
			this->baboon->TabStop = false;
			this->baboon->Visible = false;
			// 
			// boats
			// 
			this->boats->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"boats.Image")));
			this->boats->Location = System::Drawing::Point(22, 63);
			this->boats->Name = L"boats";
			this->boats->Size = System::Drawing::Size(256, 256);
			this->boats->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->boats->TabIndex = 11;
			this->boats->TabStop = false;
			this->boats->Visible = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->exMsgLbl);
			this->tabPage2->Controls->Add(this->convExMsg2Str);
			this->tabPage2->Controls->Add(this->exMsg);
			this->tabPage2->Controls->Add(this->exMsgBinLbl);
			this->tabPage2->Controls->Add(this->stegoImg);
			this->tabPage2->Controls->Add(this->exBinMsg);
			this->tabPage2->Controls->Add(this->encodedImg);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(679, 331);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Decode Message";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// exMsgLbl
			// 
			this->exMsgLbl->AutoSize = true;
			this->exMsgLbl->Location = System::Drawing::Point(397, 212);
			this->exMsgLbl->Name = L"exMsgLbl";
			this->exMsgLbl->Size = System::Drawing::Size(101, 13);
			this->exMsgLbl->TabIndex = 20;
			this->exMsgLbl->Text = L"Extracted Message:";
			// 
			// convExMsg2Str
			// 
			this->convExMsg2Str->Location = System::Drawing::Point(297, 228);
			this->convExMsg2Str->Name = L"convExMsg2Str";
			this->convExMsg2Str->Size = System::Drawing::Size(75, 55);
			this->convExMsg2Str->TabIndex = 9;
			this->convExMsg2Str->Text = L"Convert from Binary";
			this->convExMsg2Str->UseVisualStyleBackColor = true;
			this->convExMsg2Str->Click += gcnew System::EventHandler(this, &DotSPeg::convExMsg2Str_Click);
			// 
			// exMsg
			// 
			this->exMsg->Location = System::Drawing::Point(400, 228);
			this->exMsg->Multiline = true;
			this->exMsg->Name = L"exMsg";
			this->exMsg->ReadOnly = true;
			this->exMsg->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->exMsg->Size = System::Drawing::Size(205, 90);
			this->exMsg->TabIndex = 19;
			// 
			// exMsgBinLbl
			// 
			this->exMsgBinLbl->AutoSize = true;
			this->exMsgBinLbl->Location = System::Drawing::Point(397, 127);
			this->exMsgBinLbl->Name = L"exMsgBinLbl";
			this->exMsgBinLbl->Size = System::Drawing::Size(144, 13);
			this->exMsgBinLbl->TabIndex = 18;
			this->exMsgBinLbl->Text = L"Extracted Message in Binary:";
			// 
			// stegoImg
			// 
			this->stegoImg->AutoSize = true;
			this->stegoImg->Location = System::Drawing::Point(95, 34);
			this->stegoImg->Name = L"stegoImg";
			this->stegoImg->Size = System::Drawing::Size(82, 13);
			this->stegoImg->TabIndex = 17;
			this->stegoImg->Text = L"Encoded Image";
			// 
			// exBinMsg
			// 
			this->exBinMsg->Location = System::Drawing::Point(400, 143);
			this->exBinMsg->MaxLength = 33767;
			this->exBinMsg->Multiline = true;
			this->exBinMsg->Name = L"exBinMsg";
			this->exBinMsg->ReadOnly = true;
			this->exBinMsg->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->exBinMsg->Size = System::Drawing::Size(205, 55);
			this->exBinMsg->TabIndex = 16;
			// 
			// encodedImg
			// 
			this->encodedImg->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"encodedImg.Image")));
			this->encodedImg->Location = System::Drawing::Point(21, 62);
			this->encodedImg->Name = L"encodedImg";
			this->encodedImg->Size = System::Drawing::Size(256, 256);
			this->encodedImg->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->encodedImg->TabIndex = 15;
			this->encodedImg->TabStop = false;
			this->encodedImg->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(297, 143);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 55);
			this->button1->TabIndex = 21;
			this->button1->Text = L"Decode Secret Message";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &DotSPeg::button1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"boat.png");
			this->imageList1->Images->SetKeyName(1, L"couple.png");
			this->imageList1->Images->SetKeyName(2, L"lena512.bmp");
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"EncodedImage";
			this->openFileDialog1->Filter = L" (*.bmp)|*bmp|(*.gif)|*.gif|(*.jpg)|*.jpg|(*tif)|*.tif|(*.png)|*.png";
			this->openFileDialog1->InitialDirectory = L"S\"C:\\\\\";";
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->Filter = L"(*.bmp;*.gif;*.jpg;*.tif;*.png|*.bmp;*.gif;*.jpg;*.tif;*.png)";
			// 
			// DotSPeg
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(691, 360);
			this->Controls->Add(this->tabControl1);
			this->Name = L"DotSPeg";
			this->Text = L"DotSPeg";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lena))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nVal))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->baboon))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boats))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->encodedImg))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		//Variables used :
		int fIndex = 0;
		String^ vq;
		FILE *vqIndex;
		int N,M=4;
		String^ encodedStream;
		String^ secretstream;
		String^ exCodeStream;
		String^ exSecretStream;

		void encodeMessage(int vqVals[MAX][MAX])
		{
			char bVal[10];
			int  x, d, u, l, t, secretInx = 0;
			char b1, b2, b3, b4;
			int g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11, g12, g13;
			String^ outStream;
			String^ secretMsgStream = secretstream;
			std::string secretMsg = msclr::interop::marshal_as<std::string>(secretMsgStream);

			for (int i = 0; i < MAX; i++)
			{
				getBin(vqVals[0][i], 8, bVal);
				outStream += gcnew String(bVal);
			}

			for (int j = 1; j < MAX; j++)
			{

				getBin(vqVals[j][0], 8, bVal);
				outStream += gcnew String(bVal);
			}

			for (int i = 1; i < MAX; i++)
			{
				for (int j = 1; j < MAX; j++)
				{
					x = vqVals[i][j];
					u = vqVals[i - 1][j];
					l = vqVals[i][j - 1];
					t = vqVals[i - 1][j - 1];
					g1 = (u + l + t) / 3;
					g2 = (u + t) / 2;
					g3 = (l + t) / 2;
					g4 = (u + l) / 2;
					g5 = (g2 + g3 + g4) / 3;
					g6 = (u + g2) / 2;
					g7 = (g2 + g4) / 2;
					g8 = (u + g4) / 2;
					g9 = (g6 + g7 + g8) / 3;
					g10 = (l + g3) / 2;
					g11 = (g3 + g4) / 2;
					g12 = (l + g4) / 2;
					g13 = (g10 + g11 + g12) / 3;

					if (N == 1)
					{
						b1 = secretMsg.at(secretInx++);

						if (b1 == '0')
						{
							d = u - x;
						}
						else if (b1 == '1')
						{
							d = l - x;
						}

					}

					else if (N == 2)
					{
						b1 = secretMsg.at(secretInx++);
						b2 = secretMsg.at(secretInx++);

						if (b1 == '0' && b2 == '0')
						{
							d = u - x;
						}
						else if (b1 == '0' && b2 == '1')
						{
							d = l - x;

						}
						else if (b1 == '1' && b2 == '0')
						{
							d = t - x;

						}
						else if (b1 == '1' && b2 == '1')
						{
							d = g1 - x;

						}
					}
					else if (N == 3)
					{
						b1 = secretMsg.at(secretInx++);
						b2 = secretMsg.at(secretInx++);
						b3 = secretMsg.at(secretInx++);

						if (b1 == '0' && b2 == '0' && b3 == '0')
						{
							d = u - x;
						}
						else if (b1 == '0' && b2 == '0' && b3 == '1')
						{
							d = l - x;
						}
						else if (b1 == '0' && b2 == '1' && b3 == '0')
						{
							d = t - x;
						}
						else if (b1 == '0' && b2 == '1' && b3 == '1')
						{
							d = g1 - x;
						}
						else if (b1 == '1' && b2 == '0' && b3 == '0')
						{
							d = g2 - x;
						}
						else if (b1 == '1' && b2 == '0' && b3 == '1')
						{
							d = g3 - x;
						}
						else if (b1 == '1' && b2 == '1' && b3 == '0')
						{
							d = g4 - x;
						}
						else if (b1 == '1' && b2 == '1' && b3 == '1')
						{
							d = g5 - x;
						}
					}
					else if (N == 4)
					{
						b1 = secretMsg.at(secretInx++);
						b2 = secretMsg.at(secretInx++);
						b3 = secretMsg.at(secretInx++);
						b4 = secretMsg.at(secretInx++);

						if (b1 == '0' && b2 == '0' && b3 == '0' && b4 == '0')
						{
							d = u - x;
						}
						else if (b1 == '0' && b2 == '0' && b3 == '0' && b4 == '1')
						{
							d = l - x;
						}
						else if (b1 == '0' && b2 == '0' && b3 == '1' && b4 == '0')
						{
							d = t - x;

						}
						else if (b1 == '0' && b2 == '0' && b3 == '1' && b4 == '1')
						{
							d = g1 - x;
						}
						else if (b1 == '0' && b2 == '1' && b3 == '0' && b4 == '0')
						{
							d = g2 - x;
						}
						else if (b1 == '0' && b2 == '1' && b3 == '0' && b4 == '1')
						{
							d = g3 - x;
						}
						else if (b1 == '0' && b2 == '1' && b3 == '1' && b4 == '0')
						{
							d = g4 - x;
						}
						else if (b1 == '0' && b2 == '1' && b3 == '1' && b4 == '1')
						{
							d = g5 - x;
						}
						else if (b1 == '1' && b2 == '0' && b3 == '0' && b4 == '0')
						{
							d = g6 - x;
						}
						else if (b1 == '1' && b2 == '0' && b3 == '0' && b4 == '1')
						{
							d = g7 - x;
						}
						else if (b1 == '1' && b2 == '0' && b3 == '1' && b4 == '0')
						{
							d = g8 - x;
						}
						else if (b1 == '1' && b2 == '0' && b3 == '1' && b4 == '1')
						{
							d = g9 - x;
						}
						else if (b1 == '1' && b2 == '1' && b3 == '0' && b4 == '0')
						{
							d = g10 - x;
						}
						else if (b1 == '1' && b2 == '1' && b3 == '0' && b4 == '1')
						{
							d = g11 - x;
						}
						else if (b1 == '1' && b2 == '1' && b3 == '1' && b4 == '0')
						{
							d = g12 - x;
						}
						else if (b1 == '1' && b2 == '1' && b3 == '1' && b4 == '1')
						{
							d = g13 - x;
						}
					}

					int m = M;
					std::string caseBits;

					if (N == 1)
					{
						caseBits += b1;
					}
					else if (N == 2)
					{
						caseBits += b1;
						caseBits += b2;
					}
					else if (N == 3)
					{
						caseBits += b1;
						caseBits += b2;
						caseBits += b3;
					}
					else if (N == 4)
					{
						caseBits += b1;
						caseBits += b2;
						caseBits += b3;
						caseBits += b4;
					}

					if (d == 0)
					{						
						caseBits += '0';
						caseBits += '0';
						outStream += gcnew String(caseBits.c_str());
					}
					else if (abs(d) > pow(2, m) - 1)
					{
						caseBits += '0';
						caseBits += '1';
						outStream += gcnew String(caseBits.c_str());

						getBin(x, 8, bVal);
						outStream += gcnew String(bVal);

					}
					else if (-(pow(2, m) - 1) <= d && d < 0)
					{
						caseBits += '1';
						caseBits += '0';
						outStream += gcnew String(caseBits.c_str());

						getBin(abs(d), m, bVal);
						outStream += gcnew String(bVal);
					}
					else if (0 < d && d <= (pow(2, m) - 1))
					{
						caseBits += '1';
						caseBits += '1';
						outStream += gcnew String(caseBits.c_str());

						getBin(d, m, bVal);
						outStream += gcnew String(bVal);
					}
				}
			}
			String^ codeStream = outStream;
			encodedStream = codeStream;
		}

		void decodeMessage()
		{
			int s = 0, binval[8], decVal = 0;
			char c1, c2, b1, b2, b3, b4;
			String^ codeStream = encodedStream;
			std::string exSecretMsg;
			std::string encodedBinStream = msclr::interop::marshal_as<std::string>(codeStream);
			int exVqIndex[MAX][MAX];

			//Extract Seed Area
			int k = 0, binSz = 8;
			for (int i = 0; i < MAX; i++)
			{

				for (int indx = 7; indx >= 0; indx--)
				{
					if (encodedBinStream.at(k) == '1')
					{
						binval[indx] = 1;
					}
					else if (encodedBinStream.at(k) == '0')
					{
						binval[indx] = 0;
					}
					k++;
				}
				decVal = getDec(binval, binSz);//TODO convert from bin -> dec and insert into vq index
				exVqIndex[0][i] = decVal;
			}

			for (int j = 1; j < MAX; j++)
			{
				for (int indx = 7; indx >= 0; indx--)
				{
					if (encodedBinStream.at(k) == '1')
					{
						binval[indx] = 1;
					}
					else if (encodedBinStream.at(k) == '0')
					{
						binval[indx] = 0;
					}
					k++;
				}
				decVal = getDec(binval, binSz);//TODO convert from bin -> dec and insert into vq index
				exVqIndex[j][0] = decVal;
			}

			int x, u, l, t, g1, g2, g3, g4, g5, g6, g7, g8, g9, g10, g11, g12, g13, d;

			for (int i = 1; i < MAX; i++)
			{
				for (int j = 1; j < MAX; j++)
				{
					u = exVqIndex[i - 1][j];
					l = exVqIndex[i][j - 1];
					t = exVqIndex[i - 1][j - 1];
					g1 = (u + l + t) / 3;
					g2 = (u + t) / 2;
					g3 = (l + t) / 2;
					g4 = (u + l) / 2;
					g5 = (g2 + g3 + g4) / 3;
					g6 = (u + g2) / 2;
					g7 = (g2 + g4) / 2;
					g8 = (u + g4) / 2;
					g9 = (g6 + g7 + g8) / 3;
					g10 = (l + g3) / 2;
					g11 = (g3 + g4) / 2;
					g12 = (l + g4) / 2;
					g13 = (g10 + g11 + g12) / 3;

					//Extract encoded message  
					if (N == 1)
					{
						b1 = encodedBinStream.at(k++);
						exSecretMsg += b1;
					}
					else if (N == 2)
					{
						b1 = encodedBinStream.at(k++);
						b2 = encodedBinStream.at(k++);
						exSecretMsg += b1;
						exSecretMsg += b2;
					}
					else if (N == 3)
					{
						b1 = encodedBinStream.at(k++);
						b2 = encodedBinStream.at(k++);
						b3 = encodedBinStream.at(k++);
						exSecretMsg += b1;
						exSecretMsg += b2;
						exSecretMsg += b3;
					}
					else if (N == 4)
					{
						b1 = encodedBinStream.at(k++);
						b2 = encodedBinStream.at(k++);
						b3 = encodedBinStream.at(k++);
						b4 = encodedBinStream.at(k++);
						exSecretMsg += b1;
						exSecretMsg += b2;
						exSecretMsg += b3;
						exSecretMsg += b4;
					}

					c1 = encodedBinStream.at(k++);
					c2 = encodedBinStream.at(k++);
						

					if (c1 == '0' && c2 == '0')
					{
						d = 0;

						if (N == 1)
						{
							if (b1 == '0')
							{
								x = u - d;
							}
							else if (b1 == '1')
							{
								x = l - d;
							}
						}
						else if (N == 2)
						{
							if (b1 == '0' &&b2 == '0')
							{
								x = u - d;
							}
							else if (b1 == '0'&& b2 == '1')
							{
								x = l - d;
							}
							else if (b1 == '1'&& b2 == '0')
							{
								x = t - d;
							}
							else if (b1 == '1'&& b2 == '1')
							{
								x = g1 - d;
							}
						}
						else if (N == 3)
						{
							if (b1 == '0' && b2 == '0' && b3 == '0')
							{
								x = u - d;
							}
							else if (b1 == '0' && b2 == '0' && b3 == '1')
							{
								x = l - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '0')
							{
								x = t - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '1')
							{
								x = g1 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '0')
							{
								x = g2 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '1')
							{
								x = g3 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '0')
							{
								x = g4 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '1')
							{
								x = g5 - d;
							}
						}
						else if (N == 4)
						{
							if (b1 == '0' && b2 == '0' && b3 == '0' && b4 == '0')
							{
								x = u - d;
							}
							else if (b1 == '0' && b2 == '0' && b3 == '0' && b4 == '1')
							{
								x = l - d;
							}
							else if (b1 == '0' && b2 == '0' && b3 == '1' && b4 == '0')
							{
								x = t - d;
							}
							else if (b1 == '0' && b2 == '0' && b3 == '1' && b4 == '1')
							{
								x = g1 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '0' && b4 == '0')
							{
								x = g2 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '0' && b4 == '1')
							{
								x = g3 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '1' && b4 == '0')
							{
								x = g4 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '1' && b4 == '1')
							{
								x = g5 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '0' && b4 == '0')
							{
								x = g6 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '0' && b4 == '1')
							{
								x = g7 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '1' && b4 == '0')
							{
								x = g8 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '1' && b4 == '1')
							{
								x = g9 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '0' && b4 == '0')
							{
								x = g10 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '0' && b4 == '1')
							{
								x = g11 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '1' && b4 == '0')
							{
								x = g12 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '1' && b4 == '1')
							{
								x = g13 - d;
							}
						}
						exVqIndex[i][j] = x;
					}
					else if (c1 == '0' && c2 == '1')
					{
						int de;
						char encodedBit;
						binSz = 8;
						for (int indx = binSz - 1; indx >= 0; indx--)
						{
							encodedBit = encodedBinStream.at(k);
							if (encodedBit == '1')
							{
								binval[indx] = 1;
							}
							else if (encodedBit == '0')
							{
								binval[indx] = 0;
							}
							k++;
						}
						de = getDec(binval, binSz);
						x = de;
						exVqIndex[i][j] = x;
					}
					else if (c1 == '1' && c2 == '0')
					{
						binSz = M;
						for (int indx = binSz - 1; indx >= 0; indx--)
						{
							if (encodedBinStream.at(k) == '1')
							{
								binval[indx] = 1;
							}
							else if (encodedBinStream.at(k) == '0')
							{
								binval[indx] = 0;
							}
							k++;
						}
						d = getDec(binval, binSz);
						d = -d;

						if (N == 1)
						{
							if (b1 == '0')
							{
								x = u - d;
							}
							else if (b1 == '1')
							{
								x = l - d;
							}
						}
						else if (N == 2)
						{
							if (b1 == '0' && b2 == '0')
							{
								x = u - d;
							}
							else if (b1 == '0'&& b2 == '1')
							{
								x = l - d;
							}
							else if (b1 == '1'&& b2 == '0')
							{
								x = t - d;
							}
							else if (b1 == '1'&& b2 == '1')
							{
								x = g1 - d;
							}
						}
						else if (N == 3)
						{
							if (b1 == '0' && b2 == '0' && b3 == '0')
							{
								x = u - d;
							}
							else if (b1 == '0'&& b2 == '0' && b3 == '1')
							{
								x = l - d;
							}
							else if (b1 == '0'&& b2 == '1' && b3 == '0')
							{
								x = t - d;
							}
							else if (b1 == '0'&& b2 == '1' && b3 == '1')
							{
								x = g1 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '0')
							{
								x = g2 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '1')
							{
								x = g3 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '0')
							{
								x = g4 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '1')
							{
								x = g5 - d;
							}
						}
						else if (N == 4)
						{
							if (b1 == '0' && b2 == '0' && b3 == '0' && b4 == '0')
							{
								x = u - d;
							}
							else if (b1 == '0' && b2 == '0' && b3 == '0' && b4 == '1')
							{
								x = l - d;
							}
							else if (b1 == '0' && b2 == '0' && b3 == '1' && b4 == '0')
							{
								x = t - d;
							}
							else if (b1 == '0' && b2 == '0' && b3 == '1' && b4 == '1')
							{
								x = g1 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '0' && b4 == '0')
							{
								x = g2 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '0' && b4 == '1')
							{
								x = g3 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '1' && b4 == '0')
							{
								x = g4 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '1' && b4 == '1')
							{
								x = g5 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '0' && b4 == '0')
							{
								x = g6 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '0' && b4 == '1')
							{
								x = g7 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '1' && b4 == '0')
							{
								x = g8 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '1' && b4 == '1')
							{
								x = g9 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '0' && b4 == '0')
							{
								x = g10 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '0' && b4 == '1')
							{
								x = g11 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '1' && b4 == '0')
							{
								x = g12 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '1' && b4 == '1')
							{
								x = g13 - d;
							}
						}

						exVqIndex[i][j] = x;
					}
					else if (c1 == '1' && c2 == '1')
					{
						binSz = M;
						for (int indx = binSz - 1; indx >= 0; indx--)
						{
							if (encodedBinStream.at(k) == '1')
							{
								binval[indx] = 1;
							}
							else if (encodedBinStream.at(k) == '0')
							{
								binval[indx] = 0;
							}
							k++;
						}
						d = getDec(binval, binSz);

						if (N == 1)
						{
							if (b1 == '0')
							{
								x = u - d;
							}
							else if (b1 == '1')
							{
								x = l - d;
							}
						}
						else if (N == 2)
						{
							if (b1 == '0' && b2 == '0')
							{
								x = u - d;
							}
							else if (b1 == '0'&& b2 == '1')
							{
								x = l - d;
							}
							else if (b1 == '1'&& b2 == '0')
							{
								x = t - d;
							}
							else if (b1 == '1'&& b2 == '1')
							{
								x = g1 - d;
							}
						}
						else if (N == 3)
						{
							if (b1 == '0' && b2 == '0' && b3 == '0')
							{
								x = u - d;
							}
							else if (b1 == '0'&& b2 == '0' && b3 == '1')
							{
								x = l - d;
							}
							else if (b1 == '0'&& b2 == '1' && b3 == '0')
							{
								x = t - d;
							}
							else if (b1 == '0'&& b2 == '1' && b3 == '1')
							{
								x = g1 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '0')
							{
								x = g2 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '1')
							{
								x = g3 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '0')
							{
								x = g4 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '1')
							{
								x = g5 - d;
							}
						}
						else if (N == 4)
						{
							if (b1 == '0' && b2 == '0' && b3 == '0' && b4 == '0')
							{
								x = u - d;
							}
							else if (b1 == '0' && b2 == '0' && b3 == '0' && b4 == '1')
							{
								x = l - d;
							}
							else if (b1 == '0' && b2 == '0' && b3 == '1' && b4 == '0')
							{
								x = t - d;
							}
							else if (b1 == '0' && b2 == '0' && b3 == '1' && b4 == '1')
							{
								x = g1 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '0' && b4 == '0')
							{
								x = g2 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '0' && b4 == '1')
							{
								x = g3 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '1' && b4 == '0')
							{
								x = g4 - d;
							}
							else if (b1 == '0' && b2 == '1' && b3 == '1' && b4 == '1')
							{
								x = g5 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '0' && b4 == '0')
							{
								x = g6 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '0' && b4 == '1')
							{
								x = g7 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '1' && b4 == '0')
							{
								x = g8 - d;
							}
							else if (b1 == '1' && b2 == '0' && b3 == '1' && b4 == '1')
							{
								x = g9 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '0' && b4 == '0')
							{
								x = g10 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '0' && b4 == '1')
							{
								x = g11 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '1' && b4 == '0')
							{
								x = g12 - d;
							}
							else if (b1 == '1' && b2 == '1' && b3 == '1' && b4 == '1')
							{
								x = g13 - d;
							}
						}

						exVqIndex[i][j] = x;
					}
				}
			}

			String^ exSecretMsgOut = gcnew String(exSecretMsg.c_str());
			exSecretStream = exSecretMsgOut;
		}

private: System::Void convertMsg2Bin_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ msg;
	msg = inputSecretMsg->Text;
	N = static_cast<int>(nVal->Value);
	std::string msgStr = msclr::interop::marshal_as<std::string>(msg);

	std::string msgBinVal;
	for (std::size_t i = 0; i < msgStr.size(); ++i)
	{
		std::bitset<7> b(msgStr.c_str()[i]);
		msgBinVal += b.to_string();
	}

	String^ binOut = gcnew String(msgBinVal.c_str());
	secretMsgBin->Text = binOut;
	secretstream = binOut;
	std::string delim = "|";

	int maxSecretSize = ((MAX - 1)*(MAX - 1))*N,i=0;
	if (secretstream->Length < maxSecretSize)
	{
		std::bitset<7> b(delim[0]);
		msgBinVal += b.to_string();
		for (i = msgBinVal.length(); i <= maxSecretSize; i++)
		{
			msgBinVal += '0';
		}

		secretstream = gcnew String(msgBinVal.c_str());
	}

}

private: System::Void convExMsg2Str_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ binMsg;
	unsigned k = 0;
	int binVal[7];
	int decVal;
	std::string msg;

	binMsg = exBinMsg->Text;
	std::string binMsgStr = msclr::interop::marshal_as<std::string>(binMsg);
	while (k < binMsgStr.size())
	{
		for (int bitCnt = 6; bitCnt >= 0; bitCnt--)
		{
			if (binMsgStr.at(k) == '1')
			{
				binVal[bitCnt] = 1;
			}
			else if (binMsgStr.at(k) == '0')
			{
				binVal[bitCnt] = 0;
			}
			k++;
		}
		

		decVal = getDec(binVal,7);
		char letter = decVal;
		if (letter == '|')
		{
			break;
		}
		msg += letter;
	}

	String ^msgOut = gcnew String(msg.c_str());
	exMsg->Text = msgOut;
}

private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	encodingSuccess->Visible = false;
	exBinMsg->Text = " ";
	exMsg->Text = " ";
	//std::string vqs[] = {
	//	"256\\ITtxt\\LenaIT.txt",
	//	"256\\ITtxt\\PeppersIT.txt",
	//	"256\\ITtxt\\BaboonIT.txt",
	//	"256\\ITtxt\\BoatsIT.txt",
	//	"256\\ITtxt\\JetF16IT.txt",
	//	"256\\ITtxt\\TiffanyIT.txt",
	//	"256\\ITtxt\\GoldHillIT.txt"
	//};

	if (comboBox1->SelectedItem == "Boats")
	{
		boats->Visible = true;
		encodedImg->Image = boats->Image;
		baboon->Visible = false;
		lena->Visible = false;
		 vq = "256\\ITtxt\\BoatsIT.txt";

	}
	if (comboBox1->SelectedItem == "Baboon")
	{
		boats->Visible = false;
		baboon->Visible = true;
		encodedImg->Image = baboon->Image;
		lena->Visible = false;
		vq = "256\\ITtxt\\BaboonIT.txt";
	}
	if (comboBox1->SelectedItem == "Lena")
	{
		boats->Visible = false;
		baboon->Visible = false;
		encodedImg->Image = lena->Image;
		lena->Visible = true;
		vq = "256\\ITtxt\\LenaIT.txt";
	}

	encodedImg->Visible = true;
}

private: System::Void loadSImg_Click(System::Object^  sender, System::EventArgs^  e) {
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		encodedImg->Image = Image::FromFile(openFileDialog1->FileName);
		//sImgFileName->Text = openFileDialog1->FileName;
		encodedImg->Visible = true;
	}
}

private: System::Void encodeMsg_Click(System::Object^  sender, System::EventArgs^  e) {
	N = static_cast<int>(nVal->Value);
	
	String^ line;
	int arr[MAX][MAX], i = 0, j = 0;

	try
	{
		StreamReader^ indexFile = File::OpenText(vq);

		while ((line = indexFile->ReadLine()) != nullptr)
		{
			array<String^>^num = line->Split(' ', '\n');
			for (j = 0; j < MAX; j++)
			{
				arr[i][j] = int::Parse(num[j]);

			}
			i++;
		}

		indexFile->Close();
	}
	catch (Exception^ e)
	{

	}
	encodeMessage(arr);
	encodingSuccess->Visible = true;
}

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	
	decodeMessage();

	exBinMsg->Text = exSecretStream;
	int h = exSecretStream->Length;
}

private: System::Void inputSecretMsg_TextChanged(System::Object^  sender, System::EventArgs^  e) {

	encodingSuccess->Visible = false;
	exBinMsg->Text = " ";
	exMsg->Text = " ";
}
private: System::Void nVal_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	encodingSuccess->Visible = false;
	exBinMsg->Text = " ";
	exMsg->Text = " ";
}

};
}
