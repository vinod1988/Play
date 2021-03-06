//
//  SonosController.h
//  Play
//
//  Created by Nathan Borror on 12/31/12.
//  Copyright (c) 2012 Nathan Borror. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, SonosRequestType) {
  SonosRequestTypeAVTransport,
  SonosRequestTypeConnectionManager,
  SonosRequestTypeRenderingControl,
  SonosRequestTypeContentDirectory,
  SonosRequestTypeAlarmClock,
  SonosRequestTypeMusicServices,
  SonosRequestTypeAudioIn,
  SonosRequestTypeDeviceProperties,
  SonosRequestTypeSystemProperties,
  SonosRequestTypeZoneGroupTopology,
  SonosRequestTypeGroupManagement,
};

@class SOAPEnvelope;
@class SonosVolumeResponse;
@class SonosInput;
@class RdioSong;

@interface SonosController : NSObject

@property (nonatomic, readonly) BOOL isPlaying;

- (id)initWithInput:(SonosInput *)input;

+ (SonosController *)sharedController;

+ (void)request:(SonosRequestType)type
          input:(SonosInput *)input
         action:(NSString *)action
         params:(NSDictionary *)params
     completion:(void(^)(id obj, NSError *error))block;

- (void)play:(SonosInput *)input track:(NSString *)track completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;
- (void)play:(SonosInput *)input rdioSong:(RdioSong *)song completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;
- (void)pause:(SonosInput *)input completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;
- (void)stop:(SonosInput *)input completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;
- (void)next:(SonosInput *)input completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;
- (void)previous:(SonosInput *)input completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;
- (void)volume:(SonosInput *)input completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;
- (void)volume:(SonosInput *)input level:(int)level completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;
- (void)lineIn:(SonosInput *)input completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;
- (void)trackInfo:(SonosInput *)input completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;
- (void)status:(SonosInput *)input completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;
- (void)browse:(SonosInput *)input completion:(void(^)(SOAPEnvelope *envelope, NSError *error))block;

@end
