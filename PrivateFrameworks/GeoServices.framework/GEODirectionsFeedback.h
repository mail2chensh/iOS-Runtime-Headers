/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSData, NSMutableArray;

@interface GEODirectionsFeedback : PBCodable <NSCopying> {
    NSData *_directionResponseID;
    struct { double x1; unsigned int x2; boolx3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; } *_stepFeedbacks;
    unsigned long long _stepFeedbacksCount;
    unsigned long long _stepFeedbacksSpace;
    NSMutableArray *_traversedRouteIDs;
}

@property(retain) NSData * directionResponseID;
@property(readonly) bool hasDirectionResponseID;
@property(readonly) struct { double x1; unsigned int x2; boolx3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }* stepFeedbacks;
@property(readonly) unsigned long long stepFeedbacksCount;
@property(retain) NSMutableArray * traversedRouteIDs;

- (void)addStepFeedback:(struct { double x1; unsigned int x2; boolx3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })arg1;
- (void)addTraversedRouteIDs:(id)arg1;
- (void)clearStepFeedbacks;
- (void)clearTraversedRouteIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)directionResponseID;
- (bool)hasDirectionResponseID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDirectionResponseID:(id)arg1;
- (void)setStepFeedbacks:(struct { double x1; unsigned int x2; boolx3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)arg1 count:(unsigned long long)arg2;
- (void)setTraversedRouteIDs:(id)arg1;
- (struct { double x1; unsigned int x2; boolx3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; })stepFeedbackAtIndex:(unsigned long long)arg1;
- (struct { double x1; unsigned int x2; boolx3; struct { unsigned int x_4_1_1 : 1; unsigned int x_4_1_2 : 1; unsigned int x_4_1_3 : 1; } x4; }*)stepFeedbacks;
- (unsigned long long)stepFeedbacksCount;
- (id)traversedRouteIDs;
- (id)traversedRouteIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)traversedRouteIDsCount;
- (void)writeTo:(id)arg1;

@end
