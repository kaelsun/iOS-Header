//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NaturalLanguage/NLModelImpl.h>

@class NLModelConfiguration, NSData, NSDictionary;

__attribute__((visibility("hidden")))
@interface NLModelImplLC : NLModelImpl
{
    const void *_maxEntModel;
    NLModelConfiguration *_configuration;
    NSDictionary *_labelMap;
    NSDictionary *_vocabularyMap;
    NSDictionary *_documentFrequencyMap;
    unsigned long long _numberOfTrainingInstances;
    NSData *_modelData;
}

- (void).cxx_destruct;
- (id)predictedLabelsForTokens:(id)arg1;
- (id)predictedLabelForString:(id)arg1;
- (unsigned long long)numberOfTrainingInstances;
- (id)documentFrequencyMap;
- (id)vocabularyMap;
- (id)labelMap;
- (id)configuration;
- (id)modelData;
- (void)dealloc;
- (id)initWithModelTrainer:(id)arg1;
- (id)initWithModelData:(id)arg1 configuration:(id)arg2 labelMap:(id)arg3 vocabularyMap:(id)arg4 documentFrequencyMap:(id)arg5 customEmbeddingData:(id)arg6 trainingInfo:(id)arg7;

@end

