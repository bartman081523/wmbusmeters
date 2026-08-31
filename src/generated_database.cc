/*
 Copyright (C) 2024-2026 Fredrik Öhrström (gpl-3.0-or-later)
 Copyright (C)      2026 Hynek Moravec (gpl-3.0-or-later)
 Copyright (C)      2026 Felix Hauptmann (gpl-3.0-or-later)
 Copyright (C)      2026 Bartosz Biegun (gpl-3.0-or-later)
 Copyright (C)      2025 obidobi (gpl-3.0-or-later)
 Copyright (C)      2025 Karel Blavka (gpl-3.0-or-later)
 Copyright (C)      2024 Marton Czwick (CC0-1.0)
 Copyright (C)      2024 Arthur van Dorp (gpl-3.0-or-later)
 Copyright (C)      2023 Andreas Horrer (gpl-3.0-or-later)
 Copyright (C)      2022 thecem (gpl-3.0-or-later)
 Copyright (C)      2022 Alexander Streit (gpl-3.0-or-later)
 Copyright (C)      2021 Vincent Privat (gpl-3.0-or-later)
 Copyright (C)      2021 Olli Salonen (gpl-3.0-or-later)
 Copyright (C) 2020-2022 Patrick Schwarz (gpl-3.0-or-later)
 Copyright (C)      2020 Janus Bo Andersen (gpl-3.0-or-later)
 Copyright (C)      2020 Eric Bus (gpl-3.0-or-later)
 Copyright (C)      2020 Avandorp (gpl-3.0-or-later)
 Copyright (C)      2019 Jacek Tomasiak (gpl-3.0-or-later)
 Copyright (C)      2018 David Mallon (gpl-3.0-or-later)

 This program is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.

 This program is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.

 You should have received a copy of the GNU General Public License
 along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

// This source is generated from drivers/src/*.xmq
// Run "cd drivers; make install" to regenerate this file.

#include"drivers.h"

BuiltinDriver builtins_[] =
{
    { "abbb23", "", "", false },
    { "actislink", "", "", false },
    { "aerius", "", "", false },
    { "amiplus", "", "", false },
    { "apator08", "", "", false },
    { "apator162", "", "", false },
    { "apator172", "", "", false },
    { "apatoreitn", "", "", false },
    { "apatorna1", "", "", false },
    { "aptmbusna", "", "", false },
    { "aquastream", "", "", false },
    { "aventieshca", "", "", false },
    { "aventieswm", "", "", false },
    { "bfw240radio", "", "", false },
    { "c5isf", "", "", false },
    { "caltose", "", "", false },
    { "cma12w", "", "", false },
    { "compact5", "", "", false },
    { "dme173", "", "", false },
    { "dme_07", "", "", false },
    { "ebzwmbe", "", "", false },
    { "ehzp", "", "", false },
    { "ei6500", "", "", false },
    { "elf", "", "", false },
    { "elf2", "", "", false },
    { "elster", "", "", false },
    { "eltako", "", "", false },
    { "elvsense", "", "", false },
    { "em24", "", "", false },
    { "emerlin868", "", "", false },
    { "enercal", "", "", false },
    { "engelmann_faw", "", "", false },
    { "esyswm", "", "", false },
    { "eurisii", "", "", false },
    { "ev200", "", "", false },
    { "evo868", "", "", false },
    { "fhkvdataiii", "", "", false },
    { "fhkvdataiv", "", "", false },
    { "fiowater", "", "", false },
    { "gransystems", "", "", false },
    { "gwfgas", "", "", false },
    { "gwfwater", "", "", false },
    { "hcae2", "", "", false },
    { "hydrocalm3", "", "", false },
    { "hydrocalm4", "", "", false },
    { "hydroclimav2", "", "", false },
    { "hydrodigit", "", "", false },
    { "hydrus", "", "", false },
    { "iem3000", "", "", false },
    { "ime", "", "", false },
    { "iperl", "", "", false },
    { "istaheat", "", "", false },
    { "istawater", "", "", false },
    { "itron", "", "", false },
    { "itronheat", "", "", false },
    { "iwmtx5", "", "", false },
    { "izarv2", "", "", false },
    { "kaden", "", "", false },
    { "kadenwater", "", "", false },
    { "kamheat", "", "", false },
    { "kampress", "", "", false },
    { "kamwater", "", "", false },
    { "lansendw", "", "", false },
    { "lansenpu", "", "", false },
    { "lansenrp", "", "", false },
    { "lansensm", "", "", false },
    { "lansenth", "", "", false },
    { "lse_07_17", "", "", false },
    { "lse_08", "", "", false },
    { "maddalena", "", "", false },
    { "microclima", "", "", false },
    { "minomess", "", "", false },
    { "mkradio3", "", "", false },
    { "mkradio3a", "", "", false },
    { "mkradio4", "", "", false },
    { "mkradio4a", "", "", false },
    { "munia", "", "", false },
    { "nemo", "", "", false },
    { "nzr", "", "", false },
    { "omnipower", "", "", false },
    { "op041a", "", "", false },
    { "picoflux", "", "", false },
    { "piigth", "", "", false },
    { "pollucomf", "", "", false },
    { "q400", "", "", false },
    { "qcaloric", "", "", false },
    { "qheat5us", "", "", false },
    { "qheat_55_us", "", "", false },
    { "qheatv2", "", "", false },
    { "qsmoke", "", "", false },
    { "qualcosonic", "", "", false },
    { "qwaterv2", "", "", false },
    { "relhca", "", "", false },
    { "rfmamb", "", "", false },
    { "rfmtx1", "", "", false },
    { "sensostar", "", "", false },
    { "sharky", "", "", false },
    { "sharky774", "", "", false },
    { "sontex868", "", "", false },
    { "supercal", "", "", false },
    { "supercom587", "", "", false },
    { "topaseskr", "", "", false },
    { "tsd2", "", "", false },
    { "uiws", "", "", false },
    { "ultraheat", "", "", false },
    { "ultrimis", "", "", false },
    { "ultrimisv2", "", "", false },
    { "unismart", "", "", false },
    { "vario411", "", "", false },
    { "vario451", "", "", false },
    { "vario451mid", "", "", false },
    { "waterstarm", "", "", false },
    { "watertech", "", "", false },
    { "weh_07", "", "", false },
    { "werhlemodwm", "", "", false },
    { "zenner0b", "", "", false },
};

MapToDriver builtins_mvts_[] =
{
};
