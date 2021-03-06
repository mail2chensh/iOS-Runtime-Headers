/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOPDAddress, GEOPDAmenities, GEOPDBounds, GEOPDETA, GEOPDEntity, GEOPDFlyover, GEOPDHours, GEOPDPhoto, GEOPDPlaceInfo, GEOPDRating, GEOPDRawAttribute, GEOPDReview, GEOPDRoadAccessInfo, GEOPDStyleAttributes;

@interface GEOPDComponentValue : PBCodable <NSCopying> {
    GEOPDRoadAccessInfo *_accessInfo;
    GEOPDAddress *_address;
    GEOPDAmenities *_amenities;
    GEOPDBounds *_bounds;
    GEOPDEntity *_entity;
    GEOPDETA *_eta;
    GEOPDFlyover *_flyover;
    GEOPDHours *_hours;
    GEOPDPhoto *_photo;
    GEOPDPlaceInfo *_placeInfo;
    GEOPDRating *_rating;
    GEOPDRawAttribute *_rawAttribute;
    GEOPDReview *_review;
    GEOPDStyleAttributes *_styleAttributes;
}

@property(retain) GEOPDRoadAccessInfo * accessInfo;
@property(retain) GEOPDAddress * address;
@property(retain) GEOPDAmenities * amenities;
@property(retain) GEOPDBounds * bounds;
@property(retain) GEOPDEntity * entity;
@property(retain) GEOPDETA * eta;
@property(retain) GEOPDFlyover * flyover;
@property(readonly) bool hasAccessInfo;
@property(readonly) bool hasAddress;
@property(readonly) bool hasAmenities;
@property(readonly) bool hasBounds;
@property(readonly) bool hasEntity;
@property(readonly) bool hasEta;
@property(readonly) bool hasFlyover;
@property(readonly) bool hasHours;
@property(readonly) bool hasPhoto;
@property(readonly) bool hasPlaceInfo;
@property(readonly) bool hasRating;
@property(readonly) bool hasRawAttribute;
@property(readonly) bool hasReview;
@property(readonly) bool hasStyleAttributes;
@property(retain) GEOPDHours * hours;
@property(retain) GEOPDPhoto * photo;
@property(retain) GEOPDPlaceInfo * placeInfo;
@property(retain) GEOPDRating * rating;
@property(retain) GEOPDRawAttribute * rawAttribute;
@property(retain) GEOPDReview * review;
@property(retain) GEOPDStyleAttributes * styleAttributes;

- (id)accessInfo;
- (id)address;
- (id)amenities;
- (id)bounds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entity;
- (id)eta;
- (id)flyover;
- (bool)hasAccessInfo;
- (bool)hasAddress;
- (bool)hasAmenities;
- (bool)hasBounds;
- (bool)hasEntity;
- (bool)hasEta;
- (bool)hasFlyover;
- (bool)hasHours;
- (bool)hasPhoto;
- (bool)hasPlaceInfo;
- (bool)hasRating;
- (bool)hasRawAttribute;
- (bool)hasReview;
- (bool)hasStyleAttributes;
- (unsigned long long)hash;
- (id)hours;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photo;
- (id)placeInfo;
- (id)rating;
- (id)rawAttribute;
- (bool)readFrom:(id)arg1;
- (id)review;
- (void)setAccessInfo:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setAmenities:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setEntity:(id)arg1;
- (void)setEta:(id)arg1;
- (void)setFlyover:(id)arg1;
- (void)setHours:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setPlaceInfo:(id)arg1;
- (void)setRating:(id)arg1;
- (void)setRawAttribute:(id)arg1;
- (void)setReview:(id)arg1;
- (void)setStyleAttributes:(id)arg1;
- (id)styleAttributes;
- (void)writeTo:(id)arg1;

@end
