//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CSNovDetector;
@protocol CSKeywordAnalyzerNDAPIScoreDelegate;

@interface CSKeywordAnalyzerNDAPI : NSObject
{
    CSNovDetector *_novDetector;
    unsigned long long _startAnalyzeSampleCount;
    _Bool _isStartSampleCountMarked;
    unsigned long long _lastSampleFed;
    unsigned long long _sampleFedWrapAroundOffset;
    unsigned int _activePhraseId;
    unsigned long long _activeChannel;
    id <CSKeywordAnalyzerNDAPIScoreDelegate> _delegate;
}

@property(nonatomic) __weak id <CSKeywordAnalyzerNDAPIScoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int activePhraseId; // @synthesize activePhraseId=_activePhraseId;
@property(nonatomic) unsigned long long activeChannel; // @synthesize activeChannel=_activeChannel;
- (void).cxx_destruct;
- (float)getLoggingThreshold;
- (float)getThreshold;
- (id)getSuperVectorWithEndPoint:(unsigned long long)arg1;
- (id)getAnalyzedResult;
- (void)analyzeWavData:(id)arg1 numSamples:(unsigned long long)arg2;
- (void)processAudioChunk:(id)arg1;
- (void)_setStartAnalyzeTime:(unsigned long long)arg1;
- (void)_resetStartAnalyzeTime;
- (void)resetBest;
- (void)reset;
- (id)initWithConfigPath:(id)arg1 resourcePath:(id)arg2;

@end

