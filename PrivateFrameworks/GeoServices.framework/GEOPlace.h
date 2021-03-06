/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOAddress, GEOBusiness, GEOLatLng, GEOMapRegion, GEOStructuredAddress, GEOTimezone, NSMutableArray, NSString;

@interface GEOPlace : PBCodable <NSCopying, GEOURLSerializable> {
    struct { 
        unsigned int area : 1; 
        unsigned int geoId : 1; 
        unsigned int uID : 1; 
        unsigned int addressGeocodeAccuracy : 1; 
        unsigned int localSearchProviderID : 1; 
        unsigned int type : 1; 
        unsigned int isDisputed : 1; 
    GEOAddress *_address;
    int _addressGeocodeAccuracy;
    double _area;
    NSMutableArray *_business;
    GEOLatLng *_center;
    NSMutableArray *_entryPoints;
    long long _geoId;
    } _has;
    NSString *_inputLanguage;
    int _localSearchProviderID;
    GEOMapRegion *_mapRegion;
    NSString *_name;
    GEOAddress *_phoneticAddress;
    NSString *_phoneticLocaleIdentifier;
    NSString *_phoneticName;
    NSString *_spokenAddress;
    NSString *_spokenName;
    GEOStructuredAddress *_spokenStructuredAddress;
    GEOTimezone *_timezone;
    int _type;
    long long _uID;
    bool_isDisputed;
}

@property(retain) GEOAddress * address;
@property int addressGeocodeAccuracy;
@property double area;
@property(retain) NSMutableArray * business;
@property(retain) GEOLatLng * center;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSMutableArray * entryPoints;
@property(readonly) GEOBusiness * firstBusiness;
@property long long geoId;
@property(readonly) bool hasAddress;
@property bool hasAddressGeocodeAccuracy;
@property bool hasArea;
@property(readonly) bool hasCenter;
@property bool hasGeoId;
@property(readonly) bool hasInputLanguage;
@property bool hasIsDisputed;
@property bool hasLocalSearchProviderID;
@property(readonly) bool hasMapRegion;
@property(readonly) bool hasName;
@property(readonly) bool hasPhoneticAddress;
@property(readonly) bool hasPhoneticLocaleIdentifier;
@property(readonly) bool hasPhoneticName;
@property(readonly) bool hasSpokenAddress;
@property(readonly) bool hasSpokenName;
@property(readonly) bool hasSpokenStructuredAddress;
@property(readonly) bool hasTimezone;
@property bool hasType;
@property bool hasUID;
@property(readonly) unsigned long long hash;
@property(retain) NSString * inputLanguage;
@property bool isDisputed;
@property int localSearchProviderID;
@property(retain) GEOMapRegion * mapRegion;
@property(retain) NSString * name;
@property(retain) GEOAddress * phoneticAddress;
@property(retain) NSString * phoneticLocaleIdentifier;
@property(retain) NSString * phoneticName;
@property(retain) NSString * spokenAddress;
@property(retain) NSString * spokenName;
@property(retain) GEOStructuredAddress * spokenStructuredAddress;
@property(readonly) Class superclass;
@property(retain) GEOTimezone * timezone;
@property int type;
@property long long uID;
@property(retain,readonly) NSString * yelpID;

+ (id)_placesFromDirectionsAction:(id)arg1 hasCurrentLocation:(bool*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4;
+ (id)_placesFromPresentAction:(id)arg1 hasCurrentLocation:(bool*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4;
+ (id)_placesFromShowAction:(id)arg1 hasCurrentLocation:(bool*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4;
+ (id)_placesFromURL:(id)arg1 hasCurrentLocation:(bool*)arg2 currentLocationIndex:(unsigned long long*)arg3 options:(id*)arg4;
+ (id)_urlForAction:(id)arg1 rison:(id)arg2;
+ (id)_urlForDirectionsFromOrigin:(id)arg1 toDestination:(id)arg2 options:(id)arg3;
+ (id)_urlRepresentationForCurrentLocation;
+ (id)_urlToPresentAction:(id)arg1 present:(id)arg2;
+ (id)_urlToPresentCurrentLocationAndPlaces:(id)arg1 currentLocationIndex:(unsigned long long)arg2 options:(id)arg3;
+ (id)_urlToPresentCurrentLocationWithOptions:(id)arg1;
+ (id)_urlToPresentDirectionsForItems:(id)arg1 options:(id)arg2;
+ (id)_urlToPresentDirectionsForPlaces:(id)arg1 options:(id)arg2;
+ (id)_urlToPresentPlaces:(id)arg1 options:(id)arg2;
+ (id)_urlToShowCurrentLocationAndPlaces:(id)arg1 currentLocationIndex:(unsigned long long)arg2 options:(id)arg3;
+ (id)_urlToShowCurrentLocationWithOptions:(id)arg1;
+ (id)_urlToShowPlaces:(id)arg1 options:(id)arg2;
+ (id)_urlToShowURLRepresentations:(id)arg1 options:(id)arg2;
+ (id)placeForPlaceData:(id)arg1;

- (bool)_isEquivalentURLRepresentationTo:(id)arg1;
- (id)_urlForDirectionsFromCurrentLocationWithOptions:(id)arg1;
- (id)_urlForDirectionsFromPlace:(id)arg1 options:(id)arg2;
- (id)_urlForDirectionsToCurrentLocationWithOptions:(id)arg1;
- (id)_urlForDirectionsToPlace:(id)arg1 options:(id)arg2;
- (id)_urlToPresentDirectionsFromCurrentLocationWithOptions:(id)arg1;
- (id)_urlToPresentDirectionsFromPlace:(id)arg1 options:(id)arg2;
- (id)_urlToPresentDirectionsToCurrentLocationWithOptions:(id)arg1;
- (id)_urlToPresentDirectionsToPlace:(id)arg1 options:(id)arg2;
- (id)_urlToPresentWithOptions:(id)arg1;
- (id)_urlToShowWithOptions:(id)arg1;
- (void)addBusiness:(id)arg1;
- (void)addEntryPoint:(id)arg1;
- (id)address;
- (id)addressDictionary;
- (int)addressGeocodeAccuracy;
- (double)area;
- (id)arrivalMapRegion;
- (id)arrivalMapRegionForTransportType:(int)arg1;
- (id)bestName;
- (id)business;
- (id)businessAtIndex:(unsigned long long)arg1;
- (unsigned long long)businessCount;
- (unsigned long long)businessID;
- (id)center;
- (id)clLocation;
- (id)clRegion;
- (void)clearBusiness;
- (void)clearEntryPoints;
- (struct { double x1; double x2; })coordinate;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)entryPointAtIndex:(unsigned long long)arg1;
- (id)entryPoints;
- (unsigned long long)entryPointsCount;
- (id)firstBusiness;
- (long long)geoId;
- (id)geoMapItem;
- (bool)hasAddress;
- (bool)hasAddressGeocodeAccuracy;
- (bool)hasArea;
- (bool)hasCenter;
- (bool)hasGeoId;
- (bool)hasInputLanguage;
- (bool)hasIsDisputed;
- (bool)hasLocalSearchProviderID;
- (bool)hasMapRegion;
- (bool)hasName;
- (bool)hasPhoneticAddress;
- (bool)hasPhoneticLocaleIdentifier;
- (bool)hasPhoneticName;
- (bool)hasSpokenAddress;
- (bool)hasSpokenName;
- (bool)hasSpokenStructuredAddress;
- (bool)hasTimezone;
- (bool)hasType;
- (bool)hasUID;
- (unsigned long long)hash;
- (id)initWithCLLocation:(id)arg1;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2 addressDictionary:(id)arg3;
- (id)initWithLatitude:(double)arg1 longitude:(double)arg2;
- (id)initWithLocation:(id)arg1 addressDictionary:(id)arg2 name:(id)arg3 businessURL:(id)arg4 phoneNumber:(id)arg5 muid:(unsigned long long)arg6 attributionID:(id)arg7 sampleSizeForUserRatingScore:(unsigned int)arg8 normalizedUserRatingScore:(float)arg9;
- (id)initWithPlaceInfo:(id)arg1 entity:(id)arg2 address:(id)arg3 bounds:(id)arg4 roadAccessInfo:(id)arg5;
- (id)initWithPlacemark:(id)arg1;
- (id)initWithUrlRepresentation:(id)arg1;
- (id)inputLanguage;
- (bool)isDisputed;
- (bool)isEqual:(id)arg1;
- (int)localSearchProviderID;
- (id)mapRegion;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (id)phoneticAddress;
- (id)phoneticLocaleIdentifier;
- (id)phoneticName;
- (double)radialDistance;
- (bool)readFrom:(id)arg1;
- (void)setAddress:(id)arg1;
- (void)setAddressGeocodeAccuracy:(int)arg1;
- (void)setArea:(double)arg1;
- (void)setBusiness:(id)arg1;
- (void)setCenter:(id)arg1;
- (void)setEntryPoints:(id)arg1;
- (void)setGeoId:(long long)arg1;
- (void)setHasAddressGeocodeAccuracy:(bool)arg1;
- (void)setHasArea:(bool)arg1;
- (void)setHasGeoId:(bool)arg1;
- (void)setHasIsDisputed:(bool)arg1;
- (void)setHasLocalSearchProviderID:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setHasUID:(bool)arg1;
- (void)setInputLanguage:(id)arg1;
- (void)setIsDisputed:(bool)arg1;
- (void)setLocalSearchProviderID:(int)arg1;
- (void)setMapRegion:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhoneticAddress:(id)arg1;
- (void)setPhoneticLocaleIdentifier:(id)arg1;
- (void)setPhoneticName:(id)arg1;
- (void)setSpokenAddress:(id)arg1;
- (void)setSpokenName:(id)arg1;
- (void)setSpokenStructuredAddress:(id)arg1;
- (void)setTimezone:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUID:(long long)arg1;
- (id)spokenAddress;
- (id)spokenName;
- (id)spokenStructuredAddress;
- (id)timezone;
- (int)type;
- (long long)uID;
- (id)urlRepresentation;
- (void)writeTo:(id)arg1;
- (id)yelpID;

@end
