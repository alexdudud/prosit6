
#include "CLservices.h"
#include"MyForm1.h"
NS_Comp_Svc::CLservices::CLservices(void)
{
	this->oCad = gcnew NS_Comp_Data::CLcad();
	this->oMappTB = gcnew NS_Comp_Mappage::CLmapTB();
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesPersonnes(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->Select();
	return this->oCad->getRows(sql, dataTableName);
}
System::Data::DataSet^ NS_Comp_Svc::CLservices::selectionnerToutesLesAdresses(System::String^ dataTableName)
{
	System::String^ sql;

	sql = this->oMappTB->SelectAdr();
	return this->oCad->getRows(sql, dataTableName);
}

void NS_Comp_Svc::CLservices::ajouterUnePersonne(System::String^ nom, System::String^ prenom)
{
	System::String^ sql;


	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->InsertPersonne();

	this->oCad->actionRows(sql);
}


void NS_Comp_Svc::CLservices::supprimerUnePersonne(int id)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	sql = this->oMappTB->Delete();

	this->oCad->actionRows(sql);

}

void NS_Comp_Svc::CLservices::modifierUnePersonne(int id ,System::String^ prenom , System::String^ nom)
{
	System::String^ sql;
	this->oMappTB->setId(id);
	this->oMappTB->setNom(nom);
	this->oMappTB->setPrenom(prenom);
	sql = this->oMappTB->Update();

	this->oCad->actionRows(sql);

}


System::String^ NS_Comp_Svc::CLservices::get_nom(int id)
{
	System::String^ sql;

	this->oMappTB->setId(id);
	sql = this->oMappTB->updateNom();
	

	return nom;
}

void NS_Comp_Svc::CLservices::ajouterUneAdresse(System::String^ adresse, System::String^ ville, System::String^ CP, int idClientAdr, int idAdr)
{
	System::String^ sql;
	
	this->oMappTB->setIdClientAdr(idClientAdr);
	this->oMappTB->setIdAdr(idAdr);
	this->oMappTB->setAdresse(adresse);
	this->oMappTB->setVille(ville);
	this->oMappTB->setCP(CP);
	sql = this->oMappTB->InsertAdresse();

	this->oCad->actionRows(sql);
}


