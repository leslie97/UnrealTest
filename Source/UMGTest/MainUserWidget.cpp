// Fill out your copyright notice in the Description page of Project Settings.


#include "MainUserWidget.h"

void UMainUserWidget::NativeConstruct()
{
    Super::NativeConstruct();

    if (btnGame)
    {
        UE_LOG(LogTemp, Warning, TEXT("btnGame"));
        btnGame->OnClicked.AddDynamic(this, &UMainUserWidget::OnGameButtonClicked);
    }

    if (btnMaps)
    {
        UE_LOG(LogTemp, Warning, TEXT("btnMaps"));
        btnMaps->OnClicked.AddDynamic(this, &UMainUserWidget::OnMapsButtonClicked);
    }

    if (btnMedia)
    {
        UE_LOG(LogTemp, Warning, TEXT("btnMedia"));
        btnMedia->OnClicked.AddDynamic(this, &UMainUserWidget::OnMediaButtonClicked);
    }

    if (btnSettings)
    {
        UE_LOG(LogTemp, Warning, TEXT("btnSettings"));
        btnSettings->OnClicked.AddDynamic(this, &UMainUserWidget::OnSettingsButtonClicked);
    }

    if (btnTutorial)
    {
        UE_LOG(LogTemp, Warning, TEXT("btnTutorial"));
        btnTutorial->OnClicked.AddDynamic(this, &UMainUserWidget::OnTutorialButtonClicked);
    }

}

void UMainUserWidget::OnGameButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("Game button clicked!"));

    if (GameUserWidgetClass && !GameUserWidget)
    {
        GameUserWidget = CreateWidget<UGameUserWidget>(GetWorld(), GameUserWidgetClass);
        if (GameUserWidget)
        {
            GameUserWidget->AddToViewport();
            GameUserWidget->PlayFadeIn();
        }
    }
}

void UMainUserWidget::OnMapsButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("Maps button clicked!"));

}

void UMainUserWidget::OnMediaButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("Media button clicked!"));

}

void UMainUserWidget::OnSettingsButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("Settings button clicked!"));

}

void UMainUserWidget::OnTutorialButtonClicked()
{
    UE_LOG(LogTemp, Warning, TEXT("Tutorial button clicked!"));

}

