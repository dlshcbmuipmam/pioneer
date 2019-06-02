// Copyright © 2008-2019 Pioneer Developers. See AUTHORS.txt for details
// Licensed under the terms of the GPL v3. See licenses/GPL-3.txt

#include "PiGuiLua.h"
#include "Face.h"

namespace PiGUI {
	namespace Lua {

		void Init()
		{
			LuaObject<PiGUI::Face>::RegisterClass();
		}

	} // namespace Lua
} // namespace GameUI