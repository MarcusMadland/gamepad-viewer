#pragma once

#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "InputType.generated.h"

UENUM(BlueprintType)
enum class EInputType : uint8
{
    E_FaceButtonBottom = 0 UMETA(DisplayName = "Face Button Bottom"),
    E_FaceButtonTop = 1 UMETA(DisplayName = "Face Button Top"),
    E_FaceButtonLeft = 2 UMETA(DisplayName = "Face Button Left"),
    E_FaceButtonRight = 3 UMETA(DisplayName = "Face Button Right"),

    E_DPadBottom = 4 UMETA(DisplayName = "D Pad Bottom"),
    E_DPadTop = 5 UMETA(DisplayName = "D Pad Top"),
    E_DPadLeft = 6 UMETA(DisplayName = "D Pad Left"),
    E_DPadRight = 7 UMETA(DisplayName = "D Pad Right"),

    E_ShoulderLeft = 8 UMETA(DisplayName = "Shoulder Left"),
    E_ShoulderRight = 9 UMETA(DisplayName = "Shoulder Right"),

    E_TriggerLeft = 10 UMETA(DisplayName = "Trigger Left"),
    E_TriggerRight = 11 UMETA(DisplayName = "Trigger Right"),

    E_JoystickLeftX = 12 UMETA(DisplayName = "Joystick Left X"),
    E_JoystickLeftY = 13 UMETA(DisplayName = "Joystick Left Y"),
    E_JoystickRightX = 14 UMETA(DisplayName = "Joystick Right X"),
    E_JoystickRightY = 15 UMETA(DisplayName = "Joystick Right Y"),

    E_Max = 16 UMETA(DisplayName = "Max Input Types"),
};