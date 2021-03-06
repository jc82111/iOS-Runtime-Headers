/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHPersonClusterUsabilityCriteria : NSObject

@property (nonatomic) unsigned int persistentTargetFaceCount;

+ (id)sharedInstance;

- (unsigned int)calculateTargetFaceCount;
- (unsigned int)calculateTargetFaceCountFromDataSource:(id)arg1 withMaxUnverifiedClusters:(unsigned int)arg2;
- (unsigned int)calculateTargetFaceCountFromDataSource:(id)arg1 withMaxUnverifiedClusters:(unsigned int)arg2 verifiedPeopleCount:(unsigned int)arg3;
- (id)fetchUnverifiedBySortedByFaceCount;
- (unsigned int)fetchVerifiedPeopleCount;
- (unsigned int)persistentTargetFaceCount;
- (void)setPersistentTargetFaceCount:(unsigned int)arg1;
- (void)updatePersistentTargetFaceCount;

@end
