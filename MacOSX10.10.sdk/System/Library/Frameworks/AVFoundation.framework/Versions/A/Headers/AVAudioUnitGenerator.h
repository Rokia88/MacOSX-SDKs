/*
    File:		AVAudioUnitGenerator.h
    Framework:	AVFoundation
 
    Copyright (c) 2014 Apple Inc. All Rights Reserved.
 */

#import <AVFoundation/AVAudioUnit.h>
#import <AVFoundation/AVAudioMixing.h>

/*! @class AVAudioUnitGenerator
    @abstract an AVAudioUnit that generates audio output
    @discussion
    An AVAudioUnitGenerator represents an audio unit of type kAudioUnitType_Generator or
	kAudioUnitType_RemoteGenerator.
    A generator will have no audio input, but will just produce audio output.
    A tone generator is an example of this. 
*/
NS_CLASS_AVAILABLE(10_10, 8_0)
@interface AVAudioUnitGenerator : AVAudioUnit <AVAudioMixing>

/*! @method initWithAudioComponentDescription:
    @abstract Create an AVAudioUnitGenerator object.
    
    @param audioComponentDescription
    @abstract AudioComponentDescription of the audio unit to be instantiated.
    @discussion
    The componentType must be kAudioUnitType_Generator or kAudioUnitType_RemoteGenerator
*/
- (instancetype)initWithAudioComponentDescription:(AudioComponentDescription)audioComponentDescription;

/*! @property bypass
    @abstract Bypass state of the audio unit.
*/
@property (nonatomic) BOOL bypass;

@end
