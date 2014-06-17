/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSArray;

@interface GEOCacheInvalidationData : NSObject  {
    double _timestamp;
    double _ttl;
    unsigned int _version;
    NSArray *_versionDomains;
}

@property(readonly) double timestamp;
@property(readonly) double ttl;
@property(readonly) unsigned int version;
@property(readonly) NSArray * versionDomains;


- (id)versionDomains;
- (id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned int)arg3 domains:(id)arg4;
- (double)ttl;
- (double)timestamp;
- (unsigned int)version;
- (void)dealloc;

@end