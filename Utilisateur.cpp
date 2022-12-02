#include "Utilisateur.h"

Utilisateur::Utilisateur(char nom, char prenom, int age, char position)
{
    this->nom = nom;
    this->prenom = prenom;
  this->position = position;
  this->age = age;
}

void Utilisateur::pieds();
{
    this->canWalk() = true;
}

void Utilisateur::metro();
{
    this->GetSub() = true;
}

void Utilisateur::car();
{
    this-> getCar = true;

}

void Utilisateur:: velo();
{
    this->GetBike = true;

}
