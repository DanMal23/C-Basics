
/*Virtual Functions
allow to create methods in subclasses*/

#include <iostream>
#include <string>
using namespace std;

class ArchLinuxOS 
{
    public:
        virtual void UsePackageManager()
  {
     cout<<" uses 'pacman' package manager"<<endl;
  }
        virtual void UseRepo()
  {
    cout<<" uses AUR - Arch User Repository"<<endl;
  }
        virtual void ShowDevelopers()
  {
      cout<<"Archlinux developers: Aaron Griffin and others"<<endl;
  }
        virtual void ShowYearRelease()
  {
      cout<<" initial release: 2002"<<endl;
  }
};

class Manjaro: public ArchLinuxOS
{
    public:
        void ShowDevelopers()
  {
    cout<<"Manjaro developers: Guillaume Benoit, Philip Müller"<<endl;
  }
        void ShowYearRelease()
  {
      cout<<" initial release: 2011"<<endl;
  }
};

class ArcoLinux:public ArchLinuxOS
{
    public:
        void ShowDevelopers()
  {
    cout<<"ArcoLinux developers: Erik Dubois"<<endl;
  }
        void ShowYearRelease()
  {
      cout<<" initial release: 2018"<<endl;
  }
};

class Chakra:public ArchLinuxOS
{
    public:
        void ShowDevelopers()
  {
    cout<<"Chakra developers: Chakra Team"<<endl;
  }
        void ShowYearRelease()
  {
      cout<<" initial release: 2010"<<endl;
  }
        void UsePackageManager()
  {
     cout<<" uses other packages"<<endl;
  }
        void UseRepo()
  {
     cout<<" uses Chakra Community Repository"<<endl;
  }
};

int main() {
   ArchLinuxOS *a = new ArchLinuxOS();
   a->ShowDevelopers();
   a->ShowYearRelease();
   a->UsePackageManager(); 
   a->UseRepo(); 

ArchLinuxOS *am = new Manjaro();
am->ShowDevelopers();
am->ShowYearRelease();
am->UsePackageManager(); //ArchLinuxOS method is called as it's overriden
am->UseRepo(); //ArchLinuxOS method called

ArchLinuxOS *al = new ArcoLinux();
al->ShowDevelopers();
al->ShowYearRelease();
al->UsePackageManager(); //ArchLinuxOS method called 
al->UseRepo(); //ArchLinuxOS method called

ArchLinuxOS *cha = new Chakra();
cha->ShowDevelopers();
cha->ShowYearRelease();
cha->UsePackageManager(); //ArchLinuxOS method called 
cha->UseRepo(); //ArchLinuxOS method called

cin.get();

return 0;
}
