/* Raven 2 Control - Control software for the Raven II robot
 * Copyright (C) 2005-2012  H. Hawkeye King, Blake Hannaford, and the University
 *of Washington BioRobotics Laboratory
 *
 * This file is part of Raven 2 Control.
 *
 * Raven 2 Control is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Raven 2 Control is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Raven 2 Control.  If not, see <http://www.gnu.org/licenses/>.
 */

/**
*   \file homing.h
*
*	\brief Based on concept by UCSC, I implement a procedure for joint
*position discovery from relative encoders.
*
*	\author	Hawkeye King
*
*   \date 3-Nov-2011
*
*   \ingroup Control
*/
#ifndef __HOMING_H__
#define __HOMING_H__

#include "DS0.h"

/** prototype for homing()
 */
void homing(DOF *);

/** prototype for homing()
 */
void homing(DOF *, tool);

/** prototype for check_homing_condition()
 */
int check_homing_condition(DOF *);




#endif