// Fill out your copyright notice in the Description page of Project Settings.

#include "GamepadUserWidget.h"

#include "Math/UnrealMathUtility.h"

void UGamepadUserWidget::Reset()
{
	for (uint32 ii = 0; ii < (uint32)EInputType::E_Max; ++ii)
	{
		AxisArr[ii] = 0.0f;
	}

	for (uint32 ii = 0; ii < (uint32)EInputType::E_Max; ++ii)
	{
		ActionArr[ii] = false;
	}
}

void UGamepadUserWidget::SetAxisInput(EInputType Type, float Value)
{
	AxisArr[(uint8)Type] = Value;
}

void UGamepadUserWidget::SetActionInput(EInputType Type, bool Value)
{
	ActionArr[(uint8)Type] = Value;
}

FVector2D UGamepadUserWidget::GetInputPosition(EInputType TypeX, EInputType TypeY)
{
	const float X = AxisArr[(uint8)TypeX];
	const float Y = AxisArr[(uint8)TypeY];
	return FVector2D(ToPosition(X), ToPosition(Y));
}

ESlateVisibility UGamepadUserWidget::GetAxisVisibility(EInputType Type)
{
	const float Axis = AxisArr[(uint8)Type];
	const bool NearlyZero = FMath::IsNearlyZero(Axis, AxisSensitivity);
	if (NearlyZero)
	{
		return ESlateVisibility::Hidden;
	}
	return ESlateVisibility::Visible;
}

ESlateVisibility UGamepadUserWidget::GetActionVisibility(EInputType Type)
{
	const bool Action = ActionArr[(uint8)Type];
	if (Action)
	{
		return ESlateVisibility::Visible;
	}
	return ESlateVisibility::Hidden;
}

ESlateVisibility UGamepadUserWidget::GetPositionVisibility(EInputType TypeX, EInputType TypeY)
{
	FVector2D Position = GetInputPosition(TypeX, TypeY);
	const bool NearlyZero = FMath::IsNearlyZero(Position.X, AxisSensitivity) && FMath::IsNearlyZero(Position.Y, AxisSensitivity);
	if (NearlyZero)
	{
		return ESlateVisibility::Hidden;
	}
	return ESlateVisibility::Visible;
}

float UGamepadUserWidget::ToPosition(float Axis)
{
	return Axis * PositionFactor;
}
float UGamepadUserWidget::ToAxis(float Position)
{
	return Position / PositionFactor;
}