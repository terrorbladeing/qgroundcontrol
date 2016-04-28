/*=====================================================================

 QGroundControl Open Source Ground Control Station

 (c) 2009 - 2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>

 This file is part of the QGROUNDCONTROL project

 QGROUNDCONTROL is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 QGROUNDCONTROL is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with QGROUNDCONTROL. If not, see <http://www.gnu.org/licenses/>.

 ======================================================================*/

#ifndef CameraComponent_H
#define CameraComponent_H

#include "VehicleComponent.h"

/// @file
///     @brief  The Camera VehicleComponent is used to setup the camera modes and hardware
///             configuration to use it.
///     @author Gus Grubba <mavlink@grubba.com>

class CameraComponent : public VehicleComponent
{
    Q_OBJECT

public:
    CameraComponent (Vehicle* vehicle, AutoPilotPlugin* autopilot, QObject* parent = NULL);

    // Virtuals from VehicleComponent
    QStringList     setupCompleteChangedTriggerList         (void) const;

    // Virtuals from VehicleComponent
    QString         name                                    (void) const final;
    QString         description                             (void) const final;
    QString         iconResource                            (void) const final;
    bool            requiresSetup                           (void) const final;
    bool            setupComplete                           (void) const final;
    QUrl            setupSource                             (void) const final;
    QUrl            summaryQmlSource                        (void) const final;
    QString         prerequisiteSetup                       (void) const final;
    bool            allowSetupWhileArmed                    (void) const final { return false; }

private:
    const QString   _name;
    QVariantList    _summaryItems;
};

#endif
