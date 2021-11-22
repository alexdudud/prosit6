
#include "CLmapTB.h"

System::String^ NS_Comp_Mappage::CLmapTB::Select(void)
{
	return "SELECT [id], [nom], [prenom] FROM [DB_P6].[dbo].[TB_P6]";
}
System::String^ NS_Comp_Mappage::CLmapTB::SelectAdr(void)
{
	return "SELECT [adresse],[ville],[CP] FROM [DB_P6].[dbo].[adresses]";
}
System::String^ NS_Comp_Mappage::CLmapTB::InsertPersonne(void)
{
	return "INSERT INTO TB_P6 (nom, prenom) VALUES('" + this->nom + "','" + this->prenom +"');";
}
System::String^ NS_Comp_Mappage::CLmapTB::InsertAdresse(void)
{
	return "INSERT INTO adresses (adresse, ville,CP,id_client,id_adresse) VALUES('" + this->adresse + "','" + this->ville + "','" + this->CP + "','" + this->idClientAdr + "','" + this->idAdr + "');";
}
System::String^ NS_Comp_Mappage::CLmapTB::Delete(void)
{
	return "DELETE FROM dbo.TB_P6  WHERE id = " + this->Id +";";
}
System::String^ NS_Comp_Mappage::CLmapTB::Update(void)
{
	return "update TB_P6 SET nom = '" +this->nom+ "' , prenom = '" + this->prenom + "' WHERE id = "+this->Id + ";";
}
void NS_Comp_Mappage::CLmapTB::setId(int Id)
{
	this->Id = Id;
}
void NS_Comp_Mappage::CLmapTB::setNom(System::String^ nom)
{
	this->nom = nom;
}
void NS_Comp_Mappage::CLmapTB::setPrenom(System::String^ prenom)
{
	this->prenom = prenom;
}
void NS_Comp_Mappage::CLmapTB::setVille(System::String^ ville)
{
	this->ville = ville;
}
void NS_Comp_Mappage::CLmapTB::setAdresse(System::String^ adresse)
{
	this->adresse = adresse;
}
void NS_Comp_Mappage::CLmapTB::setCP(System::String^ CP)
{
	this->CP = CP;
}
void NS_Comp_Mappage::CLmapTB::setIdClientAdr(int idClientAdr)
{
	this->idClientAdr = idClientAdr;

}
void NS_Comp_Mappage::CLmapTB::setIdAdr(int idAdr)
{
	this->idAdr = idAdr;

}
int NS_Comp_Mappage::CLmapTB::getId(void) { return this->Id; }
System::String^ NS_Comp_Mappage::CLmapTB::getNom(void) { return this->nom; }
System::String^ NS_Comp_Mappage::CLmapTB::getPrenom(void) { return this->prenom; }

System::String^ NS_Comp_Mappage::CLmapTB::updateNom(void)
{
	return "SELECT nom FROM dbo.TB_P6 WHERE id = " + this->Id + "; ";


}
