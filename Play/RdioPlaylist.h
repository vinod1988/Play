//
//  RdioPlaylist.h
//  Play
//
//  Created by Nathan Borror on 7/7/13.
//  Copyright (c) 2013 Nathan Borror. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface RdioPlaylist : NSObject

@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSArray *songs;

@end
