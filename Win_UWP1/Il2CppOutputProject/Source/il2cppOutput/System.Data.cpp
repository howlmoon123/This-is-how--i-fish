#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Guid>
struct Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.EventHandler`1<System.Diagnostics.Tracing.EventCommandEventArgs>
struct EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90;
// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EtwSession>
struct List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Int32>[]
struct EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE;
// System.Attribute[]
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Diagnostics.Tracing.EtwSession[]
struct EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75;
// System.Data.Common.SchemaInfo[]
struct SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Diagnostics.Tracing.EventSource/EventMetadata[]
struct EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65;
// System.Diagnostics.Tracing.ActivityTracker
struct ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Data.ProviderBase.BasicFieldNameLookup
struct BasicFieldNameLookup_t0DBE9A973608468F7A7E70CD0E0F1D0651B0F0D1;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.ComponentModel.Component
struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Data.DataCommonEventSource
struct DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F;
// System.Data.DataException
struct DataException_t617EA07995426002043C97B3E9ADFF0C8BB748DF;
// System.Data.Common.DataRecordInternal
struct DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Data.Common.DbCommand
struct DbCommand_tB125F25AD82F85EA3DC7AA8C0556C4788E5D72CC;
// System.Data.Common.DbConnection
struct DbConnection_t10FE0E1B88AE954D5CDB74A512B018A8D2185B50;
// System.Data.Common.DbDataReader
struct DbDataReader_t50481AE1497CEE437BDA56F2E92B6567D3222C45;
// System.Data.Common.DbDataRecord
struct DbDataRecord_t02A7715354313B29BA4878743EBBECFA9884AA70;
// System.Data.Common.DbEnumerator
struct DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0;
// System.Data.Common.DbParameter
struct DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3;
// System.Data.Common.DbParameterCollection
struct DbParameterCollection_t53857899F148EF54A7C90F169557DD134B5297D2;
// System.Data.DuplicateNameException
struct DuplicateNameException_t4305734127CC4324A913DE2E4CD9B38697E80C3C;
// System.Diagnostics.Tracing.EventCommandEventArgs
struct EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F;
// System.Diagnostics.Tracing.EventDispatcher
struct EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714;
// System.Diagnostics.Tracing.EventSource
struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A;
// System.Exception
struct Exception_t;
// System.Data.ProviderBase.FieldNameLookup
struct FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39;
// System.Collections.IComparer
struct IComparer_t624EE667DCB0D3765FF034F7150DA71B361B82C0;
// System.Data.IDataReader
struct IDataReader_tCA82A5B3AE1C412FA8C38F54929D4C42EC0E027B;
// System.Data.IDbCommand
struct IDbCommand_t8AE0AF37C4FE4ECC4237096FBA77ADEFFF71D430;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Runtime.Serialization.IFormatterConverter
struct IFormatterConverter_t2A667D8777429024D8A3CB3D9AE29EA79FEA6176;
// System.ComponentModel.ISite
struct ISite_tC1E55EC6FA743BE8C9D79C838308E788B90C8790;
// System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.OperatingSystem
struct OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463;
// System.PlatformNotSupportedException
struct PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.Type
struct Type_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Data.Common.DbEnumerator/DbColumnDescriptor
struct DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38;
// System.Diagnostics.Tracing.EventSource/OverideEventProvider
struct OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940;

IL2CPP_EXTERN_C RuntimeClass* ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataReader_tCA82A5B3AE1C412FA8C38F54929D4C42EC0E027B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05119745D20F83C96FF64EC9238D16AE415068EB;
IL2CPP_EXTERN_C String_t* _stringLiteral07E207917815C82ABA8C3A75E009A7ABE89A3EF2;
IL2CPP_EXTERN_C String_t* _stringLiteral20FACC556D3392DB06F2F3AF557BB02598FB7E68;
IL2CPP_EXTERN_C String_t* _stringLiteral4C515F5529590A622ED8FFF5FF004F56EDA70D36;
IL2CPP_EXTERN_C String_t* _stringLiteralB9C4E7450F845E633DEE5CC15FF62B87B4778826;
IL2CPP_EXTERN_C String_t* _stringLiteralC1D0D292C33F1F64AB45A4955EAF5BB638C50F4B;
IL2CPP_EXTERN_C String_t* _stringLiteralCB23F9937D80B1A1E1D2A5F53949DF4876BAB314;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C String_t* _stringLiteralECC887A6FB8315456AE4F577AA0E1646BEB717E7;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6;
IL2CPP_EXTERN_C const RuntimeMethod* ADP_ArgumentNull_m2240C807D7EA9D23B4A9A90F8E6B526322F775C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ADP_BuildSchemaTableInfoTableNames_m068A9194D91B5F9874B517FFCC52E002C216DC9F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ADP_GenerateUniqueName_m7A2ABEC3DF704271611C3828165DB4CE88A27422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ADP_NotSupported_m5FF2B9E5D15681AE4BEDE5BD262E2FE14B92D95E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ADP_TraceExceptionAsReturnValue_mBBC8FB52DA9D4365324243704303B81CD4566B2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ADP_TraceException_m144D376914D7AA513063B65530471C21AA29A511_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ADP__cctor_mD10E0263CB66FDFC0F4CAE07A1166A88E9286B64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* BasicFieldNameLookup__ctor_m69E77DB4889074EDB775F57C6AF74A2DB4EC1807_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataCommonEventSource_Trace_TisException_t_m407B0EB4BB47EC512610901D58A48BD44F4E1A85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataCommonEventSource_Trace_m734F123EC366C3B6B0F7BE8E70BD0CE194AD0FA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataCommonEventSource__cctor_mC7760EBA5CC650A83F26AA59AA736F86D7DF554C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataCommonEventSource__ctor_mE859C923EDBDDA8DA50406682A63F1C5A45FD5DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataException__ctor_m0D423E3C865F408ADD44C061DB17E181EA408E6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataException__ctor_m38CA27034EF0572F09C60FA4CD86D515435B4ABC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataException__ctor_m811C07A234ECE528FCCF04B90AA187D9FF8502C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataRecordInternal_GetDataTypeName_mDEE328C07C633D98A40315BCB4EAB5B8C51428EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataRecordInternal_GetFieldType_m5D58A22508F0E94962035B348C2EBA44D763881E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataRecordInternal_GetInt16_m1000BAC40078094110B043FEF66457B78CA9333B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataRecordInternal_GetInt32_mA683830941D4E89C75CFEDDFBF354725D496197C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataRecordInternal_GetName_m5B911A120837B9822379CDC37EF549D926E653B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataRecordInternal_GetString_m81F4CA334EB7C6AC89FACD6960F27935581ABCC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataRecordInternal_GetValues_mD85195CF022C230D8E581A406D81539B15A488D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataRecordInternal__ctor_mB3D4DF755EC8CEBFF574899DFF2903D74C98FA45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DataRecordInternal_get_FieldCount_mC0D1D3F0D9FB960AA0CD30AEDB42BBF73D49A798_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbColumnDescriptor__ctor_m0DB76F370A45E3E671240E56252497E33521E6DD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbColumnDescriptor_get_PropertyType_mF0518747B9A4D5D1B7C6044129AA1B20379489B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbCommand_System_Data_IDbCommand_ExecuteReader_m0C71B86F024C7A0F60F0CF0F42A536A0EE7D61A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbCommand__ctor_m83F726F81AC564060FBFA052B4B49D609D70E7CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbConnection_System_Data_IDbConnection_CreateCommand_m6541F62489BFA0D89DF97F88F2A4FACA50B2D713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbConnection__ctor_mB44477AD408CACC38FEBBC38312AFF400B18CE21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbDataReader_Close_mE8D3A1E5E0CB7B7B099580A8F4C0D55BACE04EEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbDataReader_Dispose_m2EB3E5C7A148DF8E5EA58053B9C57386062398CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbDataReader_Dispose_mB4A8D0EA2DC492279AA1BE3034E9CDA80838A214_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbDataReader__ctor_m828A5CA10B067C9A5D4C5FAB01F8AEB110054DF3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbDataRecord__ctor_mA276E6B825A9D2F3A19CEE26823C17061C854195_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbEnumerator_BuildSchemaInfo_mA5A3B41F4C868A5ADABFBFFADE3F099A81C3AF55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbEnumerator_MoveNext_mB7201A38BD13FFC539DCDB8B368017F909A7F45E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbEnumerator_Reset_m07A208D94C5FF440FF799863FCF9A4DB83DF9E14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbEnumerator__ctor_mF119906D6677EEF51005C9148E5ED43AC7D964C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbEnumerator_get_Current_m5C3A70790EE1315A894B61E08C7FF13463B0EE15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbParameterCollection_System_Collections_IList_get_Item_m3400BEADE49A36372819D70DCF7F9DA7FB9E676C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbParameterCollection_System_Collections_IList_set_Item_m3A970A1275A1F148AD4C8E13E8484D7BA6DD74D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbParameterCollection__ctor_mD775A4D557C57801A6029E3495146B6372E0CE02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbParameterCollection_get_IsFixedSize_m04592A30E7E5DF7D39EE773968923FA3C3AA643F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbParameterCollection_get_IsReadOnly_mC54F9F30796EA4A4ADBA95C3C804FF9EA1CE3F64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbParameterCollection_get_Item_m5323131A014AFC17F21DA0BECB22482F33BE0332_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DbParameterCollection_get_Item_m87A14BECEE5234975C0FD0D146EB2E8B1912C31C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryAdd_m2609DACB0EB5FBADE365DF4A49E31BFEECB82252_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8E06A6DF244254BF419D7EC23A9A6809E19A544D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mEC554451CB98B6F31912A513825E0ACFD4FC2763_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m351227FE0D2D84F7E108FD47E0F0EA3D6D2D2A74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mBC85AF861FB031847847F0B30707EC7AC252D572_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DuplicateNameException__ctor_m2337EB2161C2FB7AEF85430E42323C4DAFE973F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DuplicateNameException__ctor_m238DD46B4F973CEA2F8C4AB7D5A37A5E527D93B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DuplicateNameException__ctor_m9694A976FFE681B6BC33BE5A578F9CAEBFC2C738_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FieldNameLookup__ctor_mF67486CAEC7825CF308B9DA455A8037E964811E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OperatingSystem_get_Platform_m1E43B8C2B6CCDD74474E9AB9CF4EF7445D8BE1DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OperatingSystem_get_Version_m6ED6AD2C904E6809FB758E6303CFAFABFD0B0A46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SR_GetString_m2421FD37234F6BCFE61B9109159A54155E3898E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Version_get_Major_mBDD414863C4A05FADE87F8C39C8CE8ED6DE6C460_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AccessViolationException_t8B8BB8265FE2D30334F7DF0F0DD6E73929F8AD25_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StackOverflowException_tCDBFE2D7CF662B7405CDB64A8ED8CE0E2728055E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75;
struct SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t14069ADE6BB729A2DA2417F1A67FACE1F55D1A58 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct  Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___entries_1)); }
	inline EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tABFC31237D6642B5D4C1DBA234CA37EE851EB0AE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___keys_7)); }
	inline KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t61F8738ED346768CC112B2E27863BF9F73C76D90 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ___values_8)); }
	inline ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t17EEB7B2EDD3CB5222C660D7E739F803986BF025 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Data.ProviderBase.BasicFieldNameLookup
struct  BasicFieldNameLookup_t0DBE9A973608468F7A7E70CD0E0F1D0651B0F0D1  : public RuntimeObject
{
public:
	// System.String[] System.Data.ProviderBase.BasicFieldNameLookup::_fieldNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____fieldNames_0;

public:
	inline static int32_t get_offset_of__fieldNames_0() { return static_cast<int32_t>(offsetof(BasicFieldNameLookup_t0DBE9A973608468F7A7E70CD0E0F1D0651B0F0D1, ____fieldNames_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__fieldNames_0() const { return ____fieldNames_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__fieldNames_0() { return &____fieldNames_0; }
	inline void set__fieldNames_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____fieldNames_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fieldNames_0), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.Data.Common.DbDataRecord
struct  DbDataRecord_t02A7715354313B29BA4878743EBBECFA9884AA70  : public RuntimeObject
{
public:

public:
};


// System.Data.Common.DbEnumerator
struct  DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0  : public RuntimeObject
{
public:
	// System.Data.IDataReader System.Data.Common.DbEnumerator::_reader
	RuntimeObject* ____reader_0;
	// System.Data.Common.DbDataRecord System.Data.Common.DbEnumerator::_current
	DbDataRecord_t02A7715354313B29BA4878743EBBECFA9884AA70 * ____current_1;
	// System.Data.Common.SchemaInfo[] System.Data.Common.DbEnumerator::_schemaInfo
	SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* ____schemaInfo_2;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.Common.DbEnumerator::_descriptors
	PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * ____descriptors_3;
	// System.Data.ProviderBase.FieldNameLookup System.Data.Common.DbEnumerator::_fieldNameLookup
	FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * ____fieldNameLookup_4;
	// System.Boolean System.Data.Common.DbEnumerator::_closeReader
	bool ____closeReader_5;

public:
	inline static int32_t get_offset_of__reader_0() { return static_cast<int32_t>(offsetof(DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0, ____reader_0)); }
	inline RuntimeObject* get__reader_0() const { return ____reader_0; }
	inline RuntimeObject** get_address_of__reader_0() { return &____reader_0; }
	inline void set__reader_0(RuntimeObject* value)
	{
		____reader_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____reader_0), (void*)value);
	}

	inline static int32_t get_offset_of__current_1() { return static_cast<int32_t>(offsetof(DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0, ____current_1)); }
	inline DbDataRecord_t02A7715354313B29BA4878743EBBECFA9884AA70 * get__current_1() const { return ____current_1; }
	inline DbDataRecord_t02A7715354313B29BA4878743EBBECFA9884AA70 ** get_address_of__current_1() { return &____current_1; }
	inline void set__current_1(DbDataRecord_t02A7715354313B29BA4878743EBBECFA9884AA70 * value)
	{
		____current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____current_1), (void*)value);
	}

	inline static int32_t get_offset_of__schemaInfo_2() { return static_cast<int32_t>(offsetof(DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0, ____schemaInfo_2)); }
	inline SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* get__schemaInfo_2() const { return ____schemaInfo_2; }
	inline SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA** get_address_of__schemaInfo_2() { return &____schemaInfo_2; }
	inline void set__schemaInfo_2(SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* value)
	{
		____schemaInfo_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____schemaInfo_2), (void*)value);
	}

	inline static int32_t get_offset_of__descriptors_3() { return static_cast<int32_t>(offsetof(DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0, ____descriptors_3)); }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * get__descriptors_3() const { return ____descriptors_3; }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F ** get_address_of__descriptors_3() { return &____descriptors_3; }
	inline void set__descriptors_3(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * value)
	{
		____descriptors_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____descriptors_3), (void*)value);
	}

	inline static int32_t get_offset_of__fieldNameLookup_4() { return static_cast<int32_t>(offsetof(DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0, ____fieldNameLookup_4)); }
	inline FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * get__fieldNameLookup_4() const { return ____fieldNameLookup_4; }
	inline FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 ** get_address_of__fieldNameLookup_4() { return &____fieldNameLookup_4; }
	inline void set__fieldNameLookup_4(FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * value)
	{
		____fieldNameLookup_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fieldNameLookup_4), (void*)value);
	}

	inline static int32_t get_offset_of__closeReader_5() { return static_cast<int32_t>(offsetof(DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0, ____closeReader_5)); }
	inline bool get__closeReader_5() const { return ____closeReader_5; }
	inline bool* get_address_of__closeReader_5() { return &____closeReader_5; }
	inline void set__closeReader_5(bool value)
	{
		____closeReader_5 = value;
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.ComponentModel.MemberDescriptor
struct  MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F  : public RuntimeObject
{
public:
	// System.String System.ComponentModel.MemberDescriptor::name
	String_t* ___name_0;
	// System.String System.ComponentModel.MemberDescriptor::displayName
	String_t* ___displayName_1;
	// System.Int32 System.ComponentModel.MemberDescriptor::nameHash
	int32_t ___nameHash_2;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::attributes
	AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___attributes_3;
	// System.Attribute[] System.ComponentModel.MemberDescriptor::originalAttributes
	AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___originalAttributes_4;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFiltered
	bool ___attributesFiltered_5;
	// System.Boolean System.ComponentModel.MemberDescriptor::attributesFilled
	bool ___attributesFilled_6;
	// System.Int32 System.ComponentModel.MemberDescriptor::metadataVersion
	int32_t ___metadataVersion_7;
	// System.String System.ComponentModel.MemberDescriptor::category
	String_t* ___category_8;
	// System.String System.ComponentModel.MemberDescriptor::description
	String_t* ___description_9;
	// System.Object System.ComponentModel.MemberDescriptor::lockCookie
	RuntimeObject * ___lockCookie_10;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_displayName_1() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___displayName_1)); }
	inline String_t* get_displayName_1() const { return ___displayName_1; }
	inline String_t** get_address_of_displayName_1() { return &___displayName_1; }
	inline void set_displayName_1(String_t* value)
	{
		___displayName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayName_1), (void*)value);
	}

	inline static int32_t get_offset_of_nameHash_2() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___nameHash_2)); }
	inline int32_t get_nameHash_2() const { return ___nameHash_2; }
	inline int32_t* get_address_of_nameHash_2() { return &___nameHash_2; }
	inline void set_nameHash_2(int32_t value)
	{
		___nameHash_2 = value;
	}

	inline static int32_t get_offset_of_attributes_3() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributes_3)); }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* get_attributes_3() const { return ___attributes_3; }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4** get_address_of_attributes_3() { return &___attributes_3; }
	inline void set_attributes_3(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* value)
	{
		___attributes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attributes_3), (void*)value);
	}

	inline static int32_t get_offset_of_originalAttributes_4() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___originalAttributes_4)); }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* get_originalAttributes_4() const { return ___originalAttributes_4; }
	inline AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4** get_address_of_originalAttributes_4() { return &___originalAttributes_4; }
	inline void set_originalAttributes_4(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* value)
	{
		___originalAttributes_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalAttributes_4), (void*)value);
	}

	inline static int32_t get_offset_of_attributesFiltered_5() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributesFiltered_5)); }
	inline bool get_attributesFiltered_5() const { return ___attributesFiltered_5; }
	inline bool* get_address_of_attributesFiltered_5() { return &___attributesFiltered_5; }
	inline void set_attributesFiltered_5(bool value)
	{
		___attributesFiltered_5 = value;
	}

	inline static int32_t get_offset_of_attributesFilled_6() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___attributesFilled_6)); }
	inline bool get_attributesFilled_6() const { return ___attributesFilled_6; }
	inline bool* get_address_of_attributesFilled_6() { return &___attributesFilled_6; }
	inline void set_attributesFilled_6(bool value)
	{
		___attributesFilled_6 = value;
	}

	inline static int32_t get_offset_of_metadataVersion_7() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___metadataVersion_7)); }
	inline int32_t get_metadataVersion_7() const { return ___metadataVersion_7; }
	inline int32_t* get_address_of_metadataVersion_7() { return &___metadataVersion_7; }
	inline void set_metadataVersion_7(int32_t value)
	{
		___metadataVersion_7 = value;
	}

	inline static int32_t get_offset_of_category_8() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___category_8)); }
	inline String_t* get_category_8() const { return ___category_8; }
	inline String_t** get_address_of_category_8() { return &___category_8; }
	inline void set_category_8(String_t* value)
	{
		___category_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___category_8), (void*)value);
	}

	inline static int32_t get_offset_of_description_9() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___description_9)); }
	inline String_t* get_description_9() const { return ___description_9; }
	inline String_t** get_address_of_description_9() { return &___description_9; }
	inline void set_description_9(String_t* value)
	{
		___description_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___description_9), (void*)value);
	}

	inline static int32_t get_offset_of_lockCookie_10() { return static_cast<int32_t>(offsetof(MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F, ___lockCookie_10)); }
	inline RuntimeObject * get_lockCookie_10() const { return ___lockCookie_10; }
	inline RuntimeObject ** get_address_of_lockCookie_10() { return &___lockCookie_10; }
	inline void set_lockCookie_10(RuntimeObject * value)
	{
		___lockCookie_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockCookie_10), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.ComponentModel.PropertyDescriptorCollection
struct  PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F  : public RuntimeObject
{
public:
	// System.Collections.IDictionary System.ComponentModel.PropertyDescriptorCollection::cachedFoundProperties
	RuntimeObject* ___cachedFoundProperties_1;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::cachedIgnoreCase
	bool ___cachedIgnoreCase_2;
	// System.ComponentModel.PropertyDescriptor[] System.ComponentModel.PropertyDescriptorCollection::properties
	PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* ___properties_3;
	// System.Int32 System.ComponentModel.PropertyDescriptorCollection::propCount
	int32_t ___propCount_4;
	// System.String[] System.ComponentModel.PropertyDescriptorCollection::namedSort
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___namedSort_5;
	// System.Collections.IComparer System.ComponentModel.PropertyDescriptorCollection::comparer
	RuntimeObject* ___comparer_6;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::propsOwned
	bool ___propsOwned_7;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::needSort
	bool ___needSort_8;
	// System.Boolean System.ComponentModel.PropertyDescriptorCollection::readOnly
	bool ___readOnly_9;

public:
	inline static int32_t get_offset_of_cachedFoundProperties_1() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___cachedFoundProperties_1)); }
	inline RuntimeObject* get_cachedFoundProperties_1() const { return ___cachedFoundProperties_1; }
	inline RuntimeObject** get_address_of_cachedFoundProperties_1() { return &___cachedFoundProperties_1; }
	inline void set_cachedFoundProperties_1(RuntimeObject* value)
	{
		___cachedFoundProperties_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedFoundProperties_1), (void*)value);
	}

	inline static int32_t get_offset_of_cachedIgnoreCase_2() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___cachedIgnoreCase_2)); }
	inline bool get_cachedIgnoreCase_2() const { return ___cachedIgnoreCase_2; }
	inline bool* get_address_of_cachedIgnoreCase_2() { return &___cachedIgnoreCase_2; }
	inline void set_cachedIgnoreCase_2(bool value)
	{
		___cachedIgnoreCase_2 = value;
	}

	inline static int32_t get_offset_of_properties_3() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___properties_3)); }
	inline PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* get_properties_3() const { return ___properties_3; }
	inline PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75** get_address_of_properties_3() { return &___properties_3; }
	inline void set_properties_3(PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* value)
	{
		___properties_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_3), (void*)value);
	}

	inline static int32_t get_offset_of_propCount_4() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___propCount_4)); }
	inline int32_t get_propCount_4() const { return ___propCount_4; }
	inline int32_t* get_address_of_propCount_4() { return &___propCount_4; }
	inline void set_propCount_4(int32_t value)
	{
		___propCount_4 = value;
	}

	inline static int32_t get_offset_of_namedSort_5() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___namedSort_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_namedSort_5() const { return ___namedSort_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_namedSort_5() { return &___namedSort_5; }
	inline void set_namedSort_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___namedSort_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namedSort_5), (void*)value);
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_propsOwned_7() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___propsOwned_7)); }
	inline bool get_propsOwned_7() const { return ___propsOwned_7; }
	inline bool* get_address_of_propsOwned_7() { return &___propsOwned_7; }
	inline void set_propsOwned_7(bool value)
	{
		___propsOwned_7 = value;
	}

	inline static int32_t get_offset_of_needSort_8() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___needSort_8)); }
	inline bool get_needSort_8() const { return ___needSort_8; }
	inline bool* get_address_of_needSort_8() { return &___needSort_8; }
	inline void set_needSort_8(bool value)
	{
		___needSort_8 = value;
	}

	inline static int32_t get_offset_of_readOnly_9() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F, ___readOnly_9)); }
	inline bool get_readOnly_9() const { return ___readOnly_9; }
	inline bool* get_address_of_readOnly_9() { return &___readOnly_9; }
	inline void set_readOnly_9(bool value)
	{
		___readOnly_9 = value;
	}
};

struct PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_StaticFields
{
public:
	// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptorCollection::Empty
	PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_StaticFields, ___Empty_0)); }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * get_Empty_0() const { return ___Empty_0; }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
};


// SR
struct  SR_t2F7561FCB969F195357F5FC519E0C18B01A91A9B  : public RuntimeObject
{
public:

public:
};


// System.Runtime.Serialization.SerializationInfo
struct  SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1  : public RuntimeObject
{
public:
	// System.String[] System.Runtime.Serialization.SerializationInfo::m_members
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_members_3;
	// System.Object[] System.Runtime.Serialization.SerializationInfo::m_data
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_data_4;
	// System.Type[] System.Runtime.Serialization.SerializationInfo::m_types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___m_types_5;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Runtime.Serialization.SerializationInfo::m_nameToIndex
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___m_nameToIndex_6;
	// System.Int32 System.Runtime.Serialization.SerializationInfo::m_currMember
	int32_t ___m_currMember_7;
	// System.Runtime.Serialization.IFormatterConverter System.Runtime.Serialization.SerializationInfo::m_converter
	RuntimeObject* ___m_converter_8;
	// System.String System.Runtime.Serialization.SerializationInfo::m_fullTypeName
	String_t* ___m_fullTypeName_9;
	// System.String System.Runtime.Serialization.SerializationInfo::m_assemName
	String_t* ___m_assemName_10;
	// System.Type System.Runtime.Serialization.SerializationInfo::objectType
	Type_t * ___objectType_11;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isFullTypeNameSetExplicit
	bool ___isFullTypeNameSetExplicit_12;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::isAssemblyNameSetExplicit
	bool ___isAssemblyNameSetExplicit_13;
	// System.Boolean System.Runtime.Serialization.SerializationInfo::requireSameTokenInPartialTrust
	bool ___requireSameTokenInPartialTrust_14;

public:
	inline static int32_t get_offset_of_m_members_3() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_members_3)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_members_3() const { return ___m_members_3; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_members_3() { return &___m_members_3; }
	inline void set_m_members_3(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_members_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_members_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_data_4() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_data_4)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_data_4() const { return ___m_data_4; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_data_4() { return &___m_data_4; }
	inline void set_m_data_4(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_data_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_types_5() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_types_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_m_types_5() const { return ___m_types_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_m_types_5() { return &___m_types_5; }
	inline void set_m_types_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___m_types_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_types_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_nameToIndex_6() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_nameToIndex_6)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_m_nameToIndex_6() const { return ___m_nameToIndex_6; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_m_nameToIndex_6() { return &___m_nameToIndex_6; }
	inline void set_m_nameToIndex_6(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___m_nameToIndex_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_nameToIndex_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_currMember_7() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_currMember_7)); }
	inline int32_t get_m_currMember_7() const { return ___m_currMember_7; }
	inline int32_t* get_address_of_m_currMember_7() { return &___m_currMember_7; }
	inline void set_m_currMember_7(int32_t value)
	{
		___m_currMember_7 = value;
	}

	inline static int32_t get_offset_of_m_converter_8() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_converter_8)); }
	inline RuntimeObject* get_m_converter_8() const { return ___m_converter_8; }
	inline RuntimeObject** get_address_of_m_converter_8() { return &___m_converter_8; }
	inline void set_m_converter_8(RuntimeObject* value)
	{
		___m_converter_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_converter_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTypeName_9() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_fullTypeName_9)); }
	inline String_t* get_m_fullTypeName_9() const { return ___m_fullTypeName_9; }
	inline String_t** get_address_of_m_fullTypeName_9() { return &___m_fullTypeName_9; }
	inline void set_m_fullTypeName_9(String_t* value)
	{
		___m_fullTypeName_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTypeName_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_assemName_10() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___m_assemName_10)); }
	inline String_t* get_m_assemName_10() const { return ___m_assemName_10; }
	inline String_t** get_address_of_m_assemName_10() { return &___m_assemName_10; }
	inline void set_m_assemName_10(String_t* value)
	{
		___m_assemName_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_assemName_10), (void*)value);
	}

	inline static int32_t get_offset_of_objectType_11() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___objectType_11)); }
	inline Type_t * get_objectType_11() const { return ___objectType_11; }
	inline Type_t ** get_address_of_objectType_11() { return &___objectType_11; }
	inline void set_objectType_11(Type_t * value)
	{
		___objectType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectType_11), (void*)value);
	}

	inline static int32_t get_offset_of_isFullTypeNameSetExplicit_12() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isFullTypeNameSetExplicit_12)); }
	inline bool get_isFullTypeNameSetExplicit_12() const { return ___isFullTypeNameSetExplicit_12; }
	inline bool* get_address_of_isFullTypeNameSetExplicit_12() { return &___isFullTypeNameSetExplicit_12; }
	inline void set_isFullTypeNameSetExplicit_12(bool value)
	{
		___isFullTypeNameSetExplicit_12 = value;
	}

	inline static int32_t get_offset_of_isAssemblyNameSetExplicit_13() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___isAssemblyNameSetExplicit_13)); }
	inline bool get_isAssemblyNameSetExplicit_13() const { return ___isAssemblyNameSetExplicit_13; }
	inline bool* get_address_of_isAssemblyNameSetExplicit_13() { return &___isAssemblyNameSetExplicit_13; }
	inline void set_isAssemblyNameSetExplicit_13(bool value)
	{
		___isAssemblyNameSetExplicit_13 = value;
	}

	inline static int32_t get_offset_of_requireSameTokenInPartialTrust_14() { return static_cast<int32_t>(offsetof(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1, ___requireSameTokenInPartialTrust_14)); }
	inline bool get_requireSameTokenInPartialTrust_14() const { return ___requireSameTokenInPartialTrust_14; }
	inline bool* get_address_of_requireSameTokenInPartialTrust_14() { return &___requireSameTokenInPartialTrust_14; }
	inline void set_requireSameTokenInPartialTrust_14(bool value)
	{
		___requireSameTokenInPartialTrust_14 = value;
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Version
struct  Version_tBDAEDED25425A1D09910468B8BD1759115646E3C  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.ComponentModel.Component
struct  Component_t015539CFEAEEBFD7619041FE006475373E0D71DF  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.ComponentModel.ISite System.ComponentModel.Component::site
	RuntimeObject* ___site_2;
	// System.ComponentModel.EventHandlerList System.ComponentModel.Component::events
	EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * ___events_3;

public:
	inline static int32_t get_offset_of_site_2() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___site_2)); }
	inline RuntimeObject* get_site_2() const { return ___site_2; }
	inline RuntimeObject** get_address_of_site_2() { return &___site_2; }
	inline void set_site_2(RuntimeObject* value)
	{
		___site_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___site_2), (void*)value);
	}

	inline static int32_t get_offset_of_events_3() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF, ___events_3)); }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * get_events_3() const { return ___events_3; }
	inline EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 ** get_address_of_events_3() { return &___events_3; }
	inline void set_events_3(EventHandlerList_t085C99C5BEAB950B4B76BB13379FBCA0AA75A714 * value)
	{
		___events_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___events_3), (void*)value);
	}
};

struct Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields
{
public:
	// System.Object System.ComponentModel.Component::EventDisposed
	RuntimeObject * ___EventDisposed_1;

public:
	inline static int32_t get_offset_of_EventDisposed_1() { return static_cast<int32_t>(offsetof(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_StaticFields, ___EventDisposed_1)); }
	inline RuntimeObject * get_EventDisposed_1() const { return ___EventDisposed_1; }
	inline RuntimeObject ** get_address_of_EventDisposed_1() { return &___EventDisposed_1; }
	inline void set_EventDisposed_1(RuntimeObject * value)
	{
		___EventDisposed_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EventDisposed_1), (void*)value);
	}
};


// System.Data.Common.DataRecordInternal
struct  DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24  : public DbDataRecord_t02A7715354313B29BA4878743EBBECFA9884AA70
{
public:
	// System.Data.Common.SchemaInfo[] System.Data.Common.DataRecordInternal::_schemaInfo
	SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* ____schemaInfo_0;
	// System.Object[] System.Data.Common.DataRecordInternal::_values
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____values_1;
	// System.ComponentModel.PropertyDescriptorCollection System.Data.Common.DataRecordInternal::_propertyDescriptors
	PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * ____propertyDescriptors_2;
	// System.Data.ProviderBase.FieldNameLookup System.Data.Common.DataRecordInternal::_fieldNameLookup
	FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * ____fieldNameLookup_3;

public:
	inline static int32_t get_offset_of__schemaInfo_0() { return static_cast<int32_t>(offsetof(DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24, ____schemaInfo_0)); }
	inline SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* get__schemaInfo_0() const { return ____schemaInfo_0; }
	inline SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA** get_address_of__schemaInfo_0() { return &____schemaInfo_0; }
	inline void set__schemaInfo_0(SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* value)
	{
		____schemaInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____schemaInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of__values_1() { return static_cast<int32_t>(offsetof(DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24, ____values_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__values_1() const { return ____values_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__values_1() { return &____values_1; }
	inline void set__values_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____values_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____values_1), (void*)value);
	}

	inline static int32_t get_offset_of__propertyDescriptors_2() { return static_cast<int32_t>(offsetof(DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24, ____propertyDescriptors_2)); }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * get__propertyDescriptors_2() const { return ____propertyDescriptors_2; }
	inline PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F ** get_address_of__propertyDescriptors_2() { return &____propertyDescriptors_2; }
	inline void set__propertyDescriptors_2(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * value)
	{
		____propertyDescriptors_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyDescriptors_2), (void*)value);
	}

	inline static int32_t get_offset_of__fieldNameLookup_3() { return static_cast<int32_t>(offsetof(DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24, ____fieldNameLookup_3)); }
	inline FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * get__fieldNameLookup_3() const { return ____fieldNameLookup_3; }
	inline FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 ** get_address_of__fieldNameLookup_3() { return &____fieldNameLookup_3; }
	inline void set__fieldNameLookup_3(FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * value)
	{
		____fieldNameLookup_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fieldNameLookup_3), (void*)value);
	}
};


// System.Data.Common.DbDataReader
struct  DbDataReader_t50481AE1497CEE437BDA56F2E92B6567D3222C45  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};


// System.Data.Common.DbParameter
struct  DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};


// System.Data.Common.DbParameterCollection
struct  DbParameterCollection_t53857899F148EF54A7C90F169557DD134B5297D2  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Data.ProviderBase.FieldNameLookup
struct  FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39  : public BasicFieldNameLookup_t0DBE9A973608468F7A7E70CD0E0F1D0651B0F0D1
{
public:
	// System.Int32 System.Data.ProviderBase.FieldNameLookup::_defaultLocaleID
	int32_t ____defaultLocaleID_1;

public:
	inline static int32_t get_offset_of__defaultLocaleID_1() { return static_cast<int32_t>(offsetof(FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39, ____defaultLocaleID_1)); }
	inline int32_t get__defaultLocaleID_1() const { return ____defaultLocaleID_1; }
	inline int32_t* get_address_of__defaultLocaleID_1() { return &____defaultLocaleID_1; }
	inline void set__defaultLocaleID_1(int32_t value)
	{
		____defaultLocaleID_1 = value;
	}
};


// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.ComponentModel.PropertyDescriptor
struct  PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B  : public MemberDescriptor_t92E4AE18636FFD5150830060BBA071CCF3A67A6F
{
public:
	// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::converter
	TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * ___converter_11;
	// System.Object[] System.ComponentModel.PropertyDescriptor::editors
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___editors_12;
	// System.Type[] System.ComponentModel.PropertyDescriptor::editorTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___editorTypes_13;
	// System.Int32 System.ComponentModel.PropertyDescriptor::editorCount
	int32_t ___editorCount_14;

public:
	inline static int32_t get_offset_of_converter_11() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___converter_11)); }
	inline TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * get_converter_11() const { return ___converter_11; }
	inline TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 ** get_address_of_converter_11() { return &___converter_11; }
	inline void set_converter_11(TypeConverter_t004F185B630F00F509F08BD8F8D82471867323B4 * value)
	{
		___converter_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___converter_11), (void*)value);
	}

	inline static int32_t get_offset_of_editors_12() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editors_12)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_editors_12() const { return ___editors_12; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_editors_12() { return &___editors_12; }
	inline void set_editors_12(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___editors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editors_12), (void*)value);
	}

	inline static int32_t get_offset_of_editorTypes_13() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editorTypes_13)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_editorTypes_13() const { return ___editorTypes_13; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_editorTypes_13() { return &___editorTypes_13; }
	inline void set_editorTypes_13(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___editorTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___editorTypes_13), (void*)value);
	}

	inline static int32_t get_offset_of_editorCount_14() { return static_cast<int32_t>(offsetof(PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B, ___editorCount_14)); }
	inline int32_t get_editorCount_14() const { return ___editorCount_14; }
	inline int32_t* get_address_of_editorCount_14() { return &___editorCount_14; }
	inline void set_editorCount_14(int32_t value)
	{
		___editorCount_14 = value;
	}
};


// System.Data.Common.SchemaInfo
struct  SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5 
{
public:
	// System.String System.Data.Common.SchemaInfo::name
	String_t* ___name_0;
	// System.String System.Data.Common.SchemaInfo::typeName
	String_t* ___typeName_1;
	// System.Type System.Data.Common.SchemaInfo::type
	Type_t * ___type_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_typeName_1() { return static_cast<int32_t>(offsetof(SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5, ___typeName_1)); }
	inline String_t* get_typeName_1() const { return ___typeName_1; }
	inline String_t** get_address_of_typeName_1() { return &___typeName_1; }
	inline void set_typeName_1(String_t* value)
	{
		___typeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeName_1), (void*)value);
	}

	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5, ___type_2)); }
	inline Type_t * get_type_2() const { return ___type_2; }
	inline Type_t ** get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(Type_t * value)
	{
		___type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Data.Common.SchemaInfo
struct SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshaled_pinvoke
{
	char* ___name_0;
	char* ___typeName_1;
	Type_t * ___type_2;
};
// Native definition for COM marshalling of System.Data.Common.SchemaInfo
struct SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___typeName_1;
	Type_t * ___type_2;
};

// System.Diagnostics.Tracing.SessionMask
struct  SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C 
{
public:
	// System.UInt32 System.Diagnostics.Tracing.SessionMask::m_mask
	uint32_t ___m_mask_0;

public:
	inline static int32_t get_offset_of_m_mask_0() { return static_cast<int32_t>(offsetof(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C, ___m_mask_0)); }
	inline uint32_t get_m_mask_0() const { return ___m_mask_0; }
	inline uint32_t* get_address_of_m_mask_0() { return &___m_mask_0; }
	inline void set_m_mask_0(uint32_t value)
	{
		___m_mask_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Data.Common.ADP
struct  ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525  : public RuntimeObject
{
public:

public:
};

struct ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields
{
public:
	// System.Type System.Data.Common.ADP::s_stackOverflowType
	Type_t * ___s_stackOverflowType_0;
	// System.Type System.Data.Common.ADP::s_outOfMemoryType
	Type_t * ___s_outOfMemoryType_1;
	// System.Type System.Data.Common.ADP::s_threadAbortType
	Type_t * ___s_threadAbortType_2;
	// System.Type System.Data.Common.ADP::s_nullReferenceType
	Type_t * ___s_nullReferenceType_3;
	// System.Type System.Data.Common.ADP::s_accessViolationType
	Type_t * ___s_accessViolationType_4;
	// System.Type System.Data.Common.ADP::s_securityType
	Type_t * ___s_securityType_5;
	// System.Boolean System.Data.Common.ADP::IsWindowsNT
	bool ___IsWindowsNT_6;
	// System.Boolean System.Data.Common.ADP::IsPlatformNT5
	bool ___IsPlatformNT5_7;
	// System.String System.Data.Common.ADP::StrEmpty
	String_t* ___StrEmpty_8;
	// System.String[] System.Data.Common.ADP::AzureSqlServerEndpoints
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___AzureSqlServerEndpoints_9;
	// System.IntPtr System.Data.Common.ADP::PtrZero
	intptr_t ___PtrZero_10;
	// System.Int32 System.Data.Common.ADP::PtrSize
	int32_t ___PtrSize_11;

public:
	inline static int32_t get_offset_of_s_stackOverflowType_0() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___s_stackOverflowType_0)); }
	inline Type_t * get_s_stackOverflowType_0() const { return ___s_stackOverflowType_0; }
	inline Type_t ** get_address_of_s_stackOverflowType_0() { return &___s_stackOverflowType_0; }
	inline void set_s_stackOverflowType_0(Type_t * value)
	{
		___s_stackOverflowType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_stackOverflowType_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_outOfMemoryType_1() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___s_outOfMemoryType_1)); }
	inline Type_t * get_s_outOfMemoryType_1() const { return ___s_outOfMemoryType_1; }
	inline Type_t ** get_address_of_s_outOfMemoryType_1() { return &___s_outOfMemoryType_1; }
	inline void set_s_outOfMemoryType_1(Type_t * value)
	{
		___s_outOfMemoryType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_outOfMemoryType_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_threadAbortType_2() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___s_threadAbortType_2)); }
	inline Type_t * get_s_threadAbortType_2() const { return ___s_threadAbortType_2; }
	inline Type_t ** get_address_of_s_threadAbortType_2() { return &___s_threadAbortType_2; }
	inline void set_s_threadAbortType_2(Type_t * value)
	{
		___s_threadAbortType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_threadAbortType_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_nullReferenceType_3() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___s_nullReferenceType_3)); }
	inline Type_t * get_s_nullReferenceType_3() const { return ___s_nullReferenceType_3; }
	inline Type_t ** get_address_of_s_nullReferenceType_3() { return &___s_nullReferenceType_3; }
	inline void set_s_nullReferenceType_3(Type_t * value)
	{
		___s_nullReferenceType_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_nullReferenceType_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_accessViolationType_4() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___s_accessViolationType_4)); }
	inline Type_t * get_s_accessViolationType_4() const { return ___s_accessViolationType_4; }
	inline Type_t ** get_address_of_s_accessViolationType_4() { return &___s_accessViolationType_4; }
	inline void set_s_accessViolationType_4(Type_t * value)
	{
		___s_accessViolationType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_accessViolationType_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_securityType_5() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___s_securityType_5)); }
	inline Type_t * get_s_securityType_5() const { return ___s_securityType_5; }
	inline Type_t ** get_address_of_s_securityType_5() { return &___s_securityType_5; }
	inline void set_s_securityType_5(Type_t * value)
	{
		___s_securityType_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_securityType_5), (void*)value);
	}

	inline static int32_t get_offset_of_IsWindowsNT_6() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___IsWindowsNT_6)); }
	inline bool get_IsWindowsNT_6() const { return ___IsWindowsNT_6; }
	inline bool* get_address_of_IsWindowsNT_6() { return &___IsWindowsNT_6; }
	inline void set_IsWindowsNT_6(bool value)
	{
		___IsWindowsNT_6 = value;
	}

	inline static int32_t get_offset_of_IsPlatformNT5_7() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___IsPlatformNT5_7)); }
	inline bool get_IsPlatformNT5_7() const { return ___IsPlatformNT5_7; }
	inline bool* get_address_of_IsPlatformNT5_7() { return &___IsPlatformNT5_7; }
	inline void set_IsPlatformNT5_7(bool value)
	{
		___IsPlatformNT5_7 = value;
	}

	inline static int32_t get_offset_of_StrEmpty_8() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___StrEmpty_8)); }
	inline String_t* get_StrEmpty_8() const { return ___StrEmpty_8; }
	inline String_t** get_address_of_StrEmpty_8() { return &___StrEmpty_8; }
	inline void set_StrEmpty_8(String_t* value)
	{
		___StrEmpty_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StrEmpty_8), (void*)value);
	}

	inline static int32_t get_offset_of_AzureSqlServerEndpoints_9() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___AzureSqlServerEndpoints_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_AzureSqlServerEndpoints_9() const { return ___AzureSqlServerEndpoints_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_AzureSqlServerEndpoints_9() { return &___AzureSqlServerEndpoints_9; }
	inline void set_AzureSqlServerEndpoints_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___AzureSqlServerEndpoints_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AzureSqlServerEndpoints_9), (void*)value);
	}

	inline static int32_t get_offset_of_PtrZero_10() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___PtrZero_10)); }
	inline intptr_t get_PtrZero_10() const { return ___PtrZero_10; }
	inline intptr_t* get_address_of_PtrZero_10() { return &___PtrZero_10; }
	inline void set_PtrZero_10(intptr_t value)
	{
		___PtrZero_10 = value;
	}

	inline static int32_t get_offset_of_PtrSize_11() { return static_cast<int32_t>(offsetof(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields, ___PtrSize_11)); }
	inline int32_t get_PtrSize_11() const { return ___PtrSize_11; }
	inline int32_t* get_address_of_PtrSize_11() { return &___PtrSize_11; }
	inline void set_PtrSize_11(int32_t value)
	{
		___PtrSize_11 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.CommandBehavior
struct  CommandBehavior_t98EB906BC1C4462CEC1E7230411E76F6A343979B 
{
public:
	// System.Int32 System.Data.CommandBehavior::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CommandBehavior_t98EB906BC1C4462CEC1E7230411E76F6A343979B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.ConnectionState
struct  ConnectionState_tFB7A5BDFD714883B113EAAE203076578916C3A43 
{
public:
	// System.Int32 System.Data.ConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConnectionState_tFB7A5BDFD714883B113EAAE203076578916C3A43, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.Common.DbCommand
struct  DbCommand_tB125F25AD82F85EA3DC7AA8C0556C4788E5D72CC  : public Component_t015539CFEAEEBFD7619041FE006475373E0D71DF
{
public:

public:
};


// System.Data.Common.DbConnection
struct  DbConnection_t10FE0E1B88AE954D5CDB74A512B018A8D2185B50  : public Component_t015539CFEAEEBFD7619041FE006475373E0D71DF
{
public:

public:
};


// System.Diagnostics.Tracing.EventKeywords
struct  EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC 
{
public:
	// System.Int64 System.Diagnostics.Tracing.EventKeywords::value__
	int64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventKeywords_t72BC5DF558968022E52CFA840BC065E4278A5CFC, ___value___2)); }
	inline int64_t get_value___2() const { return ___value___2; }
	inline int64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int64_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventLevel
struct  EventLevel_t094E14CCC4B697F0F2FF0BFAE792EC0A5DD6614D 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventLevel_t094E14CCC4B697F0F2FF0BFAE792EC0A5DD6614D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Diagnostics.Tracing.EventSourceSettings
struct  EventSourceSettings_t8D2D1F0C067D425607BA72DC3DB857A15F0A8E57 
{
public:
	// System.Int32 System.Diagnostics.Tracing.EventSourceSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventSourceSettings_t8D2D1F0C067D425607BA72DC3DB857A15F0A8E57, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.PlatformID
struct  PlatformID_tAE7D984C08AF0DB2E5398AAE4842B704DBDDE159 
{
public:
	// System.Int32 System.PlatformID::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlatformID_tAE7D984C08AF0DB2E5398AAE4842B704DBDDE159, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Data.Common.DbEnumerator/DbColumnDescriptor
struct  DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38  : public PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B
{
public:
	// System.Int32 System.Data.Common.DbEnumerator/DbColumnDescriptor::_ordinal
	int32_t ____ordinal_15;
	// System.Type System.Data.Common.DbEnumerator/DbColumnDescriptor::_type
	Type_t * ____type_16;

public:
	inline static int32_t get_offset_of__ordinal_15() { return static_cast<int32_t>(offsetof(DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38, ____ordinal_15)); }
	inline int32_t get__ordinal_15() const { return ____ordinal_15; }
	inline int32_t* get_address_of__ordinal_15() { return &____ordinal_15; }
	inline void set__ordinal_15(int32_t value)
	{
		____ordinal_15 = value;
	}

	inline static int32_t get_offset_of__type_16() { return static_cast<int32_t>(offsetof(DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38, ____type_16)); }
	inline Type_t * get__type_16() const { return ____type_16; }
	inline Type_t ** get_address_of__type_16() { return &____type_16; }
	inline void set__type_16(Type_t * value)
	{
		____type_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____type_16), (void*)value);
	}
};


// System.Diagnostics.Tracing.EventSource
struct  EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A  : public RuntimeObject
{
public:
	// System.Byte[] System.Diagnostics.Tracing.EventSource::providerMetadata
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___providerMetadata_0;
	// System.String System.Diagnostics.Tracing.EventSource::m_name
	String_t* ___m_name_1;
	// System.Int32 System.Diagnostics.Tracing.EventSource::m_id
	int32_t ___m_id_2;
	// System.Guid System.Diagnostics.Tracing.EventSource::m_guid
	Guid_t  ___m_guid_3;
	// System.Diagnostics.Tracing.EventSource/EventMetadata[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_eventData
	EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* ___m_eventData_4;
	// System.Byte[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_rawManifest
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___m_rawManifest_5;
	// System.EventHandler`1<System.Diagnostics.Tracing.EventCommandEventArgs> System.Diagnostics.Tracing.EventSource::m_eventCommandExecuted
	EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * ___m_eventCommandExecuted_6;
	// System.Diagnostics.Tracing.EventSourceSettings System.Diagnostics.Tracing.EventSource::m_config
	int32_t ___m_config_7;
	// System.Boolean System.Diagnostics.Tracing.EventSource::m_eventSourceEnabled
	bool ___m_eventSourceEnabled_8;
	// System.Diagnostics.Tracing.EventLevel System.Diagnostics.Tracing.EventSource::m_level
	int32_t ___m_level_9;
	// System.Diagnostics.Tracing.EventKeywords System.Diagnostics.Tracing.EventSource::m_matchAnyKeyword
	int64_t ___m_matchAnyKeyword_10;
	// System.Diagnostics.Tracing.EventDispatcher modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_Dispatchers
	EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * ___m_Dispatchers_11;
	// System.Diagnostics.Tracing.EventSource/OverideEventProvider modreq(System.Runtime.CompilerServices.IsVolatile) System.Diagnostics.Tracing.EventSource::m_provider
	OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * ___m_provider_12;
	// System.Boolean System.Diagnostics.Tracing.EventSource::m_completelyInited
	bool ___m_completelyInited_13;
	// System.Exception System.Diagnostics.Tracing.EventSource::m_constructionException
	Exception_t * ___m_constructionException_14;
	// System.Byte System.Diagnostics.Tracing.EventSource::m_outOfBandMessageCount
	uint8_t ___m_outOfBandMessageCount_15;
	// System.Diagnostics.Tracing.EventCommandEventArgs System.Diagnostics.Tracing.EventSource::m_deferredCommands
	EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * ___m_deferredCommands_16;
	// System.String[] System.Diagnostics.Tracing.EventSource::m_traits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_traits_17;
	// System.Diagnostics.Tracing.SessionMask System.Diagnostics.Tracing.EventSource::m_curLiveSessions
	SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  ___m_curLiveSessions_20;
	// System.Diagnostics.Tracing.EtwSession[] System.Diagnostics.Tracing.EventSource::m_etwSessionIdMap
	EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* ___m_etwSessionIdMap_21;
	// System.Collections.Generic.List`1<System.Diagnostics.Tracing.EtwSession> System.Diagnostics.Tracing.EventSource::m_legacySessions
	List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * ___m_legacySessions_22;
	// System.Int64 System.Diagnostics.Tracing.EventSource::m_keywordTriggers
	int64_t ___m_keywordTriggers_23;
	// System.Diagnostics.Tracing.SessionMask System.Diagnostics.Tracing.EventSource::m_activityFilteringForETWEnabled
	SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  ___m_activityFilteringForETWEnabled_24;
	// System.Diagnostics.Tracing.ActivityTracker System.Diagnostics.Tracing.EventSource::m_activityTracker
	ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * ___m_activityTracker_26;

public:
	inline static int32_t get_offset_of_providerMetadata_0() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___providerMetadata_0)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_providerMetadata_0() const { return ___providerMetadata_0; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_providerMetadata_0() { return &___providerMetadata_0; }
	inline void set_providerMetadata_0(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___providerMetadata_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___providerMetadata_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_1() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_name_1)); }
	inline String_t* get_m_name_1() const { return ___m_name_1; }
	inline String_t** get_address_of_m_name_1() { return &___m_name_1; }
	inline void set_m_name_1(String_t* value)
	{
		___m_name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_id_2() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_id_2)); }
	inline int32_t get_m_id_2() const { return ___m_id_2; }
	inline int32_t* get_address_of_m_id_2() { return &___m_id_2; }
	inline void set_m_id_2(int32_t value)
	{
		___m_id_2 = value;
	}

	inline static int32_t get_offset_of_m_guid_3() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_guid_3)); }
	inline Guid_t  get_m_guid_3() const { return ___m_guid_3; }
	inline Guid_t * get_address_of_m_guid_3() { return &___m_guid_3; }
	inline void set_m_guid_3(Guid_t  value)
	{
		___m_guid_3 = value;
	}

	inline static int32_t get_offset_of_m_eventData_4() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventData_4)); }
	inline EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* get_m_eventData_4() const { return ___m_eventData_4; }
	inline EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65** get_address_of_m_eventData_4() { return &___m_eventData_4; }
	inline void set_m_eventData_4(EventMetadataU5BU5D_tA47DD00993E10FC546C50806521F02DFA47E3A65* value)
	{
		___m_eventData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventData_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_rawManifest_5() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_rawManifest_5)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_m_rawManifest_5() const { return ___m_rawManifest_5; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_m_rawManifest_5() { return &___m_rawManifest_5; }
	inline void set_m_rawManifest_5(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___m_rawManifest_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rawManifest_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_eventCommandExecuted_6() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventCommandExecuted_6)); }
	inline EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * get_m_eventCommandExecuted_6() const { return ___m_eventCommandExecuted_6; }
	inline EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 ** get_address_of_m_eventCommandExecuted_6() { return &___m_eventCommandExecuted_6; }
	inline void set_m_eventCommandExecuted_6(EventHandler_1_tC149D38314B7B8BCB3B1979BAE654C6661706875 * value)
	{
		___m_eventCommandExecuted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eventCommandExecuted_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_config_7() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_config_7)); }
	inline int32_t get_m_config_7() const { return ___m_config_7; }
	inline int32_t* get_address_of_m_config_7() { return &___m_config_7; }
	inline void set_m_config_7(int32_t value)
	{
		___m_config_7 = value;
	}

	inline static int32_t get_offset_of_m_eventSourceEnabled_8() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_eventSourceEnabled_8)); }
	inline bool get_m_eventSourceEnabled_8() const { return ___m_eventSourceEnabled_8; }
	inline bool* get_address_of_m_eventSourceEnabled_8() { return &___m_eventSourceEnabled_8; }
	inline void set_m_eventSourceEnabled_8(bool value)
	{
		___m_eventSourceEnabled_8 = value;
	}

	inline static int32_t get_offset_of_m_level_9() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_level_9)); }
	inline int32_t get_m_level_9() const { return ___m_level_9; }
	inline int32_t* get_address_of_m_level_9() { return &___m_level_9; }
	inline void set_m_level_9(int32_t value)
	{
		___m_level_9 = value;
	}

	inline static int32_t get_offset_of_m_matchAnyKeyword_10() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_matchAnyKeyword_10)); }
	inline int64_t get_m_matchAnyKeyword_10() const { return ___m_matchAnyKeyword_10; }
	inline int64_t* get_address_of_m_matchAnyKeyword_10() { return &___m_matchAnyKeyword_10; }
	inline void set_m_matchAnyKeyword_10(int64_t value)
	{
		___m_matchAnyKeyword_10 = value;
	}

	inline static int32_t get_offset_of_m_Dispatchers_11() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_Dispatchers_11)); }
	inline EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * get_m_Dispatchers_11() const { return ___m_Dispatchers_11; }
	inline EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 ** get_address_of_m_Dispatchers_11() { return &___m_Dispatchers_11; }
	inline void set_m_Dispatchers_11(EventDispatcher_t0B67C5EF481448CE97B9CF862B00F173581CFF81 * value)
	{
		___m_Dispatchers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dispatchers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_provider_12() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_provider_12)); }
	inline OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * get_m_provider_12() const { return ___m_provider_12; }
	inline OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 ** get_address_of_m_provider_12() { return &___m_provider_12; }
	inline void set_m_provider_12(OverideEventProvider_tFE8809F2BF8AC28EC116E778F8154AFA8F2DE940 * value)
	{
		___m_provider_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_provider_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_completelyInited_13() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_completelyInited_13)); }
	inline bool get_m_completelyInited_13() const { return ___m_completelyInited_13; }
	inline bool* get_address_of_m_completelyInited_13() { return &___m_completelyInited_13; }
	inline void set_m_completelyInited_13(bool value)
	{
		___m_completelyInited_13 = value;
	}

	inline static int32_t get_offset_of_m_constructionException_14() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_constructionException_14)); }
	inline Exception_t * get_m_constructionException_14() const { return ___m_constructionException_14; }
	inline Exception_t ** get_address_of_m_constructionException_14() { return &___m_constructionException_14; }
	inline void set_m_constructionException_14(Exception_t * value)
	{
		___m_constructionException_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_constructionException_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_outOfBandMessageCount_15() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_outOfBandMessageCount_15)); }
	inline uint8_t get_m_outOfBandMessageCount_15() const { return ___m_outOfBandMessageCount_15; }
	inline uint8_t* get_address_of_m_outOfBandMessageCount_15() { return &___m_outOfBandMessageCount_15; }
	inline void set_m_outOfBandMessageCount_15(uint8_t value)
	{
		___m_outOfBandMessageCount_15 = value;
	}

	inline static int32_t get_offset_of_m_deferredCommands_16() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_deferredCommands_16)); }
	inline EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * get_m_deferredCommands_16() const { return ___m_deferredCommands_16; }
	inline EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F ** get_address_of_m_deferredCommands_16() { return &___m_deferredCommands_16; }
	inline void set_m_deferredCommands_16(EventCommandEventArgs_t6A4FBECB14226572789A48B494DE5040F6CFB55F * value)
	{
		___m_deferredCommands_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_deferredCommands_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_traits_17() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_traits_17)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_traits_17() const { return ___m_traits_17; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_traits_17() { return &___m_traits_17; }
	inline void set_m_traits_17(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_traits_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_traits_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_curLiveSessions_20() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_curLiveSessions_20)); }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  get_m_curLiveSessions_20() const { return ___m_curLiveSessions_20; }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C * get_address_of_m_curLiveSessions_20() { return &___m_curLiveSessions_20; }
	inline void set_m_curLiveSessions_20(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  value)
	{
		___m_curLiveSessions_20 = value;
	}

	inline static int32_t get_offset_of_m_etwSessionIdMap_21() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_etwSessionIdMap_21)); }
	inline EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* get_m_etwSessionIdMap_21() const { return ___m_etwSessionIdMap_21; }
	inline EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281** get_address_of_m_etwSessionIdMap_21() { return &___m_etwSessionIdMap_21; }
	inline void set_m_etwSessionIdMap_21(EtwSessionU5BU5D_tBF78E8D76BAED9350E219403C6C4D5074FDDD281* value)
	{
		___m_etwSessionIdMap_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_etwSessionIdMap_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_legacySessions_22() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_legacySessions_22)); }
	inline List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * get_m_legacySessions_22() const { return ___m_legacySessions_22; }
	inline List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D ** get_address_of_m_legacySessions_22() { return &___m_legacySessions_22; }
	inline void set_m_legacySessions_22(List_1_t1F31B37A331F5C72871EA5EFAA52B1C7A9516C3D * value)
	{
		___m_legacySessions_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_legacySessions_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_keywordTriggers_23() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_keywordTriggers_23)); }
	inline int64_t get_m_keywordTriggers_23() const { return ___m_keywordTriggers_23; }
	inline int64_t* get_address_of_m_keywordTriggers_23() { return &___m_keywordTriggers_23; }
	inline void set_m_keywordTriggers_23(int64_t value)
	{
		___m_keywordTriggers_23 = value;
	}

	inline static int32_t get_offset_of_m_activityFilteringForETWEnabled_24() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_activityFilteringForETWEnabled_24)); }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  get_m_activityFilteringForETWEnabled_24() const { return ___m_activityFilteringForETWEnabled_24; }
	inline SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C * get_address_of_m_activityFilteringForETWEnabled_24() { return &___m_activityFilteringForETWEnabled_24; }
	inline void set_m_activityFilteringForETWEnabled_24(SessionMask_t5D3DA45B4CFFF915E80FA75A98E87217A177402C  value)
	{
		___m_activityFilteringForETWEnabled_24 = value;
	}

	inline static int32_t get_offset_of_m_activityTracker_26() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A, ___m_activityTracker_26)); }
	inline ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * get_m_activityTracker_26() const { return ___m_activityTracker_26; }
	inline ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 ** get_address_of_m_activityTracker_26() { return &___m_activityTracker_26; }
	inline void set_m_activityTracker_26(ActivityTracker_t6FDA1FC2778C2CA9C0052CE8DCB312AA393ECB46 * value)
	{
		___m_activityTracker_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_activityTracker_26), (void*)value);
	}
};

struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields
{
public:
	// System.UInt32 System.Diagnostics.Tracing.EventSource::s_currentPid
	uint32_t ___s_currentPid_18;
	// System.Action`1<System.Guid> System.Diagnostics.Tracing.EventSource::s_activityDying
	Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * ___s_activityDying_25;
	// System.Byte[] System.Diagnostics.Tracing.EventSource::namespaceBytes
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___namespaceBytes_27;
	// System.Guid System.Diagnostics.Tracing.EventSource::AspNetEventSourceGuid
	Guid_t  ___AspNetEventSourceGuid_28;

public:
	inline static int32_t get_offset_of_s_currentPid_18() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___s_currentPid_18)); }
	inline uint32_t get_s_currentPid_18() const { return ___s_currentPid_18; }
	inline uint32_t* get_address_of_s_currentPid_18() { return &___s_currentPid_18; }
	inline void set_s_currentPid_18(uint32_t value)
	{
		___s_currentPid_18 = value;
	}

	inline static int32_t get_offset_of_s_activityDying_25() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___s_activityDying_25)); }
	inline Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * get_s_activityDying_25() const { return ___s_activityDying_25; }
	inline Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 ** get_address_of_s_activityDying_25() { return &___s_activityDying_25; }
	inline void set_s_activityDying_25(Action_1_t633A0C52E79A9DAF72CA35AD6B20A4600C9C1127 * value)
	{
		___s_activityDying_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activityDying_25), (void*)value);
	}

	inline static int32_t get_offset_of_namespaceBytes_27() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___namespaceBytes_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_namespaceBytes_27() const { return ___namespaceBytes_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_namespaceBytes_27() { return &___namespaceBytes_27; }
	inline void set_namespaceBytes_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___namespaceBytes_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namespaceBytes_27), (void*)value);
	}

	inline static int32_t get_offset_of_AspNetEventSourceGuid_28() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_StaticFields, ___AspNetEventSourceGuid_28)); }
	inline Guid_t  get_AspNetEventSourceGuid_28() const { return ___AspNetEventSourceGuid_28; }
	inline Guid_t * get_address_of_AspNetEventSourceGuid_28() { return &___AspNetEventSourceGuid_28; }
	inline void set_AspNetEventSourceGuid_28(Guid_t  value)
	{
		___AspNetEventSourceGuid_28 = value;
	}
};

struct EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ThreadStaticFields
{
public:
	// System.Byte System.Diagnostics.Tracing.EventSource::m_EventSourceExceptionRecurenceCount
	uint8_t ___m_EventSourceExceptionRecurenceCount_19;

public:
	inline static int32_t get_offset_of_m_EventSourceExceptionRecurenceCount_19() { return static_cast<int32_t>(offsetof(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_ThreadStaticFields, ___m_EventSourceExceptionRecurenceCount_19)); }
	inline uint8_t get_m_EventSourceExceptionRecurenceCount_19() const { return ___m_EventSourceExceptionRecurenceCount_19; }
	inline uint8_t* get_address_of_m_EventSourceExceptionRecurenceCount_19() { return &___m_EventSourceExceptionRecurenceCount_19; }
	inline void set_m_EventSourceExceptionRecurenceCount_19(uint8_t value)
	{
		___m_EventSourceExceptionRecurenceCount_19 = value;
	}
};


// System.OperatingSystem
struct  OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463  : public RuntimeObject
{
public:
	// System.PlatformID System.OperatingSystem::_platform
	int32_t ____platform_0;
	// System.Version System.OperatingSystem::_version
	Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * ____version_1;
	// System.String System.OperatingSystem::_servicePack
	String_t* ____servicePack_2;

public:
	inline static int32_t get_offset_of__platform_0() { return static_cast<int32_t>(offsetof(OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463, ____platform_0)); }
	inline int32_t get__platform_0() const { return ____platform_0; }
	inline int32_t* get_address_of__platform_0() { return &____platform_0; }
	inline void set__platform_0(int32_t value)
	{
		____platform_0 = value;
	}

	inline static int32_t get_offset_of__version_1() { return static_cast<int32_t>(offsetof(OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463, ____version_1)); }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * get__version_1() const { return ____version_1; }
	inline Version_tBDAEDED25425A1D09910468B8BD1759115646E3C ** get_address_of__version_1() { return &____version_1; }
	inline void set__version_1(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * value)
	{
		____version_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____version_1), (void*)value);
	}

	inline static int32_t get_offset_of__servicePack_2() { return static_cast<int32_t>(offsetof(OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463, ____servicePack_2)); }
	inline String_t* get__servicePack_2() const { return ____servicePack_2; }
	inline String_t** get_address_of__servicePack_2() { return &____servicePack_2; }
	inline void set__servicePack_2(String_t* value)
	{
		____servicePack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____servicePack_2), (void*)value);
	}
};


// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Data.DataCommonEventSource
struct  DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F  : public EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A
{
public:

public:
};

struct DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_StaticFields
{
public:
	// System.Data.DataCommonEventSource System.Data.DataCommonEventSource::Log
	DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F * ___Log_29;
	// System.Int64 System.Data.DataCommonEventSource::s_nextScopeId
	int64_t ___s_nextScopeId_30;

public:
	inline static int32_t get_offset_of_Log_29() { return static_cast<int32_t>(offsetof(DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_StaticFields, ___Log_29)); }
	inline DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F * get_Log_29() const { return ___Log_29; }
	inline DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F ** get_address_of_Log_29() { return &___Log_29; }
	inline void set_Log_29(DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F * value)
	{
		___Log_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Log_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_nextScopeId_30() { return static_cast<int32_t>(offsetof(DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_StaticFields, ___s_nextScopeId_30)); }
	inline int64_t get_s_nextScopeId_30() const { return ___s_nextScopeId_30; }
	inline int64_t* get_address_of_s_nextScopeId_30() { return &___s_nextScopeId_30; }
	inline void set_s_nextScopeId_30(int64_t value)
	{
		___s_nextScopeId_30 = value;
	}
};


// System.Data.DataException
struct  DataException_t617EA07995426002043C97B3E9ADFF0C8BB748DF  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.Data.DuplicateNameException
struct  DuplicateNameException_t4305734127CC4324A913DE2E4CD9B38697E80C3C  : public DataException_t617EA07995426002043C97B3E9ADFF0C8BB748DF
{
public:

public:
};


// System.PlatformNotSupportedException
struct  PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E  : public NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Data.Common.SchemaInfo[]
struct SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5  m_Items[1];

public:
	inline SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___typeName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_2), (void*)NULL);
		#endif
	}
	inline SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___name_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___typeName_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___type_2), (void*)NULL);
		#endif
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.ComponentModel.PropertyDescriptor[]
struct PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * m_Items[1];

public:
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Attribute[]
struct AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * m_Items[1];

public:
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Data.DataCommonEventSource::Trace<System.Object>(System.String,T0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCommonEventSource_Trace_TisRuntimeObject_mB06BBE3B1101E2D2AAFE5F1774399B37E6A72771_gshared (DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F * __this, String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m5CD823F646F17C2F5B1FB501DCDC0FE22BEBA864_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD30FE5F3EA63CD6831E4AA9E6901323436D6F9A4_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, int32_t* ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m9BDED5248054C2E86ECBA732FE7BCDAA32D0A118_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Item_mA9EF21764AC04923FECB24BAA6C2F96CEB1606D1_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryAdd(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryAdd_m844B87FB317648E721AFD0FB6360083D1BC6FC75_gshared (Dictionary_2_t1DDD2F48B87E022F599DF2452A49BB70BE95A7F8 * __this, RuntimeObject * ___key0, int32_t ___value1, const RuntimeMethod* method);

// System.Void System.Data.DataCommonEventSource::Trace<System.Exception>(System.String,T0)
inline void DataCommonEventSource_Trace_TisException_t_m407B0EB4BB47EC512610901D58A48BD44F4E1A85 (DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F * __this, String_t* ___format0, Exception_t * ___arg01, const RuntimeMethod* method)
{
	((  void (*) (DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F *, String_t*, Exception_t *, const RuntimeMethod*))DataCommonEventSource_Trace_TisRuntimeObject_mB06BBE3B1101E2D2AAFE5F1774399B37E6A72771_gshared)(__this, ___format0, ___arg01, method);
}
// System.Void System.Data.Common.ADP::TraceException(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP_TraceException_m144D376914D7AA513063B65530471C21AA29A511 (String_t* ___trace0, Exception_t * ___e1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Data.Common.ADP::TraceExceptionAsReturnValue(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP_TraceExceptionAsReturnValue_mBBC8FB52DA9D4365324243704303B81CD4566B2D (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::.ctor(System.Int32)
inline void Dictionary_2__ctor_mEC554451CB98B6F31912A513825E0ACFD4FC2763 (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *, int32_t, const RuntimeMethod*))Dictionary_2__ctor_m5CD823F646F17C2F5B1FB501DCDC0FE22BEBA864_gshared)(__this, ___capacity0, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.String System.String::ToLower(System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235 (String_t* __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m8E06A6DF244254BF419D7EC23A9A6809E19A544D (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * __this, String_t* ___key0, int32_t* ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *, String_t*, int32_t*, const RuntimeMethod*))Dictionary_2_TryGetValue_mD30FE5F3EA63CD6831E4AA9E6901323436D6F9A4_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.Int32>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mBC85AF861FB031847847F0B30707EC7AC252D572 (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_set_Item_m9BDED5248054C2E86ECBA732FE7BCDAA32D0A118_gshared)(__this, ___key0, ___value1, method);
}
// System.Int32 System.Data.Common.ADP::GenerateUniqueName(System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.String&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ADP_GenerateUniqueName_m7A2ABEC3DF704271611C3828165DB4CE88A27422 (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___hash0, String_t** ___columnName1, int32_t ___index2, int32_t ___uniqueIndex3, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Int32>::get_Item(!0)
inline int32_t Dictionary_2_get_Item_m351227FE0D2D84F7E108FD47E0F0EA3D6D2D2A74 (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mA9EF21764AC04923FECB24BAA6C2F96CEB1606D1_gshared)(__this, ___key0, method);
}
// System.String System.Int32::ToString(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m027A8C9419D2FE56ED5D2EE42A6F3B3CE0130471 (int32_t* __this, RuntimeObject* ___provider0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,System.Int32>::TryAdd(!0,!1)
inline bool Dictionary_2_TryAdd_m2609DACB0EB5FBADE365DF4A49E31BFEECB82252 (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * __this, String_t* ___key0, int32_t ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *, String_t*, int32_t, const RuntimeMethod*))Dictionary_2_TryAdd_m844B87FB317648E721AFD0FB6360083D1BC6FC75_gshared)(__this, ___key0, ___value1, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.OperatingSystem System.Environment::get_OSVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463 * Environment_get_OSVersion_m9C59BAF537F0A8B51ABC3BEE212F08DCC498F64E (const RuntimeMethod* method);
// System.PlatformID System.OperatingSystem::get_Platform()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OperatingSystem_get_Platform_m1E43B8C2B6CCDD74474E9AB9CF4EF7445D8BE1DF_inline (OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463 * __this, const RuntimeMethod* method);
// System.Version System.OperatingSystem::get_Version()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * OperatingSystem_get_Version_m6ED6AD2C904E6809FB758E6303CFAFABFD0B0A46_inline (OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463 * __this, const RuntimeMethod* method);
// System.Int32 System.Version::get_Major()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Version_get_Major_mBDD414863C4A05FADE87F8C39C8CE8ED6DE6C460_inline (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * __this, const RuntimeMethod* method);
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m2421FD37234F6BCFE61B9109159A54155E3898E3 (String_t* ___name0, const RuntimeMethod* method);
// System.Void System.IntPtr::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IntPtr__ctor_m45FB8E0F6CB286B157BBBE5CF5B586E9E66F1097 (intptr_t* __this, int32_t ___value0, const RuntimeMethod* method);
// System.Int32 System.IntPtr::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t IntPtr_get_Size_mD8038A1C440DE87E685F4D879DC80A6704D9C77B (const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Tracing.EventSource::WriteEvent(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource_WriteEvent_m345B60049C05A17E78E4DBD42D24AC5F30539CBB (EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * __this, int32_t ___eventId0, String_t* ___arg11, const RuntimeMethod* method);
// System.Void System.Diagnostics.Tracing.EventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventSource__ctor_m269E04845C481161A894037B5656C992F0D49021 (EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A * __this, const RuntimeMethod* method);
// System.Void System.Data.DataCommonEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCommonEventSource__ctor_mE859C923EDBDDA8DA50406682A63F1C5A45FD5DB (DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F * __this, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m20F619D15EAA349C6CE181A65A47C336200EBD19 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Void System.PlatformNotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlatformNotSupportedException__ctor_mF4122BD5C9FF6CF441C2A4BCECF012EEF603AE05 (PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E * __this, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Exception::set_HResult(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_inline (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbDataRecord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbDataRecord__ctor_mA276E6B825A9D2F3A19CEE26823C17061C854195 (DbDataRecord_t02A7715354313B29BA4878743EBBECFA9884AA70 * __this, const RuntimeMethod* method);
// System.ArgumentNullException System.Data.Common.ADP::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * ADP_ArgumentNull_m2240C807D7EA9D23B4A9A90F8E6B526322F775C5 (String_t* ___parameter0, const RuntimeMethod* method);
// System.Void System.ComponentModel.Component::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component__ctor_m840837E8F38EF7547938BF0E23F7D5847B8C4F48 (Component_t015539CFEAEEBFD7619041FE006475373E0D71DF * __this, const RuntimeMethod* method);
// System.Void System.MarshalByRefObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MarshalByRefObject__ctor_m308FD08D73062FAC2316A55B752BBB5CF8BF02FE (MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8 * __this, const RuntimeMethod* method);
// System.Void System.Data.Common.DbEnumerator::BuildSchemaInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbEnumerator_BuildSchemaInfo_mA5A3B41F4C868A5ADABFBFFADE3F099A81C3AF55 (DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0 * __this, const RuntimeMethod* method);
// System.Void System.Data.Common.DataRecordInternal::.ctor(System.Data.Common.SchemaInfo[],System.Object[],System.ComponentModel.PropertyDescriptorCollection,System.Data.ProviderBase.FieldNameLookup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRecordInternal__ctor_mB3D4DF755EC8CEBFF574899DFF2903D74C98FA45 (DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 * __this, SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* ___schemaInfo0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * ___descriptors2, FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * ___fieldNameLookup3, const RuntimeMethod* method);
// System.NotSupportedException System.Data.Common.ADP::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * ADP_NotSupported_m5FF2B9E5D15681AE4BEDE5BD262E2FE14B92D95E (const RuntimeMethod* method);
// System.Void System.Data.Common.ADP::BuildSchemaTableInfoTableNames(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP_BuildSchemaTableInfoTableNames_m068A9194D91B5F9874B517FFCC52E002C216DC9F (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___columnNameArray0, const RuntimeMethod* method);
// System.Void System.Data.Common.DbEnumerator/DbColumnDescriptor::.ctor(System.Int32,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbColumnDescriptor__ctor_m0DB76F370A45E3E671240E56252497E33521E6DD (DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38 * __this, int32_t ___ordinal0, String_t* ___name1, Type_t * ___type2, const RuntimeMethod* method);
// System.Void System.Data.ProviderBase.FieldNameLookup::.ctor(System.Data.IDataReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNameLookup__ctor_mF67486CAEC7825CF308B9DA455A8037E964811E8 (FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * __this, RuntimeObject* ___reader0, int32_t ___defaultLocaleID1, const RuntimeMethod* method);
// System.Void System.ComponentModel.PropertyDescriptorCollection::.ctor(System.ComponentModel.PropertyDescriptor[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyDescriptorCollection__ctor_m124991BF4E348817ACCC6C4373FD66B31566E425 (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * __this, PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* ___properties0, const RuntimeMethod* method);
// System.Void System.Data.DataException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataException__ctor_m38CA27034EF0572F09C60FA4CD86D515435B4ABC (DataException_t617EA07995426002043C97B3E9ADFF0C8BB748DF * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method);
// System.Void System.Data.DataException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataException__ctor_m811C07A234ECE528FCCF04B90AA187D9FF8502C6 (DataException_t617EA07995426002043C97B3E9ADFF0C8BB748DF * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void System.Data.ProviderBase.BasicFieldNameLookup::.ctor(System.Data.IDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicFieldNameLookup__ctor_m69E77DB4889074EDB775F57C6AF74A2DB4EC1807 (BasicFieldNameLookup_t0DBE9A973608468F7A7E70CD0E0F1D0651B0F0D1 * __this, RuntimeObject* ___reader0, const RuntimeMethod* method);
// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.String,System.Attribute[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyDescriptor__ctor_m75229C6B90FE0810B721B1F6470D0A0A53E547DA (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B * __this, String_t* ___name0, AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4* ___attrs1, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Data.Common.ADP::TraceException(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP_TraceException_m144D376914D7AA513063B65530471C21AA29A511 (String_t* ___trace0, Exception_t * ___e1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_TraceException_m144D376914D7AA513063B65530471C21AA29A511_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataCommonEventSource_Trace_TisException_t_m407B0EB4BB47EC512610901D58A48BD44F4E1A85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ADP_TraceException_m144D376914D7AA513063B65530471C21AA29A511_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Exception_t * L_0 = ___e1;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_il2cpp_TypeInfo_var);
		DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F * L_1 = ((DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_StaticFields*)il2cpp_codegen_static_fields_for(DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_il2cpp_TypeInfo_var))->get_Log_29();
		String_t* L_2 = ___trace0;
		Exception_t * L_3 = ___e1;
		NullCheck(L_1);
		DataCommonEventSource_Trace_TisException_t_m407B0EB4BB47EC512610901D58A48BD44F4E1A85(L_1, L_2, L_3, /*hidden argument*/DataCommonEventSource_Trace_TisException_t_m407B0EB4BB47EC512610901D58A48BD44F4E1A85_RuntimeMethod_var);
	}

IL_000f:
	{
		return;
	}
}
// System.Void System.Data.Common.ADP::TraceExceptionAsReturnValue(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP_TraceExceptionAsReturnValue_mBBC8FB52DA9D4365324243704303B81CD4566B2D (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_TraceExceptionAsReturnValue_mBBC8FB52DA9D4365324243704303B81CD4566B2D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB23F9937D80B1A1E1D2A5F53949DF4876BAB314);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ADP_TraceExceptionAsReturnValue_mBBC8FB52DA9D4365324243704303B81CD4566B2D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Exception_t * L_0 = ___e0;
		IL2CPP_RUNTIME_CLASS_INIT(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		ADP_TraceException_m144D376914D7AA513063B65530471C21AA29A511(_stringLiteralCB23F9937D80B1A1E1D2A5F53949DF4876BAB314, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.ArgumentNullException System.Data.Common.ADP::ArgumentNull(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * ADP_ArgumentNull_m2240C807D7EA9D23B4A9A90F8E6B526322F775C5 (String_t* ___parameter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_ArgumentNull_m2240C807D7EA9D23B4A9A90F8E6B526322F775C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ADP_ArgumentNull_m2240C807D7EA9D23B4A9A90F8E6B526322F775C5_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___parameter0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, L_0, /*hidden argument*/NULL);
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		ADP_TraceExceptionAsReturnValue_mBBC8FB52DA9D4365324243704303B81CD4566B2D(L_2, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.NotSupportedException System.Data.Common.ADP::NotSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * ADP_NotSupported_m5FF2B9E5D15681AE4BEDE5BD262E2FE14B92D95E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_NotSupported_m5FF2B9E5D15681AE4BEDE5BD262E2FE14B92D95E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ADP_NotSupported_m5FF2B9E5D15681AE4BEDE5BD262E2FE14B92D95E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		ADP_TraceExceptionAsReturnValue_mBBC8FB52DA9D4365324243704303B81CD4566B2D(L_1, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void System.Data.Common.ADP::BuildSchemaTableInfoTableNames(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP_BuildSchemaTableInfoTableNames_m068A9194D91B5F9874B517FFCC52E002C216DC9F (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___columnNameArray0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_BuildSchemaTableInfoTableNames_m068A9194D91B5F9874B517FFCC52E002C216DC9F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8E06A6DF244254BF419D7EC23A9A6809E19A544D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mEC554451CB98B6F31912A513825E0ACFD4FC2763_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m351227FE0D2D84F7E108FD47E0F0EA3D6D2D2A74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mBC85AF861FB031847847F0B30707EC7AC252D572_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20FACC556D3392DB06F2F3AF557BB02598FB7E68);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	String_t* V_7 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ADP_BuildSchemaTableInfoTableNames_m068A9194D91B5F9874B517FFCC52E002C216DC9F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = ___columnNameArray0;
		NullCheck(L_0);
		Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * L_1 = (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 *)il2cpp_codegen_object_new(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mEC554451CB98B6F31912A513825E0ACFD4FC2763(L_1, ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))), /*hidden argument*/Dictionary_2__ctor_mEC554451CB98B6F31912A513825E0ACFD4FC2763_RuntimeMethod_var);
		V_0 = L_1;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = ___columnNameArray0;
		NullCheck(L_2);
		V_1 = ((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = ___columnNameArray0;
		NullCheck(L_3);
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))), (int32_t)1));
		goto IL_0064;
	}

IL_0015:
	{
		CHECK_PAUSE_POINT;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___columnNameArray0;
		int32_t L_5 = V_3;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		String_t* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_4 = L_7;
		String_t* L_8 = V_4;
		if (!L_8)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_9 = V_4;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_9, /*hidden argument*/NULL);
		if ((((int32_t)0) >= ((int32_t)L_10)))
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_11 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_12;
		L_12 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_11);
		String_t* L_13;
		L_13 = String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235(L_11, L_12, /*hidden argument*/NULL);
		V_4 = L_13;
		Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * L_14 = V_0;
		String_t* L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_TryGetValue_m8E06A6DF244254BF419D7EC23A9A6809E19A544D(L_14, L_15, (int32_t*)(&V_5), /*hidden argument*/Dictionary_2_TryGetValue_m8E06A6DF244254BF419D7EC23A9A6809E19A544D_RuntimeMethod_var);
		if (!L_16)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_17 = V_1;
		int32_t L_18 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_19;
		L_19 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_17, L_18, /*hidden argument*/NULL);
		V_1 = L_19;
	}

IL_004b:
	{
		Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * L_20 = V_0;
		String_t* L_21 = V_4;
		int32_t L_22 = V_3;
		NullCheck(L_20);
		Dictionary_2_set_Item_mBC85AF861FB031847847F0B30707EC7AC252D572(L_20, L_21, L_22, /*hidden argument*/Dictionary_2_set_Item_mBC85AF861FB031847847F0B30707EC7AC252D572_RuntimeMethod_var);
		goto IL_0060;
	}

IL_0056:
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = ___columnNameArray0;
		int32_t L_24 = V_3;
		String_t* L_25 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_25);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (String_t*)L_25);
		int32_t L_26 = V_3;
		V_1 = L_26;
	}

IL_0060:
	{
		int32_t L_27 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_27, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_28 = V_3;
		if ((((int32_t)0) <= ((int32_t)L_28)))
		{
			goto IL_0015;
		}
	}
	{
		V_2 = 1;
		int32_t L_29 = V_1;
		V_6 = L_29;
		goto IL_00cd;
	}

IL_006f:
	{
		CHECK_PAUSE_POINT;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = ___columnNameArray0;
		int32_t L_31 = V_6;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		V_7 = L_33;
		String_t* L_34 = V_7;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_34, /*hidden argument*/NULL);
		if (L_35)
		{
			goto IL_009b;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = ___columnNameArray0;
		int32_t L_37 = V_6;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral20FACC556D3392DB06F2F3AF557BB02598FB7E68);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (String_t*)_stringLiteral20FACC556D3392DB06F2F3AF557BB02598FB7E68);
		Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * L_38 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = ___columnNameArray0;
		int32_t L_40 = V_6;
		NullCheck(L_39);
		int32_t L_41 = V_6;
		int32_t L_42 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		int32_t L_43;
		L_43 = ADP_GenerateUniqueName_m7A2ABEC3DF704271611C3828165DB4CE88A27422(L_38, (String_t**)((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40))), L_41, L_42, /*hidden argument*/NULL);
		V_2 = L_43;
		goto IL_00c7;
	}

IL_009b:
	{
		String_t* L_44 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_45;
		L_45 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_44);
		String_t* L_46;
		L_46 = String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235(L_44, L_45, /*hidden argument*/NULL);
		V_7 = L_46;
		int32_t L_47 = V_6;
		Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * L_48 = V_0;
		String_t* L_49 = V_7;
		NullCheck(L_48);
		int32_t L_50;
		L_50 = Dictionary_2_get_Item_m351227FE0D2D84F7E108FD47E0F0EA3D6D2D2A74(L_48, L_49, /*hidden argument*/Dictionary_2_get_Item_m351227FE0D2D84F7E108FD47E0F0EA3D6D2D2A74_RuntimeMethod_var);
		if ((((int32_t)L_47) == ((int32_t)L_50)))
		{
			goto IL_00c7;
		}
	}
	{
		Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * L_51 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_52 = ___columnNameArray0;
		int32_t L_53 = V_6;
		NullCheck(L_52);
		int32_t L_54 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		int32_t L_55;
		L_55 = ADP_GenerateUniqueName_m7A2ABEC3DF704271611C3828165DB4CE88A27422(L_51, (String_t**)((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53))), L_54, 1, /*hidden argument*/NULL);
	}

IL_00c7:
	{
		int32_t L_56 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
	}

IL_00cd:
	{
		int32_t L_57 = V_6;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = ___columnNameArray0;
		NullCheck(L_58);
		if ((((int32_t)L_57) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))))
		{
			goto IL_006f;
		}
	}
	{
		return;
	}
}
// System.Int32 System.Data.Common.ADP::GenerateUniqueName(System.Collections.Generic.Dictionary`2<System.String,System.Int32>,System.String&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ADP_GenerateUniqueName_m7A2ABEC3DF704271611C3828165DB4CE88A27422 (Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___hash0, String_t** ___columnName1, int32_t ___index2, int32_t ___uniqueIndex3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_GenerateUniqueName_m7A2ABEC3DF704271611C3828165DB4CE88A27422_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryAdd_m2609DACB0EB5FBADE365DF4A49E31BFEECB82252_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ADP_GenerateUniqueName_m7A2ABEC3DF704271611C3828165DB4CE88A27422_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;

IL_0000:
	{
		CHECK_PAUSE_POINT;
		String_t** L_0 = ___columnName1;
		String_t* L_1 = *((String_t**)L_0);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_2;
		L_2 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Int32_ToString_m027A8C9419D2FE56ED5D2EE42A6F3B3CE0130471((int32_t*)(&___uniqueIndex3), L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		String_t* L_5 = V_0;
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_6;
		L_6 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_7;
		L_7 = String_ToLower_m31AAE50F084C9F7ECE9201944F237D2310C79235(L_5, L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * L_8 = ___hash0;
		String_t* L_9 = V_1;
		int32_t L_10 = ___index2;
		NullCheck(L_8);
		bool L_11;
		L_11 = Dictionary_2_TryAdd_m2609DACB0EB5FBADE365DF4A49E31BFEECB82252(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_TryAdd_m2609DACB0EB5FBADE365DF4A49E31BFEECB82252_RuntimeMethod_var);
		if (!L_11)
		{
			goto IL_002f;
		}
	}
	{
		String_t** L_12 = ___columnName1;
		String_t* L_13 = V_0;
		*((RuntimeObject **)L_12) = (RuntimeObject *)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_12, (void*)(RuntimeObject *)L_13);
		goto IL_0036;
	}

IL_002f:
	{
		int32_t L_14 = ___uniqueIndex3;
		___uniqueIndex3 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
		goto IL_0000;
	}

IL_0036:
	{
		int32_t L_15 = ___uniqueIndex3;
		return L_15;
	}
}
// System.Void System.Data.Common.ADP::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ADP__cctor_mD10E0263CB66FDFC0F4CAE07A1166A88E9286B64 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP__cctor_mD10E0263CB66FDFC0F4CAE07A1166A88E9286B64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AccessViolationException_t8B8BB8265FE2D30334F7DF0F0DD6E73929F8AD25_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StackOverflowException_tCDBFE2D7CF662B7405CDB64A8ED8CE0E2728055E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05119745D20F83C96FF64EC9238D16AE415068EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9C4E7450F845E633DEE5CC15FF62B87B4778826);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1D0D292C33F1F64AB45A4955EAF5BB638C50F4B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECC887A6FB8315456AE4F577AA0E1646BEB717E7);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, ADP__cctor_mD10E0263CB66FDFC0F4CAE07A1166A88E9286B64_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B3_0 = 0;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (StackOverflowException_tCDBFE2D7CF662B7405CDB64A8ED8CE0E2728055E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_s_stackOverflowType_0(L_1);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_0_0_0_var) };
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_2, /*hidden argument*/NULL);
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_s_outOfMemoryType_1(L_3);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_4 = { reinterpret_cast<intptr_t> (ThreadAbortException_t16772A32C3654FCFF0399F11874CB783CC51C153_0_0_0_var) };
		Type_t * L_5;
		L_5 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_4, /*hidden argument*/NULL);
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_s_threadAbortType_2(L_5);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_0_0_0_var) };
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_s_nullReferenceType_3(L_7);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (AccessViolationException_t8B8BB8265FE2D30334F7DF0F0DD6E73929F8AD25_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_s_accessViolationType_4(L_9);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (SecurityException_t3BE23C00ECC638A4EDCAA33572C4DCC21F2FA769_0_0_0_var) };
		Type_t * L_11;
		L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_s_securityType_5(L_11);
		OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463 * L_12;
		L_12 = Environment_get_OSVersion_m9C59BAF537F0A8B51ABC3BEE212F08DCC498F64E(/*hidden argument*/NULL);
		NullCheck(L_12);
		int32_t L_13;
		L_13 = OperatingSystem_get_Platform_m1E43B8C2B6CCDD74474E9AB9CF4EF7445D8BE1DF_inline(L_12, /*hidden argument*/NULL);
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_IsWindowsNT_6((bool)((((int32_t)2) == ((int32_t)L_13))? 1 : 0));
		bool L_14 = ((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->get_IsWindowsNT_6();
		if (!L_14)
		{
			goto IL_008a;
		}
	}
	{
		OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463 * L_15;
		L_15 = Environment_get_OSVersion_m9C59BAF537F0A8B51ABC3BEE212F08DCC498F64E(/*hidden argument*/NULL);
		NullCheck(L_15);
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_16;
		L_16 = OperatingSystem_get_Version_m6ED6AD2C904E6809FB758E6303CFAFABFD0B0A46_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Version_get_Major_mBDD414863C4A05FADE87F8C39C8CE8ED6DE6C460_inline(L_16, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_17) < ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_008b;
	}

IL_008a:
	{
		G_B3_0 = 0;
	}

IL_008b:
	{
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_IsPlatformNT5_7((bool)G_B3_0);
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_StrEmpty_8(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		String_t* L_20;
		L_20 = SR_GetString_m2421FD37234F6BCFE61B9109159A54155E3898E3(_stringLiteralB9C4E7450F845E633DEE5CC15FF62B87B4778826, /*hidden argument*/NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_20);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_20);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21 = L_19;
		String_t* L_22;
		L_22 = SR_GetString_m2421FD37234F6BCFE61B9109159A54155E3898E3(_stringLiteralECC887A6FB8315456AE4F577AA0E1646BEB717E7, /*hidden argument*/NULL);
		NullCheck(L_21);
		ArrayElementTypeCheck (L_21, L_22);
		(L_21)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_22);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_21;
		String_t* L_24;
		L_24 = SR_GetString_m2421FD37234F6BCFE61B9109159A54155E3898E3(_stringLiteral05119745D20F83C96FF64EC9238D16AE415068EB, /*hidden argument*/NULL);
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, L_24);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_24);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = L_23;
		String_t* L_26;
		L_26 = SR_GetString_m2421FD37234F6BCFE61B9109159A54155E3898E3(_stringLiteralC1D0D292C33F1F64AB45A4955EAF5BB638C50F4B, /*hidden argument*/NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_26);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_26);
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_AzureSqlServerEndpoints_9(L_25);
		intptr_t L_27;
		memset((&L_27), 0, sizeof(L_27));
		IntPtr__ctor_m45FB8E0F6CB286B157BBBE5CF5B586E9E66F1097((&L_27), 0, /*hidden argument*/NULL);
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_PtrZero_10((intptr_t)L_27);
		int32_t L_28;
		L_28 = IntPtr_get_Size_mD8038A1C440DE87E685F4D879DC80A6704D9C77B(/*hidden argument*/NULL);
		((ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_StaticFields*)il2cpp_codegen_static_fields_for(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var))->set_PtrSize_11(L_28);
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
// System.Void System.Data.ProviderBase.BasicFieldNameLookup::.ctor(System.Data.IDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicFieldNameLookup__ctor_m69E77DB4889074EDB775F57C6AF74A2DB4EC1807 (BasicFieldNameLookup_t0DBE9A973608468F7A7E70CD0E0F1D0651B0F0D1 * __this, RuntimeObject* ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicFieldNameLookup__ctor_m69E77DB4889074EDB775F57C6AF74A2DB4EC1807_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	int32_t V_2 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, BasicFieldNameLookup__ctor_m69E77DB4889074EDB775F57C6AF74A2DB4EC1807_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Data.IDataRecord::get_FieldCount() */, IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_2 = 0;
		goto IL_0026;
	}

IL_0018:
	{
		CHECK_PAUSE_POINT;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_1;
		int32_t L_5 = V_2;
		RuntimeObject* L_6 = ___reader0;
		int32_t L_7 = V_2;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(1 /* System.String System.Data.IDataRecord::GetName(System.Int32) */, IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var, L_6, L_7);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_8);
		int32_t L_9 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0026:
	{
		int32_t L_10 = V_2;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0018;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_1;
		__this->set__fieldNames_0(L_12);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Data.DataCommonEventSource::Trace(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCommonEventSource_Trace_m734F123EC366C3B6B0F7BE8E70BD0CE194AD0FA7 (DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F * __this, String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataCommonEventSource_Trace_m734F123EC366C3B6B0F7BE8E70BD0CE194AD0FA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataCommonEventSource_Trace_m734F123EC366C3B6B0F7BE8E70BD0CE194AD0FA7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___message0;
		EventSource_WriteEvent_m345B60049C05A17E78E4DBD42D24AC5F30539CBB(__this, 1, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Data.DataCommonEventSource::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCommonEventSource__ctor_mE859C923EDBDDA8DA50406682A63F1C5A45FD5DB (DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataCommonEventSource__ctor_mE859C923EDBDDA8DA50406682A63F1C5A45FD5DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataCommonEventSource__ctor_mE859C923EDBDDA8DA50406682A63F1C5A45FD5DB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(EventSource_t02B6E43167F06B74646A32A3BBC58988BFC3EA6A_il2cpp_TypeInfo_var);
		EventSource__ctor_m269E04845C481161A894037B5656C992F0D49021(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Data.DataCommonEventSource::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataCommonEventSource__cctor_mC7760EBA5CC650A83F26AA59AA736F86D7DF554C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataCommonEventSource__cctor_mC7760EBA5CC650A83F26AA59AA736F86D7DF554C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataCommonEventSource__cctor_mC7760EBA5CC650A83F26AA59AA736F86D7DF554C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F * L_0 = (DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F *)il2cpp_codegen_object_new(DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_il2cpp_TypeInfo_var);
		DataCommonEventSource__ctor_mE859C923EDBDDA8DA50406682A63F1C5A45FD5DB(L_0, /*hidden argument*/NULL);
		((DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_StaticFields*)il2cpp_codegen_static_fields_for(DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_il2cpp_TypeInfo_var))->set_Log_29(L_0);
		((DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_StaticFields*)il2cpp_codegen_static_fields_for(DataCommonEventSource_tBC373F38958D3451B6A45255B56744B53857439F_il2cpp_TypeInfo_var))->set_s_nextScopeId_30(((int64_t)((int64_t)0)));
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
// System.Void System.Data.DataException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataException__ctor_m38CA27034EF0572F09C60FA4CD86D515435B4ABC (DataException_t617EA07995426002043C97B3E9ADFF0C8BB748DF * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataException__ctor_m38CA27034EF0572F09C60FA4CD86D515435B4ABC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataException__ctor_m38CA27034EF0572F09C60FA4CD86D515435B4ABC_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___context1;
		SystemException__ctor_m20F619D15EAA349C6CE181A65A47C336200EBD19(__this, L_0, L_1, /*hidden argument*/NULL);
		PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E * L_2 = (PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mF4122BD5C9FF6CF441C2A4BCECF012EEF603AE05(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataException__ctor_m38CA27034EF0572F09C60FA4CD86D515435B4ABC_RuntimeMethod_var)));
	}
}
// System.Void System.Data.DataException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataException__ctor_m0D423E3C865F408ADD44C061DB17E181EA408E6D (DataException_t617EA07995426002043C97B3E9ADFF0C8BB748DF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataException__ctor_m0D423E3C865F408ADD44C061DB17E181EA408E6D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E207917815C82ABA8C3A75E009A7ABE89A3EF2);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataException__ctor_m0D423E3C865F408ADD44C061DB17E181EA408E6D_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A(__this, _stringLiteral07E207917815C82ABA8C3A75E009A7ABE89A3EF2, /*hidden argument*/NULL);
		Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_inline(__this, ((int32_t)-2146232032), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Data.DataException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataException__ctor_m811C07A234ECE528FCCF04B90AA187D9FF8502C6 (DataException_t617EA07995426002043C97B3E9ADFF0C8BB748DF * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataException__ctor_m811C07A234ECE528FCCF04B90AA187D9FF8502C6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataException__ctor_m811C07A234ECE528FCCF04B90AA187D9FF8502C6_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___s0;
		SystemException__ctor_m65B6562BDBB8EF84A384B217BE96647C0BAC770A(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_inline(__this, ((int32_t)-2146232032), /*hidden argument*/NULL);
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
// System.Void System.Data.Common.DataRecordInternal::.ctor(System.Data.Common.SchemaInfo[],System.Object[],System.ComponentModel.PropertyDescriptorCollection,System.Data.ProviderBase.FieldNameLookup)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataRecordInternal__ctor_mB3D4DF755EC8CEBFF574899DFF2903D74C98FA45 (DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 * __this, SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* ___schemaInfo0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values1, PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * ___descriptors2, FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * ___fieldNameLookup3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRecordInternal__ctor_mB3D4DF755EC8CEBFF574899DFF2903D74C98FA45_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataRecordInternal__ctor_mB3D4DF755EC8CEBFF574899DFF2903D74C98FA45_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DbDataRecord__ctor_mA276E6B825A9D2F3A19CEE26823C17061C854195(__this, /*hidden argument*/NULL);
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_0 = ___schemaInfo0;
		__this->set__schemaInfo_0(L_0);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___values1;
		__this->set__values_1(L_1);
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_2 = ___descriptors2;
		__this->set__propertyDescriptors_2(L_2);
		FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * L_3 = ___fieldNameLookup3;
		__this->set__fieldNameLookup_3(L_3);
		return;
	}
}
// System.Int32 System.Data.Common.DataRecordInternal::get_FieldCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataRecordInternal_get_FieldCount_mC0D1D3F0D9FB960AA0CD30AEDB42BBF73D49A798 (DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRecordInternal_get_FieldCount_mC0D1D3F0D9FB960AA0CD30AEDB42BBF73D49A798_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataRecordInternal_get_FieldCount_mC0D1D3F0D9FB960AA0CD30AEDB42BBF73D49A798_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_0 = __this->get__schemaInfo_0();
		NullCheck(L_0);
		return ((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length)));
	}
}
// System.Int32 System.Data.Common.DataRecordInternal::GetValues(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataRecordInternal_GetValues_mD85195CF022C230D8E581A406D81539B15A488D0 (DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___values0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRecordInternal_GetValues_mD85195CF022C230D8E581A406D81539B15A488D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataRecordInternal_GetValues_mD85195CF022C230D8E581A406D81539B15A488D0_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	int32_t G_B5_0 = 0;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___values0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var)));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1;
		L_1 = ADP_ArgumentNull_m2240C807D7EA9D23B4A9A90F8E6B526322F775C5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DataRecordInternal_GetValues_mD85195CF022C230D8E581A406D81539B15A488D0_RuntimeMethod_var)));
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___values0;
		NullCheck(L_2);
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_3 = __this->get__schemaInfo_0();
		NullCheck(L_3);
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))))
		{
			goto IL_0025;
		}
	}
	{
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_4 = __this->get__schemaInfo_0();
		NullCheck(L_4);
		G_B5_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length)));
		goto IL_0028;
	}

IL_0025:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = ___values0;
		NullCheck(L_5);
		G_B5_0 = ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length)));
	}

IL_0028:
	{
		V_0 = G_B5_0;
		V_1 = 0;
		goto IL_003c;
	}

IL_002d:
	{
		CHECK_PAUSE_POINT;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = ___values0;
		int32_t L_7 = V_1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = __this->get__values_1();
		int32_t L_9 = V_1;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_11);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject *)L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003c:
	{
		int32_t L_13 = V_1;
		int32_t L_14 = V_0;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002d;
		}
	}
	{
		int32_t L_15 = V_0;
		return L_15;
	}
}
// System.String System.Data.Common.DataRecordInternal::GetName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataRecordInternal_GetName_m5B911A120837B9822379CDC37EF549D926E653B8 (DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRecordInternal_GetName_m5B911A120837B9822379CDC37EF549D926E653B8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataRecordInternal_GetName_m5B911A120837B9822379CDC37EF549D926E653B8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_0 = __this->get__schemaInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		String_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_name_0();
		return L_2;
	}
}
// System.String System.Data.Common.DataRecordInternal::GetDataTypeName(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataRecordInternal_GetDataTypeName_mDEE328C07C633D98A40315BCB4EAB5B8C51428EE (DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRecordInternal_GetDataTypeName_mDEE328C07C633D98A40315BCB4EAB5B8C51428EE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataRecordInternal_GetDataTypeName_mDEE328C07C633D98A40315BCB4EAB5B8C51428EE_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_0 = __this->get__schemaInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		String_t* L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_typeName_1();
		return L_2;
	}
}
// System.Type System.Data.Common.DataRecordInternal::GetFieldType(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * DataRecordInternal_GetFieldType_m5D58A22508F0E94962035B348C2EBA44D763881E (DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRecordInternal_GetFieldType_m5D58A22508F0E94962035B348C2EBA44D763881E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataRecordInternal_GetFieldType_m5D58A22508F0E94962035B348C2EBA44D763881E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_0 = __this->get__schemaInfo_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		Type_t * L_2 = ((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1)))->get_type_2();
		return L_2;
	}
}
// System.Int16 System.Data.Common.DataRecordInternal::GetInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t DataRecordInternal_GetInt16_m1000BAC40078094110B043FEF66457B78CA9333B (DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRecordInternal_GetInt16_m1000BAC40078094110B043FEF66457B78CA9333B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataRecordInternal_GetInt16_m1000BAC40078094110B043FEF66457B78CA9333B_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = __this->get__values_1();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((*(int16_t*)((int16_t*)UnBox(L_3, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var))));
	}
}
// System.Int32 System.Data.Common.DataRecordInternal::GetInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataRecordInternal_GetInt32_mA683830941D4E89C75CFEDDFBF354725D496197C (DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRecordInternal_GetInt32_mA683830941D4E89C75CFEDDFBF354725D496197C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataRecordInternal_GetInt32_mA683830941D4E89C75CFEDDFBF354725D496197C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = __this->get__values_1();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((*(int32_t*)((int32_t*)UnBox(L_3, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var))));
	}
}
// System.String System.Data.Common.DataRecordInternal::GetString(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DataRecordInternal_GetString_m81F4CA334EB7C6AC89FACD6960F27935581ABCC7 (DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 * __this, int32_t ___i0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRecordInternal_GetString_m81F4CA334EB7C6AC89FACD6960F27935581ABCC7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DataRecordInternal_GetString_m81F4CA334EB7C6AC89FACD6960F27935581ABCC7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = __this->get__values_1();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		RuntimeObject * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return ((String_t*)CastclassSealed((RuntimeObject*)L_3, String_t_il2cpp_TypeInfo_var));
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
// System.Void System.Data.Common.DbCommand::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbCommand__ctor_m83F726F81AC564060FBFA052B4B49D609D70E7CD (DbCommand_tB125F25AD82F85EA3DC7AA8C0556C4788E5D72CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbCommand__ctor_m83F726F81AC564060FBFA052B4B49D609D70E7CD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbCommand__ctor_m83F726F81AC564060FBFA052B4B49D609D70E7CD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_il2cpp_TypeInfo_var);
		Component__ctor_m840837E8F38EF7547938BF0E23F7D5847B8C4F48(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Data.IDataReader System.Data.Common.DbCommand::System.Data.IDbCommand.ExecuteReader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DbCommand_System_Data_IDbCommand_ExecuteReader_m0C71B86F024C7A0F60F0CF0F42A536A0EE7D61A7 (DbCommand_tB125F25AD82F85EA3DC7AA8C0556C4788E5D72CC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbCommand_System_Data_IDbCommand_ExecuteReader_m0C71B86F024C7A0F60F0CF0F42A536A0EE7D61A7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbCommand_System_Data_IDbCommand_ExecuteReader_m0C71B86F024C7A0F60F0CF0F42A536A0EE7D61A7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DbDataReader_t50481AE1497CEE437BDA56F2E92B6567D3222C45 * L_0;
		L_0 = VirtFuncInvoker1< DbDataReader_t50481AE1497CEE437BDA56F2E92B6567D3222C45 *, int32_t >::Invoke(13 /* System.Data.Common.DbDataReader System.Data.Common.DbCommand::ExecuteDbDataReader(System.Data.CommandBehavior) */, __this, 0);
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
// System.Void System.Data.Common.DbConnection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbConnection__ctor_mB44477AD408CACC38FEBBC38312AFF400B18CE21 (DbConnection_t10FE0E1B88AE954D5CDB74A512B018A8D2185B50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbConnection__ctor_mB44477AD408CACC38FEBBC38312AFF400B18CE21_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbConnection__ctor_mB44477AD408CACC38FEBBC38312AFF400B18CE21_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(Component_t015539CFEAEEBFD7619041FE006475373E0D71DF_il2cpp_TypeInfo_var);
		Component__ctor_m840837E8F38EF7547938BF0E23F7D5847B8C4F48(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Data.IDbCommand System.Data.Common.DbConnection::System.Data.IDbConnection.CreateCommand()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DbConnection_System_Data_IDbConnection_CreateCommand_m6541F62489BFA0D89DF97F88F2A4FACA50B2D713 (DbConnection_t10FE0E1B88AE954D5CDB74A512B018A8D2185B50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbConnection_System_Data_IDbConnection_CreateCommand_m6541F62489BFA0D89DF97F88F2A4FACA50B2D713_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbConnection_System_Data_IDbConnection_CreateCommand_m6541F62489BFA0D89DF97F88F2A4FACA50B2D713_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DbCommand_tB125F25AD82F85EA3DC7AA8C0556C4788E5D72CC * L_0;
		L_0 = VirtFuncInvoker0< DbCommand_tB125F25AD82F85EA3DC7AA8C0556C4788E5D72CC * >::Invoke(17 /* System.Data.Common.DbCommand System.Data.Common.DbConnection::CreateDbCommand() */, __this);
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
// System.Void System.Data.Common.DbDataReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbDataReader__ctor_m828A5CA10B067C9A5D4C5FAB01F8AEB110054DF3 (DbDataReader_t50481AE1497CEE437BDA56F2E92B6567D3222C45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbDataReader__ctor_m828A5CA10B067C9A5D4C5FAB01F8AEB110054DF3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbDataReader__ctor_m828A5CA10B067C9A5D4C5FAB01F8AEB110054DF3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MarshalByRefObject__ctor_m308FD08D73062FAC2316A55B752BBB5CF8BF02FE(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Data.Common.DbDataReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbDataReader_Close_mE8D3A1E5E0CB7B7B099580A8F4C0D55BACE04EEB (DbDataReader_t50481AE1497CEE437BDA56F2E92B6567D3222C45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbDataReader_Close_mE8D3A1E5E0CB7B7B099580A8F4C0D55BACE04EEB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbDataReader_Close_mE8D3A1E5E0CB7B7B099580A8F4C0D55BACE04EEB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return;
	}
}
// System.Void System.Data.Common.DbDataReader::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbDataReader_Dispose_m2EB3E5C7A148DF8E5EA58053B9C57386062398CB (DbDataReader_t50481AE1497CEE437BDA56F2E92B6567D3222C45 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbDataReader_Dispose_m2EB3E5C7A148DF8E5EA58053B9C57386062398CB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbDataReader_Dispose_m2EB3E5C7A148DF8E5EA58053B9C57386062398CB_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		VirtActionInvoker1< bool >::Invoke(22 /* System.Void System.Data.Common.DbDataReader::Dispose(System.Boolean) */, __this, (bool)1);
		return;
	}
}
// System.Void System.Data.Common.DbDataReader::Dispose(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbDataReader_Dispose_mB4A8D0EA2DC492279AA1BE3034E9CDA80838A214 (DbDataReader_t50481AE1497CEE437BDA56F2E92B6567D3222C45 * __this, bool ___disposing0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbDataReader_Dispose_mB4A8D0EA2DC492279AA1BE3034E9CDA80838A214_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbDataReader_Dispose_mB4A8D0EA2DC492279AA1BE3034E9CDA80838A214_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		bool L_0 = ___disposing0;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		VirtActionInvoker0::Invoke(21 /* System.Void System.Data.Common.DbDataReader::Close() */, __this);
	}

IL_0009:
	{
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
// System.Void System.Data.Common.DbDataRecord::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbDataRecord__ctor_mA276E6B825A9D2F3A19CEE26823C17061C854195 (DbDataRecord_t02A7715354313B29BA4878743EBBECFA9884AA70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbDataRecord__ctor_mA276E6B825A9D2F3A19CEE26823C17061C854195_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbDataRecord__ctor_mA276E6B825A9D2F3A19CEE26823C17061C854195_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void System.Data.Common.DbEnumerator::.ctor(System.Data.IDataReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbEnumerator__ctor_mF119906D6677EEF51005C9148E5ED43AC7D964C2 (DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0 * __this, RuntimeObject* ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbEnumerator__ctor_mF119906D6677EEF51005C9148E5ED43AC7D964C2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbEnumerator__ctor_mF119906D6677EEF51005C9148E5ED43AC7D964C2_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___reader0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var)));
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1;
		L_1 = ADP_ArgumentNull_m2240C807D7EA9D23B4A9A90F8E6B526322F775C5(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbEnumerator__ctor_mF119906D6677EEF51005C9148E5ED43AC7D964C2_RuntimeMethod_var)));
	}

IL_0014:
	{
		RuntimeObject* L_2 = ___reader0;
		__this->set__reader_0(L_2);
		return;
	}
}
// System.Object System.Data.Common.DbEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DbEnumerator_get_Current_m5C3A70790EE1315A894B61E08C7FF13463B0EE15 (DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbEnumerator_get_Current_m5C3A70790EE1315A894B61E08C7FF13463B0EE15_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbEnumerator_get_Current_m5C3A70790EE1315A894B61E08C7FF13463B0EE15_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DbDataRecord_t02A7715354313B29BA4878743EBBECFA9884AA70 * L_0 = __this->get__current_1();
		return L_0;
	}
}
// System.Boolean System.Data.Common.DbEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbEnumerator_MoveNext_mB7201A38BD13FFC539DCDB8B368017F909A7F45E (DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbEnumerator_MoveNext_mB7201A38BD13FFC539DCDB8B368017F909A7F45E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataReader_tCA82A5B3AE1C412FA8C38F54929D4C42EC0E027B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbEnumerator_MoveNext_mB7201A38BD13FFC539DCDB8B368017F909A7F45E_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_0 = __this->get__schemaInfo_2();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		DbEnumerator_BuildSchemaInfo_mA5A3B41F4C868A5ADABFBFFADE3F099A81C3AF55(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		__this->set__current_1((DbDataRecord_t02A7715354313B29BA4878743EBBECFA9884AA70 *)NULL);
		RuntimeObject* L_1 = __this->get__reader_0();
		NullCheck(L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean System.Data.IDataReader::Read() */, IDataReader_tCA82A5B3AE1C412FA8C38F54929D4C42EC0E027B_il2cpp_TypeInfo_var, L_1);
		if (!L_2)
		{
			goto IL_005d;
		}
	}
	{
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_3 = __this->get__schemaInfo_2();
		NullCheck(L_3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))));
		V_0 = L_4;
		RuntimeObject* L_5 = __this->get__reader_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = V_0;
		NullCheck(L_5);
		int32_t L_7;
		L_7 = InterfaceFuncInvoker1< int32_t, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* >::Invoke(4 /* System.Int32 System.Data.IDataRecord::GetValues(System.Object[]) */, IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var, L_5, L_6);
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_8 = __this->get__schemaInfo_2();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = V_0;
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_10 = __this->get__descriptors_3();
		FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * L_11 = __this->get__fieldNameLookup_4();
		DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 * L_12 = (DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24 *)il2cpp_codegen_object_new(DataRecordInternal_t076CA2FF5C8DFE2227A88B8AB6C5E96391A5CE24_il2cpp_TypeInfo_var);
		DataRecordInternal__ctor_mB3D4DF755EC8CEBFF574899DFF2903D74C98FA45(L_12, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		__this->set__current_1(L_12);
		return (bool)1;
	}

IL_005d:
	{
		bool L_13 = __this->get__closeReader_5();
		if (!L_13)
		{
			goto IL_0070;
		}
	}
	{
		RuntimeObject* L_14 = __this->get__reader_0();
		NullCheck(L_14);
		InterfaceActionInvoker0::Invoke(1 /* System.Void System.Data.IDataReader::Close() */, IDataReader_tCA82A5B3AE1C412FA8C38F54929D4C42EC0E027B_il2cpp_TypeInfo_var, L_14);
	}

IL_0070:
	{
		return (bool)0;
	}
}
// System.Void System.Data.Common.DbEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbEnumerator_Reset_m07A208D94C5FF440FF799863FCF9A4DB83DF9E14 (DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbEnumerator_Reset_m07A208D94C5FF440FF799863FCF9A4DB83DF9E14_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbEnumerator_Reset_m07A208D94C5FF440FF799863FCF9A4DB83DF9E14_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var)));
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0;
		L_0 = ADP_NotSupported_m5FF2B9E5D15681AE4BEDE5BD262E2FE14B92D95E(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DbEnumerator_Reset_m07A208D94C5FF440FF799863FCF9A4DB83DF9E14_RuntimeMethod_var)));
	}
}
// System.Void System.Data.Common.DbEnumerator::BuildSchemaInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbEnumerator_BuildSchemaInfo_mA5A3B41F4C868A5ADABFBFFADE3F099A81C3AF55 (DbEnumerator_tF1B417168537A88D6265BB196F18405AA4D34AD0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbEnumerator_BuildSchemaInfo_mA5A3B41F4C868A5ADABFBFFADE3F099A81C3AF55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_1 = NULL;
	SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* V_2 = NULL;
	PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5  V_6;
	memset((&V_6), 0, sizeof(V_6));
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbEnumerator_BuildSchemaInfo_mA5A3B41F4C868A5ADABFBFFADE3F099A81C3AF55_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = __this->get__reader_0();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Data.IDataRecord::get_FieldCount() */, IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_2);
		V_1 = L_3;
		V_4 = 0;
		goto IL_002f;
	}

IL_0018:
	{
		CHECK_PAUSE_POINT;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = V_1;
		int32_t L_5 = V_4;
		RuntimeObject* L_6 = __this->get__reader_0();
		int32_t L_7 = V_4;
		NullCheck(L_6);
		String_t* L_8;
		L_8 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(1 /* System.String System.Data.IDataRecord::GetName(System.Int32) */, IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var, L_6, L_7);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_8);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (String_t*)L_8);
		int32_t L_9 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_002f:
	{
		int32_t L_10 = V_4;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) < ((int32_t)L_11)))
		{
			goto IL_0018;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ADP_t9D19A67611CE9072A14EE34A3EB9447AE50F8525_il2cpp_TypeInfo_var);
		ADP_BuildSchemaTableInfoTableNames_m068A9194D91B5F9874B517FFCC52E002C216DC9F(L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_0;
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_14 = (SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA*)(SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA*)SZArrayNew(SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA_il2cpp_TypeInfo_var, (uint32_t)L_13);
		V_2 = L_14;
		RuntimeObject* L_15 = __this->get__reader_0();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Data.IDataRecord::get_FieldCount() */, IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var, L_15);
		PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* L_17 = (PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75*)(PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75*)SZArrayNew(PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75_il2cpp_TypeInfo_var, (uint32_t)L_16);
		V_3 = L_17;
		V_5 = 0;
		goto IL_00c1;
	}

IL_0057:
	{
		CHECK_PAUSE_POINT;
		il2cpp_codegen_initobj((&V_6), sizeof(SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5 ));
		RuntimeObject* L_18 = __this->get__reader_0();
		int32_t L_19 = V_5;
		NullCheck(L_18);
		String_t* L_20;
		L_20 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(1 /* System.String System.Data.IDataRecord::GetName(System.Int32) */, IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var, L_18, L_19);
		(&V_6)->set_name_0(L_20);
		RuntimeObject* L_21 = __this->get__reader_0();
		int32_t L_22 = V_5;
		NullCheck(L_21);
		Type_t * L_23;
		L_23 = InterfaceFuncInvoker1< Type_t *, int32_t >::Invoke(3 /* System.Type System.Data.IDataRecord::GetFieldType(System.Int32) */, IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var, L_21, L_22);
		(&V_6)->set_type_2(L_23);
		RuntimeObject* L_24 = __this->get__reader_0();
		int32_t L_25 = V_5;
		NullCheck(L_24);
		String_t* L_26;
		L_26 = InterfaceFuncInvoker1< String_t*, int32_t >::Invoke(2 /* System.String System.Data.IDataRecord::GetDataTypeName(System.Int32) */, IDataRecord_tFB434969BEB5EE8BEAAC35B6147611FBE156C0AC_il2cpp_TypeInfo_var, L_24, L_25);
		(&V_6)->set_typeName_1(L_26);
		PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* L_27 = V_3;
		int32_t L_28 = V_5;
		int32_t L_29 = V_5;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = V_1;
		int32_t L_31 = V_5;
		NullCheck(L_30);
		int32_t L_32 = L_31;
		String_t* L_33 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5  L_34 = V_6;
		Type_t * L_35 = L_34.get_type_2();
		DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38 * L_36 = (DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38 *)il2cpp_codegen_object_new(DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38_il2cpp_TypeInfo_var);
		DbColumnDescriptor__ctor_m0DB76F370A45E3E671240E56252497E33521E6DD(L_36, L_29, L_33, L_35, /*hidden argument*/NULL);
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, L_36);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (PropertyDescriptor_t851C1421EDEEC6CB7D059D50CF94886ECCA1B22B *)L_36);
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_37 = V_2;
		int32_t L_38 = V_5;
		SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5  L_39 = V_6;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5 )L_39);
		int32_t L_40 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00c1:
	{
		int32_t L_41 = V_5;
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_42 = V_2;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))))
		{
			goto IL_0057;
		}
	}
	{
		SchemaInfoU5BU5D_t74FB36EB2FE6D68C94F0AEDFD0B1AC7526D14BEA* L_43 = V_2;
		__this->set__schemaInfo_2(L_43);
		RuntimeObject* L_44 = __this->get__reader_0();
		FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * L_45 = (FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 *)il2cpp_codegen_object_new(FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39_il2cpp_TypeInfo_var);
		FieldNameLookup__ctor_mF67486CAEC7825CF308B9DA455A8037E964811E8(L_45, L_44, (-1), /*hidden argument*/NULL);
		__this->set__fieldNameLookup_4(L_45);
		PropertyDescriptorU5BU5D_t180EB0D36FC518D86D85E2E40518CDC287194A75* L_46 = V_3;
		PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F * L_47 = (PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F *)il2cpp_codegen_object_new(PropertyDescriptorCollection_t0BB7AE0048C13582B255B7D574F323B4B01D272F_il2cpp_TypeInfo_var);
		PropertyDescriptorCollection__ctor_m124991BF4E348817ACCC6C4373FD66B31566E425(L_47, L_46, /*hidden argument*/NULL);
		__this->set__descriptors_3(L_47);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Data.Common.DbParameterCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbParameterCollection__ctor_mD775A4D557C57801A6029E3495146B6372E0CE02 (DbParameterCollection_t53857899F148EF54A7C90F169557DD134B5297D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbParameterCollection__ctor_mD775A4D557C57801A6029E3495146B6372E0CE02_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbParameterCollection__ctor_mD775A4D557C57801A6029E3495146B6372E0CE02_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		MarshalByRefObject__ctor_m308FD08D73062FAC2316A55B752BBB5CF8BF02FE(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean System.Data.Common.DbParameterCollection::get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbParameterCollection_get_IsFixedSize_m04592A30E7E5DF7D39EE773968923FA3C3AA643F (DbParameterCollection_t53857899F148EF54A7C90F169557DD134B5297D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbParameterCollection_get_IsFixedSize_m04592A30E7E5DF7D39EE773968923FA3C3AA643F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbParameterCollection_get_IsFixedSize_m04592A30E7E5DF7D39EE773968923FA3C3AA643F_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// System.Boolean System.Data.Common.DbParameterCollection::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DbParameterCollection_get_IsReadOnly_mC54F9F30796EA4A4ADBA95C3C804FF9EA1CE3F64 (DbParameterCollection_t53857899F148EF54A7C90F169557DD134B5297D2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbParameterCollection_get_IsReadOnly_mC54F9F30796EA4A4ADBA95C3C804FF9EA1CE3F64_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbParameterCollection_get_IsReadOnly_mC54F9F30796EA4A4ADBA95C3C804FF9EA1CE3F64_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		return (bool)0;
	}
}
// System.Object System.Data.Common.DbParameterCollection::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * DbParameterCollection_System_Collections_IList_get_Item_m3400BEADE49A36372819D70DCF7F9DA7FB9E676C (DbParameterCollection_t53857899F148EF54A7C90F169557DD134B5297D2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbParameterCollection_System_Collections_IList_get_Item_m3400BEADE49A36372819D70DCF7F9DA7FB9E676C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbParameterCollection_System_Collections_IList_get_Item_m3400BEADE49A36372819D70DCF7F9DA7FB9E676C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___index0;
		DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3 * L_1;
		L_1 = VirtFuncInvoker1< DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3 *, int32_t >::Invoke(31 /* System.Data.Common.DbParameter System.Data.Common.DbParameterCollection::GetParameter(System.Int32) */, __this, L_0);
		return L_1;
	}
}
// System.Void System.Data.Common.DbParameterCollection::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbParameterCollection_System_Collections_IList_set_Item_m3A970A1275A1F148AD4C8E13E8484D7BA6DD74D3 (DbParameterCollection_t53857899F148EF54A7C90F169557DD134B5297D2 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbParameterCollection_System_Collections_IList_set_Item_m3A970A1275A1F148AD4C8E13E8484D7BA6DD74D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbParameterCollection_System_Collections_IList_set_Item_m3A970A1275A1F148AD4C8E13E8484D7BA6DD74D3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___index0;
		RuntimeObject * L_1 = ___value1;
		VirtActionInvoker2< int32_t, DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3 * >::Invoke(39 /* System.Void System.Data.Common.DbParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter) */, __this, L_0, ((DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3 *)CastclassClass((RuntimeObject*)L_1, DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Data.Common.DbParameter System.Data.Common.DbParameterCollection::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3 * DbParameterCollection_get_Item_m5323131A014AFC17F21DA0BECB22482F33BE0332 (DbParameterCollection_t53857899F148EF54A7C90F169557DD134B5297D2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbParameterCollection_get_Item_m5323131A014AFC17F21DA0BECB22482F33BE0332_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbParameterCollection_get_Item_m5323131A014AFC17F21DA0BECB22482F33BE0332_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___index0;
		DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3 * L_1;
		L_1 = VirtFuncInvoker1< DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3 *, int32_t >::Invoke(31 /* System.Data.Common.DbParameter System.Data.Common.DbParameterCollection::GetParameter(System.Int32) */, __this, L_0);
		return L_1;
	}
}
// System.Data.Common.DbParameter System.Data.Common.DbParameterCollection::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3 * DbParameterCollection_get_Item_m87A14BECEE5234975C0FD0D146EB2E8B1912C31C (DbParameterCollection_t53857899F148EF54A7C90F169557DD134B5297D2 * __this, String_t* ___parameterName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbParameterCollection_get_Item_m87A14BECEE5234975C0FD0D146EB2E8B1912C31C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbParameterCollection_get_Item_m87A14BECEE5234975C0FD0D146EB2E8B1912C31C_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___parameterName0;
		DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3 * L_1;
		L_1 = VirtFuncInvoker1< DbParameter_tFFCB778C7DBB767FAF0AA0FA9CDAAE9091499FE3 *, String_t* >::Invoke(32 /* System.Data.Common.DbParameter System.Data.Common.DbParameterCollection::GetParameter(System.String) */, __this, L_0);
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
// System.Void System.Data.DuplicateNameException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuplicateNameException__ctor_m9694A976FFE681B6BC33BE5A578F9CAEBFC2C738 (DuplicateNameException_t4305734127CC4324A913DE2E4CD9B38697E80C3C * __this, SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ___info0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuplicateNameException__ctor_m9694A976FFE681B6BC33BE5A578F9CAEBFC2C738_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DuplicateNameException__ctor_m9694A976FFE681B6BC33BE5A578F9CAEBFC2C738_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * L_0 = ___info0;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_1 = ___context1;
		DataException__ctor_m38CA27034EF0572F09C60FA4CD86D515435B4ABC(__this, L_0, L_1, /*hidden argument*/NULL);
		PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E * L_2 = (PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&PlatformNotSupportedException_t4F02BDC290520CA1A2452F51A8AC464F6D5E356E_il2cpp_TypeInfo_var)));
		PlatformNotSupportedException__ctor_mF4122BD5C9FF6CF441C2A4BCECF012EEF603AE05(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DuplicateNameException__ctor_m9694A976FFE681B6BC33BE5A578F9CAEBFC2C738_RuntimeMethod_var)));
	}
}
// System.Void System.Data.DuplicateNameException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuplicateNameException__ctor_m2337EB2161C2FB7AEF85430E42323C4DAFE973F8 (DuplicateNameException_t4305734127CC4324A913DE2E4CD9B38697E80C3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuplicateNameException__ctor_m2337EB2161C2FB7AEF85430E42323C4DAFE973F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C515F5529590A622ED8FFF5FF004F56EDA70D36);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DuplicateNameException__ctor_m2337EB2161C2FB7AEF85430E42323C4DAFE973F8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		DataException__ctor_m811C07A234ECE528FCCF04B90AA187D9FF8502C6(__this, _stringLiteral4C515F5529590A622ED8FFF5FF004F56EDA70D36, /*hidden argument*/NULL);
		Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_inline(__this, ((int32_t)-2146232030), /*hidden argument*/NULL);
		return;
	}
}
// System.Void System.Data.DuplicateNameException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DuplicateNameException__ctor_m238DD46B4F973CEA2F8C4AB7D5A37A5E527D93B7 (DuplicateNameException_t4305734127CC4324A913DE2E4CD9B38697E80C3C * __this, String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DuplicateNameException__ctor_m238DD46B4F973CEA2F8C4AB7D5A37A5E527D93B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DuplicateNameException__ctor_m238DD46B4F973CEA2F8C4AB7D5A37A5E527D93B7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___s0;
		DataException__ctor_m811C07A234ECE528FCCF04B90AA187D9FF8502C6(__this, L_0, /*hidden argument*/NULL);
		Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_inline(__this, ((int32_t)-2146232030), /*hidden argument*/NULL);
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
// System.Void System.Data.ProviderBase.FieldNameLookup::.ctor(System.Data.IDataReader,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldNameLookup__ctor_mF67486CAEC7825CF308B9DA455A8037E964811E8 (FieldNameLookup_t1F09FBFC400175E9455F7739B1062AC9C93ADF39 * __this, RuntimeObject* ___reader0, int32_t ___defaultLocaleID1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FieldNameLookup__ctor_mF67486CAEC7825CF308B9DA455A8037E964811E8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, FieldNameLookup__ctor_mF67486CAEC7825CF308B9DA455A8037E964811E8_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		RuntimeObject* L_0 = ___reader0;
		BasicFieldNameLookup__ctor_m69E77DB4889074EDB775F57C6AF74A2DB4EC1807(__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___defaultLocaleID1;
		__this->set__defaultLocaleID_1(L_1);
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
// System.String SR::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SR_GetString_m2421FD37234F6BCFE61B9109159A54155E3898E3 (String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SR_GetString_m2421FD37234F6BCFE61B9109159A54155E3898E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, SR_GetString_m2421FD37234F6BCFE61B9109159A54155E3898E3_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___name0;
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
// Conversion methods for marshalling of: System.Data.Common.SchemaInfo
IL2CPP_EXTERN_C void SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshal_pinvoke(const SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5& unmarshaled, SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshaled_pinvoke& marshaled)
{
	Exception_t* ___type_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'SchemaInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_2Exception, NULL);
}
IL2CPP_EXTERN_C void SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshal_pinvoke_back(const SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshaled_pinvoke& marshaled, SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5& unmarshaled)
{
	Exception_t* ___type_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'SchemaInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Data.Common.SchemaInfo
IL2CPP_EXTERN_C void SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshal_pinvoke_cleanup(SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: System.Data.Common.SchemaInfo
IL2CPP_EXTERN_C void SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshal_com(const SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5& unmarshaled, SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshaled_com& marshaled)
{
	Exception_t* ___type_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'SchemaInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_2Exception, NULL);
}
IL2CPP_EXTERN_C void SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshal_com_back(const SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshaled_com& marshaled, SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5& unmarshaled)
{
	Exception_t* ___type_2Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'type' of type 'SchemaInfo': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___type_2Exception, NULL);
}
// Conversion method for clean up from marshalling of: System.Data.Common.SchemaInfo
IL2CPP_EXTERN_C void SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshal_com_cleanup(SchemaInfo_t0E255354AD2E53AE8C9C1BF0C4F0C9AB288AECD5_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Data.Common.DbEnumerator/DbColumnDescriptor::.ctor(System.Int32,System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DbColumnDescriptor__ctor_m0DB76F370A45E3E671240E56252497E33521E6DD (DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38 * __this, int32_t ___ordinal0, String_t* ___name1, Type_t * ___type2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbColumnDescriptor__ctor_m0DB76F370A45E3E671240E56252497E33521E6DD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbColumnDescriptor__ctor_m0DB76F370A45E3E671240E56252497E33521E6DD_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		String_t* L_0 = ___name1;
		PropertyDescriptor__ctor_m75229C6B90FE0810B721B1F6470D0A0A53E547DA(__this, L_0, (AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4*)(AttributeU5BU5D_t04604A91F55E7DFF76B9AF6150E6597D2EBCDCD4*)NULL, /*hidden argument*/NULL);
		int32_t L_1 = ___ordinal0;
		__this->set__ordinal_15(L_1);
		Type_t * L_2 = ___type2;
		__this->set__type_16(L_2);
		return;
	}
}
// System.Type System.Data.Common.DbEnumerator/DbColumnDescriptor::get_PropertyType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * DbColumnDescriptor_get_PropertyType_mF0518747B9A4D5D1B7C6044129AA1B20379489B7 (DbColumnDescriptor_t5E819A959E66E6403CBC55BCB7F46E9059806B38 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DbColumnDescriptor_get_PropertyType_mF0518747B9A4D5D1B7C6044129AA1B20379489B7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, DbColumnDescriptor_get_PropertyType_mF0518747B9A4D5D1B7C6044129AA1B20379489B7_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Type_t * L_0 = __this->get__type_16();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t OperatingSystem_get_Platform_m1E43B8C2B6CCDD74474E9AB9CF4EF7445D8BE1DF_inline (OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatingSystem_get_Platform_m1E43B8C2B6CCDD74474E9AB9CF4EF7445D8BE1DF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OperatingSystem_get_Platform_m1E43B8C2B6CCDD74474E9AB9CF4EF7445D8BE1DF_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get__platform_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * OperatingSystem_get_Version_m6ED6AD2C904E6809FB758E6303CFAFABFD0B0A46_inline (OperatingSystem_tBB911FE4834884FD79AF78F2B07C19B938491463 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatingSystem_get_Version_m6ED6AD2C904E6809FB758E6303CFAFABFD0B0A46_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, OperatingSystem_get_Version_m6ED6AD2C904E6809FB758E6303CFAFABFD0B0A46_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_0 = __this->get__version_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Version_get_Major_mBDD414863C4A05FADE87F8C39C8CE8ED6DE6C460_inline (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Version_get_Major_mBDD414863C4A05FADE87F8C39C8CE8ED6DE6C460_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Version_get_Major_mBDD414863C4A05FADE87F8C39C8CE8ED6DE6C460_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = __this->get__Major_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_inline (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DECLARE_METHOD_EXEC_CTX(methodExecutionContext, Exception_set_HResult_mB9E603303A0678B32684B0EEC144334BAB0E6392_RuntimeMethod_var, NULL, NULL, NULL);
	CHECK_PAUSE_POINT;
	{
		int32_t L_0 = ___value0;
		__this->set__HResult_11(L_0);
		return;
	}
}
