#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Products
	/// </summary>
	public ref class Products : public System::Windows::Forms::Form
	{
	public:
		Products(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Products()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader1;
	private: System::Windows::Forms::ColumnHeader^  columnHeader2;
	private: System::Windows::Forms::ColumnHeader^  columnHeader3;
	private: System::Windows::Forms::ColumnHeader^  columnHeader4;
	private: System::Windows::Forms::ColumnHeader^  columnHeader5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  продуктыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  добавитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  удалитьВыбранноеToolStripMenuItem;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->продуктыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->удалитьВыбранноеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(5) {
				this->columnHeader1, this->columnHeader2,
					this->columnHeader3, this->columnHeader4, this->columnHeader5
			});
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Location = System::Drawing::Point(0, 24);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(468, 237);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->продуктыToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(468, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// продуктыToolStripMenuItem
			// 
			this->продуктыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->добавитьToolStripMenuItem,
					this->удалитьВыбранноеToolStripMenuItem
			});
			this->продуктыToolStripMenuItem->Name = L"продуктыToolStripMenuItem";
			this->продуктыToolStripMenuItem->Size = System::Drawing::Size(72, 20);
			this->продуктыToolStripMenuItem->Text = L"продукты";
			// 
			// добавитьToolStripMenuItem
			// 
			this->добавитьToolStripMenuItem->Name = L"добавитьToolStripMenuItem";
			this->добавитьToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->добавитьToolStripMenuItem->Text = L"добавить";
			// 
			// удалитьВыбранноеToolStripMenuItem
			// 
			this->удалитьВыбранноеToolStripMenuItem->Name = L"удалитьВыбранноеToolStripMenuItem";
			this->удалитьВыбранноеToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->удалитьВыбранноеToolStripMenuItem->Text = L"удалить выбранное";
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"id";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Название";
			this->columnHeader2->Width = 80;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Производитель";
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"Поступление товара";
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"реализация товара";
			// 
			// Products
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(468, 261);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Products";
			this->Text = L"Products";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

};
}
