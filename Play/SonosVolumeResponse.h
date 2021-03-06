//
//  SonosVolumeResponse.h
//  Play
//
//  Created by Nathan Borror on 2/21/13.
//  Copyright (c) 2013 Nathan Borror. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SonosVolumeResponse : NSObject <NSXMLParserDelegate>
{
  NSMutableString *currentString;
}

@property (nonatomic, weak) id parentParserDelegate;
@property (nonatomic, strong) NSString *currentVolume;

@end
