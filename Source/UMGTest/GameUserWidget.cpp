// Fill out your copyright notice in the Description page of Project Settings.


#include "GameUserWidget.h"

void UGameUserWidget::NativeConstruct()
{
    Super::NativeConstruct();

    UE_LOG(LogTemp, Warning, TEXT("UGameUserWidget::NativeConstruct()"));
}

void UGameUserWidget::NativeDestruct()
{
    Super::NativeDestruct();

    UE_LOG(LogTemp, Warning, TEXT("UGameUserWidget::NativeDestruct()"));

    if (FadeOutAnim) {
        PlayAnimation(FadeOutAnim);
    }
}

void UGameUserWidget::PlayFadeIn()
{
    if (FadeInAnim)
    {
        PlayAnimation(FadeInAnim);
    }
}