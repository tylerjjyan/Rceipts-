//
//  Tag.h
//  Rceipts++
//
//  Created by Tyler Yan on 2015-07-22.
//  Copyright (c) 2015 Tyler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Tag : NSManagedObject

@property (nonatomic, retain) NSString * tagName;
@property (nonatomic, retain) NSSet *receipts;
@end

@interface Tag (CoreDataGeneratedAccessors)

- (void)addReceiptsObject:(NSManagedObject *)value;
- (void)removeReceiptsObject:(NSManagedObject *)value;
- (void)addReceipts:(NSSet *)values;
- (void)removeReceipts:(NSSet *)values;

@end
