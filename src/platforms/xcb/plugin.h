/*
 * Copyright 2015 Martin Gräßlin <mgraesslin@kde.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) version 3, or any
 * later version accepted by the membership of KDE e.V. (or its
 * successor approved by the membership of KDE e.V.), which shall
 * act as a proxy defined in Section 6 of version 3 of the license.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef KWINDOWSYSTEM_X11_PLUGIN_H
#define KWINDOWSYSTEM_X11_PLUGIN_H

#include "kwindowsystemplugininterface_p.h"

class X11Plugin : public KWindowSystemPluginInterface
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.kde.kwindowsystem.KWindowSystemPluginInterface" FILE "xcb.json")
    Q_INTERFACES(KWindowSystemPluginInterface)

public:
    explicit X11Plugin(QObject *parent = nullptr);
    virtual ~X11Plugin();

    KWindowEffectsPrivate *createEffects() Q_DECL_OVERRIDE;
    KWindowSystemPrivate *createWindowSystem() Q_DECL_OVERRIDE;
    KWindowInfoPrivate *createWindowInfo(WId window, NET::Properties properties, NET::Properties2 properties2) Q_DECL_OVERRIDE;
};

#endif
