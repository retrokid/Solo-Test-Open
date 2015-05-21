//
//  GeoCalc.h
//  Solo Test Open
//
//  Created by efe ertugrul on 20/05/15.
//  Copyright (c) 2015 efe ertugrul. All rights reserved.
//
/*
 Redistribution and use in source and binary forms, with or without modification, are permitted provided
 that the following conditions are met:
 
 1. Redistributions of source code must retain the above copyright notice, this list of conditions and
 the following disclaimer.
 
 2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions
 and the following disclaimer in the documentation and/or other materials provided with the distribution.
 
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */
#import <Foundation/Foundation.h>
#import <SpriteKit/SpriteKit.h>

@interface GeoCalc : NSObject
{
    CGRect frame;
    CGFloat hRayWidth;
    CGFloat hRayHeight;
    CGFloat vRayWidth;
    CGFloat vRayHeight;
    CGSize HSize;
    CGSize VSize;
    CGFloat boardMaxWidth;
    CGFloat boardMaxHeight;
    CGFloat boardMinX;
    CGFloat boardMinY;
    CGSize boardSize;
    CGFloat pawnHeight;
    CGFloat pawnWidth;
    CGSize pawnSize;
}

-(id)initWithSceneFrame:(CGRect)theFrame;

-(CGFloat)hRayWidth;
-(CGFloat)hRayHeight;
-(CGFloat)vRayWidth;
-(CGFloat)vRayHeight;

-(CGSize)HSize;
-(CGSize)VSize;

-(CGFloat)boardMaxWidth;
-(CGFloat)boardMaxHeight;
-(CGFloat)boardMinX;
-(CGFloat)boardMinY;

-(CGSize)boardSize;

-(CGFloat)pawnHeight;
-(CGFloat)pawnWidth;

-(CGSize)pawnSize;

-(NSArray *)boardPawnPointsCoordinates;

-(NSInteger)findDropPointOfSelectedPawn:(CGPoint)lastPositionWhenTouchEnded inCoordinates:(NSArray *)boardPawnPointsCoordinates;
-(NSInteger)findPickupPointOfSelectedPawn:(CGPoint)selectedPawnPosition inCoordinates:(NSArray *)boardPawnPointsCoordinates;

@end
