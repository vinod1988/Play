//
//  RdioTrackBrowserViewController.h
//  Play
//
//  Created by Drew Ingebretsen on 3/7/13.
//  Copyright (c) 2013 Nathan Borror. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Rdio/Rdio.h>

@interface RdioCollectionViewController : UITableViewController <RDAPIRequestDelegate, RdioDelegate>

@property (nonatomic, retain) NSArray *itemList;

@end
