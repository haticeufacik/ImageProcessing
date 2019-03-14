#pragma once
#pragma once
#include <Windows.h>
#include <atlstr.h>
#include "imge.h"
#include <math.h>

namespace ÝmageProcessing {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  openToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private:
		/// <summary>
		/// Required designer variable.

		BYTE * Buffer, *Raw_Intensity; 
		unsigned int Width, Height;
		long Size;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;


	private: System::Windows::Forms::PictureBox^  pictureBox4;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox5;

		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1302, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->openToolStripMenuItem });
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(103, 22);
			this->openToolStripMenuItem->Text = L"Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::openToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(22, 298);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"label1";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(13, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(227, 251);  
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(246, 27);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(234, 251);
			this->pictureBox2->TabIndex = 2;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(486, 27);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(233, 251);
			this->pictureBox3->TabIndex = 3;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(725, 27);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(250, 251);
			this->pictureBox4->TabIndex = 6;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Click += gcnew System::EventHandler(this, &MyForm::pictureBox4_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(981, 27);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(230, 251);
			this->pictureBox5->TabIndex = 9;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Click += gcnew System::EventHandler(this, &MyForm::pictureBox5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1302, 546);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		LPCTSTR input;
		CString str;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			str = openFileDialog1->FileName;
			input = (LPCTSTR)str;
			//BMP image okumak
			Buffer = LoadBMP(Width, Height, Size, input);
			Raw_Intensity = ConvertBMPToIntensity(Buffer, Width, Height);
			pictureBox1->Width = Width;
			pictureBox1->Height = Height;

		

			this->pictureBox2->Location = System::Drawing::Point(pictureBox1->Left + pictureBox1->Width + 10, 34);

			unsigned int row, column;
			Bitmap^ surface = gcnew Bitmap(pictureBox2->Width, pictureBox2->Height);
			pictureBox2->Image = surface;
			Color c;
			for (row = 0; row < Height; row++)
				for (column = 0; column < Width; column++) {
					c = Color::FromArgb(Raw_Intensity[row*Width + column], Raw_Intensity[row*Width + column], Raw_Intensity[row*Width + column]);
					surface->SetPixel(column, row, c);
				}

			this->pictureBox1->ImageLocation = openFileDialog1->FileName;

			
			
			// 1. MASK GEZDÝRME (1,2,1, 0,0,0, -1,-2,-1)
			int *SumMask1 = new int[(Width-2)*(Height-2)];
			
			for (int i = 0; i < (Width - 2)*(Height - 2); i++)
			{
				SumMask1[i] = 0;
			}
			int j = 0;
			/*(Width*Height-1)=> SOn piksel deðerim
			-2*Width-2 dememizin sebebi benim maskenin ilk piksel
			deðeri resimdeki son olarak o piksel deðerine kadar gelebilmesi*/
			for (int i = 0; i <=( (Width*Height-1)-2*Width-2); i++)
			{
				//Resimde maske sað kenara geldiðinde aþaðýya inmesini saðlar.
				if (((i + 2 * Width + 2)+1) % Width == 0) 
				{
					//Maskeyi gezdirme iþleminde maskenin duracaðý son konum için;
					if (i == ((Width*Height - 1) - (2 * Width) - 2))
					{

						SumMask1[j] = (Raw_Intensity[i] * 1 + Raw_Intensity[i + 1] * 2 + Raw_Intensity[i + 2] * 1 +
							//Raw_Intensity[i + Width] * 0 + Raw_Intensity[i + Width + 1] * 0 + Raw_Intensity[i + Width + 2] * 0 +
							(Raw_Intensity[i + (2 * Width)] * (-1)) + (Raw_Intensity[i + (2 * Width) + 1] * (-2)) + (Raw_Intensity[i + (2 * Width) + 2] * (-1)));

						break;
						
					}
					else
					{
						SumMask1[j] = (Raw_Intensity[i] * 1 + Raw_Intensity[i + 1] * 2 + Raw_Intensity[i + 2] * 1 +
							//Raw_Intensity[i + Width] * 0 + Raw_Intensity[i + Width + 1] * 0 + Raw_Intensity[i + Width + 2] * 0 +
							(Raw_Intensity[i + (2 * Width)] * (-1)) + (Raw_Intensity[i + (2 * Width) + 1] * (-2)) + (Raw_Intensity[i + (2 * Width) + 2] * (-1)));

						
						i += 2; //maskenin aþaðýya inmesini saðlýyor.
						j++;
					}

				}
				else // Kenarlardan taþma olasýlýðý yoksa iþlemlere devam eder.
				{

					SumMask1[j] = (Raw_Intensity[i] * 1 + Raw_Intensity[i + 1] * 2 + Raw_Intensity[i + 2] * 1 +
						//Raw_Intensity[i + Width] * 0 + Raw_Intensity[i + Width + 1] * 0 + Raw_Intensity[i + Width + 2] * 0 +
						(Raw_Intensity[i + (2 * Width)] * (-1)) + (Raw_Intensity[i + (2 * Width) + 1] * (-2)) + (Raw_Intensity[i + (2 * Width) + 2] * (-1)));

					j++;
				}
			}

			//Mask2 yi gezdirme (1,0,-1,2,0,-2,1,0,-1)
			int *SumMask2 = new int[(Width - 2)*(Height - 2)];
			
			for (int i = 0; i < (Width - 2)*(Height - 2); i++)
			{
				SumMask2[i] = 0;
			}
			int k = 0;
			for (int i = 0; i <((Width*Height - 1) - 2 * Width - 2); i++)
			{
				//Resimde maske sað kenara geldiðinde aþaðýya inmesini saðlar.
				if (((i + 2 * Width + 2) + 1) % Width == 0)
				{
					//Maskeyi gezdirme iþleminde maskenin duracaðý son konum için;
					if (i == ((Width*Height - 1) - (2 * Width) - 2))
					{
							SumMask2[k] = (Raw_Intensity[i] * 1 + Raw_Intensity[i + 1] * 0 + Raw_Intensity[i + 2] * (-1) +
							Raw_Intensity[i + Width] * 2 + Raw_Intensity[i + Width + 1] * 0 + Raw_Intensity[i + Width + 2] * (-2) +
							(Raw_Intensity[i + (2 * Width)] * 1) + (Raw_Intensity[i + (2 * Width) + 1] * 0) + (Raw_Intensity[i + (2 * Width) + 2] * (-1)));

						break;
					}
					else
					{

						SumMask2[k] = (Raw_Intensity[i] * 1 + Raw_Intensity[i + 1] * 0 + Raw_Intensity[i + 2] * (-1) +
							Raw_Intensity[i + Width] * 2 + Raw_Intensity[i + Width + 1] * 0 + Raw_Intensity[i + Width + 2] * (-2) +
							(Raw_Intensity[i + (2 * Width)] * 1) + (Raw_Intensity[i + (2 * Width) + 1] * 0) + (Raw_Intensity[i + (2 * Width) + 2] * (-1)));
						i += 2;
						k++;
					}

				}
				else // Kenarlardan taþma olasýlýðý yoksa iþlemlere devam eder.
				{
					SumMask2[k] = (Raw_Intensity[i] * 1 + Raw_Intensity[i + 1] * 0 + Raw_Intensity[i + 2] * (-1) +
						Raw_Intensity[i + Width] * 2 + Raw_Intensity[i + Width + 1] * 0 + Raw_Intensity[i + Width + 2] * (-2) +
						(Raw_Intensity[i + (2 * Width)] * 1) + (Raw_Intensity[i + (2 * Width) + 1] * 0) + (Raw_Intensity[i + (2 * Width) + 2] * (-1)));

					k++;

				}
			}

			//Arctan Mask2 / Mask1
			int *Aci = new int[(Width - 2)*(Height - 2)];
			// Aci dizisi arctan'dan elde ettiðim tüm piksellerim açýlarýný tutmaktadýr
			for (int i = 0; i < (Width - 2)*(Height - 2); i++)
			{
				Aci[i] = 0;
			}
			double aci = 0,derece=0;
			bool d;

			//Atan2 fonksiyonu ile bölenin 0 gelme durumu da kontrol edildi ve açý deðerleri bulundu
			for (int i = 0; i < (Width - 2)*(Height - 2); i++)
			{ 
				aci = System::Math::Atan2(SumMask2[i] , SumMask1[i]);
				derece = aci * 180 / 3.1415;
				
				Aci[i] = derece;
				
			}

			//Mutlakdeðerlerinin toplamý
			int *GradiantImage = new int[(Width - 2)*(Height - 2)];
			int *GradiantImage2 = new int[(Width - 2)*(Height - 2)];
			int *GradiantImage3 = new int[(Width - 2)*(Height - 2)];
			
			for (int i = 0; i < (Width - 2)*(Height - 2); i++)
			{
				GradiantImage[i] = 0;
				GradiantImage2[i] = 0;
				GradiantImage3[i] = 0;
			}

			int a = 0,b=0 ;
			
			for(int i = 0; i < ((Width - 2) * (Height - 2));i++)
			{
				// Piksellerin mutlak deðerleri alýndý
				a = System::Math::Abs(SumMask1[i]);
				b = System::Math::Abs(SumMask2[i]);
				GradiantImage[i] = a + b;
		
			}
			int thight = 0;
			for (int i = 0; i < (Width - 2)*(Height - 2); i++)
			{
				if (GradiantImage[i] > thight)
				{
					thight = GradiantImage[i];
				}
				else
					continue;
			}
			for (int i = 0; i < (Width - 2)*(Height - 2); i++)
			{
				GradiantImage2[i] = (255 * GradiantImage[i]) / thight;
			}
			//Gradiant görüntüsünün gösterilmesi
			int Width1, Height1;
			Width1 = (Width - 2);
			Height1 = (Height - 2);

			Bitmap^ surface1 = gcnew Bitmap(pictureBox3->Width, pictureBox3->Height);
			pictureBox3->Image = surface1;
			
			for (row = 0; row < Height1; row++)
				for (column = 0; column <Width1; column++) {
					c = Color::FromArgb(GradiantImage2[row*Width1 + column], GradiantImage2[row*Width1 + column], GradiantImage2[row*Width1 + column]);
					surface1->SetPixel(column, row, c);
				}
			
			/*Gradiant Deðer= Piksellerin komþuluklarýna bakabilmek için 
			açý deðerlerinin 0,45,90,135 derecelerine setlenmesi */
			int *Gradiant = new int[(Width - 2)*(Height - 2)];
			int *Edge = new int[(Width - 2)*(Height - 2)];

			for (int i = 0; i < (Width - 2)*(Height - 2); i++)
			{
				Gradiant[i] = Aci[i];
				//açý deðerlerinin negatif gelme ihtimaline karþý esas ölçüleri bulundu.
				if (Gradiant[i] < 0)
				{
					Gradiant[i] += 360;
				}
				else
				{
					Gradiant[i] = Aci[i];
				}
			}

			//Açýlarý 0 45 90 135 deðerlerine çekme ve edge açýlarýný sabitleme
			//Edge = Gradiant + 90;
			int x = 0;
			for (int i = 0; i < (Width - 2)*(Height - 2); i++)
			{
				x = Gradiant[i];
				if ((x >= 0 && x<22.5   )|| (x>337.5 && x<=360))
				{
					Gradiant[i] = 0;
					Edge[i] = 90;
				}
				else if ((x>=22.5 && x<67.5) || (x>=202.5 && x<247.5))
				{
					Gradiant[i] = 45;
					Edge[i] = 135;

				}
				else if ((x>=67.5 && x<112.5) || (x>=247.5 && x<292.5))
				{
					Gradiant[i] = 90;
					Edge[i] = 0;

				}
				else if ((x>=112.5 && x<157.5) || (x>=292.5 && x<337.5))
				{
					Gradiant[i] = 135;
					Edge[i] = 45;

				}
				else 
				{
					Gradiant[i] = 0;
					Edge[i] = 90;

				}
			
			}
			
			//Komþuluk deðerlerine göre deðer atama
			//Eðer komþularýndan birinden küçükse o piksel 0 a setlenir deðilse ayný býrakýlýr.
			for (int a = 0; a < 5; a++)
			{
				for (int j = 0; j < Width1*Height1; j++)
				{
					if (j == 0)
					{
						if (Gradiant[j] == 0)
						{
							if (GradiantImage[j] < GradiantImage[j + 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						//45 için kontrol edecek bir þey yok
						else if (Gradiant[j] == 45)
						{
							continue;
						}
						else if (Gradiant[j] == 90)
						{
							if (GradiantImage[j] < GradiantImage[j + Width1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else // (Gradiant[j] == 135)
						{
							if (GradiantImage[j] < GradiantImage[j + Width1 + 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
					}

					//Resmin ilk satýr elemanlarý için
					else if (j> 0 && j < (Width1 - 1))
					{
						if (Gradiant[j] == 0)
						{
							if (GradiantImage[j] < GradiantImage[j - 1] ||
								GradiantImage[j] < GradiantImage[j + 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 45)
						{
							if (GradiantImage[j] < GradiantImage[j + Width1 - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 90)
						{
							if (GradiantImage[j] < GradiantImage[j + Width1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else // (Gradiant[j] == 135)
						{
							if (GradiantImage[j] < GradiantImage[j + Width1 + 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
					}

					//Resmin Width inci elemaný için
					else if (j == (Width1 - 1))
					{
						if (Gradiant[j] == 0)
						{
							if (GradiantImage[j] < GradiantImage[j - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 45)
						{
							if (GradiantImage[j] < GradiantImage[j + Width1 - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 90)
						{
							if (GradiantImage[j] < GradiantImage[j + Width1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else //(Gradiant[j] == 135)
						{
							continue;
						}
					}

					//Resmin sol köþe pikselleri için
					else if (j % Width1 == 0 && j != Width1 * (Height1 - 1))
					{
						if (Gradiant[j] == 0)
						{
							if (GradiantImage[j] < GradiantImage[j + 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 45)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1 + 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 90)
						{
							if (GradiantImage[j] < GradiantImage[j + Width1] ||
								GradiantImage[j] < GradiantImage[j - Width1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else //(Gradiant[j] == 135)
						{
							if (GradiantImage[j] < GradiantImage[j + Width1 + 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
					}

					//Resmin sað köþe pikselleri için
					else if ((j + 1) % Width1 == 0 && j != (Width1 * Height1 - 1))
					{
						if (Gradiant[j] == 0)
						{
							if (GradiantImage[j] < GradiantImage[j - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 45)
						{
							if (GradiantImage[j] < GradiantImage[j + Width1 - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 90)
						{
							if (GradiantImage[j] < GradiantImage[j + Width1] ||
								GradiantImage[j] < GradiantImage[j - Width1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else //(Gradiant[j] == 135)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1 - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
					}

					//Sol alt piksel deðeri için
					else if (j == (Width1 * Height1 - Width1))
					{
						if (Gradiant[j] == 0)
						{
							if (GradiantImage[j] < GradiantImage[j + 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 45)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1 + 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 90)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else //(Gradiant[j] == 135)
						{
							continue;
						}
					}

					//Sað alt piksel deðeri için
					else if (j == (Width1 * Height1 - 1))
					{
						if (Gradiant[j] == 0)
						{
							if (GradiantImage[j] < GradiantImage[j - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 45)
						{
							continue;
						}
						else if (Gradiant[j] == 90)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else //(Gradiant[j] == 135)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1 - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
					}

					//Alt sýra piksel deðerleri için
					else if (j> ((Height1 * Width1) - Width1) && j < (Height1 * Width1 - 1))
					{
						if (Gradiant[j] == 0)
						{
							if (GradiantImage[j] < GradiantImage[j + 1] ||
								GradiantImage[j] < GradiantImage[j - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 45)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1 + 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 90)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else //(Gradiant[j] == 135)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1 - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
					}
					else // ortada kalan piksel deðerleri için
					{

						if (Gradiant[j] == 0)
						{
							if (GradiantImage[j] < GradiantImage[j + 1] ||
								GradiantImage[j] < GradiantImage[j - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 45)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1 + 1] ||
								GradiantImage[j] < GradiantImage[j + Width1 - 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else if (Gradiant[j] == 90)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1] ||
								GradiantImage[j] < GradiantImage[j + Width1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}
						else //(Gradiant[j] == 135)
						{
							if (GradiantImage[j] < GradiantImage[j - Width1 - 1] ||
								GradiantImage[j] < GradiantImage[j + Width1 + 1])
							{
								GradiantImage[j] = 0;
							}
							else
							{
								continue;
							}
						}


					}

				}
			}

			//255 i aþan deðerleri düzenleme
			 thight = 0;
			for (int i = 0; i < (Width - 2)*(Height - 2); i++)
			{
				if (GradiantImage[i] > thight)
				{
					thight = GradiantImage[i];
				}
				else
					continue;
			}
			for (int i = 0; i < (Width - 2)*(Height - 2); i++)
			{
				GradiantImage3[i] = (255 * GradiantImage[i]) / thight;
			}
			
			Bitmap^ surface3 = gcnew Bitmap(pictureBox4->Width, pictureBox4->Height);
			pictureBox4->Image = surface3;

			for (row = 0; row < Height1; row++)
				for (column = 0; column <Width1; column++) {
					c = Color::FromArgb(GradiantImage3[row*Width1 + column], GradiantImage3[row*Width1 + column], GradiantImage3[row*Width1 + column]);
					surface3->SetPixel(column, row, c);
				}

			//Tlow ve THight deðerleri belirledi
			int TLow = 0;
			int THight = 0;
			for (int i = 0; i < Width1*Height1; i++)
			{
				if (GradiantImage[i] > THight)
				{
					THight = GradiantImage[i];
				}
				else
					continue;
			}
			THight = THight -(THight * 0.5);
		
			//Edge açýlarýna göre arada kalan deðerlerin komþuluklarýna bakýlarak deðer atamasý yapýlýyor
			for (int b = 0; b < 5; b++)
			{
				for (int j = 0; j < Width1*Height1; j++)
				{
					if (GradiantImage[j] != 0)
					{
						if (GradiantImage[j] <= TLow)
						{
							GradiantImage[j] = 0;
						}
						else if (GradiantImage[j] >= THight)
						{
							GradiantImage[j] = 255;
						}
						else // Tlow ve Thight deðerleri arasýnda ise o zaman edge image e bakacaðým
						{
							// Resmin ilk piksel deðeri için
							if (j == 0)
							{
								if (Edge[j] == 0)
								{
									if (GradiantImage[j + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								//45 için kontrol edecek bir þey yok
								else if (Edge[j] == 45)
								{
									continue;
								}
								else if (Edge[j] == 90)
								{
									if (GradiantImage[j + Width1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + Width1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else // (Edge[j] == 135)
								{
									if (GradiantImage[j + Width1 + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else
										continue;
								}
							}

							//Resmin ilk satýr elemanlarý için
							else if (j > 0 && j < (Width1 - 1))
							{
								if (Edge[j] == 0)
								{
									if (GradiantImage[j + 1] == 255 && GradiantImage[j - 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + 1] == 0 && GradiantImage[j - 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else if ((GradiantImage[j + 1] == 255 && (GradiantImage[j - 1] > 0 && GradiantImage[j - 1] != 255)) ||
										((GradiantImage[j + 1] > 0 && GradiantImage[j + 1] != 255) && GradiantImage[j - 1] == 255))
									{
										GradiantImage[j] = 255;
									}
									else
										continue;
								}
								else if (Edge[j] == 45)
								{
									if (GradiantImage[j + Width1 - 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + Width1 - 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;

								}
								else if (Edge[j] == 90)
								{
									if (GradiantImage[j + Width1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + Width1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else // (Edge[j] == 135)
								{
									if (GradiantImage[j + Width1 + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + Width1 + 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;

								}
							}

							//Resmin Width inci elemaný için
							else if (j == (Width1 - 1))
							{
								if (Edge[j] == 0)
								{
									if (GradiantImage[j - 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else if (Edge[j] == 45)
								{
									if (GradiantImage[j + Width1 - 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + Width1 - 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else if (Edge[j] == 90)
								{
									if (GradiantImage[j + Width1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + Width1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else //(Edge[j] == 135)
								{
									continue;
								}
							}

							//Resmin sol kenar pikselleri için
							else if (j % Width1 == 0 && j != Width1 * (Height1 - 1))
							{
								if (Edge[j] == 0)
								{
									if (GradiantImage[j + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else if (Edge[j] == 45)
								{
									if (GradiantImage[j - Width1 + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1 + 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else if (Edge[j] == 90)
								{
									if (GradiantImage[j - Width1] == 255 && GradiantImage[j + Width1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1] == 0 && GradiantImage[j + Width1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else if ((GradiantImage[j - Width1] == 255 && (GradiantImage[j + Width1] > 0 && GradiantImage[j + Width1] != 255)) ||
										((GradiantImage[j - Width1] > 0 && GradiantImage[j - Width1] != 255) && GradiantImage[j + Width1] == 255))
									{
										GradiantImage[j] = 255;
									}
									else
										continue;
								}
								else //(Edge[j] == 135)
								{
									if (GradiantImage[j + Width1 + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + Width1 + 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
							}

							//Resmin sað kenar pikselleri için
							else if ((j + 1) % Width1 == 0 && j != (Width1 * Height1 - 1))
							{
								if (Edge[j] == 0)
								{
									if (GradiantImage[j - 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else if (Edge[j] == 45)
								{
									if (GradiantImage[j + Width1 - 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + Width1 - 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else if (Edge[j] == 90)
								{
									if (GradiantImage[j - Width1] == 255 && GradiantImage[j + Width1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1] == 0 && GradiantImage[j + Width1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else if ((GradiantImage[j + Width1] == 255 && (GradiantImage[j - Width1] > 0 && GradiantImage[j - Width1] != 255)) ||
										((GradiantImage[j + Width1] > 0 && GradiantImage[j + Width1] != 255) && GradiantImage[j - Width1] == 255))
									{
										GradiantImage[j] = 255;
									}
									else
										continue;
								}
								else //(Edge[j] == 135)
								{
									if (GradiantImage[j - Width1 - 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1 - 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
							}

							//Sol alt piksel deðeri için
							else if (j == (Width1 * Height1 - Width1))
							{
								if (Edge[j] == 0)
								{
									if (GradiantImage[j + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j + 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else if (Edge[j] == 45)
								{
									if (GradiantImage[j - Width1 + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1 + 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else if (Edge[j] == 90)
								{
									if (GradiantImage[j - Width1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else //(Gradiant[j] == 135)
								{
									continue;
								}
							}

							//Sað alt piksel deðeri için
							else if (j == (Width1 * Height1 - 1))
							{
								if (Edge[j] == 0)
								{
									if (GradiantImage[j - 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else if (Edge[j] == 45)
								{
									continue;
								}
								else if (Edge[j] == 90)
								{
									if (GradiantImage[j - Width1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else //(Edge[j] == 135)
								{
									if (GradiantImage[j - Width1 - 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1 - 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
							}

							//Alt sýra piksel deðerleri için
							else if (j > ((Height1 * Width1) - Width1) && j < (Height1 * Width1 - 1))
							{
								if (Edge[j] == 0)
								{
									if (GradiantImage[j - 1] == 255 && GradiantImage[j + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - 1] == 0 && GradiantImage[j + 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else if ((GradiantImage[j + 1] == 255 && (GradiantImage[j - 1] > 0 && GradiantImage[j - 1] != 255)) ||
										((GradiantImage[j + 1] > 0 && GradiantImage[j + 1] != 255) && GradiantImage[j - 1] == 255))
									{
										GradiantImage[j] = 255;
									}
									else
										continue;
								}
								else if (Edge[j] == 45)
								{
									if (GradiantImage[j - Width1 + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1 + 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else if (Edge[j] == 90)
								{
									if (GradiantImage[j - Width1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
								else //(Edge[j] == 135)
								{
									if (GradiantImage[j - Width1 - 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1 - 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else
										continue;
								}
							}

							else // ortada kalan piksel deðerleri için
							{

								if (Edge[j] == 0)
								{
									if (GradiantImage[j - 1] == 255 && GradiantImage[j + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - 1] == 0 && GradiantImage[j + 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else if ((GradiantImage[j + 1] == 255 && (GradiantImage[j - 1] > 0 && GradiantImage[j - 1] != 255)) ||
										((GradiantImage[j + 1] > 0 && GradiantImage[j + 1] != 255) && GradiantImage[j - 1] == 255))
									{
										GradiantImage[j] = 255;
									}
									else
										continue;
								}
								else if (Edge[j] == 45)
								{
									if (GradiantImage[j - Width1 + 1] == 255 && GradiantImage[j + Width1 - 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1 + 1] == 0 && GradiantImage[j + Width1 - 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else if ((GradiantImage[j - Width1 + 1] == 255 && (GradiantImage[j + Width1 - 1] > 0 && GradiantImage[j + Width1 - 1] != 255)) ||
										((GradiantImage[j - Width1 + 1] > 0 && GradiantImage[j - Width1 + 1] != 255) && GradiantImage[j + Width1 - 1] == 255))
									{
										GradiantImage[j] = 255;
									}
									else
										continue;
								}
								else if (Edge[j] == 90)
								{
									if (GradiantImage[j - Width1] == 255 && GradiantImage[j + Width1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1] == 0 && GradiantImage[j + Width1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else if ((GradiantImage[j - Width1] == 255 && (GradiantImage[j + Width1] > 0 && GradiantImage[j + Width1] != 255)) ||
										((GradiantImage[j - Width1] > 0 && GradiantImage[j - Width1] != 255) && GradiantImage[j + Width1] == 255))
									{
										GradiantImage[j] = 255;
									}
									else
										continue;
								}
								else //(Edge[j] == 135)
								{
									if (GradiantImage[j - Width1 - 1] == 255 && GradiantImage[j + Width1 + 1] == 255)
									{
										GradiantImage[j] = 255;
									}
									else if (GradiantImage[j - Width1 - 1] == 0 && GradiantImage[j + Width1 + 1] == 0)
									{
										GradiantImage[j] = 0;
									}
									else if ((GradiantImage[j - Width1 - 1] == 255 && (GradiantImage[j + Width1 + 1] > 0 && GradiantImage[j + Width1 + 1] != 255)) ||
										((GradiantImage[j - Width1 - 1] > 0 && GradiantImage[j - Width1 - 1] != 255) && GradiantImage[j + Width1 + 1] == 255))
									{
										GradiantImage[j] = 255;
									}
									else
										continue;
								}

							}
						}

					}
					else
					{
						continue;
					}
				}
			}
									
			//0 ve 255 den farklý olan deðerleri TLow ve THight deðerlerine göre karþýlaþtýrarak 0 yada 255 atanýyor.
			for (int i = 0; i < Width1*Height1; i++)
			{
				if (GradiantImage[i] != 0 && GradiantImage[i] != 255)
				{
					if ((GradiantImage[i] - TLow) > (THight - GradiantImage[i]))
					{
						GradiantImage[i] = 255;
					}
					else
					{
						GradiantImage[i] = 0;
					}
				}
				else
					continue;

			}
									
			//Edge Ýmage görüntüleme
			Bitmap^ surface2 = gcnew Bitmap(pictureBox5->Width, pictureBox5->Height);
			pictureBox5->Image = surface2;

			for (row = 0; row < Height1; row++)
				for (column = 0; column <Width1; column++) {
					c = Color::FromArgb(GradiantImage[row*Width1 + column], GradiantImage[row*Width1 + column], GradiantImage[row*Width1 + column]);
					surface2->SetPixel(column, row, c);
				}

			//d=r*sinQ+c*cosQ deðerini bulmak
			int ab = 0;
			double cosQ = 0, sinQ = 0;
			double *al = new double[Width1*Height1];

			for (int i = 0; i < Width1*Height1; i++)
			{
				al[i] = 0;
			}
			for (row = 0; row < Height1; row++) {
				for (column = 0; column < Width1; column++) {

					cosQ = System::Math::Cos(Gradiant[ab] * 3.14 / 180);
					sinQ = System::Math::Sin(Gradiant[ab] * 3.14 / 180);
					al[ab] = Math::Round((row*sinQ) + (column*cosQ));
					ab++;
				}
			}

		}
	
		else MessageBox::Show("Dosya acilamadý");
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox4_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void pictureBox5_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
