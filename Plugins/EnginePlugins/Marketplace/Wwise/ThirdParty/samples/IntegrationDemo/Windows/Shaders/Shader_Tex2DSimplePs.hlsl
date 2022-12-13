/*******************************************************************************
The content of this file includes portions of the AUDIOKINETIC Wwise Technology
released in source code form as part of the SDK installer package.

Commercial License Usage

Licensees holding valid commercial licenses to the AUDIOKINETIC Wwise Technology
may use this file in accordance with the end user license agreement provided 
with the software or, alternatively, in accordance with the terms contained in a
written agreement between you and Audiokinetic Inc.

  Copyright (c) 2022 Audiokinetic Inc.
*******************************************************************************/

#include "Shader_Tex2DSimpleCommon.hlsl"

Texture2D g_txMain		: register(t0);
SamplerState g_samMain	: register(s0);

[RootSignature(TexRS)]
float4 PsMain(VS_OUTPUT input) : SV_TARGET
{
	return g_txMain.Sample(g_samMain, input.texcoord);
}
