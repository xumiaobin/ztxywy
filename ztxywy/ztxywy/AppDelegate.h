//
//  AppDelegate.h
//  ztxywy
//
//  Created by Moussirou Serge Alain on 16/10/22.
//  Copyright © 2016年 Moussirou Serge Alain. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

