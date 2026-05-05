#pragma once

namespace kundalikeslatmalar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	public:
		Form^ form1;
		Dashboard(Form^ form2)
		{
			InitializeComponent();
			form1 = form2;
			//
			//TODO: добавьте код конструктора
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ dushanbaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ seshanbaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ chorshanbaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dedlaynlarniBarchasiniYuklashToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ payshanbaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ jumaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ shanbaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ yakshanbaToolStripMenuItem;

	private:
		/// <summary>
		/// Required designer variable.
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
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dushanbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dedlaynlarniBarchasiniYuklashToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->seshanbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chorshanbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->payshanbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->jumaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->shanbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yakshanbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripMenuItem1 });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1377, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->dushanbaToolStripMenuItem,
					this->jumaToolStripMenuItem, this->seshanbaToolStripMenuItem, this->chorshanbaToolStripMenuItem, this->payshanbaToolStripMenuItem,
					this->shanbaToolStripMenuItem, this->yakshanbaToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(86, 24);
			this->toolStripMenuItem1->Text = L"Rejalarim";
			// 
			// dushanbaToolStripMenuItem
			// 
			this->dushanbaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->dedlaynlarniBarchasiniYuklashToolStripMenuItem });
			this->dushanbaToolStripMenuItem->Name = L"dushanbaToolStripMenuItem";
			this->dushanbaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->dushanbaToolStripMenuItem->Text = L"Dushanba";
			// 
			// dedlaynlarniBarchasiniYuklashToolStripMenuItem
			// 
			this->dedlaynlarniBarchasiniYuklashToolStripMenuItem->Name = L"dedlaynlarniBarchasiniYuklashToolStripMenuItem";
			this->dedlaynlarniBarchasiniYuklashToolStripMenuItem->Size = System::Drawing::Size(299, 26);
			this->dedlaynlarniBarchasiniYuklashToolStripMenuItem->Text = L"Dedlaynlarni Barchasini yuklash";
			// 
			// seshanbaToolStripMenuItem
			// 
			this->seshanbaToolStripMenuItem->Name = L"seshanbaToolStripMenuItem";
			this->seshanbaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->seshanbaToolStripMenuItem->Text = L"Seshanba";
			// 
			// chorshanbaToolStripMenuItem
			// 
			this->chorshanbaToolStripMenuItem->Name = L"chorshanbaToolStripMenuItem";
			this->chorshanbaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->chorshanbaToolStripMenuItem->Text = L"Chorshanba";
			// 
			// payshanbaToolStripMenuItem
			// 
			this->payshanbaToolStripMenuItem->Name = L"payshanbaToolStripMenuItem";
			this->payshanbaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->payshanbaToolStripMenuItem->Text = L"Payshanba";
			// 
			// jumaToolStripMenuItem
			// 
			this->jumaToolStripMenuItem->Name = L"jumaToolStripMenuItem";
			this->jumaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->jumaToolStripMenuItem->Text = L"Juma";
			// 
			// shanbaToolStripMenuItem
			// 
			this->shanbaToolStripMenuItem->Name = L"shanbaToolStripMenuItem";
			this->shanbaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->shanbaToolStripMenuItem->Text = L"Shanba";
			// 
			// yakshanbaToolStripMenuItem
			// 
			this->yakshanbaToolStripMenuItem->Name = L"yakshanbaToolStripMenuItem";
			this->yakshanbaToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->yakshanbaToolStripMenuItem->Text = L"Yakshanba";
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1377, 670);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Dashboard";
			this->Text = L"Dashboard";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
