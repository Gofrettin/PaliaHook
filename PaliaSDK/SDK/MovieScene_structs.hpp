#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EMovieSceneKeyInterpolation : uint8
{
	EMovieSceneKeyInterpolation__Auto = 0,
	EMovieSceneKeyInterpolation__User = 1,
	EMovieSceneKeyInterpolation__Break = 2,
	EMovieSceneKeyInterpolation__Linear = 3,
	EMovieSceneKeyInterpolation__Constant = 4,
	EMovieSceneKeyInterpolation__EMovieSceneKeyInterpolation_MAX = 5,
};

enum class EMovieSceneCompletionMode : uint8
{
	EMovieSceneCompletionMode__KeepState = 0,
	EMovieSceneCompletionMode__RestoreState = 1,
	EMovieSceneCompletionMode__ProjectDefault = 2,
	EMovieSceneCompletionMode__EMovieSceneCompletionMode_MAX = 3,
};

enum class EMovieScenePlayerStatus : uint8
{
	EMovieScenePlayerStatus__Stopped = 0,
	EMovieScenePlayerStatus__Playing = 1,
	EMovieScenePlayerStatus__Scrubbing = 2,
	EMovieScenePlayerStatus__Jumping = 3,
	EMovieScenePlayerStatus__Stepping = 4,
	EMovieScenePlayerStatus__Paused = 5,
	EMovieScenePlayerStatus__MAX   = 6,
};

enum class EMovieSceneEvaluationType : uint8
{
	EMovieSceneEvaluationType__FrameLocked = 0,
	EMovieSceneEvaluationType__WithSubFrames = 1,
	EMovieSceneEvaluationType__EMovieSceneEvaluationType_MAX = 2,
};

enum class EUpdateClockSource : uint8
{
	EUpdateClockSource__Tick       = 0,
	EUpdateClockSource__Platform   = 1,
	EUpdateClockSource__Audio      = 2,
	EUpdateClockSource__RelativeTimecode = 3,
	EUpdateClockSource__Timecode   = 4,
	EUpdateClockSource__PlayEveryFrame = 5,
	EUpdateClockSource__Custom     = 6,
	EUpdateClockSource__EUpdateClockSource_MAX = 7,
};

enum class EMovieSceneSequenceFlags : uint8
{
	EMovieSceneSequenceFlags__None = 0,
	EMovieSceneSequenceFlags__Volatile = 1,
	EMovieSceneSequenceFlags__BlockingEvaluation = 2,
	EMovieSceneSequenceFlags__InheritedFlags = 1,
	EMovieSceneSequenceFlags__EMovieSceneSequenceFlags_MAX = 3,
};

enum class EMovieSceneServerClientMask : uint8
{
	EMovieSceneServerClientMask__None = 0,
	EMovieSceneServerClientMask__Server = 1,
	EMovieSceneServerClientMask__Client = 2,
	EMovieSceneServerClientMask__All = 3,
	EMovieSceneServerClientMask__EMovieSceneServerClientMask_MAX = 4,
};

enum class ESectionEvaluationFlags : uint8
{
	ESectionEvaluationFlags__None  = 0,
	ESectionEvaluationFlags__PreRoll = 1,
	ESectionEvaluationFlags__PostRoll = 2,
	ESectionEvaluationFlags__ESectionEvaluationFlags_MAX = 3,
};

enum class EMovieSceneBlendType : uint8
{
	EMovieSceneBlendType__Invalid  = 0,
	EMovieSceneBlendType__Absolute = 1,
	EMovieSceneBlendType__Additive = 2,
	EMovieSceneBlendType__Relative = 4,
	EMovieSceneBlendType__AdditiveFromBase = 8,
	EMovieSceneBlendType__EMovieSceneBlendType_MAX = 9,
};

enum class EEvaluationMethod : uint8
{
	EEvaluationMethod__Static      = 0,
	EEvaluationMethod__Swept       = 1,
	EEvaluationMethod__EEvaluationMethod_MAX = 2,
};

enum class EMovieSceneBuiltInEasing : uint8
{
	EMovieSceneBuiltInEasing__Linear = 0,
	EMovieSceneBuiltInEasing__SinIn = 1,
	EMovieSceneBuiltInEasing__SinOut = 2,
	EMovieSceneBuiltInEasing__SinInOut = 3,
	EMovieSceneBuiltInEasing__QuadIn = 4,
	EMovieSceneBuiltInEasing__QuadOut = 5,
	EMovieSceneBuiltInEasing__QuadInOut = 6,
	EMovieSceneBuiltInEasing__CubicIn = 7,
	EMovieSceneBuiltInEasing__CubicOut = 8,
	EMovieSceneBuiltInEasing__CubicInOut = 9,
	EMovieSceneBuiltInEasing__QuartIn = 10,
	EMovieSceneBuiltInEasing__QuartOut = 11,
	EMovieSceneBuiltInEasing__QuartInOut = 12,
	EMovieSceneBuiltInEasing__QuintIn = 13,
	EMovieSceneBuiltInEasing__QuintOut = 14,
	EMovieSceneBuiltInEasing__QuintInOut = 15,
	EMovieSceneBuiltInEasing__ExpoIn = 16,
	EMovieSceneBuiltInEasing__ExpoOut = 17,
	EMovieSceneBuiltInEasing__ExpoInOut = 18,
	EMovieSceneBuiltInEasing__CircIn = 19,
	EMovieSceneBuiltInEasing__CircOut = 20,
	EMovieSceneBuiltInEasing__CircInOut = 21,
	EMovieSceneBuiltInEasing__EMovieSceneBuiltInEasing_MAX = 22,
};

enum class EMovieSceneObjectBindingSpace : uint8
{
	EMovieSceneObjectBindingSpace__Local = 0,
	EMovieSceneObjectBindingSpace__Root = 1,
	EMovieSceneObjectBindingSpace__Unused = 2,
	EMovieSceneObjectBindingSpace__EMovieSceneObjectBindingSpace_MAX = 3,
};

enum class EUpdatePositionMethod : uint8
{
	EUpdatePositionMethod__Play    = 0,
	EUpdatePositionMethod__Jump    = 1,
	EUpdatePositionMethod__Scrub   = 2,
	EUpdatePositionMethod__EUpdatePositionMethod_MAX = 3,
};

enum class EMovieScenePositionType : uint8
{
	EMovieScenePositionType__Frame = 0,
	EMovieScenePositionType__Time  = 1,
	EMovieScenePositionType__MarkedFrame = 2,
	EMovieScenePositionType__EMovieScenePositionType_MAX = 3,
};

enum class ESpawnOwnership : uint8
{
	ESpawnOwnership__InnerSequence = 0,
	ESpawnOwnership__MasterSequence = 1,
	ESpawnOwnership__External      = 2,
	ESpawnOwnership__ESpawnOwnership_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectBindingID
struct FMovieSceneObjectBindingID
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SequenceID;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        ResolveParentIndex;                                // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.MovieSceneChannel
struct FMovieSceneChannel
{
public:
	uint8                                        Pad_32A[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplateBase
struct FMovieSceneEvalTemplateBase
{
public:
	uint8                                        Pad_32B[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x20 - 0x10)
// ScriptStruct MovieScene.MovieSceneEvalTemplate
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase
{
public:
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UMovieSceneSection>     SourceSectionPtr;                                  // 0x14(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32D[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct MovieScene.MovieSceneTrackImplementation
struct FMovieSceneTrackImplementation : public FMovieSceneEvalTemplateBase
{
public:
};

// 0xB0 (0x100 - 0x50)
// ScriptStruct MovieScene.MovieSceneBoolChannel
struct FMovieSceneBoolChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         DefaultValue;                                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasDefaultValue;                                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_32E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<bool>                                 Values;                                            // 0x68(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_330[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneTangentData
struct FMovieSceneTangentData
{
public:
	float                                        ArriveTangent;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangent;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ArriveTangentWeight;                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LeaveTangentWeight;                                // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentWeightMode       TangentWeightMode;                                 // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_331[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MovieScene.MovieSceneFloatValue
struct FMovieSceneFloatValue
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTangentData                Tangent;                                           // 0x4(0x14)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x19(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PaddingByte;                                       // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_332[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x0 (0x88 - 0x88)
// ScriptStruct MovieScene.MovieSceneKeyHandleMap
struct FMovieSceneKeyHandleMap : public FKeyHandleLookupTable
{
public:
};

// 0xC0 (0x110 - 0x50)
// ScriptStruct MovieScene.MovieSceneFloatChannel
struct FMovieSceneFloatChannel : public FMovieSceneChannel
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_334[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFrameNumber>                  Times;                                             // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneFloatValue>         Values;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	float                                        DefaultValue;                                      // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_335[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x80(0x88)(Transient, NativeAccessSpecifierPrivate)
	struct FFrameRate                            TickResolution;                                    // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xB0 (0x100 - 0x50)
// ScriptStruct MovieScene.MovieSceneIntegerChannel
struct FMovieSceneIntegerChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        DefaultValue;                                      // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_337[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                Values;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_338[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceInstanceData
struct FMovieSceneSequenceInstanceData
{
public:
	uint8                                        Pad_33A[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceID
struct FMovieSceneSequenceID
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationOperand
struct FMovieSceneEvaluationOperand
{
public:
	struct FGuid                                 ObjectBindingID;                                   // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0x108 - 0x50)
// ScriptStruct MovieScene.MovieSceneByteChannel
struct FMovieSceneByteChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        DefaultValue;                                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                Values;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UEnum*                                 Enum;                                              // 0x78(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_33D[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieScenePropertyBinding
struct FMovieScenePropertyBinding
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyPath;                                      // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanUseClassLookup;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_341[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieScenePropertySectionData
struct FMovieScenePropertySectionData
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PropertyPath;                                      // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x38 - 0x20)
// ScriptStruct MovieScene.MovieScenePropertySectionTemplate
struct FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieScenePropertySectionData        PropertyData;                                      // 0x20(0x18)(Protected, NativeAccessSpecifierProtected)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.ActorForWorldTransforms
struct FActorForWorldTransforms
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        Component;                                         // 0x8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SocketName;                                        // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneDeterminismData
struct FMovieSceneDeterminismData
{
public:
	TArray<struct FFrameTime>                    Fences;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bParentSequenceRequiresLowerFence;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentSequenceRequiresUpperFence;                 // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_348[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneEmptyStruct
struct FMovieSceneEmptyStruct
{
public:
	uint8                                        Pad_349[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackIdentifier
struct FMovieSceneTrackIdentifier
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationKey
struct FMovieSceneEvaluationKey
{
public:
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTrackIdentifier            TrackIdentifier;                                   // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SectionIndex;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneKeyStruct
struct FMovieSceneKeyStruct
{
public:
	uint8                                        Pad_34B[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.GeneratedMovieSceneKeyStruct
struct FGeneratedMovieSceneKeyStruct
{
public:
	uint8                                        Pad_34C[0x50];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x28 - 0x8)
// ScriptStruct MovieScene.MovieSceneKeyTimeStruct
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct
{
public:
	struct FFrameNumber                          Time;                                              // 0x8(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34D[0x1C];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionParameters
struct FMovieSceneSectionParameters
{
public:
	struct FFrameNumber                          StartFrameOffset;                                  // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanLoop;                                          // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_34E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameNumber                          EndFrameOffset;                                    // 0x8(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          FirstLoopStartFrameOffset;                         // 0xC(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeScale;                                         // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        HierarchicalBias;                                  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0x18(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PrerollTime;                                       // 0x1C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PostrollTime;                                      // 0x20(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSegmentIdentifier
struct FMovieSceneSegmentIdentifier
{
public:
	int32                                        IdentifierIndex;                                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.SectionEvaluationData
struct FSectionEvaluationData
{
public:
	int32                                        ImplIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          ForcedTime;                                        // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_350[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MovieScene.MovieSceneSegment
struct FMovieSceneSegment
{
public:
	uint8                                        Pad_351[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceLoopCount
struct FMovieSceneSequenceLoopCount
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceTickInterval
struct FMovieSceneSequenceTickInterval
{
public:
	float                                        TickIntervalSeconds;                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EvaluationBudgetMicroseconds;                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTickWhenPaused;                                   // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowRounding;                                    // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_354[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlaybackSettings
struct FMovieSceneSequencePlaybackSettings
{
public:
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_37 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_356[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequenceLoopCount          LoopCount;                                         // 0x4(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceTickInterval       TickInterval;                                      // 0x8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartTime;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRandomStartTime : 1;                              // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRestoreState : 1;                                 // Mask: 0x2, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableMovementInput : 1;                         // Mask: 0x4, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableLookAtInput : 1;                           // Mask: 0x8, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHidePlayer : 1;                                   // Mask: 0x10, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHideHud : 1;                                      // Mask: 0x20, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableCameraCuts : 1;                            // Mask: 0x40, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPauseAtEnd : 1;                                   // Mask: 0x80, PropSize: 0x10x1C(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritTickIntervalFromOwner : 1;                 // Mask: 0x1, PropSize: 0x10x1D(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_358[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneTimeTransform
struct FMovieSceneTimeTransform
{
public:
	float                                        TimeScale;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                            Offset;                                            // 0x4(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xF8 - 0x50)
// ScriptStruct MovieScene.MovieSceneAudioTriggerChannel
struct FMovieSceneAudioTriggerChannel : public FMovieSceneChannel
{
public:
	TArray<struct FFrameNumber>                  Times;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<bool>                                 Values;                                            // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35A[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneDoubleValue
struct FMovieSceneDoubleValue
{
public:
	double                                       Value;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTangentData                Tangent;                                           // 0x8(0x14)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERichCurveInterpMode              InterpMode;                                        // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveTangentMode             TangentMode;                                       // 0x1D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        PaddingByte;                                       // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35C[0x1];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC8 (0x118 - 0x50)
// ScriptStruct MovieScene.MovieSceneDoubleChannel
struct FMovieSceneDoubleChannel : public FMovieSceneChannel
{
public:
	enum class ERichCurveExtrapolation           PreInfinityExtrap;                                 // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERichCurveExtrapolation           PostInfinityExtrap;                                // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FFrameNumber>                  Times;                                             // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneDoubleValue>        Values;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	double                                       DefaultValue;                                      // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasDefaultValue;                                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_363[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneKeyHandleMap               KeyHandles;                                        // 0x88(0x88)(Transient, NativeAccessSpecifierPrivate)
	struct FFrameRate                            TickResolution;                                    // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectPathChannelKeyValue
struct FMovieSceneObjectPathChannelKeyValue
{
public:
	TSoftObjectPtr<class UObject>                SoftPtr;                                           // 0x0(0x30)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                               HardPtr;                                           // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0xE8 (0x138 - 0x50)
// ScriptStruct MovieScene.MovieSceneObjectPathChannel
struct FMovieSceneObjectPathChannel : public FMovieSceneChannel
{
public:
	TSubclassOf<class UObject>                   PropertyClass;                                     // 0x50(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFrameNumber>                  Times;                                             // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneObjectPathChannelKeyValue> Values;                                            // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneObjectPathChannelKeyValue  DefaultValue;                                      // 0x78(0x38)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_366[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceCompilerMaskStruct
struct FMovieSceneSequenceCompilerMaskStruct
{
public:
	uint8                                        bHierarchy : 1;                                    // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluationTemplate : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluationTemplateField : 1;                      // Mask: 0x4, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEntityComponentField : 1;                         // Mask: 0x8, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneCompiledSequenceFlagStruct
struct FMovieSceneCompiledSequenceFlagStruct
{
public:
	uint8                                        bParentSequenceRequiresLowerFence : 1;             // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bParentSequenceRequiresUpperFence : 1;             // Mask: 0x2, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.EasingComponentData
struct FEasingComponentData
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceComponent
struct FMovieSceneTrackInstanceComponent
{
public:
	class UMovieSceneSection*                    Owner;                                             // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UMovieSceneTrackInstance>  TrackInstanceClass;                                // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookComponent
struct FMovieSceneEvaluationHookComponent
{
public:
	TScriptInterface<class IMovieSceneEvaluationHook> Interface;                                         // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_369[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.TrackInstanceInputComponent
struct FTrackInstanceInputComponent
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OutputIndex;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_36B[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNode
struct FMovieSceneEntitySystemGraphNode
{
public:
	uint8                                        Pad_36D[0x20];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneEntitySystem*               System;                                            // 0x20(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraphNodes
struct FMovieSceneEntitySystemGraphNodes
{
public:
	uint8                                        Pad_36E[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x138 (0x138 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntitySystemGraph
struct FMovieSceneEntitySystemGraph
{
public:
	uint8                                        Pad_370[0x80];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEntitySystemGraphNodes     Nodes;                                             // 0x80(0x38)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_371[0x80];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookEvent
struct FMovieSceneEvaluationHookEvent
{
public:
	struct FMovieSceneEvaluationHookComponent    Hook;                                              // 0x0(0x20)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_372[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationHookEventContainer
struct FMovieSceneEvaluationHookEventContainer
{
public:
	TArray<struct FMovieSceneEvaluationHookEvent> Events;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationInstanceKey
struct FMovieSceneEvaluationInstanceKey
{
public:
	uint8                                        Pad_373[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceInput
struct FMovieSceneTrackInstanceInput
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_375[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackInstanceEntry
struct FMovieSceneTrackInstanceEntry
{
public:
	class UObject*                               BoundObject;                                       // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneTrackInstance*              TrackInstance;                                     // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MovieScene.OptionalMovieSceneBlendType
struct FOptionalMovieSceneBlendType
{
public:
	enum class EMovieSceneBlendType              BlendType;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsValid;                                          // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvalTemplatePtr
struct FMovieSceneEvalTemplatePtr
{
public:
	uint8                                        Pad_379[0x88];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityKey
struct FMovieSceneEvaluationFieldEntityKey
{
public:
	TWeakObjectPtr<class UObject>                EntityOwner;                                       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       EntityID;                                          // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntity
struct FMovieSceneEvaluationFieldEntity
{
public:
	struct FMovieSceneEvaluationFieldEntityKey   Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SharedMetaDataIndex;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSharedEntityMetaData
struct FMovieSceneEvaluationFieldSharedEntityMetaData
{
public:
	struct FGuid                                 ObjectBindingID;                                   // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityMetaData
struct FMovieSceneEvaluationFieldEntityMetaData
{
public:
	class FString                                OverrideBoundPropertyPath;                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          ForcedTime;                                        // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ESectionEvaluationFlags           Flags;                                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInSequencePreRoll : 1;                    // Mask: 0x1, PropSize: 0x10x19(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInSequencePostRoll : 1;                   // Mask: 0x2, PropSize: 0x10x19(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37D[0x6];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldEntityTree
struct FMovieSceneEvaluationFieldEntityTree
{
public:
	uint8                                        Pad_37E[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct MovieScene.MovieSceneEntityComponentField
struct FMovieSceneEntityComponentField
{
public:
	struct FMovieSceneEvaluationFieldEntityTree  PersistentEntityTree;                              // 0x0(0x60)(NativeAccessSpecifierPrivate)
	struct FMovieSceneEvaluationFieldEntityTree  OneShotEntityTree;                                 // 0x60(0x60)(NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvaluationFieldEntity> Entities;                                          // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData;                                    // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData;                                    // 0xE0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldTrackPtr
struct FMovieSceneEvaluationFieldTrackPtr
{
public:
	struct FMovieSceneSequenceID                 SequenceID;                                        // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneTrackIdentifier            TrackIdentifier;                                   // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0xC - 0x8)
// ScriptStruct MovieScene.MovieSceneEvaluationFieldSegmentPtr
struct FMovieSceneEvaluationFieldSegmentPtr : public FMovieSceneEvaluationFieldTrackPtr
{
public:
	struct FMovieSceneSegmentIdentifier          SegmentID;                                         // 0x8(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct MovieScene.MovieSceneFieldEntry_EvaluationTrack
struct FMovieSceneFieldEntry_EvaluationTrack
{
public:
	struct FMovieSceneEvaluationFieldTrackPtr    TrackPtr;                                          // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       NumChildren;                                       // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_380[0x2];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneFieldEntry_ChildTemplate
struct FMovieSceneFieldEntry_ChildTemplate
{
public:
	uint16                                       ChildIndex;                                        // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_382[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFrameNumber                          ForcedTime;                                        // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroupLUTIndex
struct FMovieSceneEvaluationGroupLUTIndex
{
public:
	int32                                        NumInitPtrs;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumEvalPtrs;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationGroup
struct FMovieSceneEvaluationGroup
{
public:
	TArray<struct FMovieSceneEvaluationGroupLUTIndex> LUTIndices;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFieldEntry_EvaluationTrack> TrackLUT;                                          // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFieldEntry_ChildTemplate> SectionLUT;                                        // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneOrderedEvaluationKey
struct FMovieSceneOrderedEvaluationKey
{
public:
	struct FMovieSceneEvaluationKey              Key;                                               // 0x0(0xC)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       SetupIndex;                                        // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       TearDownIndex;                                     // 0xE(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationMetaData
struct FMovieSceneEvaluationMetaData
{
public:
	TArray<struct FMovieSceneSequenceID>         ActiveSequences;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneOrderedEvaluationKey> ActiveEntities;                                    // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneFrameRange
struct FMovieSceneFrameRange
{
public:
	uint8                                        Pad_384[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationField
struct FMovieSceneEvaluationField
{
public:
	TArray<struct FMovieSceneFrameRange>         Ranges;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvaluationGroup>    Groups;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneEvaluationMetaData> MetaData;                                          // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct MovieScene.MovieSceneTemplateGenerationLedger
struct FMovieSceneTemplateGenerationLedger
{
public:
	struct FMovieSceneTrackIdentifier            LastTrackIdentifier;                               // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<struct FGuid, struct FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier;                   // 0x8(0x50)(NativeAccessSpecifierPublic)
	TMap<struct FGuid, struct FMovieSceneFrameRange> SubSectionRanges;                                  // 0x58(0x50)(NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSectionData
struct FMovieSceneSubSectionData
{
public:
	TWeakObjectPtr<class UMovieSceneSubSection>  Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ObjectBindingID;                                   // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTemplateSerialNumber
struct FMovieSceneEvaluationTemplateSerialNumber
{
public:
	uint32                                       Value;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackImplementationPtr
struct FMovieSceneTrackImplementationPtr
{
public:
	uint8                                        Pad_389[0x38];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x78 (0x78 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTrack
struct FMovieSceneEvaluationTrack
{
public:
	struct FGuid                                 ObjectBindingID;                                   // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       EvaluationPriority;                                // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EEvaluationMethod                 EvaluationMethod;                                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38C[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TWeakObjectPtr<class UMovieSceneTrack>       SourceTrack;                                       // 0x14(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneEvalTemplatePtr>    ChildTemplates;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneTrackImplementationPtr     TrackTemplate;                                     // 0x30(0x38)(NativeAccessSpecifierPrivate)
	class FName                                  EvaluationGroup;                                   // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x1, PropSize: 0x10x70(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x2, PropSize: 0x10x70(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bTearDownPriority : 1;                             // Mask: 0x4, PropSize: 0x10x70(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_38F[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MovieScene.MovieSceneEvaluationTemplate
struct FMovieSceneEvaluationTemplate
{
public:
	TMap<struct FMovieSceneTrackIdentifier, struct FMovieSceneEvaluationTrack> Tracks;                                            // 0x0(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_390[0x50];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 SequenceSignature;                                 // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber;                              // 0xB0(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_391[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneTemplateGenerationLedger   TemplateLedger;                                    // 0xB8(0xA8)(NativeAccessSpecifierPrivate)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct MovieScene.MovieSceneRootEvaluationTemplateInstance
struct FMovieSceneRootEvaluationTemplateInstance
{
public:
	TWeakObjectPtr<class UMovieSceneSequence>    WeakRootSequence;                                  // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMovieSceneCompiledDataManager*        CompiledDataManager;                               // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_393[0x18];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneEntitySystemLinker*         EntitySystemLinker;                                // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<struct FMovieSceneSequenceID, class UObject*> DirectorInstances;                                 // 0x30(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_394[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MovieScene.MovieSceneTimeWarping
struct FMovieSceneTimeWarping
{
public:
	struct FFrameNumber                          Start;                                             // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          End;                                               // 0x4(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneNestedSequenceTransform
struct FMovieSceneNestedSequenceTransform
{
public:
	struct FMovieSceneTimeTransform              LinearTransform;                                   // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneTimeWarping                Warping;                                           // 0xC(0x8)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceTransform
struct FMovieSceneSequenceTransform
{
public:
	struct FMovieSceneTimeTransform              LinearTransform;                                   // 0x0(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_395[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneNestedSequenceTransform> NestedTransforms;                                  // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceInstanceDataPtr
struct FMovieSceneSequenceInstanceDataPtr
{
public:
	uint8                                        Pad_396[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x110 (0x110 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceData
struct FMovieSceneSubSequenceData
{
public:
	struct FSoftObjectPath                       Sequence;                                          // 0x0(0x20)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceTransform          OuterToInnerTransform;                             // 0x20(0x20)(NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceTransform          RootToSequenceTransform;                           // 0x40(0x20)(NativeAccessSpecifierPublic)
	struct FFrameRate                            TickResolution;                                    // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequenceID                 DeterministicSequenceID;                           // 0x68(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                 ParentPlayRange;                                   // 0x6C(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                          ParentStartFrameOffset;                            // 0x7C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          ParentEndFrameOffset;                              // 0x80(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          ParentFirstLoopStartFrameOffset;                   // 0x84(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCanLoop;                                          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_39D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneFrameRange                 PlayRange;                                         // 0x8C(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                 FullPlayRange;                                     // 0x9C(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                 UnwarpedPlayRange;                                 // 0xAC(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                 PreRollRange;                                      // 0xBC(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                 PostRollRange;                                     // 0xCC(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	int16                                        HierarchicalBias;                                  // 0xDC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasHierarchicalEasing;                            // 0xDE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A0[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequenceInstanceDataPtr    InstanceData;                                      // 0xE0(0x18)(NativeAccessSpecifierPublic)
	uint8                                        Pad_3A1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 SubSectionSignature;                               // 0x100(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchyNode
struct FMovieSceneSequenceHierarchyNode
{
public:
	struct FMovieSceneSequenceID                 ParentID;                                          // 0x0(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneSequenceID>         Children;                                          // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceTreeEntry
struct FMovieSceneSubSequenceTreeEntry
{
public:
	uint8                                        Pad_3A4[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MovieScene.MovieSceneSubSequenceTree
struct FMovieSceneSubSequenceTree
{
public:
	uint8                                        Pad_3A5[0x60];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x118 (0x118 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceHierarchy
struct FMovieSceneSequenceHierarchy
{
public:
	struct FMovieSceneSequenceHierarchyNode      RootNode;                                          // 0x0(0x18)(NativeAccessSpecifierPrivate)
	struct FMovieSceneSubSequenceTree            Tree;                                              // 0x18(0x60)(NativeAccessSpecifierPrivate)
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSubSequenceData> SubSequences;                                      // 0x78(0x50)(NativeAccessSpecifierPrivate)
	TMap<struct FMovieSceneSequenceID, struct FMovieSceneSequenceHierarchyNode> Hierarchy;                                         // 0xC8(0x50)(NativeAccessSpecifierPrivate)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneWarpCounter
struct FMovieSceneWarpCounter
{
public:
	TArray<uint32>                               WarpCounts;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneExpansionState
struct FMovieSceneExpansionState
{
public:
	bool                                         bExpanded;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneMarkedFrame
struct FMovieSceneMarkedFrame
{
public:
	struct FFrameNumber                          FrameNumber;                                       // 0x0(0x4)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Label;                                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsDeterminismFence;                               // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B3[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct MovieScene.MovieSceneEditorData
struct FMovieSceneEditorData
{
public:
	TMap<class FString, struct FMovieSceneExpansionState> ExpansionStates;                                   // 0x0(0x50)(NativeAccessSpecifierPublic)
	TArray<class FString>                        PinnedNodes;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       ViewStart;                                         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ViewEnd;                                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       WorkStart;                                         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       WorkEnd;                                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<struct FFrameNumber>                    MarkedFrames;                                      // 0x80(0x50)(Deprecated, NativeAccessSpecifierPublic)
	struct FFloatRange                           WorkingRange;                                      // 0xD0(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           ViewRange;                                         // 0xE0(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackLabels
struct FMovieSceneTrackLabels
{
public:
	TArray<class FString>                        Strings;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneObjectBindingIDs
struct FMovieSceneObjectBindingIDs
{
public:
	TArray<struct FMovieSceneObjectBindingID>    Ids;                                               // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionGroup
struct FMovieSceneSectionGroup
{
public:
	TArray<TWeakObjectPtr<class UMovieSceneSection>> Sections;                                          // 0x0(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MovieScene.MovieSceneBinding
struct FMovieSceneBinding
{
public:
	struct FGuid                                 ObjectGuid;                                        // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                BindingName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              Tracks;                                            // 0x20(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MovieScene.MovieSceneBindingOverrideData
struct FMovieSceneBindingOverrideData
{
public:
	struct FMovieSceneObjectBindingID            ObjectBindingID;                                   // 0x0(0x18)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UObject>                Object;                                            // 0x18(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridesDefault;                                 // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3C6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MovieScene.MovieSceneBindingProxy
struct FMovieSceneBindingProxy
{
public:
	struct FGuid                                 BindingId;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneSequence*                   Sequence;                                          // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MovieScene.MovieScenePossessable
struct FMovieScenePossessable
{
public:
	TArray<class FName>                          Tags;                                              // 0x0(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FGuid                                 Guid;                                              // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Name;                                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 ParentGuid;                                        // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneObjectBindingID            SpawnableObjectBindingID;                          // 0x40(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MovieScene.MovieSceneSectionEvalOptions
struct FMovieSceneSectionEvalOptions
{
public:
	bool                                         bCanEditCompletionMode;                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieSceneCompletionMode         CompletionMode;                                    // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct MovieScene.MovieSceneEasingSettings
struct FMovieSceneEasingSettings
{
public:
	int32                                        AutoEaseInDuration;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AutoEaseOutDuration;                               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IMovieSceneEasingFunction> EaseIn;                                            // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManualEaseIn;                                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ManualEaseInDuration;                              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class IMovieSceneEasingFunction> EaseOut;                                           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bManualEaseOut;                                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ManualEaseOutDuration;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct MovieScene.MovieSceneTimecodeSource
struct FMovieSceneTimecodeSource
{
public:
	struct FTimecode                             Timecode;                                          // 0x0(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequenceReplProperties
struct FMovieSceneSequenceReplProperties
{
public:
	struct FFrameTime                            LastKnownPosition;                                 // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScenePlayerStatus           LastKnownStatus;                                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CF[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastKnownNumLoops;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlaybackParams
struct FMovieSceneSequencePlaybackParams
{
public:
	struct FFrameTime                            Frame;                                             // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Time;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D3[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                MarkedFrame;                                       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMovieScenePositionType           PositionType;                                      // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EUpdatePositionMethod             UpdateMethod;                                      // 0x21(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasJumped;                                        // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D4[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x1 (0x1 - 0x0)
// ScriptStruct MovieScene.MovieSceneSequencePlayToParams
struct FMovieSceneSequencePlayToParams
{
public:
	bool                                         bExclusive;                                        // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct MovieScene.MovieSceneSpawnable
struct FMovieSceneSpawnable
{
public:
	struct FTransform                            SpawnTransform;                                    // 0x0(0x60)(Edit, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          Tags;                                              // 0x60(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bContinuouslyRespawn;                              // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNetAddressableName;                               // 0x71(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEvaluateTracksWhenNotSpawned;                     // 0x72(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3D8[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGuid                                 Guid;                                              // 0x74(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3D9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                Name;                                              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UObject*                               ObjectTemplate;                                    // 0x98(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FGuid>                         ChildPossessables;                                 // 0xA0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ESpawnOwnership                   Ownership;                                         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3DD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  LevelName;                                         // 0xB4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3DE[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvalOptions
struct FMovieSceneTrackEvalOptions
{
public:
	uint8                                        bCanEvaluateNearestSection : 1;                    // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvalNearestSection : 1;                           // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInPreroll : 1;                            // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateInPostroll : 1;                           // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEvaluateNearestSection : 1;                       // Mask: 0x10, PropSize: 0x10x0(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x4 (0x4 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackDisplayOptions
struct FMovieSceneTrackDisplayOptions
{
public:
	uint8                                        bShowVerticalFrames : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E3[0x3];                                      // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvaluationFieldEntry
struct FMovieSceneTrackEvaluationFieldEntry
{
public:
	class UMovieSceneSection*                    Section;                                           // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumberRange                     Range;                                             // 0x8(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          ForcedTime;                                        // 0x18(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESectionEvaluationFlags           Flags;                                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E7[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int16                                        LegacySortOrder;                                   // 0x1E(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MovieScene.MovieSceneTrackEvaluationField
struct FMovieSceneTrackEvaluationField
{
public:
	TArray<struct FMovieSceneTrackEvaluationFieldEntry> Entries;                                           // 0x0(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct MovieScene.TestMovieSceneEvalTemplate
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif