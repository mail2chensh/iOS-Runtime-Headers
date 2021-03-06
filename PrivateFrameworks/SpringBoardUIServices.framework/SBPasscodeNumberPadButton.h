/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class NSString;

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton> {
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

+ (int)_characterTypeForCharacter:(unsigned int)arg1;
+ (double)_numberPadButtonOuterCircleDiameter;
+ (id)_stringCharacterForCharacter:(unsigned int)arg1;
+ (struct CGSize { double x1; double x2; })defaultSize;
+ (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })paddingOutsideRing;

- (int)characterType;
- (id)initForCharacter:(unsigned int)arg1;
- (id)stringCharacter;

@end
