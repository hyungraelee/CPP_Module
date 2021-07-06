#include "Pony.hpp"

void	ponyOnTheStack(Pony &stackpony)
{
	stackpony.SetName("Thunderbolt");
	stackpony.SetColor("Bright Yellow");
	stackpony.SetCry("hhhhiiihhhiihing");
	stackpony.SetAge(6);
}

void	ponyOnTheHeap(Pony *&heappony)
{
	heappony = new Pony();
	heappony->SetName("Hurricane");
	heappony->SetColor("Dark Blue");
	heappony->SetCry("ppurrrrrppurrrrr");
	heappony->SetAge(8);
}

int	main()
{
	{
		Pony	stackpony = Pony();
		Pony	*heappony = NULL;

		ponyOnTheStack(stackpony);
		ponyOnTheHeap(heappony);
		std::cout << "\nWhat's your name?\n" << std::endl;
		stackpony.SpeakName();
		heappony->SpeakName();
		std::cout << "\nWhat color do you have?\n" << std::endl;
		stackpony.SpeakColor();
		heappony->SpeakColor();
		std::cout << "\nHow old are you?\n" << std::endl;
		stackpony.SpeakAge();
		heappony->SpeakAge();
		std::cout << "\nLet's run!!!!!\n" << std::endl;
		stackpony.Cry();
		heappony->Cry();
		std::cout << "\nGood job!!! Get some rest.\n" << std::endl;
		delete heappony;
		heappony = NULL;
	}
	system("leaks a.out");
	return (0);
}
