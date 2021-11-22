#pragma once
#include"CLservices.h"
namespace prosit6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: NS_Comp_Svc::CLservices^ oSvc;
	private: NS_Comp_Mappage::CLmapTB^ oMTB;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Nom_text_NU;

	private: System::Windows::Forms::TextBox^ Prénom_text_NU;

	private: System::Windows::Forms::TextBox^ Adresse_text;

	private: System::Windows::Forms::TextBox^ Ville_text;

	private: System::Windows::Forms::TextBox^ CP_text;

	private: System::Windows::Forms::Button^ button_save_client;
	private: System::Windows::Forms::TextBox^ id_client_text_NU;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ id_adresse_text_NU;
	private: System::Windows::Forms::Label^ label7;


	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Nom_text_NU = (gcnew System::Windows::Forms::TextBox());
			this->Prénom_text_NU = (gcnew System::Windows::Forms::TextBox());
			this->Adresse_text = (gcnew System::Windows::Forms::TextBox());
			this->Ville_text = (gcnew System::Windows::Forms::TextBox());
			this->CP_text = (gcnew System::Windows::Forms::TextBox());
			this->button_save_client = (gcnew System::Windows::Forms::Button());
			this->id_client_text_NU = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->id_adresse_text_NU = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 106);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Prénom";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(311, 22);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 17);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Adresse";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(311, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 17);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Ville";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(311, 192);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(26, 17);
			this->label5->TabIndex = 4;
			this->label5->Text = L"CP";
			// 
			// Nom_text_NU
			// 
			this->Nom_text_NU->Location = System::Drawing::Point(15, 35);
			this->Nom_text_NU->Name = L"Nom_text_NU";
			this->Nom_text_NU->Size = System::Drawing::Size(227, 22);
			this->Nom_text_NU->TabIndex = 5;
			// 
			// Prénom_text_NU
			// 
			this->Prénom_text_NU->Location = System::Drawing::Point(15, 126);
			this->Prénom_text_NU->Name = L"Prénom_text_NU";
			this->Prénom_text_NU->Size = System::Drawing::Size(227, 22);
			this->Prénom_text_NU->TabIndex = 6;
			// 
			// Adresse_text
			// 
			this->Adresse_text->Location = System::Drawing::Point(314, 42);
			this->Adresse_text->Name = L"Adresse_text";
			this->Adresse_text->Size = System::Drawing::Size(227, 22);
			this->Adresse_text->TabIndex = 7;
			// 
			// Ville_text
			// 
			this->Ville_text->Location = System::Drawing::Point(314, 126);
			this->Ville_text->Name = L"Ville_text";
			this->Ville_text->Size = System::Drawing::Size(227, 22);
			this->Ville_text->TabIndex = 8;
			// 
			// CP_text
			// 
			this->CP_text->Location = System::Drawing::Point(314, 212);
			this->CP_text->Name = L"CP_text";
			this->CP_text->Size = System::Drawing::Size(227, 22);
			this->CP_text->TabIndex = 9;
			// 
			// button_save_client
			// 
			this->button_save_client->Location = System::Drawing::Point(195, 334);
			this->button_save_client->Name = L"button_save_client";
			this->button_save_client->Size = System::Drawing::Size(190, 25);
			this->button_save_client->TabIndex = 10;
			this->button_save_client->Text = L"Enregistrer";
			this->button_save_client->UseVisualStyleBackColor = true;
			this->button_save_client->Click += gcnew System::EventHandler(this, &MyForm1::button_save_client_Click);
			// 
			// id_client_text_NU
			// 
			this->id_client_text_NU->Location = System::Drawing::Point(15, 212);
			this->id_client_text_NU->Name = L"id_client_text_NU";
			this->id_client_text_NU->Size = System::Drawing::Size(227, 22);
			this->id_client_text_NU->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 192);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 17);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Id client";
			// 
			// id_adresse_text_NU
			// 
			this->id_adresse_text_NU->Location = System::Drawing::Point(314, 274);
			this->id_adresse_text_NU->Name = L"id_adresse_text_NU";
			this->id_adresse_text_NU->Size = System::Drawing::Size(227, 22);
			this->id_adresse_text_NU->TabIndex = 14;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(311, 254);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(74, 17);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Id adresse";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 371);
			this->Controls->Add(this->id_adresse_text_NU);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->id_client_text_NU);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button_save_client);
			this->Controls->Add(this->CP_text);
			this->Controls->Add(this->Ville_text);
			this->Controls->Add(this->Adresse_text);
			this->Controls->Add(this->Prénom_text_NU);
			this->Controls->Add(this->Nom_text_NU);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm1";
			this->Text = L"création d\'un nouvel utilisateur";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	

	private: System::Void button_save_client_Click(System::Object^ sender, System::EventArgs^ e) {
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->oSvc->ajouterUnePersonne(this->Nom_text_NU->Text, this->Prénom_text_NU->Text);
		this->oSvc->ajouterUneAdresse(this->Adresse_text->Text, this->Ville_text->Text, this->CP_text->Text, System::Int32::Parse(this->id_client_text_NU->Text), System::Int32::Parse(this->id_adresse_text_NU->Text));
	
}
};
}
