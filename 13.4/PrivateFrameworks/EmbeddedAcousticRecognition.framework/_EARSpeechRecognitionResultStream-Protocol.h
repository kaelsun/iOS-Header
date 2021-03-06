//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmbeddedAcousticRecognition/NSObject-Protocol.h>

@class NSArray, NSError, _EARSpeechRecognition, _EARSpeechRecognitionResult, _EARSpeechRecognitionResultPackage, _EARSpeechRecognizer;

@protocol _EARSpeechRecognitionResultStream <NSObject>
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResults:(NSArray *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didFinishRecognitionWithError:(NSError *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizePartialResult:(_EARSpeechRecognitionResult *)arg2;

@optional
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizePartialResultNbest:(NSArray *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didProduceEndpointFeaturesWithWordCount:(long long)arg2 trailingSilenceDuration:(long long)arg3 eosLikelihood:(double)arg4 pauseCounts:(NSArray *)arg5 silencePosterior:(double)arg6 processedAudioDurationInMilliseconds:(long long)arg7;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeRawEagerRecognitionCandidate:(_EARSpeechRecognition *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didProcessAudioDuration:(double)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResultPackage:(_EARSpeechRecognitionResultPackage *)arg2;
- (void)speechRecognizer:(_EARSpeechRecognizer *)arg1 didRecognizeFinalResults:(NSArray *)arg2 tokenSausage:(NSArray *)arg3 nBestChoices:(NSArray *)arg4;
@end

