//
//  Receipt.h
//  Rceipts++
//
//  Created by Tyler Yan on 2015-07-22.
//  Copyright (c) 2015 Tyler. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Tag;

@interface Receipt : NSManagedObject

@property (nonatomic, retain) NSDecimalNumber * amount;
@property (nonatomic, retain) NSString * descripti0n;
@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSSet *tags;
@end

@interface Receipt (CoreDataGeneratedAccessors)

- (void)addTagsObject:(Tag *)value;
- (void)removeTagsObject:(Tag *)value;
- (void)addTags:(NSSet *)values;
- (void)removeTags:(NSSet *)values;

@end
