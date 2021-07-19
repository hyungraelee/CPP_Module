#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

// int main()
// {
// 	ISpaceMarine* bob = new TacticalMarine;
// 	ISpaceMarine* jim = new AssaultTerminator;
// 	ISquad* vlc = new Squad;
// 	vlc->push(bob);
// 	vlc->push(jim);
// 	for (int i = 0; i < vlc->getCount(); ++i)
// 	{
// 		ISpaceMarine* cur = vlc->getUnit(i);
// 		cur->battleCry();
// 		cur->rangedAttack();
// 		cur->meleeAttack();
// 	}
// 	delete vlc;
// 	return 0;
// }

// int main()
// {
// 	ISpaceMarine* bob = new TacticalMarine;
// 	ISpaceMarine* jim = new AssaultTerminator;
// 	ISpaceMarine* none = NULL;

// 	ISquad* vlc = new Squad;
// 	vlc->push(bob);
// 	vlc->push(jim);
// 	vlc->push(none);
// 	vlc->push(jim);

// 	for (int i = 0; i < vlc->getCount(); ++i)
// 	{
// 		ISpaceMarine* cur = vlc->getUnit(i);
// 		cur->battleCry();
// 		cur->rangedAttack();
// 		cur->meleeAttack();
// 	}
// 	Squad newvlc((Squad&)(*vlc));
// 	delete vlc;
// 	return 0;
// }

int main()
{
	{
		ISpaceMarine *bob = new TacticalMarine;
		ISpaceMarine *jim = new AssaultTerminator;
		ISpaceMarine* none = NULL;
		ISquad *vlc = new Squad;
		vlc->push(bob);
		vlc->push(jim);
		vlc->push(none);
		vlc->push(jim);
		for (int i = 0; i < vlc->getCount(); ++i)
		{
			ISpaceMarine *cur = vlc->getUnit(i);
			cur->battleCry();
			cur->rangedAttack();
			cur->meleeAttack();
		}
		Squad vlc2((Squad &)(*vlc));
		Squad vlc3((Squad &)(*vlc));
		vlc2 = vlc3;
		delete vlc;
	}
	{
		system("leaks a.out");
	}
	return 0;
}
