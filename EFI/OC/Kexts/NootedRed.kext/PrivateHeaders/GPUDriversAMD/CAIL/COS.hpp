// Copyright © 2024 ChefKiss. Licensed under the Thou Shalt Not Profit License version 1.5.
// See LICENSE for details.

#pragma once
#include <IOKit/IOTypes.h>

//-------- Common Object Services --------//

struct CosReadConfigurationSettingInput {
    const char *settingName;
    UInt32 settingType;
    UInt32 outLen;
    void *outPtr;
};

struct CosReadConfigurationSettingOutput {
    UInt32 settingLen;
};
