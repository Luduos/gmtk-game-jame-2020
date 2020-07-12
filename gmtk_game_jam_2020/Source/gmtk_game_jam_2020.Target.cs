// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class gmtk_game_jam_2020Target : TargetRules
{
	public gmtk_game_jam_2020Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "gmtk_game_jam_2020" } );
	}
}
