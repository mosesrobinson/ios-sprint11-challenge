//
//  MJRLyricsTableViewController.h
//  Lyric Finder
//
//  Created by Moses Robinson on 3/29/19.
//  Copyright © 2019 Moses Robinson. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MJRSongController;

NS_ASSUME_NONNULL_BEGIN

@interface MJRSongsTableViewController : UITableViewController

@property (nonatomic) MJRSongController *songController;

@end

NS_ASSUME_NONNULL_END
