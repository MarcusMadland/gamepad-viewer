// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "Blueprint/UserWidget.h"

#include "InputType.h"

#include "GamepadUserWidget.generated.h"

UCLASS()
class UGamepadUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintCallable, Category = "Input")
	void Reset();

	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetAxisInput(EInputType Type = EInputType::E_FaceButtonBottom, float Value = 0.0f);

	UFUNCTION(BlueprintCallable, Category = "Input")
	void SetActionInput(EInputType Type = EInputType::E_FaceButtonBottom, bool Value = false);

	UFUNCTION(BlueprintPure, Category = "Input")
	FVector2D GetInputPosition(EInputType TypeX, EInputType TypeY);

	UFUNCTION(BlueprintPure, Category = "Input")
	ESlateVisibility GetAxisVisibility(EInputType Type);
					 
	UFUNCTION(BlueprintPure, Category = "Input")
	ESlateVisibility GetActionVisibility(EInputType Type);
					 
	UFUNCTION(BlueprintPure, Category = "Input")
	ESlateVisibility GetPositionVisibility(EInputType TypeX, EInputType TypeY);

private:
	float ToPosition(float Axis);
	float ToAxis(float Position);

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float PositionFactor = 10.0f;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Settings")
	float AxisSensitivity = 0.05f;

private:
	float AxisArr[(uint8)EInputType::E_Max];
	bool ActionArr[(uint8)EInputType::E_Max];

	FVector2D JoystickRight;
	FVector2D JoystickLeft;
};
