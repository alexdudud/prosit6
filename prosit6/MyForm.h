#pragma once
#include "CLservices.h"
#include"MyForm1.h"
namespace prosit6 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_enr;
	private: System::Windows::Forms::Button^ btn_save;
	private: System::Windows::Forms::Button^ btn_new_user;
	protected:



	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_upgate;
	private: System::Windows::Forms::TextBox^ txt_prenom;
	private: System::Windows::Forms::TextBox^ txt_nom;








	private: NS_Comp_Svc::CLservices^ oSvc;
	private: NS_Comp_Mappage::CLmapTB^ oMTB;
	private: System::Data::DataSet^ oDs;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxMessage;
	private: System::Windows::Forms::TextBox^ id_text;
	private: System::Windows::Forms::Button^ Premier_utilisatuer;
	private: System::Windows::Forms::Button^ Utilisateur_avant;
	private: System::Windows::Forms::Button^ Dernier_utilisateur;
	private: System::Windows::Forms::Button^ Utilisateur_apres;


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_enr = (gcnew System::Windows::Forms::DataGridView());
			this->btn_save = (gcnew System::Windows::Forms::Button());
			this->btn_new_user = (gcnew System::Windows::Forms::Button());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_upgate = (gcnew System::Windows::Forms::Button());
			this->txt_prenom = (gcnew System::Windows::Forms::TextBox());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxMessage = (gcnew System::Windows::Forms::TextBox());
			this->id_text = (gcnew System::Windows::Forms::TextBox());
			this->Premier_utilisatuer = (gcnew System::Windows::Forms::Button());
			this->Utilisateur_avant = (gcnew System::Windows::Forms::Button());
			this->Dernier_utilisateur = (gcnew System::Windows::Forms::Button());
			this->Utilisateur_apres = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->BeginInit();
			this->SuspendLayout();
			// 
			// dgv_enr
			// 
			this->dgv_enr->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_enr->Location = System::Drawing::Point(295, 28);
			this->dgv_enr->Margin = System::Windows::Forms::Padding(4);
			this->dgv_enr->Name = L"dgv_enr";
			this->dgv_enr->RowHeadersWidth = 51;
			this->dgv_enr->Size = System::Drawing::Size(477, 298);
			this->dgv_enr->TabIndex = 0;
			// 
			// btn_save
			// 
			this->btn_save->Location = System::Drawing::Point(174, 229);
			this->btn_save->Margin = System::Windows::Forms::Padding(4);
			this->btn_save->Name = L"btn_save";
			this->btn_save->Size = System::Drawing::Size(92, 97);
			this->btn_save->TabIndex = 1;
			this->btn_save->Text = L"Enregistrer";
			this->btn_save->UseVisualStyleBackColor = true;
			this->btn_save->Click += gcnew System::EventHandler(this, &MyForm::btn_load_Click);
			// 
			// btn_new_user
			// 
			this->btn_new_user->Location = System::Drawing::Point(24, 229);
			this->btn_new_user->Margin = System::Windows::Forms::Padding(4);
			this->btn_new_user->Name = L"btn_new_user";
			this->btn_new_user->Size = System::Drawing::Size(142, 26);
			this->btn_new_user->TabIndex = 2;
			this->btn_new_user->Text = L"Nouvel Utilisateur ";
			this->btn_new_user->UseVisualStyleBackColor = true;
			this->btn_new_user->Click += gcnew System::EventHandler(this, &MyForm::btn_insert_Click);
			// 
			// btn_delete
			// 
			this->btn_delete->Location = System::Drawing::Point(24, 300);
			this->btn_delete->Margin = System::Windows::Forms::Padding(4);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(142, 26);
			this->btn_delete->TabIndex = 3;
			this->btn_delete->Text = L"Supprimer";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			// btn_upgate
			// 
			this->btn_upgate->Location = System::Drawing::Point(24, 263);
			this->btn_upgate->Margin = System::Windows::Forms::Padding(4);
			this->btn_upgate->Name = L"btn_upgate";
			this->btn_upgate->Size = System::Drawing::Size(142, 29);
			this->btn_upgate->TabIndex = 4;
			this->btn_upgate->Text = L"Mettre a jour";
			this->btn_upgate->UseVisualStyleBackColor = true;
			this->btn_upgate->Click += gcnew System::EventHandler(this, &MyForm::btn_upgate_Click);
			// 
			// txt_prenom
			// 
			this->txt_prenom->Location = System::Drawing::Point(13, 92);
			this->txt_prenom->Margin = System::Windows::Forms::Padding(4);
			this->txt_prenom->Name = L"txt_prenom";
			this->txt_prenom->Size = System::Drawing::Size(274, 22);
			this->txt_prenom->TabIndex = 6;
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(13, 159);
			this->txt_nom->Margin = System::Windows::Forms::Padding(4);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(274, 22);
			this->txt_nom->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 17);
			this->label1->TabIndex = 8;
			this->label1->Text = L"ID";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(57, 17);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Prénom";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 138);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 17);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Nom";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(299, 6);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(153, 17);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Affichage des données";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(45, 362);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(65, 17);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Message";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// textBoxMessage
			// 
			this->textBoxMessage->Location = System::Drawing::Point(48, 382);
			this->textBoxMessage->Multiline = true;
			this->textBoxMessage->Name = L"textBoxMessage";
			this->textBoxMessage->Size = System::Drawing::Size(724, 91);
			this->textBoxMessage->TabIndex = 13;
			// 
			// id_text
			// 
			this->id_text->Enabled = false;
			this->id_text->Location = System::Drawing::Point(13, 28);
			this->id_text->Margin = System::Windows::Forms::Padding(4);
			this->id_text->Name = L"id_text";
			this->id_text->ReadOnly = true;
			this->id_text->Size = System::Drawing::Size(274, 22);
			this->id_text->TabIndex = 14;
			this->id_text->TextChanged += gcnew System::EventHandler(this, &MyForm::id_text_TextChanged);
			// 
			// Premier_utilisatuer
			// 
			this->Premier_utilisatuer->Location = System::Drawing::Point(12, 191);
			this->Premier_utilisatuer->Name = L"Premier_utilisatuer";
			this->Premier_utilisatuer->Size = System::Drawing::Size(48, 31);
			this->Premier_utilisatuer->TabIndex = 15;
			this->Premier_utilisatuer->Text = L"<<";
			this->Premier_utilisatuer->UseVisualStyleBackColor = true;
			this->Premier_utilisatuer->Click += gcnew System::EventHandler(this, &MyForm::Premier_utilisatuer_Click);
			// 
			// Utilisateur_avant
			// 
			this->Utilisateur_avant->Location = System::Drawing::Point(85, 191);
			this->Utilisateur_avant->Name = L"Utilisateur_avant";
			this->Utilisateur_avant->Size = System::Drawing::Size(48, 31);
			this->Utilisateur_avant->TabIndex = 16;
			this->Utilisateur_avant->Text = L"<";
			this->Utilisateur_avant->UseVisualStyleBackColor = true;
			this->Utilisateur_avant->Click += gcnew System::EventHandler(this, &MyForm::Utilisateur_avant_Click);
			// 
			// Dernier_utilisateur
			// 
			this->Dernier_utilisateur->Location = System::Drawing::Point(239, 191);
			this->Dernier_utilisateur->Name = L"Dernier_utilisateur";
			this->Dernier_utilisateur->Size = System::Drawing::Size(48, 31);
			this->Dernier_utilisateur->TabIndex = 18;
			this->Dernier_utilisateur->Text = L">>";
			this->Dernier_utilisateur->UseVisualStyleBackColor = true;
			this->Dernier_utilisateur->Click += gcnew System::EventHandler(this, &MyForm::Dernier_utilisateur_Click);
			// 
			// Utilisateur_apres
			// 
			this->Utilisateur_apres->Location = System::Drawing::Point(174, 191);
			this->Utilisateur_apres->Name = L"Utilisateur_apres";
			this->Utilisateur_apres->Size = System::Drawing::Size(48, 31);
			this->Utilisateur_apres->TabIndex = 17;
			this->Utilisateur_apres->Text = L">";
			this->Utilisateur_apres->UseVisualStyleBackColor = true;
			this->Utilisateur_apres->Click += gcnew System::EventHandler(this, &MyForm::Utilisateur_apres_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(807, 485);
			this->Controls->Add(this->Dernier_utilisateur);
			this->Controls->Add(this->Utilisateur_apres);
			this->Controls->Add(this->Utilisateur_avant);
			this->Controls->Add(this->Premier_utilisatuer);
			this->Controls->Add(this->id_text);
			this->Controls->Add(this->textBoxMessage);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txt_nom);
			this->Controls->Add(this->txt_prenom);
			this->Controls->Add(this->btn_upgate);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->btn_new_user);
			this->Controls->Add(this->btn_save);
			this->Controls->Add(this->dgv_enr);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_enr))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc->ajouterUnePersonne(this->txt_nom->Text, this->txt_prenom->Text);
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesAdresses("Rsl");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rsl";
		this->textBoxMessage->Text = "";
		this->textBoxMessage->Text = "Nouvel utilisateur créé :)";
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		this->oSvc = gcnew NS_Comp_Svc::CLservices();
		this->dgv_enr->Refresh();
		this->oDs = this->oSvc->selectionnerToutesLesAdresses("Rs2");
		this->dgv_enr->DataSource = this->oDs;
		this->dgv_enr->DataMember = "Rs2";
	}
	private: System::Void btn_insert_Click(System::Object^ sender, System::EventArgs^ e)
	{
		/*this->oSvc->ajouterUnePersonne(this->txt_nom->Text, this->txt_prenom->Text);
		this->textBoxMessage->Text = "";
		this->textBoxMessage->Text = "Nouvel utilisateur créé :)";*/
		this->Hide();
		prosit6::MyForm1 NU;
		NU.ShowDialog();
		this->Show();
		

		
	}
	private: System::Void txt_id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvc->supprimerUnePersonne(System::Int32::Parse(this->id_text->Text));
	
	this->textBoxMessage->Text = "L'utilisateur correspondant à l'id : " + this->id_text->Text + " a été supprimé.";
	
	
}
private: System::Void btn_upgate_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvc->modifierUnePersonne(System::Int32::Parse(this->id_text->Text), this->txt_prenom->Text, this->txt_nom->Text);
	this->oSvc = gcnew NS_Comp_Svc::CLservices();
	this->dgv_enr->Refresh();
	this->oDs = this->oSvc->selectionnerToutesLesPersonnes("Rsl");
	this->dgv_enr->DataSource = this->oDs;
	this->dgv_enr->DataMember = "Rsl";
	this->textBoxMessage->Text = "Informations de l'utilisateur, mises a jour.";

}
private: System::Void Premier_utilisatuer_Click(System::Object^ sender, System::EventArgs^ e) {
	/*this->oSvc = gcnew NS_Comp_Svc::CLservices();
	this->oSvc->get_nom(System::Int32::Parse(this->id_text->Text));
	this->txt_nom->Text = this->oSvc->get_nom(System::Int32::Parse(this->id_text->Text));*/
	if  (this->id_text->Text == String::Empty) {
		this->id_text->Text = "1";
	}
	else if (System::Int32::Parse(this->id_text->Text) > 1) {
		this->id_text->Text = "1";
	}
}
private: System::Void Utilisateur_avant_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->id_text->Text == String::Empty) {
		this->id_text->Text = "1";
	}
	else if (System::Int32::Parse(this->id_text->Text) > 1) {
		this->id_text->Text = (System::Int32::Parse(this->id_text->Text) - 1).ToString();
	}
}
private: System::Void Utilisateur_apres_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->id_text->Text == String::Empty) {
		this->id_text->Text = "1";
	}
	else if (System::Int32::Parse(this->id_text->Text) >= 1) {
		this->id_text->Text = (System::Int32::Parse(this->id_text->Text) + 1).ToString();
	}
}
private: System::Void Dernier_utilisateur_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void id_text_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}