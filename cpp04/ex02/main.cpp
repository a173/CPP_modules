#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

void subj()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
}

void copy_test() {
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	Squad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	std::cout << "\n\n";
	Squad* copy = new Squad(*vlc);
	delete vlc;
	for (int i = 0; i < copy->getCount(); ++i)
	{
		ISpaceMarine* cur = copy->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete copy;
}

void assignment() {
	 ISpaceMarine* bob = new TacticalMarine;
	 ISpaceMarine* jim = new AssaultTerminator;
	 ISpaceMarine* bill = new AssaultTerminator;

	 Squad* vlc = new Squad;
	 vlc->push(bob);
	 vlc->push(jim);
	 Squad* lava = new Squad;
	 lava->push(bill);
	 std::cout << "\n\n";
	 *lava = *vlc;
	 delete vlc;
	 for (int i = 0; i < lava->getCount(); ++i)
	 {
		ISpaceMarine* cur = lava->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	 }
	 delete lava;
}

int main()
{
ISpaceMarine* bob = new TacticalMarine;
ISpaceMarine* jim = new AssaultTerminator;
ISquad* vlc = new Squad;
vlc->push(bob);
vlc->push(jim);
for (int i = 0; i < vlc->getCount(); ++i)
{
ISpaceMarine* cur = vlc->getUnit(i);
cur->battleCry();
cur->rangedAttack();
cur->meleeAttack();
}
delete vlc;
return 0;
}