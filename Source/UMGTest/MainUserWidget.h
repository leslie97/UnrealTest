// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameUserWidget.h"
#include "Blueprint/UserWidget.h"
#include "Components/Button.h"
#include "GameUserWidget.h"
#include "MainUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class UMGTEST_API UMainUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;

	UFUNCTION()
	void OnGameButtonClicked();
	
	UFUNCTION()
	void OnMapsButtonClicked();

	UFUNCTION()
	void OnMediaButtonClicked();

	UFUNCTION()
	void OnSettingsButtonClicked();

	UFUNCTION()
	void OnTutorialButtonClicked();

public:
	UPROPERTY(meta = (BindWidget))
	UButton* btnGame;

	UPROPERTY(meta = (BindWidget))
	UButton* btnMaps;

	UPROPERTY(meta = (BindWidget))
	UButton* btnMedia;

	UPROPERTY(meta = (BindWidget))
	UButton* btnSettings;

	UPROPERTY(meta = (BindWidget))
	UButton* btnTutorial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
	TSubclassOf<UGameUserWidget> GameUserWidgetClass;

private:
	UPROPERTY()
	UGameUserWidget* GameUserWidget;
};
