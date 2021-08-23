//
// Copyright 2017 Timo Kloss
//
// This file is part of LowRes NX.
//
// LowRes NX is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// LowRes NX is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with LowRes NX.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef cmd_io_h
#define cmd_io_h

#include <stdio.h>
#include "error.h"
#include "value.h"

struct Core;

enum ErrorCode cmd_KEYBOARD(struct Core *core);
enum ErrorCode cmd_TOUCHSCREEN(struct Core *core);
enum ErrorCode cmd_GAMEPAD(struct Core *core);
enum ErrorCode cmd_PAUSE(struct Core *core);
struct TypedValue fnc_UP_DOWN_LEFT_RIGHT(struct Core *core);
struct TypedValue fnc_BUTTON(struct Core *core);
struct TypedValue fnc_TOUCH(struct Core *core);
struct TypedValue fnc_TAP(struct Core *core);
struct TypedValue fnc_TOUCH_X_Y(struct Core *core);
struct TypedValue fnc_PAUSE(struct Core *core);

#endif /* cmd_io_h */
