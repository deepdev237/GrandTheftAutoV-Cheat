#include "../Header/Cheat Functions/FiberMain.h"

using namespace Cheat;
void GUI::Submenus::Home()
{
	GUI::Title("Home");
	GUI::MenuOption("Self", Submenus::Self);
	GUI::MenuOption("Online", Submenus::Online);
	GUI::MenuOption("Weapon", Submenus::Weapon);
	GUI::MenuOption("Vehicle", Submenus::Vehicle);
	GUI::MenuOption("Spawn", Submenus::Spawn);
	GUI::MenuOption("Teleport", Submenus::Teleport);
	GUI::MenuOption("World", Submenus::World);
	GUI::MenuOption("Miscellaneous", Submenus::Miscellaneous);
	GUI::MenuOption("Settings", Submenus::Settings);
}