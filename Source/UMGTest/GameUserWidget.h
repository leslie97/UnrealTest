// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class UMGTEST_API UGameUserWidget : public UUserWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;

	virtual void NativeDestruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* FadeInAnim;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (BindWidgetAnim), Transient)
	UWidgetAnimation* FadeOutAnim;

public:
	UFUNCTION(BlueprintCallable)
	void PlayFadeIn();
};
