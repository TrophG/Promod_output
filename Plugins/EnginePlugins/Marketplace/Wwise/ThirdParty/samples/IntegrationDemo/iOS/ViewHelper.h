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

// GameRenderer.mm
/// \file 
/// Common implementation (iOS and Mac OS X) for drawing
/// Integration Demo text on screen.

#import "TextTexure2D.h"

@interface ViewHelper : NSObject {
}

+ (void) getScreenRegion:(CGRect&) appRect;
@end
