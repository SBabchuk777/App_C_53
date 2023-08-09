#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Func`2<System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`3<System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493;
// System.Func`3<System.Object,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F;
// System.Func`3<System.Object,System.Int32,System.Boolean>
struct Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326;
// System.Func`3<System.Object,System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_3_t2CD74B619C13829A57EC75A3E12BA87BBD7ADC9F;
// System.Func`3<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2;
// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566;
// System.Func`4<System.Object,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE;
// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_4_t2DC9C33278142D80C4DDC91A5CDA42ED5C5CFBBA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
// System.IObservable`1<System.Object>
struct IObservable_1_t3B5CA6CF57A9734CD1D166FB2074FE7FB725EDDC;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>
struct IStateMachineRunnerPromise_1_t16EDE58B35DED11B120B41562010C56395C8B839;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>
struct IUniTaskAsyncEnumerable_1_t9A31B847D0F1C39A207B3D3F456A457EC01BCB50;
// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>
struct IUniTaskAsyncEnumerator_1_t1AC6FCD0000CCAD735C0794E6077F9927016A718;
// Cysharp.Threading.Tasks.IUniTaskSource`1<Cysharp.Threading.Tasks.AsyncUnit>
struct IUniTaskSource_1_tC8C0478EFA9DDAB5D7D7EC3A588A0A846ACD40FD;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>
struct IUniTaskSource_1_t3E18D93EEF6913E154C79BC8E1777E4ED74FC0BB;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Int32>
struct IUniTaskSource_1_t1A523432BC4783AD629574B3BC8047D8C3293A5A;
// Cysharp.Threading.Tasks.IUniTaskSource`1<System.Object>
struct IUniTaskSource_1_t02DDD1A2CF54918B0F6003E86D15DB19A23BE3C5;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>
struct _SkipWhile_t12DCBC5103573E07F51383CC4136E257CF77DB1D;
// Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>
struct _SkipWhileAwait_t2FF5BCE87BA416A9284E0E2882986088F4934EEC;
// Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>
struct _SkipWhileAwaitWithCancellation_t09236FDE70A612B051D419D326986416D0FA07F0;
// Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>
struct _SkipWhileInt_t0007E151D5A89A298590D545645000B5CBA7449F;
// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>
struct _SkipWhileIntAwait_tDF993F1DEF66DA98820BAA6F400647EAB2D340DB;
// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>
struct _SkipWhileIntAwaitWithCancellation_tB02B5C7F72BEDC8078744B665BBC138BACED58CC;
// Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>
struct _Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06;
// Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>
struct _TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031;
// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>
struct _TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E;
// Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>
struct _TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF;
// Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>
struct _TakeWhile_t8FCC3B7777E9418DA493480248FEB6E9CC0C654C;
// Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>
struct _TakeWhileAwait_tA049EFF722F5CFE0ABA64362E6CCF1E089C574C2;
// Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>
struct _TakeWhileAwaitWithCancellation_tD5BA88638BF9D2901D77341CF18678B11D70DA56;
// Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>
struct _TakeWhileInt_tF93D43968E9C724D42F48506DEC3073F429358A7;
// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>
struct _TakeWhileIntAwait_tFF6FEE22CB351FF9866386A9BA6482B4BBB3267C;
// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>
struct _TakeWhileIntAwaitWithCancellation_t0DFA9628B6309177992016D0785C8F6BADF97CD7;
// Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>
struct _Throw_tCC0D99A272A34F9DF58FBBA70EB77801799948CC;
// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>
struct _ToUniTaskAsyncEnumerable_tBD0DFB7E1BDFB2617FF446E8F62C4D754EA4139C;
// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>
struct _ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4;
// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>
struct _ToUniTaskAsyncEnumerableTask_t3CA9D2E82569F1B00814A17548BC0AFA8FC06624;
// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>
struct _ToUniTaskAsyncEnumerableUniTask_tFBB1620EF65B7F08CA6C5CFB916870C868972FB5;
// Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>
struct _Where_t06F3F87D71B035D78D8C57B2E078152614E4DF7F;
// Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>
struct _Where_t0C4D7F900FC7471C0186B314F18D48CB86FDC12A;
// Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>
struct _WhereAwait_t5F8AC7ACCC2FE0D612BE021DFBBD6BBF11C0CF4B;
// Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>
struct _WhereAwait_t7210F48C92BB8C52CE91530DE755E8C3C6848260;
// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_tD7A0393DBF54537A2E2A036B8896D5215CA94C9A;
// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_t0CE20A6D3FE6D1E1F1DC9FF5706992D7EBDD921B;
// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct _Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338;
// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>
struct _Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B;
// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>
struct _ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA;
// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>
struct _ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner
struct IStateMachineRunner_t6EFEBAFFCD940AFA47B3730795733096DB3396F4;
// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise
struct IStateMachineRunnerPromise_tC7E7C377EA1F3796AB0B063DBF3BD9118B7C56CC;
// Cysharp.Threading.Tasks.IUniTaskSource
struct IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Cysharp.Threading.Tasks.MoveNextSource
struct MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AwaiterActions_tBA48159E05D5CA069CE8856478A432624391F0C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationTokenExtensions_t3C88FE37AF65705018FD35FB52116735C83CC88A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IStateMachineRunnerPromise_tC7E7C377EA1F3796AB0B063DBF3BD9118B7C56CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_Create_mC07E139E589DD438EA71E35049731DC5BA8A2A0B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncUniTaskMethodBuilder_1_get_Task_mAE53145F9C8FD8F19A7A075BDBF17A68C7867A9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4B56782BBF8045B7E94BE4B1C81AD80820A99A8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _SkipWhileIntAwaitWithCancellation_TransformAsync_m73BA7900BEE61F2DCBBDF5B00CD55BD285051F9C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _SkipWhileIntAwait_TransformAsync_mEEE094E4A4BD89832E546B7A146F9122634A9898_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _SkipWhileInt_TryMoveNextCore_m051E709EABD9FE3F0A7BAB6D0714473BD485096C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _TakeWhileIntAwaitWithCancellation_TransformAsync_m3CF412B88063B7ACFE92C381DEE086D76D83738B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _TakeWhileIntAwait_TransformAsync_mBB65DB423354CA1F470780F7BA5B7198E485ACB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _TakeWhileInt_TryMoveNextCore_m6B3C85D5EBE16186DD3025885E4A5BDB45E56A96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WhereAwaitWithCancellation_MoveNext_m5DF33AFE65199D835626C2C6528751C4AF279D17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _WhereAwait_MoveNext_m7F34E4D1E52931BACF9077EA376322D6ECAD81FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _Where_MoveNext_m81D3BD4B6B2514615EE30F83ED7256348CB5F1E7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_tBA48159E05D5CA069CE8856478A432624391F0C6  : public RuntimeObject
{
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>
struct AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::ex
	Exception_t* ___ex_1;
	// T Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1::result
	bool ___result_2;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 
{
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::_source
	SparselyPopulatedArrayFragment_1_tB32DA8C2B7461E80CE4C271B76C103629BDFA035* ____source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::_index
	int32_t ____index_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>
struct UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8 
{
	// TResult Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::result
	bool ___result_0;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::error
	RuntimeObject* ___error_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::version
	int16_t ___version_2;
	// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::hasUnhandledError
	bool ___hasUnhandledError_3;
	// System.Int32 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::completedCount
	int32_t ___completedCount_4;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuation
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___continuation_5;
	// System.Object Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1::continuationState
	RuntimeObject* ___continuationState_6;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>
struct UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	bool ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Int32>
struct UniTask_1_t5866CF135FC87909F22F1DE328F1FF08DBDE1C87 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	int32_t ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.UniTask`1<System.Object>
struct UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	RuntimeObject* ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// System.ValueTuple`2<System.Object,System.Object>
struct ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A 
{
	// T1 System.ValueTuple`2::Item1
	RuntimeObject* ___Item1_0;
	// T2 System.ValueTuple`2::Item2
	RuntimeObject* ___Item2_1;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder
struct AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::runnerPromise
	RuntimeObject* ___runnerPromise_0;
	// System.Exception Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::ex
	Exception_t* ___ex_1;
};

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder
struct AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429 
{
	// Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunner Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::runner
	RuntimeObject* ___runner_0;
};

// Cysharp.Threading.Tasks.AsyncUnit
struct AsyncUnit_t6D9068C8074F16CB667EB8BCA86D420112D6175F 
{
	union
	{
		struct
		{
		};
		uint8_t AsyncUnit_t6D9068C8074F16CB667EB8BCA86D420112D6175F__padding[1];
	};
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 
{
	// Cysharp.Threading.Tasks.IUniTaskSource Cysharp.Threading.Tasks.UniTask::source
	RuntimeObject* ___source_0;
	// System.Int16 Cysharp.Threading.Tasks.UniTask::token
	int16_t ___token_1;
};

// Cysharp.Threading.Tasks.UniTaskVoid
struct UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2 
{
	union
	{
		struct
		{
		};
		uint8_t UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2__padding[1];
	};
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>
struct U3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7::<>t__builder
	AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7::<>4__this
	_ToUniTaskAsyncEnumerableTask_t3CA9D2E82569F1B00814A17548BC0AFA8FC06624* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7::<>u__1
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>
struct Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>
struct Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E 
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask`1/Awaiter::task
	UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F ___task_0;
};

// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.AsyncUnit>
struct UniTask_1_t883EB95C8218ECC63FDDDADC0855EFE50A252E5A 
{
	// Cysharp.Threading.Tasks.IUniTaskSource`1<T> Cysharp.Threading.Tasks.UniTask`1::source
	RuntimeObject* ___source_0;
	// T Cysharp.Threading.Tasks.UniTask`1::result
	AsyncUnit_t6D9068C8074F16CB667EB8BCA86D420112D6175F ___result_1;
	// System.Int16 Cysharp.Threading.Tasks.UniTask`1::token
	int16_t ___token_2;
};

// Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>
struct _Throw_tCC0D99A272A34F9DF58FBBA70EB77801799948CC  : public RuntimeObject
{
	// System.Exception Cysharp.Threading.Tasks.Linq.Throw`1/_Throw::exception
	Exception_t* ___exception_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Throw`1/_Throw::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>
struct _ToUniTaskAsyncEnumerable_tBD0DFB7E1BDFB2617FF446E8F62C4D754EA4139C  : public RuntimeObject
{
	// System.Collections.Generic.IEnumerable`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable::source
	RuntimeObject* ___source_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
	// System.Collections.Generic.IEnumerator`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable::enumerator
	RuntimeObject* ___enumerator_2;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>
struct _ToUniTaskAsyncEnumerableTask_t3CA9D2E82569F1B00814A17548BC0AFA8FC06624  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask::source
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___source_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
	// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask::current
	RuntimeObject* ___current_2;
	// System.Boolean Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask::called
	bool ___called_3;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>
struct _ToUniTaskAsyncEnumerableUniTask_tFBB1620EF65B7F08CA6C5CFB916870C868972FB5  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask::source
	UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F ___source_0;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_1;
	// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask::current
	RuntimeObject* ___current_2;
	// System.Boolean Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask::called
	bool ___called_3;
};

// System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 
{
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_pinvoke
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389_marshaled_com
{
	CancellationCallbackInfo_tC8BE558ED1E173434DD1919D574C9FAFE501E22D* ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t3C73DC53EB2CF8545348E3275C09690FFA1E5359 ___m_registrationInfo_1;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Cysharp.Threading.Tasks.MoveNextSource
struct MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35  : public RuntimeObject
{
	// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean> Cysharp.Threading.Tasks.MoveNextSource::completionSource
	UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8 ___completionSource_0;
};

// Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFA19591877474CF6E54AB768F1022966327608B7 
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask/Awaiter::task
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 ___task_0;
};
// Native definition for P/Invoke marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFA19591877474CF6E54AB768F1022966327608B7_marshaled_pinvoke
{
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 ___task_0;
};
// Native definition for COM marshalling of Cysharp.Threading.Tasks.UniTask/Awaiter
struct Awaiter_tFA19591877474CF6E54AB768F1022966327608B7_marshaled_com
{
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 ___task_0;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct U3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>t__builder
	AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>4__this
	_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>u__1
	Awaiter_tFA19591877474CF6E54AB768F1022966327608B7 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>
struct U3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>t__builder
	AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>4__this
	_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18::<>u__1
	Awaiter_tFA19591877474CF6E54AB768F1022966327608B7 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>
struct U3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>t__builder
	AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>4__this
	_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21::<>u__1
	Awaiter_tFA19591877474CF6E54AB768F1022966327608B7 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>
struct U3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>t__builder
	AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>4__this
	_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21::<>u__1
	Awaiter_tFA19591877474CF6E54AB768F1022966327608B7 ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>
struct U3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7::<>t__builder
	AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7::<>4__this
	_ToUniTaskAsyncEnumerableUniTask_tFBB1620EF65B7F08CA6C5CFB916870C868972FB5* ___U3CU3E4__this_2;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7::<>u__1
	Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E ___U3CU3Eu__1_3;
};

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17<System.Object>
struct U3CRunOtherU3Ed__17_t643EEC7C3D490CD2F650A85E998130769DABF8C5 
{
	// System.Int32 Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17::<>t__builder
	AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429 ___U3CU3Et__builder_1;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17::other
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 ___other_2;
	// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<TSource> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17::<>4__this
	_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* ___U3CU3E4__this_3;
	// Cysharp.Threading.Tasks.UniTask/Awaiter Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17::<>u__1
	Awaiter_tFA19591877474CF6E54AB768F1022966327608B7 ___U3CU3Eu__1_4;
};

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3<System.Object,System.Object,System.Boolean>
struct AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::source
	RuntimeObject* ___source_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::sourceMoveNext
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___sourceMoveNext_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TAwait> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::resultAwaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___resultAwaiter_7;
	// TSource Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::<SourceCurrent>k__BackingField
	RuntimeObject* ___U3CSourceCurrentU3Ek__BackingField_8;
	// TResult Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_9;
};

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2<System.Object,System.Object>
struct AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::source
	RuntimeObject* ___source_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::enumerator
	RuntimeObject* ___enumerator_4;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::sourceMoveNext
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___sourceMoveNext_5;
	// TResult Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_6;
};

// Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>
struct _Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.Take`1/_Take::source
	RuntimeObject* ___source_2;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Take`1/_Take::count
	int32_t ___count_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Take`1/_Take::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.Take`1/_Take::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Take`1/_Take::awaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter_6;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Take`1/_Take::index
	int32_t ___index_7;
	// TSource Cysharp.Threading.Tasks.Linq.Take`1/_Take::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_8;
};

// Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>
struct _TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::source
	RuntimeObject* ___source_2;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::count
	int32_t ___count_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::awaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter_6;
	// System.Collections.Generic.Queue`1<TSource> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::queue
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___queue_7;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::iterateCompleted
	bool ___iterateCompleted_8;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::continueNext
	bool ___continueNext_9;
	// TSource Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_10;
};

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>
struct _TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::source
	RuntimeObject* ___source_3;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::cancellationToken1
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1_4;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::cancellationTokenRegistration1
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration1_5;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::completed
	bool ___completed_6;
	// System.Exception Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::exception
	Exception_t* ___exception_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::enumerator
	RuntimeObject* ___enumerator_8;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::awaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter_9;
	// TSource Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_10;
};

// Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>
struct _TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::source
	RuntimeObject* ___source_4;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::cancellationToken1
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken1_5;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::cancellationToken2
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken2_6;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::cancellationTokenRegistration1
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration1_7;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::cancellationTokenRegistration2
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration2_8;
	// System.Boolean Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::isCanceled
	bool ___isCanceled_9;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::enumerator
	RuntimeObject* ___enumerator_10;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::awaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter_11;
	// TSource Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_12;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>
struct _ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// System.IObservable`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::source
	RuntimeObject* ___source_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Boolean Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::useCachedCurrent
	bool ___useCachedCurrent_4;
	// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::current
	RuntimeObject* ___current_5;
	// System.Boolean Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::subscribeCompleted
	bool ___subscribeCompleted_6;
	// System.Collections.Generic.Queue`1<T> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::queuedResult
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* ___queuedResult_7;
	// System.Exception Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::error
	Exception_t* ___error_8;
	// System.IDisposable Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::subscription
	RuntimeObject* ___subscription_9;
	// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::cancellationTokenRegistration
	CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 ___cancellationTokenRegistration_10;
};

// Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>
struct _Where_t06F3F87D71B035D78D8C57B2E078152614E4DF7F  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::source
	RuntimeObject* ___source_1;
	// System.Func`3<TSource,System.Int32,System.Boolean> Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::predicate
	Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::awaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter_6;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_7;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::index
	int32_t ___index_8;
	// TSource Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_9;
};

// Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>
struct _Where_t0C4D7F900FC7471C0186B314F18D48CB86FDC12A  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.Where`1/_Where::source
	RuntimeObject* ___source_1;
	// System.Func`2<TSource,System.Boolean> Cysharp.Threading.Tasks.Linq.Where`1/_Where::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Where`1/_Where::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.Where`1/_Where::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.Where`1/_Where::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Where`1/_Where::awaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter_6;
	// System.Action Cysharp.Threading.Tasks.Linq.Where`1/_Where::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_7;
	// TSource Cysharp.Threading.Tasks.Linq.Where`1/_Where::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_8;
};

// Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>
struct _WhereAwait_t5F8AC7ACCC2FE0D612BE021DFBBD6BBF11C0CF4B  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::source
	RuntimeObject* ___source_1;
	// System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::predicate
	Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::awaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::awaiter2
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter2_7;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_8;
	// TSource Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_9;
};

// Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>
struct _WhereAwait_t7210F48C92BB8C52CE91530DE755E8C3C6848260  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::source
	RuntimeObject* ___source_1;
	// System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::predicate
	Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::awaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::awaiter2
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter2_7;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_8;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::index
	int32_t ___index_9;
	// TSource Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_10;
};

// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_tD7A0393DBF54537A2E2A036B8896D5215CA94C9A  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::source
	RuntimeObject* ___source_1;
	// System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::predicate
	Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter2
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter2_7;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_8;
	// TSource Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_9;
};

// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>
struct _WhereAwaitWithCancellation_t0CE20A6D3FE6D1E1F1DC9FF5706992D7EBDD921B  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::source
	RuntimeObject* ___source_1;
	// System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::predicate
	Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* ___predicate_2;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_3;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::state
	int32_t ___state_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSource> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::enumerator
	RuntimeObject* ___enumerator_5;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter_6;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::awaiter2
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___awaiter2_7;
	// System.Action Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::moveNextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___moveNextAction_8;
	// System.Int32 Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::index
	int32_t ___index_9;
	// TSource Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_10;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct _Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::first
	RuntimeObject* ___first_3;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::second
	RuntimeObject* ___second_4;
	// System.Func`3<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::resultSelector
	Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2* ___resultSelector_5;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstEnumerator
	RuntimeObject* ___firstEnumerator_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondEnumerator
	RuntimeObject* ___secondEnumerator_8;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstAwaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___firstAwaiter_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondAwaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___secondAwaiter_10;
	// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::<Current>k__BackingField
	ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___U3CCurrentU3Ek__BackingField_11;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>
struct _Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::first
	RuntimeObject* ___first_3;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::second
	RuntimeObject* ___second_4;
	// System.Func`3<TFirst,TSecond,TResult> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::resultSelector
	Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___resultSelector_5;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_6;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstEnumerator
	RuntimeObject* ___firstEnumerator_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondEnumerator
	RuntimeObject* ___secondEnumerator_8;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstAwaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___firstAwaiter_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondAwaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___secondAwaiter_10;
	// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_11;
};

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>
struct _ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::first
	RuntimeObject* ___first_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::second
	RuntimeObject* ___second_5;
	// System.Func`3<TFirst,TSecond,Cysharp.Threading.Tasks.UniTask`1<TResult>> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::resultSelector
	Func_3_t2CD74B619C13829A57EC75A3E12BA87BBD7ADC9F* ___resultSelector_6;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::firstEnumerator
	RuntimeObject* ___firstEnumerator_8;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::secondEnumerator
	RuntimeObject* ___secondEnumerator_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::firstAwaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___firstAwaiter_10;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::secondAwaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___secondAwaiter_11;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::resultAwaiter
	Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E ___resultAwaiter_12;
	// TResult Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_13;
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>
struct _ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360  : public MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35
{
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::first
	RuntimeObject* ___first_4;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::second
	RuntimeObject* ___second_5;
	// System.Func`4<TFirst,TSecond,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<TResult>> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultSelector
	Func_4_t2DC9C33278142D80C4DDC91A5CDA42ED5C5CFBBA* ___resultSelector_6;
	// System.Threading.CancellationToken Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___cancellationToken_7;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TFirst> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstEnumerator
	RuntimeObject* ___firstEnumerator_8;
	// Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<TSecond> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondEnumerator
	RuntimeObject* ___secondEnumerator_9;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstAwaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___firstAwaiter_10;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondAwaiter
	Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___secondAwaiter_11;
	// Cysharp.Threading.Tasks.UniTask`1/Awaiter<TResult> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultAwaiter
	Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E ___resultAwaiter_12;
	// TResult Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::<Current>k__BackingField
	RuntimeObject* ___U3CCurrentU3Ek__BackingField_13;
};

// Cysharp.Threading.Tasks.CompletedTasks
struct CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C  : public RuntimeObject
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Int32,System.Boolean>
struct Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_3_t2CD74B619C13829A57EC75A3E12BA87BBD7ADC9F  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2  : public MulticastDelegate_t
{
};

// System.Func`3<System.Object,System.Object,System.Object>
struct Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566  : public MulticastDelegate_t
{
};

// System.Func`4<System.Object,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>
struct Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE  : public MulticastDelegate_t
{
};

// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>
struct Func_4_t2DC9C33278142D80C4DDC91A5CDA42ED5C5CFBBA  : public MulticastDelegate_t
{
};

// Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>
struct _SkipWhile_t12DCBC5103573E07F51383CC4136E257CF77DB1D  : public AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB
{
	// System.Func`2<TSource,System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_7;
};

// Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>
struct _SkipWhileAwait_t2FF5BCE87BA416A9284E0E2882986088F4934EEC  : public AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589
{
	// System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait::predicate
	Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* ___predicate_10;
};

// Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>
struct _SkipWhileAwaitWithCancellation_t09236FDE70A612B051D419D326986416D0FA07F0  : public AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589
{
	// System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation::predicate
	Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* ___predicate_10;
};

// Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>
struct _SkipWhileInt_t0007E151D5A89A298590D545645000B5CBA7449F  : public AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB
{
	// System.Func`3<TSource,System.Int32,System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt::predicate
	Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___predicate_7;
	// System.Int32 Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt::index
	int32_t ___index_8;
};

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>
struct _SkipWhileIntAwait_tDF993F1DEF66DA98820BAA6F400647EAB2D340DB  : public AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589
{
	// System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait::predicate
	Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* ___predicate_10;
	// System.Int32 Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait::index
	int32_t ___index_11;
};

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>
struct _SkipWhileIntAwaitWithCancellation_tB02B5C7F72BEDC8078744B665BBC138BACED58CC  : public AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589
{
	// System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation::predicate
	Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* ___predicate_10;
	// System.Int32 Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation::index
	int32_t ___index_11;
};

// Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>
struct _TakeWhile_t8FCC3B7777E9418DA493480248FEB6E9CC0C654C  : public AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB
{
	// System.Func`2<TSource,System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile::predicate
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate_7;
};

// Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>
struct _TakeWhileAwait_tA049EFF722F5CFE0ABA64362E6CCF1E089C574C2  : public AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589
{
	// System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait::predicate
	Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* ___predicate_10;
};

// Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>
struct _TakeWhileAwaitWithCancellation_tD5BA88638BF9D2901D77341CF18678B11D70DA56  : public AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589
{
	// System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation::predicate
	Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* ___predicate_10;
};

// Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>
struct _TakeWhileInt_tF93D43968E9C724D42F48506DEC3073F429358A7  : public AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB
{
	// System.Func`3<TSource,System.Int32,System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt::predicate
	Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___predicate_7;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt::index
	int32_t ___index_8;
};

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>
struct _TakeWhileIntAwait_tFF6FEE22CB351FF9866386A9BA6482B4BBB3267C  : public AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589
{
	// System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait::predicate
	Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* ___predicate_10;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait::index
	int32_t ___index_11;
};

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>
struct _TakeWhileIntAwaitWithCancellation_t0DFA9628B6309177992016D0785C8F6BADF97CD7  : public AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589
{
	// System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>> Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation::predicate
	Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* ___predicate_10;
	// System.Int32 Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation::index
	int32_t ___index_11;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// Cysharp.Threading.Tasks.AwaiterActions
struct AwaiterActions_tBA48159E05D5CA069CE8856478A432624391F0C6_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.AwaiterActions::InvokeContinuationDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___InvokeContinuationDelegate_0;
};

// Cysharp.Threading.Tasks.AwaiterActions

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Object>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1<System.Object>

// Cysharp.Threading.Tasks.UniTask`1<System.Object>

// System.ValueTuple`2<System.Object,System.Object>

// System.ValueTuple`2<System.Object,System.Object>

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder

// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// System.Int16

// System.Int16

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Cysharp.Threading.Tasks.UniTask
struct UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CanceledUniTask
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 ___CanceledUniTask_2;
	// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::CompletedTask
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 ___CompletedTask_3;
};

// Cysharp.Threading.Tasks.UniTask

// Cysharp.Threading.Tasks.UniTaskVoid

// Cysharp.Threading.Tasks.UniTaskVoid

// System.Void

// System.Void

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>

// Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>

// Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>

// Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>

// System.Threading.CancellationTokenRegistration

// System.Threading.CancellationTokenRegistration

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Cysharp.Threading.Tasks.MoveNextSource

// Cysharp.Threading.Tasks.MoveNextSource

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17<System.Object>

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3<System.Object,System.Object,System.Boolean>
struct AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::moveNextCallbackDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___moveNextCallbackDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3::setCurrentCallbackDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___setCurrentCallbackDelegate_2;
};

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorAwaitSelectorBase`3<System.Object,System.Object,System.Boolean>

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2<System.Object,System.Object>
struct AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2::moveNextCallbackDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___moveNextCallbackDelegate_1;
};

// Cysharp.Threading.Tasks.Linq.AsyncEnumeratorBase`2<System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>
struct _Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Take`1/_Take::MoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_1;
};

// Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>
struct _TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast::MoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_1;
};

// Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>
struct _TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::CancelDelegate1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil::MoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_2;
};

// Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>
struct _TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::CancelDelegate1
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate1_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::CancelDelegate2
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___CancelDelegate2_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled::MoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___MoveNextCoreDelegate_3;
};

// Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>
struct _ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable::OnCanceledDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___OnCanceledDelegate_1;
};

// Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>

// Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>

// Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>
struct _Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>
struct _Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
};

// Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>
struct _ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait::resultAwaitCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>
struct _ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360_StaticFields
{
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::firstMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___firstMoveNextCoreDelegate_1;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::secondMoveNextCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___secondMoveNextCoreDelegate_2;
	// System.Action`1<System.Object> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation::resultAwaitCoreDelegate
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___resultAwaitCoreDelegate_3;
};

// Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>

// Cysharp.Threading.Tasks.CompletedTasks
struct CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields
{
	// Cysharp.Threading.Tasks.UniTask`1<Cysharp.Threading.Tasks.AsyncUnit> Cysharp.Threading.Tasks.CompletedTasks::AsyncUnit
	UniTask_1_t883EB95C8218ECC63FDDDADC0855EFE50A252E5A ___AsyncUnit_0;
	// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.CompletedTasks::True
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F ___True_1;
	// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.CompletedTasks::False
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F ___False_2;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::Zero
	UniTask_1_t5866CF135FC87909F22F1DE328F1FF08DBDE1C87 ___Zero_3;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::MinusOne
	UniTask_1_t5866CF135FC87909F22F1DE328F1FF08DBDE1C87 ___MinusOne_4;
	// Cysharp.Threading.Tasks.UniTask`1<System.Int32> Cysharp.Threading.Tasks.CompletedTasks::One
	UniTask_1_t5866CF135FC87909F22F1DE328F1FF08DBDE1C87 ___One_5;
};

// Cysharp.Threading.Tasks.CompletedTasks

// System.Action`1<System.Object>

// System.Action`1<System.Object>

// System.Func`2<System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`2<System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`2<System.Object,System.Boolean>

// System.Func`2<System.Object,System.Boolean>

// System.Func`3<System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`3<System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`3<System.Object,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`3<System.Object,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`3<System.Object,System.Int32,System.Boolean>

// System.Func`3<System.Object,System.Int32,System.Boolean>

// System.Func`3<System.Object,System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Object>>

// System.Func`3<System.Object,System.Object,Cysharp.Threading.Tasks.UniTask`1<System.Object>>

// System.Func`3<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>

// System.Func`3<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>

// System.Func`3<System.Object,System.Object,System.Object>

// System.Func`3<System.Object,System.Object,System.Object>

// System.Func`4<System.Object,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`4<System.Object,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>

// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>

// System.Func`4<System.Object,System.Object,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Object>>

// Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>

// Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>

// System.Action

// System.Action
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_gshared (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* __this, const RuntimeMethod* method) ;
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_gshared_inline (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<T>,System.Int16)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_gshared_inline (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_gshared_inline (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_gshared_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_gshared_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_gshared (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* __this, Exception_t* ___0_error, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.MoveNextSource::TryGetResult<System.Boolean>(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>,T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_gshared (MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35* __this, Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___0_awaiter, bool* ___1_result, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_gshared (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* __this, bool ___0_result, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask::FromException<System.Boolean>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700_gshared (Exception_t* ___0_ex, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask::FromCanceled<System.Boolean>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4B56782BBF8045B7E94BE4B1C81AD80820A99A8E_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_gshared (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17<System.Object>>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__17_t643EEC7C3D490CD2F650A85E998130769DABF8C5_mA274B062AAD0DAC99E2B5E6150438928A35B091C_gshared (AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429* __this, U3CRunOtherU3Ed__17_t643EEC7C3D490CD2F650A85E998130769DABF8C5* ___0_stateMachine, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0 AsyncUniTaskMethodBuilder_1_Create_mC07E139E589DD438EA71E35049731DC5BA8A2A0B_gshared_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED_mCE843DB9E5D1AE96F13B27F1DFA3449A9D6AA380_gshared_inline (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* __this, U3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED* ___0_stateMachine, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F AsyncUniTaskMethodBuilder_1_get_Task_mAE53145F9C8FD8F19A7A075BDBF17A68C7867A9F_gshared_inline (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF_m65856DB6E5E02DD3011498806FB573EEBE9F1DA0_gshared_inline (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* __this, U3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::UnsafeOnCompleted(System.Action)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_gshared_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_gshared_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029_m78F42995D45A48AC6BB063DDB65C31DEE35F9A58_gshared_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE_m13D95FCC9ECB150DBD76CFD4FC1BE5D79DE5F528_gshared_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE* ___0_stateMachine, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E UniTask_1_GetAwaiter_mFDD93458F6295B52D55D3804499CE63A8B6F84E3_gshared_inline (UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* __this, const RuntimeMethod* method) ;
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2B38E75E4634668D0A41DB6F45A9E7D27C92741E_gshared_inline (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m4A445596B9EFE906931DCF09728972E0BA7D13B2_gshared_inline (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A_mB3D43800C38A15540FBDA3064E345398022C36D8_gshared_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(TStateMachine&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139_mD8F93AB180792E581044B2E660212A427BDA7695_gshared_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m530DE8FBB18ADEF2BFAC36B3308ED76CACA467B7_gshared_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* ___0_task, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m31A46EA72E4DA0EEBD656544A93DF2CF5DB263FA_gshared_inline (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_MoveNext_mF800F08B96142F5E73E3BD2B8C15EDEF438085AA_gshared (U3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMoveNextAsyncU3Ed__7_MoveNext_mA46389C0BDA705B842EE4DD77DF297B74351FD79_gshared (U3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__18_MoveNext_mDAC95F8EAFB387102ED2281A324029A50CF7EF53_gshared (U3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__18_MoveNext_m2745BC52A606AB38BE9901B0754934AAC3E98AA1_gshared (U3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m9818087779A41B6466E855CBAC6496EF9F99824A_gshared_inline (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* __this, UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* ___0_task, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD8EA990F6BAFB381977ACE4E2D49412160BE0C96_gshared_inline (UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_MoveNext_mDC6F7786422C301A797EA1E1EB7C0102E051C2C7_gshared (U3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisposeAsyncU3Ed__21_MoveNext_m9EB9D6F70FB3CDDC53ECCE82730243643F78DD93_gshared (U3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139* __this, const RuntimeMethod* method) ;

// System.Void Cysharp.Threading.Tasks.MoveNextSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE (MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationToken::ThrowIfCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::Reset()
inline void UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707 (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* __this, const RuntimeMethod* method)
{
	((  void (*) (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_gshared)(__this, method);
}
// System.Int16 Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::get_Version()
inline int16_t UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* __this, const RuntimeMethod* method)
{
	return ((  int16_t (*) (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::.ctor(Cysharp.Threading.Tasks.IUniTaskSource`1<T>,System.Int16)
inline void UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method)
{
	((  void (*) (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*, RuntimeObject*, int16_t, const RuntimeMethod*))UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_gshared_inline)(__this, ___0_source, ___1_token, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::GetAwaiter()
inline Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C (*) (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*, const RuntimeMethod*))UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*, const RuntimeMethod*))Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_gshared_inline)(__this, ___0_continuation, ___1_state, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetException(System.Exception)
inline bool UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065 (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* __this, Exception_t* ___0_error, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*, Exception_t*, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_gshared)(__this, ___0_error, method);
}
// System.Boolean Cysharp.Threading.Tasks.MoveNextSource::TryGetResult<System.Boolean>(Cysharp.Threading.Tasks.UniTask`1/Awaiter<T>,T&)
inline bool MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A (MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35* __this, Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C ___0_awaiter, bool* ___1_result, const RuntimeMethod* method)
{
	return ((  bool (*) (MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*, Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C, bool*, const RuntimeMethod*))MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_gshared)(__this, ___0_awaiter, ___1_result, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetResult(TResult)
inline bool UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* __this, bool ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*, bool, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_gshared)(__this, ___0_result, method);
}
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4 (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___0_object, ___1_method, method);
}
// System.Boolean System.Threading.CancellationToken::get_CanBeCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// System.Threading.CancellationTokenRegistration Cysharp.Threading.Tasks.CancellationTokenExtensions::RegisterWithoutCaptureExecutionContext(System.Threading.CancellationToken,System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mC972A84780A0D1D5C1E093A046474F33AD468360 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___1_callback, RuntimeObject* ___2_state, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTaskVoid::Forget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UniTaskVoid_Forget_m85CCDB96669F0A5ADFE86F092764442B8C252C9A (UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask::FromException<System.Boolean>(System.Exception)
inline UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700 (Exception_t* ___0_ex, const RuntimeMethod* method)
{
	return ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Exception_t*, const RuntimeMethod*))UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700_gshared)(___0_ex, method);
}
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.UniTask::FromCanceled<System.Boolean>(System.Threading.CancellationToken)
inline UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4B56782BBF8045B7E94BE4B1C81AD80820A99A8E (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4B56782BBF8045B7E94BE4B1C81AD80820A99A8E_gshared)(___0_cancellationToken, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<System.Boolean>::TrySetCanceled(System.Threading.CancellationToken)
inline bool UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  bool (*) (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_gshared)(__this, ___0_cancellationToken, method);
}
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429 AsyncUniTaskVoidMethodBuilder_Create_m3FE5FF1BD82DD8E80EE83620FEC82B508769A167_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil/<RunOther>d__17<System.Object>>(TStateMachine&)
inline void AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__17_t643EEC7C3D490CD2F650A85E998130769DABF8C5_mA274B062AAD0DAC99E2B5E6150438928A35B091C (AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429* __this, U3CRunOtherU3Ed__17_t643EEC7C3D490CD2F650A85E998130769DABF8C5* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429*, U3CRunOtherU3Ed__17_t643EEC7C3D490CD2F650A85E998130769DABF8C5*, const RuntimeMethod*))AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__17_t643EEC7C3D490CD2F650A85E998130769DABF8C5_mA274B062AAD0DAC99E2B5E6150438928A35B091C_gshared)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskVoidMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2 AsyncUniTaskVoidMethodBuilder_get_Task_m902C29FCC822C8134D3EF67342E6B6886C7C69D9_inline (AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.CancellationTokenRegistration::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1 (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.CancellationToken::op_Inequality(System.Threading.CancellationToken,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_op_Inequality_m60DF5AE3E4D1B701E332343118A07A42EF5A4C55 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_left, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_right, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Create()
inline AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0 AsyncUniTaskMethodBuilder_1_Create_mC07E139E589DD438EA71E35049731DC5BA8A2A0B_inline (const RuntimeMethod* method)
{
	return ((  AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0 (*) (const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Create_mC07E139E589DD438EA71E35049731DC5BA8A2A0B_gshared_inline)(method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED_mCE843DB9E5D1AE96F13B27F1DFA3449A9D6AA380_inline (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* __this, U3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0*, U3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED_mCE843DB9E5D1AE96F13B27F1DFA3449A9D6AA380_gshared_inline)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::get_Task()
inline UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F AsyncUniTaskMethodBuilder_1_get_Task_mAE53145F9C8FD8F19A7A075BDBF17A68C7867A9F_inline (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* __this, const RuntimeMethod* method)
{
	return ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_get_Task_mAE53145F9C8FD8F19A7A075BDBF17A68C7867A9F_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder`1<System.Boolean>::Start<Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF_m65856DB6E5E02DD3011498806FB573EEBE9F1DA0_inline (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* __this, U3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0*, U3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF_m65856DB6E5E02DD3011498806FB573EEBE9F1DA0_gshared_inline)(__this, ___0_stateMachine, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::UnsafeOnCompleted(System.Action)
inline void Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_gshared_inline)(__this, ___0_continuation, method);
}
// T Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::GetResult()
inline bool Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*, const RuntimeMethod*))Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_gshared_inline)(__this, method);
}
// Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Create()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 AsyncUniTaskMethodBuilder_Create_m06444FC93B9B9A0F57FA4FC78546F0880DFBF1C2_inline (const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029_m78F42995D45A48AC6BB063DDB65C31DEE35F9A58_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*, U3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029_m78F42995D45A48AC6BB063DDB65C31DEE35F9A58_gshared_inline)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 AsyncUniTaskMethodBuilder_get_Task_m96B1EE536B565D04CDBB4F082DFDE148B11CD15B_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE_m13D95FCC9ECB150DBD76CFD4FC1BE5D79DE5F528_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*, U3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE_m13D95FCC9ECB150DBD76CFD4FC1BE5D79DE5F528_gshared_inline)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTask`1/Awaiter<T> Cysharp.Threading.Tasks.UniTask`1<System.Object>::GetAwaiter()
inline Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E UniTask_1_GetAwaiter_mFDD93458F6295B52D55D3804499CE63A8B6F84E3_inline (UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* __this, const RuntimeMethod* method)
{
	return ((  Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E (*) (UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F*, const RuntimeMethod*))UniTask_1_GetAwaiter_mFDD93458F6295B52D55D3804499CE63A8B6F84E3_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::get_IsCompleted()
inline bool Awaiter_get_IsCompleted_m2B38E75E4634668D0A41DB6F45A9E7D27C92741E_inline (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E*, const RuntimeMethod*))Awaiter_get_IsCompleted_m2B38E75E4634668D0A41DB6F45A9E7D27C92741E_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::SourceOnCompleted(System.Action`1<System.Object>,System.Object)
inline void Awaiter_SourceOnCompleted_m4A445596B9EFE906931DCF09728972E0BA7D13B2_inline (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E*, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Awaiter_SourceOnCompleted_m4A445596B9EFE906931DCF09728972E0BA7D13B2_gshared_inline)(__this, ___0_continuation, ___1_state, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A_mB3D43800C38A15540FBDA3064E345398022C36D8_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*, U3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A_mB3D43800C38A15540FBDA3064E345398022C36D8_gshared_inline)(__this, ___0_stateMachine, method);
}
// System.Void Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder::Start<Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>>(TStateMachine&)
inline void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139_mD8F93AB180792E581044B2E660212A427BDA7695_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139* ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*, U3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139*, const RuntimeMethod*))AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139_mD8F93AB180792E581044B2E660212A427BDA7695_gshared_inline)(__this, ___0_stateMachine, method);
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.UniTask::FromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 UniTask_FromException_m3BD43A72A79E83F88AA1391B0EAE4B87563953E4 (Exception_t* ___0_ex, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Boolean>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m530DE8FBB18ADEF2BFAC36B3308ED76CACA467B7_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*, UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*, const RuntimeMethod*))Awaiter__ctor_m530DE8FBB18ADEF2BFAC36B3308ED76CACA467B7_gshared_inline)(__this, ___0_task, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Boolean>::get_Status()
inline int32_t UniTask_1_get_Status_m31A46EA72E4DA0EEBD656544A93DF2CF5DB263FA_inline (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*, const RuntimeMethod*))UniTask_1_get_Status_m31A46EA72E4DA0EEBD656544A93DF2CF5DB263FA_gshared_inline)(__this, method);
}
// System.Boolean Cysharp.Threading.Tasks.UniTaskStatusExtensions::IsCompleted(Cysharp.Threading.Tasks.UniTaskStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m2EAABB711625192DAE7409C928A1139AEDB17FB2_inline (int32_t ___0_status, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___0_obj, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask/<MoveNextAsync>d__7<System.Object>::MoveNext()
inline void U3CMoveNextAsyncU3Ed__7_MoveNext_mF800F08B96142F5E73E3BD2B8C15EDEF438085AA (U3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED*, const RuntimeMethod*))U3CMoveNextAsyncU3Ed__7_MoveNext_mF800F08B96142F5E73E3BD2B8C15EDEF438085AA_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask/<MoveNextAsync>d__7<System.Object>::MoveNext()
inline void U3CMoveNextAsyncU3Ed__7_MoveNext_mA46389C0BDA705B842EE4DD77DF297B74351FD79 (U3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF*, const RuntimeMethod*))U3CMoveNextAsyncU3Ed__7_MoveNext_mA46389C0BDA705B842EE4DD77DF297B74351FD79_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::MoveNext()
inline void U3CDisposeAsyncU3Ed__18_MoveNext_mDAC95F8EAFB387102ED2281A324029A50CF7EF53 (U3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__18_MoveNext_mDAC95F8EAFB387102ED2281A324029A50CF7EF53_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip/<DisposeAsync>d__18<System.Object,System.Object,System.Object>::MoveNext()
inline void U3CDisposeAsyncU3Ed__18_MoveNext_m2745BC52A606AB38BE9901B0754934AAC3E98AA1 (U3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__18_MoveNext_m2745BC52A606AB38BE9901B0754934AAC3E98AA1_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.UniTask`1/Awaiter<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>&)
inline void Awaiter__ctor_m9818087779A41B6466E855CBAC6496EF9F99824A_inline (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* __this, UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* ___0_task, const RuntimeMethod* method)
{
	((  void (*) (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E*, UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F*, const RuntimeMethod*))Awaiter__ctor_m9818087779A41B6466E855CBAC6496EF9F99824A_gshared_inline)(__this, ___0_task, method);
}
// Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.UniTask`1<System.Object>::get_Status()
inline int32_t UniTask_1_get_Status_mD8EA990F6BAFB381977ACE4E2D49412160BE0C96_inline (UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F*, const RuntimeMethod*))UniTask_1_get_Status_mD8EA990F6BAFB381977ACE4E2D49412160BE0C96_gshared_inline)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait/<DisposeAsync>d__21<System.Object,System.Object,System.Object>::MoveNext()
inline void U3CDisposeAsyncU3Ed__21_MoveNext_mDC6F7786422C301A797EA1E1EB7C0102E051C2C7 (U3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__21_MoveNext_mDC6F7786422C301A797EA1E1EB7C0102E051C2C7_gshared)(__this, method);
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation/<DisposeAsync>d__21<System.Object,System.Object,System.Object>::MoveNext()
inline void U3CDisposeAsyncU3Ed__21_MoveNext_m9EB9D6F70FB3CDDC53ECCE82730243643F78DD93 (U3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139*, const RuntimeMethod*))U3CDisposeAsyncU3Ed__21_MoveNext_m9EB9D6F70FB3CDDC53ECCE82730243643F78DD93_gshared)(__this, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhile__ctor_m4A519EBEDC124330A050A4B04E39B38BD8D50AC9_gshared (_SkipWhile_t12DCBC5103573E07F51383CC4136E257CF77DB1D* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___1_predicate;
		__this->___predicate_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhile`1/_SkipWhile<System.Object>::TryMoveNextCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhile_TryMoveNextCore_mA028BFE90301A095D2657CFF6B18EC69C252A981_gshared (_SkipWhile_t12DCBC5103573E07F51383CC4136E257CF77DB1D* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	{
		// if (sourceHasCurrent)
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_003b;
		}
	}
	{
		// if (predicate == null || !predicate(SourceCurrent))
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_7;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_7;
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck(L_2);
		bool L_4;
		L_4 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_4)
		{
			goto IL_0036;
		}
	}

IL_001e:
	{
		// predicate = null;
		__this->___predicate_7 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)(Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		((  void (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// result = true;
		bool* L_6 = ___1_result;
		*((int8_t*)L_6) = (int8_t)1;
		// return true;
		return (bool)1;
	}

IL_0036:
	{
		// result = default;
		bool* L_7 = ___1_result;
		*((int8_t*)L_7) = (int8_t)0;
		// return false;
		return (bool)0;
	}

IL_003b:
	{
		// result = false;
		bool* L_8 = ___1_result;
		*((int8_t*)L_8) = (int8_t)0;
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileAwait__ctor_mE6310263CFDF307B718622B0D355F93820CF1B64_gshared (_SkipWhileAwait_t2FF5BCE87BA416A9284E0E2882986088F4934EEC* __this, RuntimeObject* ___0_source, Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _SkipWhileAwait_TransformAsync_mCD60F445404B6970A24F1ECF0B5EA5195403CA6C_gshared (_SkipWhileAwait_t2FF5BCE87BA416A9284E0E2882986088F4934EEC* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (predicate == null)
		Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* L_0 = (Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0*)__this->___predicate_10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = ((CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var))->___False_2;
		return L_1;
	}

IL_000e:
	{
		// return predicate(sourceCurrent);
		Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* L_2 = (Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0*)__this->___predicate_10;
		RuntimeObject* L_3 = ___0_sourceCurrent;
		NullCheck(L_2);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_4;
		L_4 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_4;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhileAwait`1/_SkipWhileAwait<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileAwait_TrySetCurrentCore_mAC65D08D3241454AFD759355EF56B18BD435496A_gshared (_SkipWhileAwait_t2FF5BCE87BA416A9284E0E2882986088F4934EEC* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// if (!awaitResult)
		bool L_0 = ___0_awaitResult;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// predicate = null;
		__this->___predicate_10 = (Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)(Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// terminateIteration= false;
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// terminateIteration= false;
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)0;
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileAwaitWithCancellation__ctor_m0416CAF2F65E8C4E11ACDFA4E622CDA4B1335945_gshared (_SkipWhileAwaitWithCancellation_t09236FDE70A612B051D419D326986416D0FA07F0* __this, RuntimeObject* ___0_source, Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _SkipWhileAwaitWithCancellation_TransformAsync_m65F4A240264D8EB74410829AF8FD6E0745A2259D_gshared (_SkipWhileAwaitWithCancellation_t09236FDE70A612B051D419D326986416D0FA07F0* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (predicate == null)
		Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* L_0 = (Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493*)__this->___predicate_10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = ((CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var))->___False_2;
		return L_1;
	}

IL_000e:
	{
		// return predicate(sourceCurrent, cancellationToken);
		Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* L_2 = (Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493*)__this->___predicate_10;
		RuntimeObject* L_3 = ___0_sourceCurrent;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this)->___cancellationToken_4;
		NullCheck(L_2);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_5;
		L_5 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_5;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhileAwaitWithCancellation`1/_SkipWhileAwaitWithCancellation<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileAwaitWithCancellation_TrySetCurrentCore_mFF1188F08A84070A3B2AB3A47CA4BBAF8755AEC1_gshared (_SkipWhileAwaitWithCancellation_t09236FDE70A612B051D419D326986416D0FA07F0* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// terminateIteration= false;
		bool* L_0 = ___1_terminateIteration;
		*((int8_t*)L_0) = (int8_t)0;
		// if (!awaitResult)
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// predicate = null;
		__this->___predicate_10 = (Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)(Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileInt__ctor_m446C833832286E22EA19EE4D5274DD9A74128167_gshared (_SkipWhileInt_t0007E151D5A89A298590D545645000B5CBA7449F* __this, RuntimeObject* ___0_source, Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_2 = ___1_predicate;
		__this->___predicate_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhileInt`1/_SkipWhileInt<System.Object>::TryMoveNextCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileInt_TryMoveNextCore_m051E709EABD9FE3F0A7BAB6D0714473BD485096C_gshared (_SkipWhileInt_t0007E151D5A89A298590D545645000B5CBA7449F* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SkipWhileInt_TryMoveNextCore_m051E709EABD9FE3F0A7BAB6D0714473BD485096C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (sourceHasCurrent)
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// if (predicate == null || !predicate(SourceCurrent, checked(index++)))
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_1 = (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*)__this->___predicate_7;
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_2 = (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*)__this->___predicate_7;
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int32_t L_4 = (int32_t)__this->___index_8;
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _SkipWhileInt_TryMoveNextCore_m051E709EABD9FE3F0A7BAB6D0714473BD485096C_RuntimeMethod_var);
		__this->___index_8 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		NullCheck(L_2);
		bool L_7;
		L_7 = ((  bool (*) (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_2, L_3, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (L_7)
		{
			goto IL_0047;
		}
	}

IL_002f:
	{
		// predicate = null;
		__this->___predicate_7 = (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)(Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		((  void (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// result = true;
		bool* L_9 = ___1_result;
		*((int8_t*)L_9) = (int8_t)1;
		// return true;
		return (bool)1;
	}

IL_0047:
	{
		// result = default;
		bool* L_10 = ___1_result;
		*((int8_t*)L_10) = (int8_t)0;
		// return false;
		return (bool)0;
	}

IL_004c:
	{
		// result = false;
		bool* L_11 = ___1_result;
		*((int8_t*)L_11) = (int8_t)0;
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileIntAwait__ctor_m74B8A112A37DFBDC0409AA0FDBFE4683B5B4D00C_gshared (_SkipWhileIntAwait_tDF993F1DEF66DA98820BAA6F400647EAB2D340DB* __this, RuntimeObject* ___0_source, Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _SkipWhileIntAwait_TransformAsync_mEEE094E4A4BD89832E546B7A146F9122634A9898_gshared (_SkipWhileIntAwait_tDF993F1DEF66DA98820BAA6F400647EAB2D340DB* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SkipWhileIntAwait_TransformAsync_mEEE094E4A4BD89832E546B7A146F9122634A9898_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (predicate == null)
		Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* L_0 = (Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F*)__this->___predicate_10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = ((CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var))->___False_2;
		return L_1;
	}

IL_000e:
	{
		// return predicate(sourceCurrent, checked(index++));
		Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* L_2 = (Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F*)__this->___predicate_10;
		RuntimeObject* L_3 = ___0_sourceCurrent;
		int32_t L_4 = (int32_t)__this->___index_11;
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _SkipWhileIntAwait_TransformAsync_mEEE094E4A4BD89832E546B7A146F9122634A9898_RuntimeMethod_var);
		__this->___index_11 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		NullCheck(L_2);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_7;
		L_7 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_3, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_7;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhileIntAwait`1/_SkipWhileIntAwait<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileIntAwait_TrySetCurrentCore_m5CF2C9D535095E61BAF45A0F8FAF171A4453C696_gshared (_SkipWhileIntAwait_tDF993F1DEF66DA98820BAA6F400647EAB2D340DB* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// terminateIteration= false;
		bool* L_0 = ___1_terminateIteration;
		*((int8_t*)L_0) = (int8_t)0;
		// if (!awaitResult)
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// predicate = null;
		__this->___predicate_10 = (Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)(Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _SkipWhileIntAwaitWithCancellation__ctor_m52551EC293D3B51517484DE1F4BA348ED73499D0_gshared (_SkipWhileIntAwaitWithCancellation_tB02B5C7F72BEDC8078744B665BBC138BACED58CC* __this, RuntimeObject* ___0_source, Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _SkipWhileIntAwaitWithCancellation_TransformAsync_m73BA7900BEE61F2DCBBDF5B00CD55BD285051F9C_gshared (_SkipWhileIntAwaitWithCancellation_tB02B5C7F72BEDC8078744B665BBC138BACED58CC* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_SkipWhileIntAwaitWithCancellation_TransformAsync_m73BA7900BEE61F2DCBBDF5B00CD55BD285051F9C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (predicate == null)
		Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* L_0 = (Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE*)__this->___predicate_10;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = ((CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var))->___False_2;
		return L_1;
	}

IL_000e:
	{
		// return predicate(sourceCurrent, checked(index++), cancellationToken);
		Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* L_2 = (Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE*)__this->___predicate_10;
		RuntimeObject* L_3 = ___0_sourceCurrent;
		int32_t L_4 = (int32_t)__this->___index_11;
		V_0 = L_4;
		int32_t L_5 = V_0;
		if (((int64_t)L_5 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_5 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _SkipWhileIntAwaitWithCancellation_TransformAsync_m73BA7900BEE61F2DCBBDF5B00CD55BD285051F9C_RuntimeMethod_var);
		__this->___index_11 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		int32_t L_6 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this)->___cancellationToken_4;
		NullCheck(L_2);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_8;
		L_8 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE*, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_2, L_3, L_6, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_8;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.SkipWhileIntAwaitWithCancellation`1/_SkipWhileIntAwaitWithCancellation<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _SkipWhileIntAwaitWithCancellation_TrySetCurrentCore_mBEAC77D60F2423844BC3B36513C4CCC0D9E0B9BF_gshared (_SkipWhileIntAwaitWithCancellation_tB02B5C7F72BEDC8078744B665BBC138BACED58CC* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// terminateIteration= false;
		bool* L_0 = ___1_terminateIteration;
		*((int8_t*)L_0) = (int8_t)0;
		// if (!awaitResult)
		bool L_1 = ___0_awaitResult;
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		// predicate = null;
		__this->___predicate_10 = (Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)(Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE*)NULL);
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// return true;
		return (bool)1;
	}

IL_001b:
	{
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take__ctor_mE6731DCBEC1F1501DB9548A5C46B3E2373AB4B79_gshared (_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* __this, RuntimeObject* ___0_source, int32_t ___1_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _Take(IUniTaskAsyncEnumerable<TSource> source, int count, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_2), (void*)L_0);
		// this.count = count;
		int32_t L_1 = ___1_count;
		__this->___count_3 = L_1;
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_4))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Take_get_Current_m1EDDBD13A7655208D06176EF2342AD778003314B_gshared (_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_set_Current_m1E8C747F7722BE4B533B964629E065C14DD86BEC_gshared (_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _Take_MoveNextAsync_mA81F8FE7ED3EE8D9344D86948CBF03B0789AC447_gshared (_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cancellationToken.ThrowIfCancellationRequested();
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_4);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		// if (enumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_5;
		if (L_1)
		{
			goto IL_002a;
		}
	}
	{
		// enumerator = source.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___source_2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___enumerator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
	}

IL_002a:
	{
		// if (checked(index) >= count)
		int32_t L_5 = (int32_t)__this->___index_7;
		int32_t L_6 = (int32_t)__this->___count_3;
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_003e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_7 = ((CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var))->___False_2;
		return L_7;
	}

IL_003e:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_8 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_8, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// SourceMoveNext();
		((  void (*) (_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_9 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_10;
		L_10 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_9, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_11;
		memset((&L_11), 0, sizeof(L_11));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_11), (RuntimeObject*)__this, L_10, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_11;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::SourceMoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_SourceMoveNext_mC90531666B00D3E8A1F9D6FA2BA7B545F55854EC_gshared (_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_0);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_0);
			V_0 = L_1;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_2;
			L_2 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_0), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter_6 = L_2;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_4;
			L_4 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_3, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002e_1;
			}
		}
		{
			// MoveNextCore(this);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			// awaiter.SourceOnCompleted(MoveNextCoreDelegate, this);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_5 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 6));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ((_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 6)))->___MoveNextCoreDelegate_1;
			Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_5, L_6, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		}

IL_003f_1:
		{
			// }
			goto IL_0051;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_7 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		Exception_t* L_8 = V_1;
		bool L_9;
		L_9 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_7, L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::MoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take_MoveNextCore_m124CCFBB4EB899970C5E41D3103D52850C93DD6B_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* V_0 = NULL;
	bool V_1 = false;
	{
		// var self = (_Take)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		// if (self.TryGetResult(self.awaiter, out var result))
		_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* L_1 = V_0;
		_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___awaiter_6;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// self.index++;
		_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* L_6 = V_0;
		_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* L_7 = L_6;
		NullCheck(L_7);
		int32_t L_8 = (int32_t)L_7->___index_7;
		NullCheck(L_7);
		L_7->___index_7 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		// self.Current = self.enumerator.Current;
		_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* L_9 = V_0;
		_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* L_10 = V_0;
		NullCheck(L_10);
		RuntimeObject* L_11 = (RuntimeObject*)L_10->___enumerator_5;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 3), L_11);
		NullCheck(L_9);
		((  void (*) (_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))(L_9, L_12, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		// self.completionSource.TrySetResult(true);
		_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* L_13 = V_0;
		NullCheck(L_13);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_14 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_13)->___completionSource_0);
		bool L_15;
		L_15 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_14, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		return;
	}

IL_0047:
	{
		// self.completionSource.TrySetResult(false);
		_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_17 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_16)->___completionSource_0);
		bool L_18;
		L_18 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_17, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_0054:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _Take_DisposeAsync_mEA647D812271DB60907B2A06462D2DA613547136_gshared (_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (enumerator != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_1);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_0014:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015));
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_3 = V_0;
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Take`1/_Take<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Take__cctor_m90DD77C589833C42543DAAAB675F5D0418EBF5C9_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> MoveNextCoreDelegate = MoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)), NULL);
		((_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6)))->___MoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Take_t454939B5B1B6A2D18BE0569722068ADFF95F9D06_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 6)))->___MoveNextCoreDelegate_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Int32,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast__ctor_m24866C82A038D973C121468AECF94D921C33C199_gshared (_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* __this, RuntimeObject* ___0_source, int32_t ___1_count, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _TakeLast(IUniTaskAsyncEnumerable<TSource> source, int count, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_2), (void*)L_0);
		// this.count = count;
		int32_t L_1 = ___1_count;
		__this->___count_3 = L_1;
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_4))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TakeLast_get_Current_m58D303EA2D424260D9ECE3827CF3252F690B6C3C_gshared (_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_set_Current_m69B2C799F47E21D6BD17A25DD3E713FC3A365AAC_gshared (_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _TakeLast_MoveNextAsync_mEE775FD79E91FD53D53C47B4262EE423A0B41E0D_gshared (_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cancellationToken.ThrowIfCancellationRequested();
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_4);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		// if (enumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_5;
		if (L_1)
		{
			goto IL_0035;
		}
	}
	{
		// enumerator = source.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___source_2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_4;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___enumerator_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		// queue = new Queue<TSource>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		NullCheck(L_5);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		__this->___queue_7 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_7), (void*)L_5);
	}

IL_0035:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_6 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_6, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// SourceMoveNext();
		((  void (*) (_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_7 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_8;
		L_8 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_7, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_9;
		memset((&L_9), 0, sizeof(L_9));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_9), (RuntimeObject*)__this, L_8, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::SourceMoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_SourceMoveNext_mE7A983D08D73431A571FA6C3D55B81A1BDAB36EB_gshared (_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (iterateCompleted)
		bool L_0 = (bool)__this->___iterateCompleted_8;
		if (!L_0)
		{
			goto IL_0043;
		}
	}
	{
		// if (queue.Count > 0)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_1 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queue_7;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_0035;
		}
	}
	{
		// Current = queue.Dequeue();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queue_7;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		((  void (*) (_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_5 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_6;
		L_6 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_5, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		return;
	}

IL_0035:
	{
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_7 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_8;
		L_8 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_7, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0043:
	{
	}

IL_0044:
	try
	{// begin try (depth: 1)

IL_0044_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_9 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_9);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_10;
			L_10 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_9);
			V_0 = L_10;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_11;
			L_11 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_0), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter_6 = L_11;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_12 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_12, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_0088_1;
			}
		}
		{
			// continueNext = true;
			__this->___continueNext_9 = (bool)1;
			// MoveNextCore(this);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
			// if (continueNext)
			bool L_14 = (bool)__this->___continueNext_9;
			if (!L_14)
			{
				goto IL_0099_1;
			}
		}
		{
			// continueNext = false;
			__this->___continueNext_9 = (bool)0;
			// goto LOOP; // avoid recursive
			goto IL_0044_1;
		}

IL_0088_1:
		{
			// awaiter.SourceOnCompleted(MoveNextCoreDelegate, this);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_15 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 11));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_16 = ((_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 11)))->___MoveNextCoreDelegate_1;
			Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_15, L_16, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		}

IL_0099_1:
		{
			// }
			goto IL_00ab;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_009b;
		}
		throw e;
	}

CATCH_009b:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_17 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		Exception_t* L_18 = V_1;
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_17, L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ab;
	}// end catch (depth: 1)

IL_00ab:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::MoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast_MoveNextCore_m102C6E09D322114CB8398827D38391B5989653CD_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* V_0 = NULL;
	bool V_1 = false;
	{
		// var self = (_TakeLast)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 12)));
		// if (self.TryGetResult(self.awaiter, out var result))
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_1 = V_0;
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___awaiter_6;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_009b;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0086;
		}
	}
	{
		// if (self.queue.Count < self.count)
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_6 = V_0;
		NullCheck(L_6);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_7 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)L_6->___queue_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5)))(L_7, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = (int32_t)L_9->___count_3;
		if ((((int32_t)L_8) >= ((int32_t)L_10)))
		{
			goto IL_0055;
		}
	}
	{
		// self.queue.Enqueue(self.enumerator.Current);
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_11 = V_0;
		NullCheck(L_11);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_12 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)L_11->___queue_7;
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_13 = V_0;
		NullCheck(L_13);
		RuntimeObject* L_14 = (RuntimeObject*)L_13->___enumerator_5;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_14);
		NullCheck(L_12);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_12, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		// if (!self.continueNext)
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_16 = V_0;
		NullCheck(L_16);
		bool L_17 = (bool)L_16->___continueNext_9;
		if (L_17)
		{
			goto IL_00a2;
		}
	}
	{
		// self.SourceMoveNext();
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_18 = V_0;
		NullCheck(L_18);
		((  void (*) (_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}

IL_0055:
	{
		// self.queue.Dequeue();
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_19 = V_0;
		NullCheck(L_19);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_20 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)L_19->___queue_7;
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)))(L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6));
		// self.queue.Enqueue(self.enumerator.Current);
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_22 = V_0;
		NullCheck(L_22);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_23 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)L_22->___queue_7;
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_24 = V_0;
		NullCheck(L_24);
		RuntimeObject* L_25 = (RuntimeObject*)L_24->___enumerator_5;
		NullCheck(L_25);
		RuntimeObject* L_26;
		L_26 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8), L_25);
		NullCheck(L_23);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14)))(L_23, L_26, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 14));
		// if (!self.continueNext)
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_27 = V_0;
		NullCheck(L_27);
		bool L_28 = (bool)L_27->___continueNext_9;
		if (L_28)
		{
			goto IL_00a2;
		}
	}
	{
		// self.SourceMoveNext();
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_29 = V_0;
		NullCheck(L_29);
		((  void (*) (_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_29, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}

IL_0086:
	{
		// self.continueNext = false;
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_30 = V_0;
		NullCheck(L_30);
		L_30->___continueNext_9 = (bool)0;
		// self.iterateCompleted = true;
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_31 = V_0;
		NullCheck(L_31);
		L_31->___iterateCompleted_8 = (bool)1;
		// self.SourceMoveNext();
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_32 = V_0;
		NullCheck(L_32);
		((  void (*) (_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4)))(L_32, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 4));
		return;
	}

IL_009b:
	{
		// self.continueNext = false;
		_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* L_33 = V_0;
		NullCheck(L_33);
		L_33->___continueNext_9 = (bool)0;
	}

IL_00a2:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _TakeLast_DisposeAsync_m91D0D96A01049BD22BA1CE9232DDBFE3A791ABC9_gshared (_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (enumerator != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_5;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_1);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		return L_2;
	}

IL_0014:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015));
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_3 = V_0;
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeLast`1/_TakeLast<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeLast__cctor_mD602B7E5C9533CA134D3D46211FE5CEB396BC3FE_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> MoveNextCoreDelegate = MoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), NULL);
		((_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___MoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeLast_tE739640A160C403893C0C2E1DD5397CDA2D88031_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 11)))->___MoveNextCoreDelegate_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,Cysharp.Threading.Tasks.UniTask,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil__ctor_mFFBAFD351F311FB09CBE5EF22C4B6D9322CF5D4F_gshared (_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* __this, RuntimeObject* ___0_source, UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 ___1_other, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_t3C88FE37AF65705018FD35FB52116735C83CC88A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// public _TakeUntil(IUniTaskAsyncEnumerable<TSource> source, UniTask other, CancellationToken cancellationToken1)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_3), (void*)L_0);
		// this.cancellationToken1 = cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken1;
		__this->___cancellationToken1_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken1_4))->____source_0), (void*)NULL);
		// if (cancellationToken1.CanBeCanceled)
		bool L_2;
		L_2 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken1), NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// this.cancellationTokenRegistration1 = cancellationToken1.RegisterWithoutCaptureExecutionContext(CancelDelegate1, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___2_cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = ((_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___CancelDelegate1_1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_t3C88FE37AF65705018FD35FB52116735C83CC88A_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_5;
		L_5 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mC972A84780A0D1D5C1E093A046474F33AD468360(L_3, L_4, (RuntimeObject*)__this, NULL);
		__this->___cancellationTokenRegistration1_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration1_5))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration1_5))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_002f:
	{
		// RunOther(other).Forget();
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_6 = ___1_other;
		UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2 L_7;
		L_7 = ((  UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2 (*) (_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E*, UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		V_0 = L_7;
		UniTaskVoid_Forget_m85CCDB96669F0A5ADFE86F092764442B8C252C9A((&V_0), NULL);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TakeUntil_get_Current_mBEA062CABF541F9FE28E9357FF7D6F5BE26FD27D_gshared (_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_set_Current_m628EDB562CB333D21703A4922DFF70312F6CCFF2_gshared (_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _TakeUntil_MoveNextAsync_mA2D275402211D08810877F042C41A7A2F7CF5BB2_gshared (_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4B56782BBF8045B7E94BE4B1C81AD80820A99A8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (completed)
		bool L_0 = (bool)__this->___completed_6;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = ((CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var))->___False_2;
		return L_1;
	}

IL_000e:
	{
		// if (exception != null)
		Exception_t* L_2 = (Exception_t*)__this->___exception_7;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// return UniTask.FromException<bool>(exception);
		Exception_t* L_3 = (Exception_t*)__this->___exception_7;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_4;
		L_4 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700(L_3, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700_RuntimeMethod_var);
		return L_4;
	}

IL_0022:
	{
		// if (cancellationToken1.IsCancellationRequested)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken1_4);
		bool L_6;
		L_6 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_5, NULL);
		if (!L_6)
		{
			goto IL_003b;
		}
	}
	{
		// return UniTask.FromCanceled<bool>(cancellationToken1);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken1_4;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_8;
		L_8 = UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4B56782BBF8045B7E94BE4B1C81AD80820A99A8E(L_7, UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4B56782BBF8045B7E94BE4B1C81AD80820A99A8E_RuntimeMethod_var);
		return L_8;
	}

IL_003b:
	{
		// if (enumerator == null)
		RuntimeObject* L_9 = (RuntimeObject*)__this->___enumerator_8;
		if (L_9)
		{
			goto IL_005a;
		}
	}
	{
		// enumerator = source.GetAsyncEnumerator(cancellationToken1);
		RuntimeObject* L_10 = (RuntimeObject*)__this->___source_3;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken1_4;
		NullCheck(L_10);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_10, L_11);
		__this->___enumerator_8 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_8), (void*)L_12);
	}

IL_005a:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_13 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_13, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// SourceMoveNext();
		((  void (*) (_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_14 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_15;
		L_15 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_14, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_16;
		memset((&L_16), 0, sizeof(L_16));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_16), (RuntimeObject*)__this, L_15, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_16;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::SourceMoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_SourceMoveNext_mBF0B0B2ADB9064956B18D254F92F91397060A9AC_gshared (_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_8;
			NullCheck(L_0);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_0);
			V_0 = L_1;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_2;
			L_2 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_0), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter_9 = L_2;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_9))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_9);
			bool L_4;
			L_4 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_3, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002e_1;
			}
		}
		{
			// MoveNextCore(this);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			// awaiter.SourceOnCompleted(MoveNextCoreDelegate, this);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_5 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_9);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ((_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___MoveNextCoreDelegate_2;
			Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_5, L_6, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		}

IL_003f_1:
		{
			// }
			goto IL_0051;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_7 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		Exception_t* L_8 = V_1;
		bool L_9;
		L_9 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_7, L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::MoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_MoveNextCore_m0C5B5EA9E9C12FB9FAD2C66B03325A64AE6E3B00_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* V_0 = NULL;
	bool V_1 = false;
	{
		// var self = (_TakeUntil)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.awaiter, out var result))
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_1 = V_0;
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___awaiter_9;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0081;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0074;
		}
	}
	{
		// if (self.exception != null)
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_6 = V_0;
		NullCheck(L_6);
		Exception_t* L_7 = (Exception_t*)L_6->___exception_7;
		if (!L_7)
		{
			goto IL_0035;
		}
	}
	{
		// self.completionSource.TrySetException(self.exception);
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_8 = V_0;
		NullCheck(L_8);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_9 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_8)->___completionSource_0);
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_10 = V_0;
		NullCheck(L_10);
		Exception_t* L_11 = (Exception_t*)L_10->___exception_7;
		bool L_12;
		L_12 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_9, L_11, UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var);
		return;
	}

IL_0035:
	{
		// else if (self.cancellationToken1.IsCancellationRequested)
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_13 = V_0;
		NullCheck(L_13);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_14 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&L_13->___cancellationToken1_4);
		bool L_15;
		L_15 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_14, NULL);
		if (!L_15)
		{
			goto IL_0055;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken1);
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_17 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_16)->___completionSource_0);
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_18 = V_0;
		NullCheck(L_18);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_19 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_18->___cancellationToken1_4;
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A(L_17, L_19, UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		return;
	}

IL_0055:
	{
		// self.Current = self.enumerator.Current;
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_21 = V_0;
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_22 = V_0;
		NullCheck(L_22);
		RuntimeObject* L_23 = (RuntimeObject*)L_22->___enumerator_8;
		NullCheck(L_23);
		RuntimeObject* L_24;
		L_24 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 5), L_23);
		NullCheck(L_21);
		((  void (*) (_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)))(L_21, L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10));
		// self.completionSource.TrySetResult(true);
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_25 = V_0;
		NullCheck(L_25);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_26 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_25)->___completionSource_0);
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_26, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		return;
	}

IL_0074:
	{
		// self.completionSource.TrySetResult(false);
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_28 = V_0;
		NullCheck(L_28);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_29 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_28)->___completionSource_0);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_29, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_0081:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTaskVoid Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::RunOther(Cysharp.Threading.Tasks.UniTask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2 _TakeUntil_RunOther_m040B465FBBDDC2CA05AF6E1421CAD6E6F0AD0B53_gshared (_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* __this, UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 ___0_other, const RuntimeMethod* method) 
{
	U3CRunOtherU3Ed__17_t643EEC7C3D490CD2F650A85E998130769DABF8C5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429 L_0;
		L_0 = AsyncUniTaskVoidMethodBuilder_Create_m3FE5FF1BD82DD8E80EE83620FEC82B508769A167_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runner_0), (void*)NULL);
		(&V_0)->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_3), (void*)__this);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_1 = ___0_other;
		(&V_0)->___other_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___other_2))->___source_0), (void*)NULL);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429* L_2 = (AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskVoidMethodBuilder_Start_TisU3CRunOtherU3Ed__17_t643EEC7C3D490CD2F650A85E998130769DABF8C5_mA274B062AAD0DAC99E2B5E6150438928A35B091C(L_2, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429* L_3 = (AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2 L_4;
		L_4 = AsyncUniTaskVoidMethodBuilder_get_Task_m902C29FCC822C8134D3EF67342E6B6886C7C69D9_inline(L_3, NULL);
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::OnCanceled1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil_OnCanceled1_mA250E6BA8735F0F561B13415E2287F5226896EEE_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* V_0 = NULL;
	{
		// var self = (_TakeUntil)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// self.completionSource.TrySetCanceled(self.cancellationToken1);
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_1 = V_0;
		NullCheck(L_1);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_2 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1)->___completionSource_0);
		_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* L_3 = V_0;
		NullCheck(L_3);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_3->___cancellationToken1_4;
		bool L_5;
		L_5 = UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A(L_2, L_4, UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _TakeUntil_DisposeAsync_m8F4BC5933FC234E0748A325AE5B419F15107EAD8_gshared (_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// cancellationTokenRegistration1.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_0 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&__this->___cancellationTokenRegistration1_5);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_0, NULL);
		// if (enumerator != null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_8;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_2 = (RuntimeObject*)__this->___enumerator_8;
		NullCheck((RuntimeObject*)L_2);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_3;
		L_3 = InterfaceFuncInvoker0< UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		return L_3;
	}

IL_001f:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015));
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_4 = V_0;
		return L_4;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntil`1/_TakeUntil<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntil__cctor_mC15C1F2827F99AC945D8505BC5545B134D3954FA_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> CancelDelegate1 = OnCanceled1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12)), NULL);
		((_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1), (void*)L_0);
		// static readonly Action<object> MoveNextCoreDelegate = MoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 7)), NULL);
		((_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntil_tC12F2ADD3B0C138FA026BC654BC92746DAF2368E_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_2), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Threading.CancellationToken,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled__ctor_m041684CFB2931D87AF2547FF0EAFFFB0FEBCC622_gshared (_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken1, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_t3C88FE37AF65705018FD35FB52116735C83CC88A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public _TakeUntilCanceled(IUniTaskAsyncEnumerable<TSource> source, CancellationToken cancellationToken1, CancellationToken cancellationToken2)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_4), (void*)L_0);
		// this.cancellationToken1 = cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken1;
		__this->___cancellationToken1_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken1_5))->____source_0), (void*)NULL);
		// this.cancellationToken2 = cancellationToken2;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken2;
		__this->___cancellationToken2_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken2_6))->____source_0), (void*)NULL);
		// if (cancellationToken1.CanBeCanceled)
		bool L_3;
		L_3 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken1), NULL);
		if (!L_3)
		{
			goto IL_0036;
		}
	}
	{
		// this.cancellationTokenRegistration1 = cancellationToken1.RegisterWithoutCaptureExecutionContext(CancelDelegate1, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___1_cancellationToken1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___CancelDelegate1_1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_t3C88FE37AF65705018FD35FB52116735C83CC88A_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mC972A84780A0D1D5C1E093A046474F33AD468360(L_4, L_5, (RuntimeObject*)__this, NULL);
		__this->___cancellationTokenRegistration1_7 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration1_7))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration1_7))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_0036:
	{
		// if (cancellationToken1 != cancellationToken2 && cancellationToken2.CanBeCanceled)
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___1_cancellationToken1;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_8 = ___2_cancellationToken2;
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = CancellationToken_op_Inequality_m60DF5AE3E4D1B701E332343118A07A42EF5A4C55(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_005a;
		}
	}
	{
		bool L_10;
		L_10 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___2_cancellationToken2), NULL);
		if (!L_10)
		{
			goto IL_005a;
		}
	}
	{
		// this.cancellationTokenRegistration2 = cancellationToken2.RegisterWithoutCaptureExecutionContext(CancelDelegate2, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___2_cancellationToken2;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_12 = ((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___CancelDelegate2_2;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_t3C88FE37AF65705018FD35FB52116735C83CC88A_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_13;
		L_13 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mC972A84780A0D1D5C1E093A046474F33AD468360(L_11, L_12, (RuntimeObject*)__this, NULL);
		__this->___cancellationTokenRegistration2_8 = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration2_8))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration2_8))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_005a:
	{
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _TakeUntilCanceled_get_Current_m4F54723E7F72DB9CBDFA7CC2BD1E6B84E80D913A_gshared (_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_set_Current_mB605D8F237692CDEC90798D26522BDBF1A99B422_gshared (_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_12), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _TakeUntilCanceled_MoveNextAsync_m53B15DD670497AFBDBCEE8F477BEE80C7CF2961C_gshared (_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (cancellationToken1.IsCancellationRequested) isCanceled = true;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken1_5);
		bool L_1;
		L_1 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_0, NULL);
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (cancellationToken1.IsCancellationRequested) isCanceled = true;
		__this->___isCanceled_9 = (bool)1;
	}

IL_0014:
	{
		// if (cancellationToken2.IsCancellationRequested) isCanceled = true;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_2 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken2_6);
		bool L_3;
		L_3 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_2, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// if (cancellationToken2.IsCancellationRequested) isCanceled = true;
		__this->___isCanceled_9 = (bool)1;
	}

IL_0028:
	{
		// if (enumerator == null)
		RuntimeObject* L_4 = (RuntimeObject*)__this->___enumerator_10;
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		// enumerator = source.GetAsyncEnumerator(cancellationToken2); // use only AsyncEnumerator provided token.
		RuntimeObject* L_5 = (RuntimeObject*)__this->___source_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken2_6;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_5, L_6);
		__this->___enumerator_10 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_10), (void*)L_7);
	}

IL_0047:
	{
		// if (isCanceled) return CompletedTasks.False;
		bool L_8 = (bool)__this->___isCanceled_9;
		if (!L_8)
		{
			goto IL_0055;
		}
	}
	{
		// if (isCanceled) return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_9 = ((CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var))->___False_2;
		return L_9;
	}

IL_0055:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_10 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_10, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// SourceMoveNext();
		((  void (*) (_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_11 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_12;
		L_12 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_11, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_13;
		memset((&L_13), 0, sizeof(L_13));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_13), (RuntimeObject*)__this, L_12, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_13;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::SourceMoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_SourceMoveNext_m4BCB748FF531884F45FD30B6E4F90FFB1B8C4490_gshared (_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t* V_1 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_10;
			NullCheck(L_0);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1;
			L_1 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_0);
			V_0 = L_1;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_2;
			L_2 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_0), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter_11 = L_2;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_11))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_11);
			bool L_4;
			L_4 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_3, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002e_1;
			}
		}
		{
			// MoveNextCore(this);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			goto IL_003f_1;
		}

IL_002e_1:
		{
			// awaiter.SourceOnCompleted(MoveNextCoreDelegate, this);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_5 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_11);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___MoveNextCoreDelegate_3;
			Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_5, L_6, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		}

IL_003f_1:
		{
			// }
			goto IL_0051;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0041;
		}
		throw e;
	}

CATCH_0041:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_1 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_7 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		Exception_t* L_8 = V_1;
		bool L_9;
		L_9 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_7, L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0051;
	}// end catch (depth: 1)

IL_0051:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::MoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_MoveNextCore_m680031246BAFECC8ED0ACE61492399BB0CFF5A4A_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* V_0 = NULL;
	bool V_1 = false;
	{
		// var self = (_TakeUntilCanceled)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		// if (self.TryGetResult(self.awaiter, out var result))
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_1 = V_0;
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___awaiter_11;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_005c;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_004f;
		}
	}
	{
		// if (self.isCanceled)
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = (bool)L_6->___isCanceled_9;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// self.completionSource.TrySetResult(false);
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_8 = V_0;
		NullCheck(L_8);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_9 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_8)->___completionSource_0);
		bool L_10;
		L_10 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_9, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		return;
	}

IL_0030:
	{
		// self.Current = self.enumerator.Current;
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_11 = V_0;
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->___enumerator_10;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_13);
		NullCheck(L_11);
		((  void (*) (_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)))(L_11, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		// self.completionSource.TrySetResult(true);
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_16 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_15)->___completionSource_0);
		bool L_17;
		L_17 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_16, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		return;
	}

IL_004f:
	{
		// self.completionSource.TrySetResult(false);
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_18 = V_0;
		NullCheck(L_18);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_19 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_18)->___completionSource_0);
		bool L_20;
		L_20 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_19, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_005c:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::OnCanceled1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_OnCanceled1_m96C2D92D258ADF3B48383B0CC26E260769418638_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* V_0 = NULL;
	{
		// var self = (_TakeUntilCanceled)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		// if (!self.isCanceled)
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = (bool)L_1->___isCanceled_9;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// self.cancellationTokenRegistration2.Dispose();
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_3 = V_0;
		NullCheck(L_3);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_4 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&L_3->___cancellationTokenRegistration2_8);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_4, NULL);
		// self.completionSource.TrySetResult(false);
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_5 = V_0;
		NullCheck(L_5);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_6 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_5)->___completionSource_0);
		bool L_7;
		L_7 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_6, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::OnCanceled2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled_OnCanceled2_m88CC1FCEC9A5568EF65593AF3618C238081522DC_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* V_0 = NULL;
	{
		// var self = (_TakeUntilCanceled)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)));
		// if (!self.isCanceled)
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = (bool)L_1->___isCanceled_9;
		if (L_2)
		{
			goto IL_0027;
		}
	}
	{
		// self.cancellationTokenRegistration1.Dispose();
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_3 = V_0;
		NullCheck(L_3);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_4 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&L_3->___cancellationTokenRegistration1_7);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_4, NULL);
		// self.completionSource.TrySetResult(false);
		_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* L_5 = V_0;
		NullCheck(L_5);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_6 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_5)->___completionSource_0);
		bool L_7;
		L_7 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_6, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_0027:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _TakeUntilCanceled_DisposeAsync_mF8093E4C87CA3F24A3A0D66FF4058CD7CEBBB4B5_gshared (_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// cancellationTokenRegistration1.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_0 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&__this->___cancellationTokenRegistration1_7);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_0, NULL);
		// cancellationTokenRegistration2.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_1 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&__this->___cancellationTokenRegistration2_8);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_1, NULL);
		// if (enumerator != null)
		RuntimeObject* L_2 = (RuntimeObject*)__this->___enumerator_10;
		if (!L_2)
		{
			goto IL_002a;
		}
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_3 = (RuntimeObject*)__this->___enumerator_10;
		NullCheck((RuntimeObject*)L_3);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_4;
		L_4 = InterfaceFuncInvoker0< UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var, (RuntimeObject*)L_3);
		return L_4;
	}

IL_002a:
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015));
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_5 = V_0;
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.TakeUntilCanceled`1/_TakeUntilCanceled<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeUntilCanceled__cctor_mBC3FB9EFB5D9605BA57476EC4D1FF8B4A70E0E20_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> CancelDelegate1 = OnCanceled1;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 10)), NULL);
		((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate1_1), (void*)L_0);
		// static readonly Action<object> CancelDelegate2 = OnCanceled2;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate2_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___CancelDelegate2_2), (void*)L_1);
		// static readonly Action<object> MoveNextCoreDelegate = MoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_TakeUntilCanceled_tDF6C5F9F2240BBAED5DB267443DACDF6F7B607FF_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0)))->___MoveNextCoreDelegate_3), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhile__ctor_mA5D7E7C462CCBC5D8909D27C5D5B0302B5FC5607_gshared (_TakeWhile_t8FCC3B7777E9418DA493480248FEB6E9CC0C654C* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___1_predicate;
		__this->___predicate_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhile`1/_TakeWhile<System.Object>::TryMoveNextCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhile_TryMoveNextCore_mB6354CFB228016DB1D4D7BA5414E82BA71F31DA9_gshared (_TakeWhile_t8FCC3B7777E9418DA493480248FEB6E9CC0C654C* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	{
		// if (sourceHasCurrent)
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// if (predicate(SourceCurrent))
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_7;
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck(L_1);
		bool L_3;
		L_3 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		((  void (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// result = true;
		bool* L_5 = ___1_result;
		*((int8_t*)L_5) = (int8_t)1;
		// return true;
		return (bool)1;
	}

IL_0027:
	{
		// result = false;
		bool* L_6 = ___1_result;
		*((int8_t*)L_6) = (int8_t)0;
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileAwait__ctor_mC477B9E1CFFB352E6926D5A62EFA431AA1D32048_gshared (_TakeWhileAwait_tA049EFF722F5CFE0ABA64362E6CCF1E089C574C2* __this, RuntimeObject* ___0_source, Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _TakeWhileAwait_TransformAsync_m3A87AA5A1ADF902F29861FD106F914FE87987C0C_gshared (_TakeWhileAwait_tA049EFF722F5CFE0ABA64362E6CCF1E089C574C2* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	{
		// return predicate(sourceCurrent);
		Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* L_0 = (Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0*)__this->___predicate_10;
		RuntimeObject* L_1 = ___0_sourceCurrent;
		NullCheck(L_0);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_2;
		L_2 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_2;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhileAwait`1/_TakeWhileAwait<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileAwait_TrySetCurrentCore_mEB16CE218180933E7FEA7B00EDE6536DAEA4CA97_gshared (_TakeWhileAwait_tA049EFF722F5CFE0ABA64362E6CCF1E089C574C2* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// if (awaitResult)
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// terminateIteration = false;
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// terminateIteration = true;
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileAwaitWithCancellation__ctor_m8934D330AC447791D92C7D35EE19E5EDAB9D9DE5_gshared (_TakeWhileAwaitWithCancellation_tD5BA88638BF9D2901D77341CF18678B11D70DA56* __this, RuntimeObject* ___0_source, Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _TakeWhileAwaitWithCancellation_TransformAsync_m4686B0EF7B9A595B50E6A6EA75CCBD49C364E71B_gshared (_TakeWhileAwaitWithCancellation_tD5BA88638BF9D2901D77341CF18678B11D70DA56* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	{
		// return predicate(sourceCurrent, cancellationToken);
		Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* L_0 = (Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493*)__this->___predicate_10;
		RuntimeObject* L_1 = ___0_sourceCurrent;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this)->___cancellationToken_4;
		NullCheck(L_0);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_3;
		L_3 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_3;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhileAwaitWithCancellation`1/_TakeWhileAwaitWithCancellation<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileAwaitWithCancellation_TrySetCurrentCore_m88663FCF15A38A440B0BCD427C3B42C08F5183E9_gshared (_TakeWhileAwaitWithCancellation_tD5BA88638BF9D2901D77341CF18678B11D70DA56* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// if (awaitResult)
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// terminateIteration = false;
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// terminateIteration = true;
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileInt__ctor_m19CF1EA1D164D32DA6A17288FA9242AC68FD8FD0_gshared (_TakeWhileInt_tF93D43968E9C724D42F48506DEC3073F429358A7* __this, RuntimeObject* ___0_source, Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_2 = ___1_predicate;
		__this->___predicate_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_7), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhileInt`1/_TakeWhileInt<System.Object>::TryMoveNextCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileInt_TryMoveNextCore_m6B3C85D5EBE16186DD3025885E4A5BDB45E56A96_gshared (_TakeWhileInt_tF93D43968E9C724D42F48506DEC3073F429358A7* __this, bool ___0_sourceHasCurrent, bool* ___1_result, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TakeWhileInt_TryMoveNextCore_m6B3C85D5EBE16186DD3025885E4A5BDB45E56A96_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (sourceHasCurrent)
		bool L_0 = ___0_sourceHasCurrent;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (predicate(SourceCurrent, checked(index++)))
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_1 = (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*)__this->___predicate_7;
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		int32_t L_3 = (int32_t)__this->___index_8;
		V_0 = L_3;
		int32_t L_4 = V_0;
		if (((int64_t)L_4 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_4 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _TakeWhileInt_TryMoveNextCore_m6B3C85D5EBE16186DD3025885E4A5BDB45E56A96_RuntimeMethod_var);
		__this->___index_8 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		int32_t L_5 = V_0;
		NullCheck(L_1);
		bool L_6;
		L_6 = ((  bool (*) (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_1, L_2, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		if (!L_6)
		{
			goto IL_0038;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		NullCheck((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this);
		((  void (*) (AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorBase_2_t0ABC540A26EF89B8776378BCE7BF58A7AE35B0CB*)__this, L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// result = true;
		bool* L_8 = ___1_result;
		*((int8_t*)L_8) = (int8_t)1;
		// return true;
		return (bool)1;
	}

IL_0038:
	{
		// result = false;
		bool* L_9 = ___1_result;
		*((int8_t*)L_9) = (int8_t)0;
		// return true;
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileIntAwait__ctor_m340B345CE97D3396647E12880B052E2F28EDEC3D_gshared (_TakeWhileIntAwait_tFF6FEE22CB351FF9866386A9BA6482B4BBB3267C* __this, RuntimeObject* ___0_source, Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _TakeWhileIntAwait_TransformAsync_mBB65DB423354CA1F470780F7BA5B7198E485ACB6_gshared (_TakeWhileIntAwait_tFF6FEE22CB351FF9866386A9BA6482B4BBB3267C* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TakeWhileIntAwait_TransformAsync_mBB65DB423354CA1F470780F7BA5B7198E485ACB6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return predicate(sourceCurrent, checked(index++));
		Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* L_0 = (Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F*)__this->___predicate_10;
		RuntimeObject* L_1 = ___0_sourceCurrent;
		int32_t L_2 = (int32_t)__this->___index_11;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int64_t)L_3 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _TakeWhileIntAwait_TransformAsync_mBB65DB423354CA1F470780F7BA5B7198E485ACB6_RuntimeMethod_var);
		__this->___index_11 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		NullCheck(L_0);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_5;
		L_5 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_5;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhileIntAwait`1/_TakeWhileIntAwait<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileIntAwait_TrySetCurrentCore_mAD24509B16E09F0F1C5B29444C6E58CA64B430C2_gshared (_TakeWhileIntAwait_tFF6FEE22CB351FF9866386A9BA6482B4BBB3267C* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// if (awaitResult)
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// terminateIteration = false;
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// terminateIteration = true;
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _TakeWhileIntAwaitWithCancellation__ctor_m39C48CC72A0D0A1B5E8B089039A7F5963F82A321_gshared (_TakeWhileIntAwaitWithCancellation_t0DFA9628B6309177992016D0785C8F6BADF97CD7* __this, RuntimeObject* ___0_source, Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	{
		// : base(source, cancellationToken)
		RuntimeObject* L_0 = ___0_source;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___2_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 1));
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// this.predicate = predicate;
		Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* L_2 = ___1_predicate;
		__this->___predicate_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_10), (void*)L_2);
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>::TransformAsync(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _TakeWhileIntAwaitWithCancellation_TransformAsync_m3CF412B88063B7ACFE92C381DEE086D76D83738B_gshared (_TakeWhileIntAwaitWithCancellation_t0DFA9628B6309177992016D0785C8F6BADF97CD7* __this, RuntimeObject* ___0_sourceCurrent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_TakeWhileIntAwaitWithCancellation_TransformAsync_m3CF412B88063B7ACFE92C381DEE086D76D83738B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return predicate(sourceCurrent, checked(index++), cancellationToken);
		Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* L_0 = (Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE*)__this->___predicate_10;
		RuntimeObject* L_1 = ___0_sourceCurrent;
		int32_t L_2 = (int32_t)__this->___index_11;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (((int64_t)L_3 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_3 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _TakeWhileIntAwaitWithCancellation_TransformAsync_m3CF412B88063B7ACFE92C381DEE086D76D83738B_RuntimeMethod_var);
		__this->___index_11 = ((int32_t)il2cpp_codegen_add(L_3, 1));
		int32_t L_4 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this)->___cancellationToken_4;
		NullCheck(L_0);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_6;
		L_6 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE*, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		return L_6;
	}
}
// System.Boolean Cysharp.Threading.Tasks.Linq.TakeWhileIntAwaitWithCancellation`1/_TakeWhileIntAwaitWithCancellation<System.Object>::TrySetCurrentCore(System.Boolean,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _TakeWhileIntAwaitWithCancellation_TrySetCurrentCore_mFE892EB3BECB7BEFC95AF2DCC20FC40C87D2E8FB_gshared (_TakeWhileIntAwaitWithCancellation_t0DFA9628B6309177992016D0785C8F6BADF97CD7* __this, bool ___0_awaitResult, bool* ___1_terminateIteration, const RuntimeMethod* method) 
{
	{
		// if (awaitResult)
		bool L_0 = ___0_awaitResult;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// Current = SourceCurrent;
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		NullCheck((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this);
		((  void (*) (AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))((AsyncEnumeratorAwaitSelectorBase_3_t27A13B9C5B9DD9A78F6CD9FA2CAAA74061EA7589*)__this, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		// terminateIteration = false;
		bool* L_2 = ___1_terminateIteration;
		*((int8_t*)L_2) = (int8_t)0;
		// return true;
		return (bool)1;
	}

IL_0014:
	{
		// terminateIteration = true;
		bool* L_3 = ___1_terminateIteration;
		*((int8_t*)L_3) = (int8_t)1;
		// return false;
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>::.ctor(System.Exception,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Throw__ctor_mA61789FF0A348EBA0648C2CB69F5A0D9400899B2_gshared (_Throw_tCC0D99A272A34F9DF58FBBA70EB77801799948CC* __this, Exception_t* ___0_exception, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _Throw(Exception exception, CancellationToken cancellationToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.exception = exception;
		Exception_t* L_0 = ___0_exception;
		__this->___exception_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exception_0), (void*)L_0);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_1))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TValue Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Throw_get_Current_m4F3F70B4F3138410FD4DB86EF7D0F04D446AB37D_gshared (_Throw_tCC0D99A272A34F9DF58FBBA70EB77801799948CC* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// public TValue Current => default;
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _Throw_MoveNextAsync_m8A10FFBE6260D68EA30BCD57ADF30B15A0E57703_gshared (_Throw_tCC0D99A272A34F9DF58FBBA70EB77801799948CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cancellationToken.ThrowIfCancellationRequested();
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_1);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		// return UniTask.FromException<bool>(exception);
		Exception_t* L_1 = (Exception_t*)__this->___exception_0;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_2;
		L_2 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700(L_1, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700_RuntimeMethod_var);
		return L_2;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Throw`1/_Throw<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _Throw_DisposeAsync_m9365BB8FEB3810C95AC7EF3FD78E6AC9F7C7D84F_gshared (_Throw_tCC0D99A272A34F9DF58FBBA70EB77801799948CC* __this, const RuntimeMethod* method) 
{
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015));
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerable__ctor_mF492D31C9861863F411B6EA3E13F372590CF8C70_gshared (_ToUniTaskAsyncEnumerable_tBD0DFB7E1BDFB2617FF446E8F62C4D754EA4139C* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ToUniTaskAsyncEnumerable(IEnumerable<T> source, CancellationToken cancellationToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_0), (void*)L_0);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_1))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ToUniTaskAsyncEnumerable_get_Current_mD9EA79DC67F59358A2ED56B75D3FA647C45FCF76_gshared (_ToUniTaskAsyncEnumerable_tBD0DFB7E1BDFB2617FF446E8F62C4D754EA4139C* __this, const RuntimeMethod* method) 
{
	{
		// public T Current => enumerator.Current;
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_2;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_0);
		return L_1;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _ToUniTaskAsyncEnumerable_MoveNextAsync_mA670A8B44F7BEDC5E414068E43C3FAF4ED290090_gshared (_ToUniTaskAsyncEnumerable_tBD0DFB7E1BDFB2617FF446E8F62C4D754EA4139C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// cancellationToken.ThrowIfCancellationRequested();
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_0 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_1);
		CancellationToken_ThrowIfCancellationRequested_mB9D952DC6E96FB6E0595FC8E88D3133CDA4382C3(L_0, NULL);
		// if (enumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->___enumerator_2;
		if (L_1)
		{
			goto IL_0024;
		}
	}
	{
		// enumerator = source.GetEnumerator();
		RuntimeObject* L_2 = (RuntimeObject*)__this->___source_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Object>::GetEnumerator() */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_2);
		__this->___enumerator_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_2), (void*)L_3);
	}

IL_0024:
	{
		// if (enumerator.MoveNext())
		RuntimeObject* L_4 = (RuntimeObject*)__this->___enumerator_2;
		NullCheck((RuntimeObject*)L_4);
		bool L_5;
		L_5 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_4);
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		// return CompletedTasks.True;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_6 = ((CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var))->___True_1;
		return L_6;
	}

IL_0037:
	{
		// return CompletedTasks.False;
		il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_7 = ((CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var))->___False_2;
		return L_7;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerable`1/_ToUniTaskAsyncEnumerable<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _ToUniTaskAsyncEnumerable_DisposeAsync_mF21D8C75A398B04D2373952FB3F2AB61FD8E9BCB_gshared (_ToUniTaskAsyncEnumerable_tBD0DFB7E1BDFB2617FF446E8F62C4D754EA4139C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// enumerator.Dispose();
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_2;
		NullCheck((RuntimeObject*)L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015));
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_1 = V_0;
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::.ctor(System.IObservable`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable__ctor_mEDE995DC80C46E2AF48726C363F136B18A8E5F6B_gshared (_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4* __this, RuntimeObject* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationTokenExtensions_t3C88FE37AF65705018FD35FB52116735C83CC88A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public _ToUniTaskAsyncEnumerableObservable(IObservable<T> source, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_2), (void*)L_0);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.queuedResult = new Queue<T>();
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_2);
		((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->___queuedResult_7 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queuedResult_7), (void*)L_2);
		// if (cancellationToken.CanBeCanceled)
		bool L_3;
		L_3 = CancellationToken_get_CanBeCanceled_mC3751330B171DB14B70B9BAAD90A7D098A2309EC((&___1_cancellationToken), NULL);
		if (!L_3)
		{
			goto IL_003a;
		}
	}
	{
		// cancellationTokenRegistration = cancellationToken.RegisterWithoutCaptureExecutionContext(OnCanceledDelegate, this);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 2));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 2)))->___OnCanceledDelegate_1;
		il2cpp_codegen_runtime_class_init_inline(CancellationTokenExtensions_t3C88FE37AF65705018FD35FB52116735C83CC88A_il2cpp_TypeInfo_var);
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389 L_6;
		L_6 = CancellationTokenExtensions_RegisterWithoutCaptureExecutionContext_mC972A84780A0D1D5C1E093A046474F33AD468360(L_4, L_5, (RuntimeObject*)__this, NULL);
		__this->___cancellationTokenRegistration_10 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationTokenRegistration_10))->___m_callbackInfo_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___cancellationTokenRegistration_10))->___m_registrationInfo_1))->____source_0), (void*)NULL);
		#endif
	}

IL_003a:
	{
		// }
		return;
	}
}
// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ToUniTaskAsyncEnumerableObservable_get_Current_mE0C05F08CACD980FCF518A150EDB93CDAEF8C255_gshared (_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4* __this, const RuntimeMethod* method) 
{
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	{
		// if (useCachedCurrent)
		bool L_0 = (bool)__this->___useCachedCurrent_4;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// return current;
		RuntimeObject* L_1 = (RuntimeObject*)__this->___current_5;
		return L_1;
	}

IL_000f:
	{
		// lock (queuedResult)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queuedResult_7;
		V_0 = L_2;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005a:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_1;
					if (!L_3)
					{
						goto IL_0063;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_4, NULL);
				}

IL_0063:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_5, (&V_1), NULL);
				// if (queuedResult.Count != 0)
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_6 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queuedResult_7;
				NullCheck(L_6);
				int32_t L_7;
				L_7 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				if (!L_7)
				{
					goto IL_004e_1;
				}
			}
			{
				// current = queuedResult.Dequeue();
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_8 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queuedResult_7;
				NullCheck(L_8);
				RuntimeObject* L_9;
				L_9 = ((  RuntimeObject* (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
				__this->___current_5 = L_9;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___current_5), (void*)L_9);
				// useCachedCurrent = true;
				__this->___useCachedCurrent_4 = (bool)1;
				// return current;
				RuntimeObject* L_10 = (RuntimeObject*)__this->___current_5;
				V_2 = L_10;
				goto IL_0064;
			}

IL_004e_1:
			{
				// return default; // undefined.
				il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
				RuntimeObject* L_11 = V_3;
				V_2 = L_11;
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
		// }
		RuntimeObject* L_12 = V_2;
		return L_12;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _ToUniTaskAsyncEnumerableObservable_MoveNextAsync_mFCD0CDBCF7573AD2E1DA14362FDC2D1A5B7810B3_gshared (_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4B56782BBF8045B7E94BE4B1C81AD80820A99A8E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// lock (queuedResult)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_0 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queuedResult_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00a7:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00b0;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_00b0:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
				// useCachedCurrent = false;
				__this->___useCachedCurrent_4 = (bool)0;
				// if (cancellationToken.IsCancellationRequested)
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_4 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&__this->___cancellationToken_3);
				bool L_5;
				L_5 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_4, NULL);
				if (!L_5)
				{
					goto IL_0033_1;
				}
			}
			{
				// return UniTask.FromCanceled<bool>(cancellationToken);
				CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_3;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
				UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_7;
				L_7 = UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4B56782BBF8045B7E94BE4B1C81AD80820A99A8E(L_6, UniTask_FromCanceled_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m4B56782BBF8045B7E94BE4B1C81AD80820A99A8E_RuntimeMethod_var);
				V_2 = L_7;
				goto IL_00b1;
			}

IL_0033_1:
			{
				// if (subscription == null)
				RuntimeObject* L_8 = (RuntimeObject*)__this->___subscription_9;
				if (L_8)
				{
					goto IL_004d_1;
				}
			}
			{
				// subscription = source.Subscribe(this);
				RuntimeObject* L_9 = (RuntimeObject*)__this->___source_2;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<System.Object>::Subscribe(System.IObserver`1<T>) */, il2cpp_rgctx_data(method->klass->rgctx_data, 5), L_9, (RuntimeObject*)__this);
				__this->___subscription_9 = L_10;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___subscription_9), (void*)L_10);
			}

IL_004d_1:
			{
				// if (error != null)
				Exception_t* L_11 = (Exception_t*)__this->___error_8;
				if (!L_11)
				{
					goto IL_0063_1;
				}
			}
			{
				// return UniTask.FromException<bool>(error);
				Exception_t* L_12 = (Exception_t*)__this->___error_8;
				il2cpp_codegen_runtime_class_init_inline(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
				UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_13;
				L_13 = UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700(L_12, UniTask_FromException_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5A0F894362399CEF2479BC0EFC6504F940138700_RuntimeMethod_var);
				V_2 = L_13;
				goto IL_00b1;
			}

IL_0063_1:
			{
				// if (queuedResult.Count != 0)
				Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_14 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queuedResult_7;
				NullCheck(L_14);
				int32_t L_15;
				L_15 = ((  int32_t (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
				if (!L_15)
				{
					goto IL_0078_1;
				}
			}
			{
				// return CompletedTasks.True;
				il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
				UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_16 = ((CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var))->___True_1;
				V_2 = L_16;
				goto IL_00b1;
			}

IL_0078_1:
			{
				// if (subscribeCompleted)
				bool L_17 = (bool)__this->___subscribeCompleted_6;
				if (!L_17)
				{
					goto IL_0088_1;
				}
			}
			{
				// return CompletedTasks.False;
				il2cpp_codegen_runtime_class_init_inline(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var);
				UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_18 = ((CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_StaticFields*)il2cpp_codegen_static_fields_for(CompletedTasks_t412BEBF10CBFC3C3A7B6F976D4C4497213D3B92C_il2cpp_TypeInfo_var))->___False_2;
				V_2 = L_18;
				goto IL_00b1;
			}

IL_0088_1:
			{
				// completionSource.Reset();
				UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_19 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
				UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_19, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
				// return new UniTask<bool>(this, completionSource.Version);
				UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_20 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
				int16_t L_21;
				L_21 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_20, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
				UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_22;
				memset((&L_22), 0, sizeof(L_22));
				UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_22), (RuntimeObject*)__this, L_21, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
				V_2 = L_22;
				goto IL_00b1;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b1:
	{
		// }
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_23 = V_2;
		return L_23;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _ToUniTaskAsyncEnumerableObservable_DisposeAsync_mF77FC802166ADC1EBBADDFBED172EE376004E1BC_gshared (_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// subscription.Dispose();
		RuntimeObject* L_0 = (RuntimeObject*)__this->___subscription_9;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_0);
		// cancellationTokenRegistration.Dispose();
		CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389* L_1 = (CancellationTokenRegistration_tC925A8BC86C629A2A3DA73765FA964A95FC83389*)(&__this->___cancellationTokenRegistration_10);
		CancellationTokenRegistration_Dispose_m9EAF1228573E8278DDF7A3BEB5EE0E18DA6DC0E1(L_1, NULL);
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_2 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_2, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015));
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_3 = V_0;
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnCompleted_m5F16C2B79C3D8D8B7A2E8C133C03CC2FE86FEA6E_gshared (_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (queuedResult)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_0 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queuedResult_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0030;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0030:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			// subscribeCompleted = true;
			__this->___subscribeCompleted_6 = (bool)1;
			// completionSource.TrySetResult(false);
			UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_4 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
			bool L_5;
			L_5 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_4, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
			// }
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnError_mE3BC07F9EA9622D30BB88D9ADAB8BC3DD17E7014_gshared (_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4* __this, Exception_t* ___0_error, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (queuedResult)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_0 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queuedResult_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0027:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0030;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0030:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			// this.error = error;
			Exception_t* L_4 = ___0_error;
			__this->___error_8 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___error_8), (void*)L_4);
			// completionSource.TrySetException(error);
			UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_5 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
			Exception_t* L_6 = ___0_error;
			bool L_7;
			L_7 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_5, L_6, UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var);
			// }
			goto IL_0031;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::OnNext(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnNext_mE81145836337AC56FEE8EA17259557B71A69AFA5_gshared (_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (queuedResult)
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_0 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queuedResult_7;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0035;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_2, NULL);
				}

IL_0035:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_3, (&V_1), NULL);
			// queuedResult.Enqueue(value);
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)__this->___queuedResult_7;
			RuntimeObject* L_5 = ___0_value;
			NullCheck(L_4);
			((  void (*) (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(L_4, L_5, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			// completionSource.TrySetResult(true); // include callback execution, too long lock?
			UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_6 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
			bool L_7;
			L_7 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_6, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
			// }
			goto IL_0036;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::OnCanceled(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable_OnCanceled_mA288A6360E54C55EF3DC655CFB42F262D544F108_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4* V_0 = NULL;
	Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* V_1 = NULL;
	bool V_2 = false;
	{
		// var self = (_ToUniTaskAsyncEnumerableObservable)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// lock (self.queuedResult)
		_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4* L_1 = V_0;
		NullCheck(L_1);
		Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_2 = (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5*)L_1->___queuedResult_7;
		V_1 = L_2;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002c:
			{// begin finally (depth: 1)
				{
					bool L_3 = V_2;
					if (!L_3)
					{
						goto IL_0035;
					}
				}
				{
					Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_4 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_4, NULL);
				}

IL_0035:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* L_5 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_5, (&V_2), NULL);
			// self.completionSource.TrySetCanceled(self.cancellationToken);
			_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4* L_6 = V_0;
			NullCheck(L_6);
			UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_7 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_6)->___completionSource_0);
			_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4* L_8 = V_0;
			NullCheck(L_8);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_8->___cancellationToken_3;
			bool L_10;
			L_10 = UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A(L_7, L_9, UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
			// }
			goto IL_0036;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableObservable`1/_ToUniTaskAsyncEnumerableObservable<System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableObservable__cctor_mF474B80A731AA8789178A1266979A066D8A6AB92_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> OnCanceledDelegate = OnCanceled;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9)), NULL);
		((_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___OnCanceledDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ToUniTaskAsyncEnumerableObservable_tC8FD92057457283F6743999C1906E3173ACC9DB4_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2)))->___OnCanceledDelegate_1), (void*)L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>::.ctor(System.Threading.Tasks.Task`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableTask__ctor_m6B0402DAC1639B73DF1D74E53A6C27B1EA52A02C_gshared (_ToUniTaskAsyncEnumerableTask_t3CA9D2E82569F1B00814A17548BC0AFA8FC06624* __this, Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ToUniTaskAsyncEnumerableTask(Task<T> source, CancellationToken cancellationToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.source = source;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_0 = ___0_source;
		__this->___source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_0), (void*)L_0);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_1))->____source_0), (void*)NULL);
		// this.called = false;
		__this->___called_3 = (bool)0;
		// }
		return;
	}
}
// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ToUniTaskAsyncEnumerableTask_get_Current_m0588718F2215765E722CEFA91026037352E46686_gshared (_ToUniTaskAsyncEnumerableTask_t3CA9D2E82569F1B00814A17548BC0AFA8FC06624* __this, const RuntimeMethod* method) 
{
	{
		// public T Current => current;
		RuntimeObject* L_0 = (RuntimeObject*)__this->___current_2;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _ToUniTaskAsyncEnumerableTask_MoveNextAsync_mD1447C8235BB1F6605E582FCE82E312C7FC448C7_gshared (_ToUniTaskAsyncEnumerableTask_t3CA9D2E82569F1B00814A17548BC0AFA8FC06624* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Create_mC07E139E589DD438EA71E35049731DC5BA8A2A0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_mAE53145F9C8FD8F19A7A075BDBF17A68C7867A9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_1_Create_mC07E139E589DD438EA71E35049731DC5BA8A2A0B_inline(AsyncUniTaskMethodBuilder_1_Create_mC07E139E589DD438EA71E35049731DC5BA8A2A0B_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* L_1 = (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED_mCE843DB9E5D1AE96F13B27F1DFA3449A9D6AA380_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* L_2 = (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_3;
		L_3 = AsyncUniTaskMethodBuilder_1_get_Task_mAE53145F9C8FD8F19A7A075BDBF17A68C7867A9F_inline(L_2, AsyncUniTaskMethodBuilder_1_get_Task_mAE53145F9C8FD8F19A7A075BDBF17A68C7867A9F_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableTask`1/_ToUniTaskAsyncEnumerableTask<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _ToUniTaskAsyncEnumerableTask_DisposeAsync_mA20332AF4E7734A83DA837F4E7AA4B60AD3F65E1_gshared (_ToUniTaskAsyncEnumerableTask_t3CA9D2E82569F1B00814A17548BC0AFA8FC06624* __this, const RuntimeMethod* method) 
{
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015));
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>::.ctor(Cysharp.Threading.Tasks.UniTask`1<T>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ToUniTaskAsyncEnumerableUniTask__ctor_m96DE2C60519E39490D32BB568B7E7DF71AE73472_gshared (_ToUniTaskAsyncEnumerableUniTask_tFBB1620EF65B7F08CA6C5CFB916870C868972FB5* __this, UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F ___0_source, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ToUniTaskAsyncEnumerableUniTask(UniTask<T> source, CancellationToken cancellationToken)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		// this.source = source;
		UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F L_0 = ___0_source;
		__this->___source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___source_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___source_0))->___result_1), (void*)NULL);
		#endif
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = ___1_cancellationToken;
		__this->___cancellationToken_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_1))->____source_0), (void*)NULL);
		// this.called = false;
		__this->___called_3 = (bool)0;
		// }
		return;
	}
}
// T Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ToUniTaskAsyncEnumerableUniTask_get_Current_m8088A633868AE23C0A98C3B25F7F3CD5226018A7_gshared (_ToUniTaskAsyncEnumerableUniTask_tFBB1620EF65B7F08CA6C5CFB916870C868972FB5* __this, const RuntimeMethod* method) 
{
	{
		// public T Current => current;
		RuntimeObject* L_0 = (RuntimeObject*)__this->___current_2;
		return L_0;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _ToUniTaskAsyncEnumerableUniTask_MoveNextAsync_m0F3EA8F3F992A8DCE66D2E13B369441993C32BC7_gshared (_ToUniTaskAsyncEnumerableUniTask_tFBB1620EF65B7F08CA6C5CFB916870C868972FB5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_Create_mC07E139E589DD438EA71E35049731DC5BA8A2A0B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncUniTaskMethodBuilder_1_get_Task_mAE53145F9C8FD8F19A7A075BDBF17A68C7867A9F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0 L_0;
		L_0 = AsyncUniTaskMethodBuilder_1_Create_mC07E139E589DD438EA71E35049731DC5BA8A2A0B_inline(AsyncUniTaskMethodBuilder_1_Create_mC07E139E589DD438EA71E35049731DC5BA8A2A0B_RuntimeMethod_var);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* L_1 = (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF_m65856DB6E5E02DD3011498806FB573EEBE9F1DA0_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* L_2 = (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_3;
		L_3 = AsyncUniTaskMethodBuilder_1_get_Task_mAE53145F9C8FD8F19A7A075BDBF17A68C7867A9F_inline(L_2, AsyncUniTaskMethodBuilder_1_get_Task_mAE53145F9C8FD8F19A7A075BDBF17A68C7867A9F_RuntimeMethod_var);
		return L_3;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ToUniTaskAsyncEnumerableUniTask`1/_ToUniTaskAsyncEnumerableUniTask<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _ToUniTaskAsyncEnumerableUniTask_DisposeAsync_m9EFEDA6B1B776C151042DDD2505BCD97BF99F446_gshared (_ToUniTaskAsyncEnumerableUniTask_tFBB1620EF65B7F08CA6C5CFB916870C868972FB5* __this, const RuntimeMethod* method) 
{
	UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015));
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_0 = V_0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where__ctor_mD06100A7D5C0D83C6D20FA807D7EC9A5AACF58EC_gshared (_Where_t06F3F87D71B035D78D8C57B2E078152614E4DF7F* __this, RuntimeObject* ___0_source, Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _Where(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, int, bool> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_7), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Where_get_Current_m5C4445608109EE6F45D1E43AA26153556D13E9F1_gshared (_Where_t06F3F87D71B035D78D8C57B2E078152614E4DF7F* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_set_Current_m08AE7BCBDCD9B775F47A6EF2843F545B386AA3C1_gshared (_Where_t06F3F87D71B035D78D8C57B2E078152614E4DF7F* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _Where_MoveNextAsync_m9F82044FE3B108FE73733199B04950D790D1440C_gshared (_Where_t06F3F87D71B035D78D8C57B2E078152614E4DF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = (int32_t)__this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F));
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_2 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_2, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_Where_t06F3F87D71B035D78D8C57B2E078152614E4DF7F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_3 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_MoveNext_m81D3BD4B6B2514615EE30F83ED7256348CB5F1E7_gshared (_Where_t06F3F87D71B035D78D8C57B2E078152614E4DF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_Where_MoveNext_m81D3BD4B6B2514615EE30F83ED7256348CB5F1E7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = (int32_t)__this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0021_1;
				}
				case 1:
				{
					goto IL_0038_1;
				}
				case 2:
				{
					goto IL_007b_1;
				}
			}
		}
		{
			goto IL_00cb_1;
		}

IL_0021_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = (RuntimeObject*)__this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_0038_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_7;
			L_7 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_1), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_8 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_8, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007b_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_10 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___moveNextAction_7;
			Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
			// return;
			goto IL_0110;
		}

IL_007b_1:
		{
			// if (awaiter.GetResult())
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_12 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_inline(L_12, Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00cb_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_Where_t06F3F87D71B035D78D8C57B2E078152614E4DF7F*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// if (predicate(Current, checked(index++)))
			Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326* L_16 = (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*)__this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_Where_t06F3F87D71B035D78D8C57B2E078152614E4DF7F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			int32_t L_18 = (int32_t)__this->___index_8;
			V_2 = L_18;
			int32_t L_19 = V_2;
			if (((int64_t)L_19 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_19 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _Where_MoveNext_m81D3BD4B6B2514615EE30F83ED7256348CB5F1E7_RuntimeMethod_var);
			__this->___index_8 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			int32_t L_20 = V_2;
			NullCheck(L_16);
			bool L_21;
			L_21 = ((  bool (*) (Func_3_tF03057D8F2223EA4C7E5EF1FABBE4CE367A43326*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			if (!L_21)
			{
				goto IL_00bf_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_00fb;
		}

IL_00bf_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_00cb_1:
		{
			// goto DONE;
			goto IL_00e5;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00cd;
		}
		throw e;
	}

CATCH_00cd:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_22 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		Exception_t* L_23 = V_3;
		bool L_24;
		L_24 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_22, L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0110;
	}// end catch (depth: 1)

IL_00e5:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_25 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_26;
		L_26 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_25, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_00fb:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_27 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_27, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0110:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereInt`1/_Where<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _Where_DisposeAsync_m9A38B3DCB738B9DA739BDE52C5D88E9029B34431_gshared (_Where_t06F3F87D71B035D78D8C57B2E078152614E4DF7F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where__ctor_mE45CD65F9F3870E110A91AFCAB11C0C75609140A_gshared (_Where_t0C4D7F900FC7471C0186B314F18D48CB86FDC12A* __this, RuntimeObject* ___0_source, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _Where(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, bool> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_7), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Where_get_Current_m66758E287FD73AA5881A490EA73E976F90C26CCA_gshared (_Where_t0C4D7F900FC7471C0186B314F18D48CB86FDC12A* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_set_Current_mEAADEA5E1FCABAAF3BFBDE187726B2E100E9022F_gshared (_Where_t0C4D7F900FC7471C0186B314F18D48CB86FDC12A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _Where_MoveNextAsync_m6EED8239B3FB18A6D7C4EE3272D78EDAE7C7B693_gshared (_Where_t0C4D7F900FC7471C0186B314F18D48CB86FDC12A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = (int32_t)__this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F));
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_2 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_2, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_Where_t0C4D7F900FC7471C0186B314F18D48CB86FDC12A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_3 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Where_MoveNext_mA65F3540C8C7B62ED84BDD63A58EFEE329D22834_gshared (_Where_t0C4D7F900FC7471C0186B314F18D48CB86FDC12A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = (int32_t)__this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0021_1;
				}
				case 1:
				{
					goto IL_0038_1;
				}
				case 2:
				{
					goto IL_007b_1;
				}
			}
		}
		{
			goto IL_00ba_1;
		}

IL_0021_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = (RuntimeObject*)__this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_0038_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_7;
			L_7 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_1), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_8 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_8, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007b_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_10 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___moveNextAction_7;
			Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
			// return;
			goto IL_00ff;
		}

IL_007b_1:
		{
			// if (awaiter.GetResult())
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_12 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_inline(L_12, Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00ba_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_Where_t0C4D7F900FC7471C0186B314F18D48CB86FDC12A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// if (predicate(Current))
			Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_16 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)__this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_Where_t0C4D7F900FC7471C0186B314F18D48CB86FDC12A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			NullCheck(L_16);
			bool L_18;
			L_18 = ((  bool (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			if (!L_18)
			{
				goto IL_00ae_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_00ea;
		}

IL_00ae_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_00ba_1:
		{
			// goto DONE;
			goto IL_00d4;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00bc;
		}
		throw e;
	}

CATCH_00bc:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_19 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		Exception_t* L_20 = V_2;
		bool L_21;
		L_21 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_19, L_20, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00ff;
	}// end catch (depth: 1)

IL_00d4:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_22 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_23;
		L_23 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_22, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_00ea:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_24 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_24, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_00ff:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Where`1/_Where<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _Where_DisposeAsync_m1A358D820C8FB1898A8D3ED004A06A08115550BB_gshared (_Where_t0C4D7F900FC7471C0186B314F18D48CB86FDC12A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`2<TSource,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait__ctor_mE916C0CDDD4D42DDF98CD3CB2DAA6A4AA7357AE7_gshared (_WhereAwait_t5F8AC7ACCC2FE0D612BE021DFBBD6BBF11C0CF4B* __this, RuntimeObject* ___0_source, Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _WhereAwait(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, UniTask<bool>> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_8), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WhereAwait_get_Current_m6C75B9EBF5E9C4815D04D4C085C80F0B1F73660C_gshared (_WhereAwait_t5F8AC7ACCC2FE0D612BE021DFBBD6BBF11C0CF4B* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_set_Current_m9DA813E2A0A64C980F057ECEBA94F9A807FDA2F4_gshared (_WhereAwait_t5F8AC7ACCC2FE0D612BE021DFBBD6BBF11C0CF4B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _WhereAwait_MoveNextAsync_mFE974223E0049F756D50AFFE60076E43EB8F2F6D_gshared (_WhereAwait_t5F8AC7ACCC2FE0D612BE021DFBBD6BBF11C0CF4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = (int32_t)__this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F));
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_2 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_2, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_WhereAwait_t5F8AC7ACCC2FE0D612BE021DFBBD6BBF11C0CF4B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_3 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_MoveNext_m1F4D37B2F0E9063967EB31A124B22ECA43021C30_gshared (_WhereAwait_t5F8AC7ACCC2FE0D612BE021DFBBD6BBF11C0CF4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = (int32_t)__this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00e5_1;
				}
			}
		}
		{
			goto IL_0100_1;
		}

IL_0025_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = (RuntimeObject*)__this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_003c_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_7;
			L_7 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_1), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_8 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_8, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_10 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
			// return;
			goto IL_0145;
		}

IL_007f_1:
		{
			// if (awaiter.GetResult())
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_12 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_inline(L_12, Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00e3_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_WhereAwait_t5F8AC7ACCC2FE0D612BE021DFBBD6BBF11C0CF4B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// awaiter2 = predicate(Current).GetAwaiter();
			Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0* L_16 = (Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0*)__this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_WhereAwait_t5F8AC7ACCC2FE0D612BE021DFBBD6BBF11C0CF4B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			NullCheck(L_16);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_18;
			L_18 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_2_tE2E7CF25D2FD953DE4EA3D8161C8A2D7233CEBE0*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			V_1 = L_18;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_19;
			L_19 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_1), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter2_7 = L_19;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter2_7))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter2.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_20 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			bool L_21;
			L_21 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_20, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_00e5_1;
			}
		}
		{
			// state = 2;
			__this->___state_4 = 2;
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_22 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_inline(L_22, L_23, Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
			// return;
			goto IL_0145;
		}

IL_00e3_1:
		{
			// goto DONE;
			goto IL_011a;
		}

IL_00e5_1:
		{
			// if (awaiter2.GetResult())
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_24 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			bool L_25;
			L_25 = Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_inline(L_24, Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
			if (!L_25)
			{
				goto IL_00f4_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_0130;
		}

IL_00f4_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_0100_1:
		{
			// goto DONE;
			goto IL_011a;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0102;
		}
		throw e;
	}

CATCH_0102:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_26 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		Exception_t* L_27 = V_2;
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_26, L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0145;
	}// end catch (depth: 1)

IL_011a:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_29 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_29, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0130:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_31 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_32;
		L_32 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_31, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0145:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereAwait`1/_WhereAwait<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _WhereAwait_DisposeAsync_m481947216B6332476B688455A0E7722B9997232F_gshared (_WhereAwait_t5F8AC7ACCC2FE0D612BE021DFBBD6BBF11C0CF4B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Int32,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait__ctor_mB105F7A7BB305D7C90E7310FC9449D6882C68A70_gshared (_WhereAwait_t7210F48C92BB8C52CE91530DE755E8C3C6848260* __this, RuntimeObject* ___0_source, Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _WhereAwait(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, int, UniTask<bool>> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_8), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WhereAwait_get_Current_m26259469025F20328CFBEE1FA592E5BC2E70FE52_gshared (_WhereAwait_t7210F48C92BB8C52CE91530DE755E8C3C6848260* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_set_Current_mC4715078B72404F65F90E37341E67664EE2F98A4_gshared (_WhereAwait_t7210F48C92BB8C52CE91530DE755E8C3C6848260* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _WhereAwait_MoveNextAsync_mE7436FEDE7A1F1D973C1FCA5A3996BEC031CAAD2_gshared (_WhereAwait_t7210F48C92BB8C52CE91530DE755E8C3C6848260* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = (int32_t)__this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F));
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_2 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_2, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_WhereAwait_t7210F48C92BB8C52CE91530DE755E8C3C6848260*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_3 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwait_MoveNext_m7F34E4D1E52931BACF9077EA376322D6ECAD81FC_gshared (_WhereAwait_t7210F48C92BB8C52CE91530DE755E8C3C6848260* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_WhereAwait_MoveNext_m7F34E4D1E52931BACF9077EA376322D6ECAD81FC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = (int32_t)__this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00f6_1;
				}
			}
		}
		{
			goto IL_0111_1;
		}

IL_0025_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = (RuntimeObject*)__this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_003c_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_7;
			L_7 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_1), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_8 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_8, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_10 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
			// return;
			goto IL_0156;
		}

IL_007f_1:
		{
			// if (awaiter.GetResult())
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_12 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_inline(L_12, Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00f4_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_WhereAwait_t7210F48C92BB8C52CE91530DE755E8C3C6848260*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// awaiter2 = predicate(Current, checked(index++)).GetAwaiter();
			Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F* L_16 = (Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F*)__this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_WhereAwait_t7210F48C92BB8C52CE91530DE755E8C3C6848260*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			int32_t L_18 = (int32_t)__this->___index_9;
			V_2 = L_18;
			int32_t L_19 = V_2;
			if (((int64_t)L_19 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_19 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _WhereAwait_MoveNext_m7F34E4D1E52931BACF9077EA376322D6ECAD81FC_RuntimeMethod_var);
			__this->___index_9 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			int32_t L_20 = V_2;
			NullCheck(L_16);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_21;
			L_21 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_3_tF22EDA777E8B638901E0AE343F726B154C48A52F*, RuntimeObject*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			V_1 = L_21;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_22;
			L_22 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_1), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter2_7 = L_22;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter2_7))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter2.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_23 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			bool L_24;
			L_24 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_23, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (L_24)
			{
				goto IL_00f6_1;
			}
		}
		{
			// state = 2;
			__this->___state_4 = 2;
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_25 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_26 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_inline(L_25, L_26, Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
			// return;
			goto IL_0156;
		}

IL_00f4_1:
		{
			// goto DONE;
			goto IL_012b;
		}

IL_00f6_1:
		{
			// if (awaiter2.GetResult())
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_27 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			bool L_28;
			L_28 = Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_inline(L_27, Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
			if (!L_28)
			{
				goto IL_0105_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_0141;
		}

IL_0105_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_0111_1:
		{
			// goto DONE;
			goto IL_012b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0113;
		}
		throw e;
	}

CATCH_0113:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_29 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		Exception_t* L_30 = V_3;
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_29, L_30, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0156;
	}// end catch (depth: 1)

IL_012b:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_32 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_32, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0141:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_34 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_35;
		L_35 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_34, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0156:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereIntAwait`1/_WhereAwait<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _WhereAwait_DisposeAsync_m0F8A9198B25CE4C2547BDFBF5989FEE3B397B5DC_gshared (_WhereAwait_t7210F48C92BB8C52CE91530DE755E8C3C6848260* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`3<TSource,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_m8F554D94D5ADB76967161D7C9A77BEE409847322_gshared (_WhereAwaitWithCancellation_tD7A0393DBF54537A2E2A036B8896D5215CA94C9A* __this, RuntimeObject* ___0_source, Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _WhereAwaitWithCancellation(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, CancellationToken, UniTask<bool>> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_8), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WhereAwaitWithCancellation_get_Current_m8B74775A36771DEE589CAE323C184F8830BFBBA6_gshared (_WhereAwaitWithCancellation_tD7A0393DBF54537A2E2A036B8896D5215CA94C9A* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_m25884A1F409F748DC25E1DA9C94AFCFEA87C06AD_gshared (_WhereAwaitWithCancellation_tD7A0393DBF54537A2E2A036B8896D5215CA94C9A* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _WhereAwaitWithCancellation_MoveNextAsync_m02BBD836D571EE0FA20EE20FEA574C33564D7811_gshared (_WhereAwaitWithCancellation_tD7A0393DBF54537A2E2A036B8896D5215CA94C9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = (int32_t)__this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F));
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_2 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_2, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_WhereAwaitWithCancellation_tD7A0393DBF54537A2E2A036B8896D5215CA94C9A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_3 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_mA623A291B280F86561C198A1121DB85807F8503F_gshared (_WhereAwaitWithCancellation_tD7A0393DBF54537A2E2A036B8896D5215CA94C9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = (int32_t)__this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00eb_1;
				}
			}
		}
		{
			goto IL_0106_1;
		}

IL_0025_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = (RuntimeObject*)__this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_003c_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_7;
			L_7 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_1), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_8 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_8, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_10 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
			// return;
			goto IL_014b;
		}

IL_007f_1:
		{
			// if (awaiter.GetResult())
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_12 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_inline(L_12, Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00e9_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_WhereAwaitWithCancellation_tD7A0393DBF54537A2E2A036B8896D5215CA94C9A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// awaiter2 = predicate(Current, cancellationToken).GetAwaiter();
			Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493* L_16 = (Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493*)__this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_WhereAwaitWithCancellation_tD7A0393DBF54537A2E2A036B8896D5215CA94C9A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_18 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_3;
			NullCheck(L_16);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_19;
			L_19 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_3_t055D892D201F6988B23AE6AEB1AD81CAB1699493*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, L_18, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			V_1 = L_19;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_20;
			L_20 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_1), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter2_7 = L_20;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter2_7))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter2.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_21 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			bool L_22;
			L_22 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_21, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (L_22)
			{
				goto IL_00eb_1;
			}
		}
		{
			// state = 2;
			__this->___state_4 = 2;
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_23 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_inline(L_23, L_24, Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
			// return;
			goto IL_014b;
		}

IL_00e9_1:
		{
			// goto DONE;
			goto IL_0120;
		}

IL_00eb_1:
		{
			// if (awaiter2.GetResult())
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_25 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			bool L_26;
			L_26 = Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_inline(L_25, Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
			if (!L_26)
			{
				goto IL_00fa_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_0136;
		}

IL_00fa_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_0106_1:
		{
			// goto DONE;
			goto IL_0120;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0108;
		}
		throw e;
	}

CATCH_0108:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_27 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		Exception_t* L_28 = V_2;
		bool L_29;
		L_29 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_27, L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_014b;
	}// end catch (depth: 1)

IL_0120:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_30 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_30, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0136:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_32 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_32, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_014b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _WhereAwaitWithCancellation_DisposeAsync_m2A3CD6C5163188F4F09811E451BE32C0D811B3E6_gshared (_WhereAwaitWithCancellation_tD7A0393DBF54537A2E2A036B8896D5215CA94C9A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSource>,System.Func`4<TSource,System.Int32,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<System.Boolean>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation__ctor_m5250F991368A513F39D9C1501AE01C665193BC90_gshared (_WhereAwaitWithCancellation_t0CE20A6D3FE6D1E1F1DC9FF5706992D7EBDD921B* __this, RuntimeObject* ___0_source, Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* ___1_predicate, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// int state = -1;
		__this->___state_4 = (-1);
		// public _WhereAwaitWithCancellation(IUniTaskAsyncEnumerable<TSource> source, Func<TSource, int, CancellationToken, UniTask<bool>> predicate, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_0);
		// this.predicate = predicate;
		Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* L_1 = ___1_predicate;
		__this->___predicate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate_2), (void*)L_1);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = ___2_cancellationToken;
		__this->___cancellationToken_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_3))->____source_0), (void*)NULL);
		// this.moveNextAction = MoveNext;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, (RuntimeObject*)__this, (intptr_t)((void*)il2cpp_rgctx_method(method->klass->rgctx_data, 0)), NULL);
		__this->___moveNextAction_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___moveNextAction_8), (void*)L_3);
		// }
		return;
	}
}
// TSource Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _WhereAwaitWithCancellation_get_Current_mE223B4FBE27A427F4564447A2AF058990B3902C9_gshared (_WhereAwaitWithCancellation_t0CE20A6D3FE6D1E1F1DC9FF5706992D7EBDD921B* __this, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::set_Current(TSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_set_Current_m7E9804CF09CEBBDD9F920066E08AB3EBAD6DE47E_gshared (_WhereAwaitWithCancellation_t0CE20A6D3FE6D1E1F1DC9FF5706992D7EBDD921B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TSource Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_10), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _WhereAwaitWithCancellation_MoveNextAsync_mFC35C351283C16649EC7153D6D3389D18BAFEDA2_gshared (_WhereAwaitWithCancellation_t0CE20A6D3FE6D1E1F1DC9FF5706992D7EBDD921B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (state == -2) return default;
		int32_t L_0 = (int32_t)__this->___state_4;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0014;
		}
	}
	{
		// if (state == -2) return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F));
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = V_0;
		return L_1;
	}

IL_0014:
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_2 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_2, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// MoveNext();
		((  void (*) (_WhereAwaitWithCancellation_t0CE20A6D3FE6D1E1F1DC9FF5706992D7EBDD921B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 0)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 0));
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_3 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_4;
		L_4 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_3, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_5;
		memset((&L_5), 0, sizeof(L_5));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_5), (RuntimeObject*)__this, L_4, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_5;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _WhereAwaitWithCancellation_MoveNext_m5DF33AFE65199D835626C2C6528751C4AF279D17_gshared (_WhereAwaitWithCancellation_t0CE20A6D3FE6D1E1F1DC9FF5706992D7EBDD921B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_WhereAwaitWithCancellation_MoveNext_m5DF33AFE65199D835626C2C6528751C4AF279D17_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;

IL_0000:
	{
	}
	try
	{// begin try (depth: 1)
		{
			// switch (state)
			int32_t L_0 = (int32_t)__this->___state_4;
			V_0 = L_0;
			int32_t L_1 = V_0;
			switch (((int32_t)il2cpp_codegen_subtract(L_1, (-1))))
			{
				case 0:
				{
					goto IL_0025_1;
				}
				case 1:
				{
					goto IL_003c_1;
				}
				case 2:
				{
					goto IL_007f_1;
				}
				case 3:
				{
					goto IL_00fc_1;
				}
			}
		}
		{
			goto IL_0117_1;
		}

IL_0025_1:
		{
			// enumerator = source.GetAsyncEnumerator(cancellationToken);
			RuntimeObject* L_2 = (RuntimeObject*)__this->___source_1;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_3;
			NullCheck(L_2);
			RuntimeObject* L_4;
			L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 1), L_2, L_3);
			__this->___enumerator_5 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___enumerator_5), (void*)L_4);
		}

IL_003c_1:
		{
			// awaiter = enumerator.MoveNextAsync().GetAwaiter();
			RuntimeObject* L_5 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_5);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_6;
			L_6 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_5);
			V_1 = L_6;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_7;
			L_7 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_1), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter_6 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter_6))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_8 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_9;
			L_9 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_8, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (L_9)
			{
				goto IL_007f_1;
			}
		}
		{
			// state = 1;
			__this->___state_4 = 1;
			// awaiter.UnsafeOnCompleted(moveNextAction);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_10 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_11 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_inline(L_10, L_11, Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
			// return;
			goto IL_015c;
		}

IL_007f_1:
		{
			// if (awaiter.GetResult())
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_12 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter_6);
			bool L_13;
			L_13 = Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_inline(L_12, Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
			if (!L_13)
			{
				goto IL_00fa_1;
			}
		}
		{
			// Current = enumerator.Current;
			RuntimeObject* L_14 = (RuntimeObject*)__this->___enumerator_5;
			NullCheck(L_14);
			RuntimeObject* L_15;
			L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(method->klass->rgctx_data, 3), L_14);
			((  void (*) (_WhereAwaitWithCancellation_t0CE20A6D3FE6D1E1F1DC9FF5706992D7EBDD921B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
			// awaiter2 = predicate(Current, checked(index++), cancellationToken).GetAwaiter();
			Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE* L_16 = (Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE*)__this->___predicate_2;
			RuntimeObject* L_17;
			L_17 = ((  RuntimeObject* (*) (_WhereAwaitWithCancellation_t0CE20A6D3FE6D1E1F1DC9FF5706992D7EBDD921B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 7)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
			int32_t L_18 = (int32_t)__this->___index_9;
			V_2 = L_18;
			int32_t L_19 = V_2;
			if (((int64_t)L_19 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_19 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
				IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), _WhereAwaitWithCancellation_MoveNext_m5DF33AFE65199D835626C2C6528751C4AF279D17_RuntimeMethod_var);
			__this->___index_9 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			int32_t L_20 = V_2;
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_21 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_3;
			NullCheck(L_16);
			UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_22;
			L_22 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Func_4_tF9E9F8297EB2A03F26B31F717460E155FDD326AE*, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 9)))(L_16, L_17, L_20, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 9));
			V_1 = L_22;
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_23;
			L_23 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_1), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
			__this->___awaiter2_7 = L_23;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___awaiter2_7))->___task_0))->___source_0), (void*)NULL);
			// if (awaiter2.IsCompleted)
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_24 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			bool L_25;
			L_25 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_24, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_00fc_1;
			}
		}
		{
			// state = 2;
			__this->___state_4 = 2;
			// awaiter2.UnsafeOnCompleted(moveNextAction);
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_26 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_27 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)__this->___moveNextAction_8;
			Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_inline(L_26, L_27, Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_RuntimeMethod_var);
			// return;
			goto IL_015c;
		}

IL_00fa_1:
		{
			// goto DONE;
			goto IL_0131;
		}

IL_00fc_1:
		{
			// if (awaiter2.GetResult())
			Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_28 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___awaiter2_7);
			bool L_29;
			L_29 = Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_inline(L_28, Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_RuntimeMethod_var);
			if (!L_29)
			{
				goto IL_010b_1;
			}
		}
		{
			// goto CONTINUE;
			goto IL_0147;
		}

IL_010b_1:
		{
			// state = 0;
			__this->___state_4 = 0;
			// goto REPEAT;
			goto IL_0000;
		}

IL_0117_1:
		{
			// goto DONE;
			goto IL_0131;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0119;
		}
		throw e;
	}

CATCH_0119:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetException(ex);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_30 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		Exception_t* L_31 = V_3;
		bool L_32;
		L_32 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_30, L_31, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_015c;
	}// end catch (depth: 1)

IL_0131:
	{
		// state = -2;
		__this->___state_4 = ((int32_t)-2);
		// completionSource.TrySetResult(false);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_33 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_34;
		L_34 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_33, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_0147:
	{
		// state = 0;
		__this->___state_4 = 0;
		// completionSource.TrySetResult(true);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_35 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		bool L_36;
		L_36 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_35, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		// return;
		return;
	}

IL_015c:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.WhereIntAwaitWithCancellation`1/_WhereAwaitWithCancellation<System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _WhereAwaitWithCancellation_DisposeAsync_m9CB12D51A5D5F57D0B9E4629131EDD3FFB0FB7FB_gshared (_WhereAwaitWithCancellation_t0CE20A6D3FE6D1E1F1DC9FF5706992D7EBDD921B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return enumerator.DisposeAsync();
		RuntimeObject* L_0 = (RuntimeObject*)__this->___enumerator_5;
		NullCheck((RuntimeObject*)L_0);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_1;
		L_1 = InterfaceFuncInvoker0< UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 >::Invoke(0 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.IUniTaskAsyncDisposable::DisposeAsync() */, IUniTaskAsyncDisposable_tD9EB1DBA7018A4E9862C65659CBD7B290A8D151B_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__ctor_m799EC706CE71F65DE23700FC6547686798FC6ADC_gshared (_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _Zip(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, TResult> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		__this->___first_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___first_3), (void*)L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		__this->___second_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___second_4), (void*)L_1);
		// this.resultSelector = resultSelector;
		Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2* L_2 = ___2_resultSelector;
		__this->___resultSelector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		__this->___cancellationToken_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_6))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A _Zip_get_Current_m5E097D563AEE097E52D2B0E68BDA60ADDC4B7739_gshared (_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* __this, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = (ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A)__this->___U3CCurrentU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_set_Current_mCAA8E9C0180A9FAB364A35C318D63FD47F22AE72_gshared (_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* __this, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A ___0_value, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CCurrentU3Ek__BackingField_11))->___Item1_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CCurrentU3Ek__BackingField_11))->___Item2_1), (void*)NULL);
		#endif
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _Zip_MoveNextAsync_m430DE1BD1004D184EFFB2BBB44A59B894DAFE561_gshared (_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_0 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_0, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->___firstEnumerator_7;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___first_3;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_6;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___firstEnumerator_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstEnumerator_7), (void*)L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = (RuntimeObject*)__this->___second_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_6;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		__this->___secondEnumerator_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondEnumerator_8), (void*)L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = (RuntimeObject*)__this->___firstEnumerator_7;
		NullCheck(L_8);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8);
		V_0 = L_9;
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_10;
		L_10 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_0), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		__this->___firstAwaiter_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___firstAwaiter_9))->___task_0))->___source_0), (void*)NULL);
		// if (firstAwaiter.IsCompleted)
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_11 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___firstAwaiter_9);
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_11, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_13 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___firstAwaiter_9);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ((_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_13, L_14, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_15 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_15, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_17), (RuntimeObject*)__this, L_16, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_FirstMoveNextCore_m52535234AB2A65EB809139505468F1CCC402E816_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_Zip)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_1 = V_0;
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___firstAwaiter_9;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_6 = V_0;
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->___secondEnumerator_8;
		NullCheck(L_8);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_8);
		V_2 = L_9;
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_10;
		L_10 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_2), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___secondAwaiter_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___secondAwaiter_10))->___task_0))->___source_0), (void*)NULL);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_11 = V_0;
		NullCheck(L_11);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_12 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_11)->___completionSource_0);
		Exception_t* L_13 = V_3;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_12, L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	}// end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_15 = V_0;
		NullCheck(L_15);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_16 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&L_15->___secondAwaiter_10);
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_16, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((RuntimeObject*)L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_19 = V_0;
		NullCheck(L_19);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_20 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&L_19->___secondAwaiter_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = ((_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2;
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_22 = V_0;
		Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_20, L_21, (RuntimeObject*)L_22, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_24 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_23)->___completionSource_0);
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_24, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_SecondMoveNextCore_mBA11E25B64E0E8826BAD00F90F6B4EAD9BF8959D_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* V_0 = NULL;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_Zip)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_1 = V_0;
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___secondAwaiter_10;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{// begin try (depth: 1)
		// self.Current = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current);
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_6 = V_0;
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_7 = V_0;
		NullCheck(L_7);
		Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2* L_8 = (Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2*)L_7->___resultSelector_5;
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = (RuntimeObject*)L_9->___firstEnumerator_7;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_10);
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->___secondEnumerator_8;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_13);
		NullCheck(L_8);
		ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A L_15;
		L_15 = ((  ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A (*) (Func_3_t9FF67918C62B641BB364DC9156CD8410B698CEC2*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_8, L_11, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		NullCheck(L_6);
		((  void (*) (_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338*, ValueTuple_2_tC3717D4552EE1E5FC27BFBA3F5155741BC04557A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_6, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		// }
		goto IL_0053;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_17 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_16)->___completionSource_0);
		Exception_t* L_18 = V_2;
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_17, L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0053;
	}// end catch (depth: 1)

IL_0053:
	{
		// if (self.cancellationToken.IsCancellationRequested)
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_20 = V_0;
		NullCheck(L_20);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_21 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&L_20->___cancellationToken_6);
		bool L_22;
		L_22 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_21, NULL);
		if (!L_22)
		{
			goto IL_0073;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_24 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_23)->___completionSource_0);
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_25 = V_0;
		NullCheck(L_25);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_26 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_25->___cancellationToken_6;
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A(L_24, L_26, UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		return;
	}

IL_0073:
	{
		// self.completionSource.TrySetResult(true);
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_28 = V_0;
		NullCheck(L_28);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_29 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_28)->___completionSource_0);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_29, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		return;
	}

IL_0081:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* L_31 = V_0;
		NullCheck(L_31);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_32 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_31)->___completionSource_0);
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_32, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _Zip_DisposeAsync_m2D108A940C4556005FC9DB0A0EEE5CE794E87D43_gshared (_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m06444FC93B9B9A0F57FA4FC78546F0880DFBF1C2_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* L_1 = (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029_m78F42995D45A48AC6BB063DDB65C31DEE35F9A58_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* L_2 = (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m96B1EE536B565D04CDBB4F082DFDE148B11CD15B_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.ValueTuple`2<System.Object,System.Object>>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__cctor_m65605507AC32FF3D72430B5A00CF5278872C9EA7_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t2450955C44606BC8AD6D20D16E1DDB10DEF97338_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,TResult>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__ctor_m994E491458D4B00CCBDE634F9CF6CF441FD3B5EB_gshared (_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _Zip(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, TResult> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		__this->___first_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___first_3), (void*)L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		__this->___second_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___second_4), (void*)L_1);
		// this.resultSelector = resultSelector;
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_2 = ___2_resultSelector;
		__this->___resultSelector_5 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_5), (void*)L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		__this->___cancellationToken_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_6))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _Zip_get_Current_m9D5F27703F7523D8A75E5013C1D5E5CBE6C50B87_gshared (_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* __this, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_set_Current_m2CF7EE93CFBAC057253C100031092F0061B73C36_gshared (_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_11), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _Zip_MoveNextAsync_m1EF7F27E5EDD93C86874975A27D2B968D1EBE13A_gshared (_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_0 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_0, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->___firstEnumerator_7;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___first_3;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_6;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___firstEnumerator_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstEnumerator_7), (void*)L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = (RuntimeObject*)__this->___second_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_6;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		__this->___secondEnumerator_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondEnumerator_8), (void*)L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = (RuntimeObject*)__this->___firstEnumerator_7;
		NullCheck(L_8);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8);
		V_0 = L_9;
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_10;
		L_10 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_0), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		__this->___firstAwaiter_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___firstAwaiter_9))->___task_0))->___source_0), (void*)NULL);
		// if (firstAwaiter.IsCompleted)
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_11 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___firstAwaiter_9);
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_11, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_13 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___firstAwaiter_9);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ((_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_13, L_14, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_15 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_15, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_17), (RuntimeObject*)__this, L_16, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_FirstMoveNextCore_m1571FA8181498F2403E380F6C5CE80FBBA6BD10C_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_Zip)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_1 = V_0;
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___firstAwaiter_9;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_6 = V_0;
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->___secondEnumerator_8;
		NullCheck(L_8);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_8);
		V_2 = L_9;
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_10;
		L_10 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_2), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___secondAwaiter_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___secondAwaiter_10))->___task_0))->___source_0), (void*)NULL);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_11 = V_0;
		NullCheck(L_11);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_12 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_11)->___completionSource_0);
		Exception_t* L_13 = V_3;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_12, L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	}// end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_15 = V_0;
		NullCheck(L_15);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_16 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&L_15->___secondAwaiter_10);
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_16, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((RuntimeObject*)L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_19 = V_0;
		NullCheck(L_19);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_20 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&L_19->___secondAwaiter_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = ((_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2;
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_22 = V_0;
		Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_20, L_21, (RuntimeObject*)L_22, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_24 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_23)->___completionSource_0);
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_24, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip_SecondMoveNextCore_m7D2D42630BBABA21B21FE2857E462D3BBBB2BAB0_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* V_0 = NULL;
	bool V_1 = false;
	Exception_t* V_2 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_Zip)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_1 = V_0;
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___secondAwaiter_10;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{// begin try (depth: 1)
		// self.Current = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current);
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_6 = V_0;
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_7 = V_0;
		NullCheck(L_7);
		Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566* L_8 = (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*)L_7->___resultSelector_5;
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_9 = V_0;
		NullCheck(L_9);
		RuntimeObject* L_10 = (RuntimeObject*)L_9->___firstEnumerator_7;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_10);
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_12 = V_0;
		NullCheck(L_12);
		RuntimeObject* L_13 = (RuntimeObject*)L_12->___secondEnumerator_8;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_13);
		NullCheck(L_8);
		RuntimeObject* L_15;
		L_15 = ((  RuntimeObject* (*) (Func_3_tAB0692B406AF1455ADB5F518BF283E084B5E8566*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_8, L_11, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
		NullCheck(L_6);
		((  void (*) (_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16)))(L_6, L_15, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
		// }
		goto IL_0053;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0043;
		}
		throw e;
	}

CATCH_0043:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_2 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_16 = V_0;
		NullCheck(L_16);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_17 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_16)->___completionSource_0);
		Exception_t* L_18 = V_2;
		bool L_19;
		L_19 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_17, L_18, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0053;
	}// end catch (depth: 1)

IL_0053:
	{
		// if (self.cancellationToken.IsCancellationRequested)
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_20 = V_0;
		NullCheck(L_20);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_21 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&L_20->___cancellationToken_6);
		bool L_22;
		L_22 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_21, NULL);
		if (!L_22)
		{
			goto IL_0073;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_24 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_23)->___completionSource_0);
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_25 = V_0;
		NullCheck(L_25);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_26 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_25->___cancellationToken_6;
		bool L_27;
		L_27 = UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A(L_24, L_26, UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		return;
	}

IL_0073:
	{
		// self.completionSource.TrySetResult(true);
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_28 = V_0;
		NullCheck(L_28);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_29 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_28)->___completionSource_0);
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_29, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		return;
	}

IL_0081:
	{
		// self.completionSource.TrySetResult(false);
		_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* L_31 = V_0;
		NullCheck(L_31);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_32 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_31)->___completionSource_0);
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_32, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _Zip_DisposeAsync_mCA37338416F6D8E0E3145B2CAA3B40A27389D1B7_gshared (_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m06444FC93B9B9A0F57FA4FC78546F0880DFBF1C2_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* L_1 = (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE_m13D95FCC9ECB150DBD76CFD4FC1BE5D79DE5F528_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 17));
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* L_2 = (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m96B1EE536B565D04CDBB4F082DFDE148B11CD15B_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.Zip`3/_Zip<System.Object,System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _Zip__cctor_m028EA15A6B3C7948444B0E76864D76D95289A23C_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_Zip_t35AE20D9807C07C0CD393B2E2089CBFC51FA443B_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`3<TFirst,TSecond,Cysharp.Threading.Tasks.UniTask`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__ctor_m0F88446CB657ED1014D5438C9B04772C535321D9_gshared (_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_3_t2CD74B619C13829A57EC75A3E12BA87BBD7ADC9F* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ZipAwait(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, UniTask<TResult>> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		__this->___first_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___first_4), (void*)L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		__this->___second_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___second_5), (void*)L_1);
		// this.resultSelector = resultSelector;
		Func_3_t2CD74B619C13829A57EC75A3E12BA87BBD7ADC9F* L_2 = ___2_resultSelector;
		__this->___resultSelector_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		__this->___cancellationToken_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_7))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ZipAwait_get_Current_m5A871742A90F66658D8DB47560FCEF1322D884CC_gshared (_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* __this, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_set_Current_m1A7CCC12852DECF6A25E41AE9BA3C6BFE0BC48A4_gshared (_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _ZipAwait_MoveNextAsync_m9B3C44DBC3BB2887BB8170F0FE590E81A433C8A0_gshared (_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_0 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_0, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->___firstEnumerator_8;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___first_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_7;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___firstEnumerator_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstEnumerator_8), (void*)L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = (RuntimeObject*)__this->___second_5;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_7;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		__this->___secondEnumerator_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondEnumerator_9), (void*)L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = (RuntimeObject*)__this->___firstEnumerator_8;
		NullCheck(L_8);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8);
		V_0 = L_9;
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_10;
		L_10 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_0), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		__this->___firstAwaiter_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___firstAwaiter_10))->___task_0))->___source_0), (void*)NULL);
		// if (firstAwaiter.IsCompleted)
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_11 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___firstAwaiter_10);
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_11, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_13 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___firstAwaiter_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_13, L_14, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_15 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_15, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_17), (RuntimeObject*)__this, L_16, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_FirstMoveNextCore_mBC40E224768A61CC210570393CD7ACAEBDA9D76F_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwait)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_1 = V_0;
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___firstAwaiter_10;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_6 = V_0;
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->___secondEnumerator_9;
		NullCheck(L_8);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_8);
		V_2 = L_9;
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_10;
		L_10 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_2), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___secondAwaiter_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___secondAwaiter_11))->___task_0))->___source_0), (void*)NULL);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_11 = V_0;
		NullCheck(L_11);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_12 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_11)->___completionSource_0);
		Exception_t* L_13 = V_3;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_12, L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	}// end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_15 = V_0;
		NullCheck(L_15);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_16 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&L_15->___secondAwaiter_11);
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_16, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((RuntimeObject*)L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_19 = V_0;
		NullCheck(L_19);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_20 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&L_19->___secondAwaiter_11);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = ((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2;
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_22 = V_0;
		Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_20, L_21, (RuntimeObject*)L_22, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_24 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_23)->___completionSource_0);
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_24, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_SecondMoveNextCore_m6CAC34753203EFBBEFEE7E79BA27E035EDAB185E_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwait)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_1 = V_0;
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___secondAwaiter_11;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_008e;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0081;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// self.resultAwaiter = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current).GetAwaiter();
			_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_6 = V_0;
			_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_7 = V_0;
			NullCheck(L_7);
			Func_3_t2CD74B619C13829A57EC75A3E12BA87BBD7ADC9F* L_8 = (Func_3_t2CD74B619C13829A57EC75A3E12BA87BBD7ADC9F*)L_7->___resultSelector_6;
			_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_9 = V_0;
			NullCheck(L_9);
			RuntimeObject* L_10 = (RuntimeObject*)L_9->___firstEnumerator_8;
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_10);
			_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_12 = V_0;
			NullCheck(L_12);
			RuntimeObject* L_13 = (RuntimeObject*)L_12->___secondEnumerator_9;
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_13);
			NullCheck(L_8);
			UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F L_15;
			L_15 = ((  UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F (*) (Func_3_t2CD74B619C13829A57EC75A3E12BA87BBD7ADC9F*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_8, L_11, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
			V_2 = L_15;
			Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E L_16;
			L_16 = UniTask_1_GetAwaiter_mFDD93458F6295B52D55D3804499CE63A8B6F84E3_inline((&V_2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
			NullCheck(L_6);
			L_6->___resultAwaiter_12 = L_16;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___resultAwaiter_12))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___resultAwaiter_12))->___task_0))->___result_1), (void*)NULL);
			#endif
			// if (self.resultAwaiter.IsCompleted)
			_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_17 = V_0;
			NullCheck(L_17);
			Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* L_18 = (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E*)(&L_17->___resultAwaiter_12);
			bool L_19;
			L_19 = Awaiter_get_IsCompleted_m2B38E75E4634668D0A41DB6F45A9E7D27C92741E_inline(L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			if (!L_19)
			{
				goto IL_005e_1;
			}
		}
		{
			// ResultAwaitCore(self);
			_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_20 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)))((RuntimeObject*)L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
			goto IL_006f_1;
		}

IL_005e_1:
		{
			// self.resultAwaiter.SourceOnCompleted(resultAwaitCoreDelegate, self);
			_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_21 = V_0;
			NullCheck(L_21);
			Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* L_22 = (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E*)(&L_21->___resultAwaiter_12);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_23 = ((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3;
			_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_24 = V_0;
			Awaiter_SourceOnCompleted_m4A445596B9EFE906931DCF09728972E0BA7D13B2_inline(L_22, L_23, (RuntimeObject*)L_24, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		}

IL_006f_1:
		{
			// }
			goto IL_008e;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0071;
		}
		throw e;
	}

CATCH_0071:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_25 = V_0;
		NullCheck(L_25);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_26 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_25)->___completionSource_0);
		Exception_t* L_27 = V_3;
		bool L_28;
		L_28 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_26, L_27, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008e;
	}// end catch (depth: 1)

IL_0081:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_29 = V_0;
		NullCheck(L_29);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_30 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_29)->___completionSource_0);
		bool L_31;
		L_31 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_30, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::ResultAwaitCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait_ResultAwaitCore_mF854E160BE3794C5015A2CAE36A0EC2948A5DCE6_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var self = (_ZipAwait)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.resultAwaiter, out var result))
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_1 = V_0;
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E L_3 = (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E)L_2->___resultAwaiter_12;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = ((  bool (*) (MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*, Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)))((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// self.Current = result;
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_5 = V_0;
		RuntimeObject* L_6 = V_1;
		NullCheck(L_5);
		((  void (*) (_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// if (self.cancellationToken.IsCancellationRequested)
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_7 = V_0;
		NullCheck(L_7);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_8 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&L_7->___cancellationToken_7);
		bool L_9;
		L_9 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_10 = V_0;
		NullCheck(L_10);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_11 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_10)->___completionSource_0);
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_12 = V_0;
		NullCheck(L_12);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_12->___cancellationToken_7;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A(L_11, L_13, UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		return;
	}

IL_003e:
	{
		// self.completionSource.TrySetResult(true);
		_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_16 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_15)->___completionSource_0);
		bool L_17;
		L_17 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_16, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_004b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _ZipAwait_DisposeAsync_m61B13C78750ECE68DC74966A9FEFB64C5011F362_gshared (_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m06444FC93B9B9A0F57FA4FC78546F0880DFBF1C2_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* L_1 = (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A_mB3D43800C38A15540FBDA3064E345398022C36D8_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* L_2 = (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m96B1EE536B565D04CDBB4F082DFDE148B11CD15B_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwait`3/_ZipAwait<System.Object,System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwait__cctor_m06F197BE4BEC1A5479E75979CAD85335FD8FFF3F_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
		// static readonly Action<object> resultAwaitCoreDelegate = ResultAwaitCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), NULL);
		((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwait_t4A0CFF69EC2AA052D17067EF5F015B5A5AEDB5AA_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::.ctor(Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TFirst>,Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<TSecond>,System.Func`4<TFirst,TSecond,System.Threading.CancellationToken,Cysharp.Threading.Tasks.UniTask`1<TResult>>,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__ctor_m46C64E5409D18D67FA6B8C18B42D90CC8D5989F5_gshared (_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* __this, RuntimeObject* ___0_first, RuntimeObject* ___1_second, Func_4_t2DC9C33278142D80C4DDC91A5CDA42ED5C5CFBBA* ___2_resultSelector, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, const RuntimeMethod* method) 
{
	{
		// public _ZipAwaitWithCancellation(IUniTaskAsyncEnumerable<TFirst> first, IUniTaskAsyncEnumerable<TSecond> second, Func<TFirst, TSecond, CancellationToken, UniTask<TResult>> resultSelector, CancellationToken cancellationToken)
		MoveNextSource__ctor_m5A948B218856FD416210AC8285BB80B18ED88FBE((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this, NULL);
		// this.first = first;
		RuntimeObject* L_0 = ___0_first;
		__this->___first_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___first_4), (void*)L_0);
		// this.second = second;
		RuntimeObject* L_1 = ___1_second;
		__this->___second_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___second_5), (void*)L_1);
		// this.resultSelector = resultSelector;
		Func_4_t2DC9C33278142D80C4DDC91A5CDA42ED5C5CFBBA* L_2 = ___2_resultSelector;
		__this->___resultSelector_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___resultSelector_6), (void*)L_2);
		// this.cancellationToken = cancellationToken;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___3_cancellationToken;
		__this->___cancellationToken_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___cancellationToken_7))->____source_0), (void*)NULL);
		// }
		return;
	}
}
// TResult Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _ZipAwaitWithCancellation_get_Current_m490BB663C4D1BDFA381D0FDD2BA2AE7F9C9E2C14_gshared (_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* __this, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = (RuntimeObject*)__this->___U3CCurrentU3Ek__BackingField_13;
		return L_0;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::set_Current(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_set_Current_mA073C3C14918F49A175C87393F96EFB8C458AA5E_gshared (_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// public TResult Current { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CCurrentU3Ek__BackingField_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCurrentU3Ek__BackingField_13), (void*)L_0);
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::MoveNextAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F _ZipAwaitWithCancellation_MoveNextAsync_m5646746C0D682A151C358059131B5F62A9B0C8E2_gshared (_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// completionSource.Reset();
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_0 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707(L_0, UniTaskCompletionSourceCore_1_Reset_m8C4BECC23FC9305CDC158C0B2CE5CAEA83C30707_RuntimeMethod_var);
		// if (firstEnumerator == null)
		RuntimeObject* L_1 = (RuntimeObject*)__this->___firstEnumerator_8;
		if (L_1)
		{
			goto IL_0041;
		}
	}
	{
		// firstEnumerator = first.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_2 = (RuntimeObject*)__this->___first_4;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_7;
		NullCheck(L_2);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 0), L_2, L_3);
		__this->___firstEnumerator_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___firstEnumerator_8), (void*)L_4);
		// secondEnumerator = second.GetAsyncEnumerator(cancellationToken);
		RuntimeObject* L_5 = (RuntimeObject*)__this->___second_5;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_6 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)__this->___cancellationToken_7;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker1< RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(0 /* Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<T> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerable`1<System.Object>::GetAsyncEnumerator(System.Threading.CancellationToken) */, il2cpp_rgctx_data(method->klass->rgctx_data, 2), L_5, L_6);
		__this->___secondEnumerator_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___secondEnumerator_9), (void*)L_7);
	}

IL_0041:
	{
		// firstAwaiter = firstEnumerator.MoveNextAsync().GetAwaiter();
		RuntimeObject* L_8 = (RuntimeObject*)__this->___firstEnumerator_8;
		NullCheck(L_8);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(method->klass->rgctx_data, 4), L_8);
		V_0 = L_9;
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_10;
		L_10 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_0), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		__this->___firstAwaiter_10 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___firstAwaiter_10))->___task_0))->___source_0), (void*)NULL);
		// if (firstAwaiter.IsCompleted)
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_11 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___firstAwaiter_10);
		bool L_12;
		L_12 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_11, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		if (!L_12)
		{
			goto IL_006f;
		}
	}
	{
		// FirstMoveNextCore(this);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))((RuntimeObject*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		goto IL_0080;
	}

IL_006f:
	{
		// firstAwaiter.SourceOnCompleted(firstMoveNextCoreDelegate, this);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_13 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&__this->___firstAwaiter_10);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->klass->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_14 = ((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->klass->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1;
		Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_13, L_14, (RuntimeObject*)__this, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
	}

IL_0080:
	{
		// return new UniTask<bool>(this, completionSource.Version);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_15 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)__this)->___completionSource_0);
		int16_t L_16;
		L_16 = UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_inline(L_15, UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_RuntimeMethod_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_17;
		memset((&L_17), 0, sizeof(L_17));
		UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_inline((&L_17), (RuntimeObject*)__this, L_16, /*hidden argument*/UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_RuntimeMethod_var);
		return L_17;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::FirstMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_FirstMoveNextCore_mCD0FA35D6ED14F47A1E7067583F077571086F0C4_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.firstAwaiter, out var result))
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_1 = V_0;
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___firstAwaiter_10;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0078;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006b;
		}
	}
	try
	{// begin try (depth: 1)
		// self.secondAwaiter = self.secondEnumerator.MoveNextAsync().GetAwaiter();
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_6 = V_0;
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8 = (RuntimeObject*)L_7->___secondEnumerator_9;
		NullCheck(L_8);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_9;
		L_9 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<System.Boolean> Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::MoveNextAsync() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_8);
		V_2 = L_9;
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_10;
		L_10 = UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_inline((&V_2), UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___secondAwaiter_11 = L_10;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___secondAwaiter_11))->___task_0))->___source_0), (void*)NULL);
		// }
		goto IL_0045;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0035;
		}
		throw e;
	}

CATCH_0035:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_11 = V_0;
		NullCheck(L_11);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_12 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_11)->___completionSource_0);
		Exception_t* L_13 = V_3;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_12, L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// return;
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0078;
	}// end catch (depth: 1)

IL_0045:
	{
		// if (self.secondAwaiter.IsCompleted)
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_15 = V_0;
		NullCheck(L_15);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_16 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&L_15->___secondAwaiter_11);
		bool L_17;
		L_17 = Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_inline(L_16, Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_RuntimeMethod_var);
		if (!L_17)
		{
			goto IL_0059;
		}
	}
	{
		// SecondMoveNextCore(self);
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_18 = V_0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)))((RuntimeObject*)L_18, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11));
		return;
	}

IL_0059:
	{
		// self.secondAwaiter.SourceOnCompleted(secondMoveNextCoreDelegate, self);
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_19 = V_0;
		NullCheck(L_19);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* L_20 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C*)(&L_19->___secondAwaiter_11);
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_21 = ((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2;
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_22 = V_0;
		Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_inline(L_20, L_21, (RuntimeObject*)L_22, Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_RuntimeMethod_var);
		return;
	}

IL_006b:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_23 = V_0;
		NullCheck(L_23);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_24 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_23)->___completionSource_0);
		bool L_25;
		L_25 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_24, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::SecondMoveNextCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_SecondMoveNextCore_m3F4C8D885D2E5715BBB24D2B29D74D7281F030A0_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* V_0 = NULL;
	bool V_1 = false;
	UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F V_2;
	memset((&V_2), 0, sizeof(V_2));
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.secondAwaiter, out var result))
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_1 = V_0;
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_3 = (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C)L_2->___secondAwaiter_11;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), MoveNextSource_TryGetResult_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m0086AF99B4C66DC0E50E5D1222BAA13F7C73176A_RuntimeMethod_var);
		if (!L_4)
		{
			goto IL_0094;
		}
	}
	{
		// if (result)
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0087;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// self.resultAwaiter = self.resultSelector(self.firstEnumerator.Current, self.secondEnumerator.Current, self.cancellationToken).GetAwaiter();
			_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_6 = V_0;
			_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_7 = V_0;
			NullCheck(L_7);
			Func_4_t2DC9C33278142D80C4DDC91A5CDA42ED5C5CFBBA* L_8 = (Func_4_t2DC9C33278142D80C4DDC91A5CDA42ED5C5CFBBA*)L_7->___resultSelector_6;
			_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_9 = V_0;
			NullCheck(L_9);
			RuntimeObject* L_10 = (RuntimeObject*)L_9->___firstEnumerator_8;
			NullCheck(L_10);
			RuntimeObject* L_11;
			L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 4), L_10);
			_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_12 = V_0;
			NullCheck(L_12);
			RuntimeObject* L_13 = (RuntimeObject*)L_12->___secondEnumerator_9;
			NullCheck(L_13);
			RuntimeObject* L_14;
			L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskAsyncEnumerator`1<System.Object>::get_Current() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 9), L_13);
			_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_15 = V_0;
			NullCheck(L_15);
			CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_16 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_15->___cancellationToken_7;
			NullCheck(L_8);
			UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F L_17;
			L_17 = ((  UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F (*) (Func_4_t2DC9C33278142D80C4DDC91A5CDA42ED5C5CFBBA*, RuntimeObject*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15)))(L_8, L_11, L_14, L_16, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 15));
			V_2 = L_17;
			Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E L_18;
			L_18 = UniTask_1_GetAwaiter_mFDD93458F6295B52D55D3804499CE63A8B6F84E3_inline((&V_2), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 16));
			NullCheck(L_6);
			L_6->___resultAwaiter_12 = L_18;
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___resultAwaiter_12))->___task_0))->___source_0), (void*)NULL);
			#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
			Il2CppCodeGenWriteBarrier((void**)&((&(((&L_6->___resultAwaiter_12))->___task_0))->___result_1), (void*)NULL);
			#endif
			// if (self.resultAwaiter.IsCompleted)
			_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_19 = V_0;
			NullCheck(L_19);
			Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* L_20 = (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E*)(&L_19->___resultAwaiter_12);
			bool L_21;
			L_21 = Awaiter_get_IsCompleted_m2B38E75E4634668D0A41DB6F45A9E7D27C92741E_inline(L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 17));
			if (!L_21)
			{
				goto IL_0064_1;
			}
		}
		{
			// ResultAwaitCore(self);
			_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_22 = V_0;
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
			((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)))((RuntimeObject*)L_22, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18));
			goto IL_0075_1;
		}

IL_0064_1:
		{
			// self.resultAwaiter.SourceOnCompleted(resultAwaitCoreDelegate, self);
			_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_23 = V_0;
			NullCheck(L_23);
			Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* L_24 = (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E*)(&L_23->___resultAwaiter_12);
			il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7));
			Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_25 = ((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3;
			_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_26 = V_0;
			Awaiter_SourceOnCompleted_m4A445596B9EFE906931DCF09728972E0BA7D13B2_inline(L_24, L_25, (RuntimeObject*)L_26, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 19));
		}

IL_0075_1:
		{
			// }
			goto IL_0094;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		// catch (Exception ex)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// self.completionSource.TrySetException(ex);
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_27 = V_0;
		NullCheck(L_27);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_28 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_27)->___completionSource_0);
		Exception_t* L_29 = V_3;
		bool L_30;
		L_30 = UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065(L_28, L_29, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetException_m4E59137D7884F9A273F66FAB6D2D9B7EFD48E065_RuntimeMethod_var)));
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0094;
	}// end catch (depth: 1)

IL_0087:
	{
		// self.completionSource.TrySetResult(false);
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_31 = V_0;
		NullCheck(L_31);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_32 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_31)->___completionSource_0);
		bool L_33;
		L_33 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_32, (bool)0, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::ResultAwaitCore(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation_ResultAwaitCore_m4E0CE19F40CD1404ABADB799C806084F5E57664D_gshared (RuntimeObject* ___0_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var self = (_ZipAwaitWithCancellation)state;
		RuntimeObject* L_0 = ___0_state;
		V_0 = ((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360*)CastclassSealed((RuntimeObject*)L_0, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 8)));
		// if (self.TryGetResult(self.resultAwaiter, out var result))
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_1 = V_0;
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_2 = V_0;
		NullCheck(L_2);
		Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E L_3 = (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E)L_2->___resultAwaiter_12;
		NullCheck((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1);
		bool L_4;
		L_4 = ((  bool (*) (MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*, Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20)))((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_1, L_3, (&V_1), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 20));
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// self.Current = result;
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_5 = V_0;
		RuntimeObject* L_6 = V_1;
		NullCheck(L_5);
		((  void (*) (_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21)))(L_5, L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 21));
		// if (self.cancellationToken.IsCancellationRequested)
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_7 = V_0;
		NullCheck(L_7);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* L_8 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED*)(&L_7->___cancellationToken_7);
		bool L_9;
		L_9 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350(L_8, NULL);
		if (!L_9)
		{
			goto IL_003e;
		}
	}
	{
		// self.completionSource.TrySetCanceled(self.cancellationToken);
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_10 = V_0;
		NullCheck(L_10);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_11 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_10)->___completionSource_0);
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_12 = V_0;
		NullCheck(L_12);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_13 = (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED)L_12->___cancellationToken_7;
		bool L_14;
		L_14 = UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A(L_11, L_13, UniTaskCompletionSourceCore_1_TrySetCanceled_m5C8ADA4877D5FFA69FAF983A4C7438CC478C5F1A_RuntimeMethod_var);
		return;
	}

IL_003e:
	{
		// self.completionSource.TrySetResult(true);
		_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* L_15 = V_0;
		NullCheck(L_15);
		UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* L_16 = (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8*)(&((MoveNextSource_t142E23F076578CF7BF35E23B90112A639446FE35*)L_15)->___completionSource_0);
		bool L_17;
		L_17 = UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E(L_16, (bool)1, UniTaskCompletionSourceCore_1_TrySetResult_m6C6A019A57170810EAC69B6E354101F9D1BE168E_RuntimeMethod_var);
	}

IL_004b:
	{
		// }
		return;
	}
}
// Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::DisposeAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 _ZipAwaitWithCancellation_DisposeAsync_m1FA1D47F0AA49FE159F57DD676AE622ABE4B5219_gshared (_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360* __this, const RuntimeMethod* method) 
{
	U3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 L_0;
		L_0 = AsyncUniTaskMethodBuilder_Create_m06444FC93B9B9A0F57FA4FC78546F0880DFBF1C2_inline(NULL);
		(&V_0)->___U3CU3Et__builder_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___runnerPromise_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&(&V_0)->___U3CU3Et__builder_1))->___ex_1), (void*)NULL);
		#endif
		(&V_0)->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___U3CU3E4__this_2), (void*)__this);
		(&V_0)->___U3CU3E1__state_0 = (-1);
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* L_1 = (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*)(&(&V_0)->___U3CU3Et__builder_1);
		AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139_mD8F93AB180792E581044B2E660212A427BDA7695_inline(L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 22));
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* L_2 = (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493*)(&(&V_0)->___U3CU3Et__builder_1);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_3;
		L_3 = AsyncUniTaskMethodBuilder_get_Task_m96B1EE536B565D04CDBB4F082DFDE148B11CD15B_inline(L_2, NULL);
		return L_3;
	}
}
// System.Void Cysharp.Threading.Tasks.Linq.ZipAwaitWithCancellation`3/_ZipAwaitWithCancellation<System.Object,System.Object,System.Object>::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void _ZipAwaitWithCancellation__cctor_mA08A250066AB0BF17EEA7EBF7CB946A2174CCFA9_gshared (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly Action<object> firstMoveNextCoreDelegate = FirstMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_0 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_0, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 6)), NULL);
		((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___firstMoveNextCoreDelegate_1), (void*)L_0);
		// static readonly Action<object> secondMoveNextCoreDelegate = SecondMoveNextCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_1 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_1, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 11)), NULL);
		((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___secondMoveNextCoreDelegate_2), (void*)L_1);
		// static readonly Action<object> resultAwaitCoreDelegate = ResultAwaitCore;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)il2cpp_codegen_object_new(Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4(L_2, NULL, (intptr_t)((void*)il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 18)), NULL);
		((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((_ZipAwaitWithCancellation_t961D09A4CF177F856476CBB0EF2C1BDCA6CF1360_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 7)))->___resultAwaitCoreDelegate_3), (void*)L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429 AsyncUniTaskVoidMethodBuilder_Create_m3FE5FF1BD82DD8E80EE83620FEC82B508769A167_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429));
		AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2 AsyncUniTaskVoidMethodBuilder_get_Task_m902C29FCC822C8134D3EF67342E6B6886C7C69D9_inline (AsyncUniTaskVoidMethodBuilder_t123E7FD4979FB837186AF762CCFCFB9207576429* __this, const RuntimeMethod* method) 
{
	UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2));
		UniTaskVoid_t9D9F50811D277260A6119160279E2A7834915EE2 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 AsyncUniTaskMethodBuilder_Create_m06444FC93B9B9A0F57FA4FC78546F0880DFBF1C2_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493));
		AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 AsyncUniTaskMethodBuilder_get_Task_m96B1EE536B565D04CDBB4F082DFDE148B11CD15B_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IStateMachineRunnerPromise_tC7E7C377EA1F3796AB0B063DBF3BD9118B7C56CC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = __this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = __this->___runnerPromise_0;
		NullCheck(L_1);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise::get_Task() */, IStateMachineRunnerPromise_tC7E7C377EA1F3796AB0B063DBF3BD9118B7C56CC_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t* L_3 = __this->___ex_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException(ex);
		Exception_t* L_4 = __this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_5;
		L_5 = UniTask_FromException_m3BD43A72A79E83F88AA1391B0EAE4B87563953E4(L_4, NULL);
		return L_5;
	}

IL_0028:
	{
		// return UniTask.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015 L_6 = ((UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_StaticFields*)il2cpp_codegen_static_fields_for(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var))->___CompletedTask_3;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t UniTaskCompletionSourceCore_1_get_Version_m290233E93181FF3B3B2A8A77D04BDBCEBFAB653D_gshared_inline (UniTaskCompletionSourceCore_1_t0897740EC399A8A124AF89347FD34175C40DAFD8* __this, const RuntimeMethod* method) 
{
	{
		// public short Version => version;
		int16_t L_0 = (int16_t)__this->___version_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UniTask_1__ctor_m8A0344C745F41CEA10E72F5421F79CF0479AB050_gshared_inline (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* __this, RuntimeObject* ___0_source, int16_t ___1_token, const RuntimeMethod* method) 
{
	{
		// this.source = source;
		RuntimeObject* L_0 = ___0_source;
		__this->___source_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_0), (void*)L_0);
		// this.token = token;
		int16_t L_1 = ___1_token;
		__this->___token_2 = L_1;
		// this.result = default;
		bool* L_2 = (bool*)(&__this->___result_1);
		il2cpp_codegen_initobj(L_2, sizeof(bool));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C UniTask_1_GetAwaiter_mB841096EAB952AA448654D4101D82B93AB1988DF_gshared_inline (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m530DE8FBB18ADEF2BFAC36B3308ED76CACA467B7_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m4D50E67D482A21AFC1277B1BF15DA3F7EFB4463D_gshared_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* L_0 = (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_m31A46EA72E4DA0EEBD656544A93DF2CF5DB263FA_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m2EAABB711625192DAE7409C928A1139AEDB17FB2_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_mD94C002C1BD102362A892F36945B1527763C5D55_gshared_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* L_0 = (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_continuation;
		RuntimeObject* L_4 = ___1_state;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___0_continuation;
		RuntimeObject* L_7 = ___1_state;
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* L_8 = (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*)(&__this->___task_0);
		int16_t L_9 = (int16_t)L_8->___token_2;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, L_6, L_7, L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0 AsyncUniTaskMethodBuilder_1_Create_mC07E139E589DD438EA71E35049731DC5BA8A2A0B_gshared_inline (const RuntimeMethod* method) 
{
	AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return default;
		il2cpp_codegen_initobj((&V_0), sizeof(AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0));
		AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0 L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED_mCE843DB9E5D1AE96F13B27F1DFA3449A9D6AA380_gshared_inline (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* __this, U3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CMoveNextAsyncU3Ed__7_t9E1D250377E8DD5A10A4244F1392E592AE4B40ED* L_0 = ___0_stateMachine;
		U3CMoveNextAsyncU3Ed__7_MoveNext_mF800F08B96142F5E73E3BD2B8C15EDEF438085AA(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F AsyncUniTaskMethodBuilder_1_get_Task_mAE53145F9C8FD8F19A7A075BDBF17A68C7867A9F_gshared_inline (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (runnerPromise != null)
		RuntimeObject* L_0 = (RuntimeObject*)__this->___runnerPromise_0;
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		// return runnerPromise.Task;
		RuntimeObject* L_1 = (RuntimeObject*)__this->___runnerPromise_0;
		NullCheck(L_1);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_2;
		L_2 = InterfaceFuncInvoker0< UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F >::Invoke(1 /* Cysharp.Threading.Tasks.UniTask`1<T> Cysharp.Threading.Tasks.CompilerServices.IStateMachineRunnerPromise`1<System.Boolean>::get_Task() */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0), L_1);
		return L_2;
	}

IL_0014:
	{
		// else if (ex != null)
		Exception_t* L_3 = (Exception_t*)__this->___ex_1;
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// return UniTask.FromException<T>(ex);
		Exception_t* L_4 = (Exception_t*)__this->___ex_1;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_5;
		L_5 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (Exception_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2)))(L_4, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 2));
		return L_5;
	}

IL_0028:
	{
		// return UniTask.FromResult(result);
		bool L_6 = (bool)__this->___result_2;
		il2cpp_codegen_runtime_class_init_inline(UniTask_t5E990A8FFED674737C0C8AE7E0C52D53F0113015_il2cpp_TypeInfo_var);
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_7;
		L_7 = ((  UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F (*) (bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3)))(L_6, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 3));
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_1_Start_TisU3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF_m65856DB6E5E02DD3011498806FB573EEBE9F1DA0_gshared_inline (AsyncUniTaskMethodBuilder_1_t0D9F49574696D7D9625392C7D624C8E0C29FD0D0* __this, U3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CMoveNextAsyncU3Ed__7_t2B981EB64AFFE4F681EE85B16F0AA193C8CE64BF* L_0 = ___0_stateMachine;
		U3CMoveNextAsyncU3Ed__7_MoveNext_mA46389C0BDA705B842EE4DD77DF297B74351FD79(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_UnsafeOnCompleted_m8382B9FC902D8F19D09F4C2CAEBAACABBE45F355_gshared_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaiterActions_tBA48159E05D5CA069CE8856478A432624391F0C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* L_0 = (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		// continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_continuation;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
		return;
	}

IL_0016:
	{
		// s.OnCompleted(AwaiterActions.InvokeContinuationDelegate, continuation, task.token);
		RuntimeObject* L_4 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AwaiterActions_tBA48159E05D5CA069CE8856478A432624391F0C6_il2cpp_TypeInfo_var);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_5 = ((AwaiterActions_tBA48159E05D5CA069CE8856478A432624391F0C6_StaticFields*)il2cpp_codegen_static_fields_for(AwaiterActions_tBA48159E05D5CA069CE8856478A432624391F0C6_il2cpp_TypeInfo_var))->___InvokeContinuationDelegate_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = ___0_continuation;
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* L_7 = (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*)(&__this->___task_0);
		int16_t L_8 = (int16_t)L_7->___token_2;
		NullCheck((RuntimeObject*)L_4);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_4, L_5, (RuntimeObject*)L_6, L_8);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_GetResult_mBB66A71FDD192E36417690E0E0EE731E424D7EE4_gshared_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* L_0 = (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		// return task.result;
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* L_3 = (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*)(&__this->___task_0);
		bool L_4 = (bool)L_3->___result_1;
		return L_4;
	}

IL_001b:
	{
		// return s.GetResult(task.token);
		RuntimeObject* L_5 = V_0;
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* L_6 = (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*)(&__this->___task_0);
		int16_t L_7 = (int16_t)L_6->___token_2;
		NullCheck(L_5);
		bool L_8;
		L_8 = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0 /* T Cysharp.Threading.Tasks.IUniTaskSource`1<System.Boolean>::GetResult(System.Int16) */, il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1), L_5, L_7);
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029_m78F42995D45A48AC6BB063DDB65C31DEE35F9A58_gshared_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__18_t8DA30AD9AA8EB14B45DC43A493C825F6E17DB029* L_0 = ___0_stateMachine;
		U3CDisposeAsyncU3Ed__18_MoveNext_mDAC95F8EAFB387102ED2281A324029A50CF7EF53(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE_m13D95FCC9ECB150DBD76CFD4FC1BE5D79DE5F528_gshared_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__18_tCD09ADD62A4AE472D776659DC29A75CA10209BCE* L_0 = ___0_stateMachine;
		U3CDisposeAsyncU3Ed__18_MoveNext_m2745BC52A606AB38BE9901B0754934AAC3E98AA1(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E UniTask_1_GetAwaiter_mFDD93458F6295B52D55D3804499CE63A8B6F84E3_gshared_inline (UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* __this, const RuntimeMethod* method) 
{
	{
		// return new Awaiter(this);
		Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E L_0;
		memset((&L_0), 0, sizeof(L_0));
		Awaiter__ctor_m9818087779A41B6466E855CBAC6496EF9F99824A_inline((&L_0), __this, /*hidden argument*/il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Awaiter_get_IsCompleted_m2B38E75E4634668D0A41DB6F45A9E7D27C92741E_gshared_inline (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* __this, const RuntimeMethod* method) 
{
	{
		// return task.Status.IsCompleted();
		UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* L_0 = (UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F*)(&__this->___task_0);
		int32_t L_1;
		L_1 = UniTask_1_get_Status_mD8EA990F6BAFB381977ACE4E2D49412160BE0C96_inline(L_0, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		bool L_2;
		L_2 = UniTaskStatusExtensions_IsCompleted_m2EAABB711625192DAE7409C928A1139AEDB17FB2_inline(L_1, NULL);
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter_SourceOnCompleted_m4A445596B9EFE906931DCF09728972E0BA7D13B2_gshared_inline (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_continuation, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// var s = task.source;
		UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* L_0 = (UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F*)(&__this->___task_0);
		RuntimeObject* L_1 = (RuntimeObject*)L_0->___source_0;
		V_0 = L_1;
		// if (s == null)
		RuntimeObject* L_2 = V_0;
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		// continuation(state);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_3 = ___0_continuation;
		RuntimeObject* L_4 = ___1_state;
		NullCheck(L_3);
		Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_3, L_4, NULL);
		return;
	}

IL_0017:
	{
		// s.OnCompleted(continuation, state, task.token);
		RuntimeObject* L_5 = V_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_6 = ___0_continuation;
		RuntimeObject* L_7 = ___1_state;
		UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* L_8 = (UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F*)(&__this->___task_0);
		int16_t L_9 = (int16_t)L_8->___token_2;
		NullCheck((RuntimeObject*)L_5);
		InterfaceActionInvoker3< Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, int16_t >::Invoke(1 /* System.Void Cysharp.Threading.Tasks.IUniTaskSource::OnCompleted(System.Action`1<System.Object>,System.Object,System.Int16) */, IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_5, L_6, L_7, L_9);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A_mB3D43800C38A15540FBDA3064E345398022C36D8_gshared_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__21_t2F9C059DD63DDF2BD37CE00C12ACC176C3C2C74A* L_0 = ___0_stateMachine;
		U3CDisposeAsyncU3Ed__21_MoveNext_mDC6F7786422C301A797EA1E1EB7C0102E051C2C7(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncUniTaskMethodBuilder_Start_TisU3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139_mD8F93AB180792E581044B2E660212A427BDA7695_gshared_inline (AsyncUniTaskMethodBuilder_t92B2151B72D1C1C496D43A279B671E631107B493* __this, U3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
		// stateMachine.MoveNext();
		U3CDisposeAsyncU3Ed__21_tC70FD3255362B1EC89CDDA8F87FAE4AA9CFC5139* L_0 = ___0_stateMachine;
		U3CDisposeAsyncU3Ed__21_MoveNext_m9EB9D6F70FB3CDDC53ECCE82730243643F78DD93(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UniTaskStatusExtensions_IsCompleted_m2EAABB711625192DAE7409C928A1139AEDB17FB2_inline (int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// return status != UniTaskStatus.Pending;
		int32_t L_0 = ___0_status;
		return (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m530DE8FBB18ADEF2BFAC36B3308ED76CACA467B7_gshared_inline (Awaiter_t67127BA0B982E783A85A7D8CE4274AEAAC669D7C* __this, UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* ___0_task, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* L_0 = ___0_task;
		UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F L_1 = (*(UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_m31A46EA72E4DA0EEBD656544A93DF2CF5DB263FA_gshared_inline (UniTask_1_tDC116EB2F5B2398F4D7562096CB03A58BC3FFF5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Awaiter__ctor_m9818087779A41B6466E855CBAC6496EF9F99824A_gshared_inline (Awaiter_tB5B52DD2395034C96008C543351D36E5F487124E* __this, UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* ___0_task, const RuntimeMethod* method) 
{
	{
		// this.task = task;
		UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* L_0 = ___0_task;
		UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F L_1 = (*(UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F*)L_0);
		__this->___task_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___source_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___task_0))->___result_1), (void*)NULL);
		#endif
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UniTask_1_get_Status_mD8EA990F6BAFB381977ACE4E2D49412160BE0C96_gshared_inline (UniTask_1_t87617E8F0E40570C9CCBDD7D36E731429F887A3F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (source == null) ? UniTaskStatus.Succeeded : source.GetStatus(token);
		RuntimeObject* L_0 = (RuntimeObject*)__this->___source_0;
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = (RuntimeObject*)__this->___source_0;
		int16_t L_2 = (int16_t)__this->___token_2;
		NullCheck((RuntimeObject*)L_1);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker1< int32_t, int16_t >::Invoke(0 /* Cysharp.Threading.Tasks.UniTaskStatus Cysharp.Threading.Tasks.IUniTaskSource::GetStatus(System.Int16) */, IUniTaskSource_t3FA00CBA16A218342BBE55CCF96CA56FD21575C1_il2cpp_TypeInfo_var, (RuntimeObject*)L_1, L_2);
		return L_3;
	}

IL_001a:
	{
		return (int32_t)(1);
	}
}
