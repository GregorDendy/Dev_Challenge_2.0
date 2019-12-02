// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class Dev_Challenge_2EditorTarget : TargetRules
{
	public Dev_Challenge_2EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "Dev_Challenge_2" } );
	}
}
