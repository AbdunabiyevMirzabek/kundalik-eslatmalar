#pragma once

namespace kundalikeslatmalar {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class Dashboard : public System::Windows::Forms::Form
	{
	private:
		// Hozirgi ko'rinib turgan oy va yilni saqlash uchun
		int currentYear;
		int currentMonth;

	public:
		Dashboard(void)
		{
			InitializeComponent();
			// Dastur ochilganda hozirgi oyni ko'rsatish
			currentYear = DateTime::Now.Year;
			currentMonth = DateTime::Now.Month;
			FillCalendar(currentYear, currentMonth);
		}

		Form^ form1;
		Dashboard(Form^ form2)
		{
			InitializeComponent();
			form1 = form2;
			currentYear = DateTime::Now.Year;
			currentMonth = DateTime::Now.Month;
			FillCalendar(currentYear, currentMonth);
		}

	protected:
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MonthCalendar^ monthCalendar1;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dayToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ weekToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ monthToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ yearToolStripMenuItem;
	private: System::ComponentModel::IContainer^ components;

#pragma region Windows Form Designer generated code
		   void InitializeComponent(void)
		   {
			   this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			   this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->dayToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->weekToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->monthToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->yearToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->button4 = (gcnew System::Windows::Forms::Button());
			   this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			   this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			   this->flowLayoutPanel1->SuspendLayout();
			   this->menuStrip1->SuspendLayout();
			   this->panel1->SuspendLayout();
			   this->SuspendLayout();
			   // 
			   // monthCalendar1
			   // 
			   this->monthCalendar1->Location = System::Drawing::Point(0, 187);
			   this->monthCalendar1->Name = L"monthCalendar1";
			   this->monthCalendar1->TabIndex = 2;
			   // 
			   // flowLayoutPanel1
			   // 
			   this->flowLayoutPanel1->Controls->Add(this->button2);
			   this->flowLayoutPanel1->Controls->Add(this->button1);
			   this->flowLayoutPanel1->Controls->Add(this->button3);
			   this->flowLayoutPanel1->Controls->Add(this->menuStrip1);
			   this->flowLayoutPanel1->Location = System::Drawing::Point(289, 12);
			   this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			   this->flowLayoutPanel1->Size = System::Drawing::Size(774, 56);
			   this->flowLayoutPanel1->TabIndex = 3;
			   // 
			   // button2
			   // 
			   this->button2->Location = System::Drawing::Point(3, 3);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(93, 23);
			   this->button2->TabIndex = 0;
			   this->button2->Text = L"Today";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(102, 3);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(51, 23);
			   this->button1->TabIndex = 0;
			   this->button1->Text = L"<";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(159, 3);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(36, 23);
			   this->button3->TabIndex = 0;
			   this->button3->Text = L">";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &Dashboard::button3_Click);
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			   this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->menuToolStripMenuItem });
			   this->menuStrip1->Location = System::Drawing::Point(198, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(68, 28);
			   this->menuStrip1->TabIndex = 1;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // menuToolStripMenuItem
			   // 
			   this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				   this->dayToolStripMenuItem,
					   this->weekToolStripMenuItem, this->monthToolStripMenuItem, this->yearToolStripMenuItem
			   });
			   this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			   this->menuToolStripMenuItem->Size = System::Drawing::Size(60, 24);
			   this->menuToolStripMenuItem->Text = L"Menu";
			   // 
			   // dayToolStripMenuItem
			   // 
			   this->dayToolStripMenuItem->Name = L"dayToolStripMenuItem";
			   this->dayToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			   this->dayToolStripMenuItem->Text = L"Day";
			   // 
			   // weekToolStripMenuItem
			   // 
			   this->weekToolStripMenuItem->Name = L"weekToolStripMenuItem";
			   this->weekToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			   this->weekToolStripMenuItem->Text = L"week";
			   // 
			   // monthToolStripMenuItem
			   // 
			   this->monthToolStripMenuItem->Name = L"monthToolStripMenuItem";
			   this->monthToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			   this->monthToolStripMenuItem->Text = L"month";
			   // 
			   // yearToolStripMenuItem
			   // 
			   this->yearToolStripMenuItem->Name = L"yearToolStripMenuItem";
			   this->yearToolStripMenuItem->Size = System::Drawing::Size(135, 26);
			   this->yearToolStripMenuItem->Text = L"year";
			   // 
			   // panel1
			   // 
			   this->panel1->Controls->Add(this->button4);
			   this->panel1->Controls->Add(this->checkedListBox1);
			   this->panel1->Controls->Add(this->monthCalendar1);
			   this->panel1->Location = System::Drawing::Point(12, 27);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(271, 608);
			   this->panel1->TabIndex = 4;
			   // 
			   // button4
			   // 
			   this->button4->BackColor = System::Drawing::Color::White;
			   this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   this->button4->Location = System::Drawing::Point(19, 76);
			   this->button4->Name = L"button4";
			   this->button4->Size = System::Drawing::Size(164, 57);
			   this->button4->TabIndex = 4;
			   this->button4->Text = L" ➕   Create";
			   this->button4->UseVisualStyleBackColor = false;
			   // 
			   // checkedListBox1
			   // 
			   this->checkedListBox1->FormattingEnabled = true;
			   this->checkedListBox1->Location = System::Drawing::Point(19, 418);
			   this->checkedListBox1->Name = L"checkedListBox1";
			   this->checkedListBox1->Size = System::Drawing::Size(225, 38);
			   this->checkedListBox1->TabIndex = 3;
			   // 
			   // tableLayoutPanel1
			   // 
			   this->tableLayoutPanel1->CellBorderStyle = System::Windows::Forms::TableLayoutPanelCellBorderStyle::OutsetPartial;
			   this->tableLayoutPanel1->ColumnCount = 7;
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   14.28571F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   14.28571F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   14.28571F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   14.28571F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   14.28571F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   14.28571F)));
			   this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				   14.28571F)));
			   this->tableLayoutPanel1->Location = System::Drawing::Point(315, 74);
			   this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			   this->tableLayoutPanel1->RowCount = 6;
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6F)));
			   this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.6F)));
			   this->tableLayoutPanel1->Size = System::Drawing::Size(650, 500);
			   this->tableLayoutPanel1->TabIndex = 5;
			   // 
			   // Dashboard
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(1000, 650);
			   this->Controls->Add(this->tableLayoutPanel1);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->flowLayoutPanel1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"Dashboard";
			   this->Text = L"Dashboard";
			   this->flowLayoutPanel1->ResumeLayout(false);
			   this->flowLayoutPanel1->PerformLayout();
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   this->panel1->ResumeLayout(false);
			   this->ResumeLayout(false);

		   }
#pragma endregion

	private:
		// Kalendarni to'ldirish funksiyasi
		void FillCalendar(int year, int month)
		{
			this->tableLayoutPanel1->Controls->Clear();

			DateTime firstDay = DateTime(year, month, 1);
			// Hafta kuni (0=Sunday, 1=Monday...)
			int dayOfWeek = (int)firstDay.DayOfWeek;
			int daysInMonth = DateTime::DaysInMonth(year, month);

			// Oy nomini sarlavhaga chiqarish (ixtiyoriy)
			this->Text = "Dashboard - " + firstDay.ToString("MMMM yyyy");

			for (int day = 1; day <= daysInMonth; day++) {
				Label^ lbl = gcnew Label();
				lbl->Text = day.ToString();
				lbl->TextAlign = ContentAlignment::TopRight;
				lbl->Dock = DockStyle::Fill;
				lbl->Padding = System::Windows::Forms::Padding(5);
				lbl->Cursor = Cursors::Hand;
				lbl->Click += gcnew EventHandler(this, &Dashboard::Date_Click);

				// Katakchani hisoblash
				int position = dayOfWeek + day - 1;
				this->tableLayoutPanel1->Controls->Add(lbl, position % 7, position / 7);
			}
		}

		// Sanani bosganda hodisa
		void Date_Click(System::Object^ sender, System::EventArgs^ e) {
			Label^ clickedLabel = safe_cast<Label^>(sender);
			MessageBox::Show(clickedLabel->Text + "-" + currentMonth + "-" + currentYear, "Sana tanlandi");
		}

		// Orqaga tugmasi (<)
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
			if (currentMonth == 1) {
				currentMonth = 12;
				currentYear--;
			}
			else {
				currentMonth--;
			}
			FillCalendar(currentYear, currentMonth);
		}

		// Oldinga tugmasi (>)
		System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
			if (currentMonth == 12) {
				currentMonth = 1;
				currentYear++;
			}
			else {
				currentMonth++;
			}
			FillCalendar(currentYear, currentMonth);
		}

		// Bugun tugmasi (Today)
		System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
			currentYear = DateTime::Now.Year;
			currentMonth = DateTime::Now.Month;
			FillCalendar(currentYear, currentMonth);
		}
	};
}