class Utilisateur {
    private :
char nom ;
char prenom;
int age;
char position; // Position de l'utilisateur
bool voiture;
bool velo;
bool metro;
bool pieds;

public:
// Constructeurs
Utilisateur();
Utilisateur (char nom, char prenom,int age, bool voiture, bool velo, bool metro, bool pieds);

//Accesseurs et mutateurs
void setPosition(char position);
void canWalk() ;
void GetBike();
void GetCar();
void GetSub();
} ;

   
