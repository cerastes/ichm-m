//
//  iChmAppDelegate.h
//  iChm
//
//  Created by Robin Lu on 10/7/08.
//  Copyright __MyCompanyName__ 2008. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface iChmAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
	
	NSMutableArray *fileList;
	NSMutableArray *fileTitleList;
	NSMutableDictionary *filePreferences;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;
@property (readonly) NSArray* fileList;
@property (readonly) NSArray* fileTitleList;

- (id) getPreferenceForFile:(NSString*)filename;
- (void) setPreference:(id)pref ForFile:(NSString*)filename;
- (void)reloadFileList;
@end

// for moving around the UITableViewIndex
static BOOL tableViewIndexMoveIn(id self, SEL _cmd);
static BOOL tableViewIndexMoveOut(id self, SEL _cmd);
