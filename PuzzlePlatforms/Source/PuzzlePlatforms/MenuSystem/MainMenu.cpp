// Fill out your copyright notice in the Description page of Project Settings.


#include "MenuSystem/MainMenu.h"

#include "Components/Button.h"

bool UMainMenu::Initialize()
{
	bool Sucess = Super::Initialize();
	UE_LOG(LogTemp, Warning, TEXT("Ready 3 "))
	if (!Sucess) return false;
	UE_LOG(LogTemp, Warning, TEXT("Ready 4 "))
	if (!ensure(Host != nullptr))return false;
	UE_LOG(LogTemp, Warning, TEXT("Ready 5 "))
	Host->OnClicked.AddDynamic(this, &UMainMenu::HostServer);

	return true;
}
void UMainMenu::HostServer()
{
	if (MenuInterface != nullptr) 
	{
		MenuInterface->Host();
	}
}
void UMainMenu::SetMenuInterface(IMenuInterface* MenuInterface)
{
	this->MenuInterface = MenuInterface;
}
