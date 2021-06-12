#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>

#include "vm/CachedCCWBase.h"
#include "utils/New.h"

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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct Dictionary_2_t79A0FFC8A9EA909E2397C10AFBD9F64EC0154963;
// System.Collections.Generic.Dictionary`2<System.Runtime.Serialization.DataContractPairKey,System.Object>
struct Dictionary_2_tAE6517D958482ABDCC71D4DE037C89E9E67D3283;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.Action`1<System.Boolean>>
struct Dictionary_2_t6107C35906C65493CD79072E6B34F496C5924B0E;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdEndEventArgs>>
struct Dictionary_2_tE0815C070F789E72A04F84BE7844FBB5A52BC500;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdEventArgs>>
struct Dictionary_2_t637F0CC7C578B68A010FCCFCB519DC1C7C4CA1AC;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdPlayableEventArgs>>
struct Dictionary_2_t2B248EEB0414C868C5237424BD4A9EFD348C6006;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdViewEventArgs>>
struct Dictionary_2_tEF4A736DF95D297991FC1435C1D10EAB0965AE8D;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.ConfigEventArgs>>
struct Dictionary_2_t80BA445386655663504085E18699C4A5F045821E;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.DiagnosticLogEvent>>
struct Dictionary_2_tFC76A989CA270C072075A853A1503FAD2A03BE33;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<System.EventArgs>>
struct Dictionary_2_t1EE6303108CCB2511428FB8B856A0F484E9F36C8;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.adplay.KeyInputEvent>>
struct Dictionary_2_tAE0DCD8F32B19624025ED3AB045C7EE073735CF3;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.NetworkResult>>
struct Dictionary_2_tF16E075303ACCEE55BA01FA301D941A8AF047F7D;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<System.Object>>
struct Dictionary_2_t654798A9F17760C1141072075001BA839FC003EA;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.adplay.StartEndEvent>>
struct Dictionary_2_t9D712E6DBFFE6BBE35AEA22F56766927FF26C121;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>>
struct Dictionary_2_t30FED002C877273C05AEB84FF8B963D06D7C472D;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdManager/AdAvailaibilityEvent>>
struct Dictionary_2_t0C1FE55AA402DBD9B502B3FD18246039E49BFF9C;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.bridge.WebViewBridge/DebuggerEventArgs>>
struct Dictionary_2_tD22FFC55940117952A225AA2482D805889799760;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler>
struct Dictionary_2_t3171FA17DB7EA8EBAD1B0A99FED8C3FDF06B9C0F;
// System.Collections.Generic.Dictionary`2<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,VungleSDK.NetworkManager/DebugJsonDelegate>
struct Dictionary_2_tDC3A2D8BA31D0412361D16701DBDB867E7D4DB20;
// System.Collections.Generic.Dictionary`2<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct Dictionary_2_t4F42AAD6C75C36A4A9D4B0CD537DAF5D5F503079;
// System.Collections.Generic.Dictionary`2<Windows.UI.Xaml.FrameworkElement,System.Boolean>
struct Dictionary_2_t2B4D1DE2140E1A4CD0295C3CD2FF4C7D80661E3B;
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.Graphic,System.Int32>
struct Dictionary_2_t51811C4D09EBB297C0DFE9FA972CEB160E185E11;
// System.Collections.Generic.Dictionary`2<System.Guid,Mono.Security.Interface.MonoTlsProvider>
struct Dictionary_2_t94DF7D57A0FF045929FE85E29881A95D7B508301;
// System.Collections.Generic.Dictionary`2<System.Threading.IAsyncLocal,System.Object>
struct Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938;
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.ICanvasElement,System.Int32>
struct Dictionary_2_t059F96DADCC8B901973F95056D8107AB675AEE96;
// System.Collections.Generic.Dictionary`2<UnityEngine.UI.IClipper,System.Int32>
struct Dictionary_2_tE0026BDD5CB0F84F7271F011A4C20757945DE83F;
// System.Collections.Generic.Dictionary`2<System.Xml.IDtdEntityInfo,System.Xml.IDtdEntityInfo>
struct Dictionary_2_t7E4F75E23B8A710084DDD8B7D9D901F39C24B184;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.IO.Stream>>
struct Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Net.WebResponse>>
struct Func_2_t2C94CFD55C2E528DE57128CD2A37F45F9E914E5C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Net.WebResponseStream>>
struct Func_2_tDCDF51EBB03B2A126B495E31C37EE500F05ACE24;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Net.WebCompletionSource/Result>>
struct Func_2_tBFDE5128E33C297BBEAA374E8C50091244EF6DD2;
// System.Collections.Generic.ICollection`1<System.Action`1<System.Boolean>>
struct ICollection_1_t19A605BD14E77CEF5623AB8EC9D14494CC88DEEA;
// System.Collections.Generic.ICollection`1<System.Collections.Concurrent.ConcurrentDictionary`2<System.DateTime,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>>
struct ICollection_1_tE4BED8C5ADE6041295FCCB751195AD22B42BAC92;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<VungleSDK.AdEndEventArgs>>
struct ICollection_1_t77F5D0B41169D041A9879D52C71A3EF2FD67BDF0;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<VungleSDK.AdEventArgs>>
struct ICollection_1_t940B1E6796189D919CAA3AA5CAFB3D894A5B33E3;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<VungleSDK.AdPlayableEventArgs>>
struct ICollection_1_t072396BCDDFA47C9B6B2D4550B8C84833F9D52C9;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<VungleSDK.AdViewEventArgs>>
struct ICollection_1_t00E44382FEFA692225EA85A526B6F9676DBBAF5B;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<VungleSDK.ConfigEventArgs>>
struct ICollection_1_tFC385F76DEAD2B0DA6AA16A5A72CFC50A59923EE;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<VungleSDK.DiagnosticLogEvent>>
struct ICollection_1_tA4347B16A38B84856E5D78C43465A5C015B99BA2;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<System.EventArgs>>
struct ICollection_1_t6A72EE6B870C677D316DEBABBB09470C4F48AA0F;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<VungleSDK.adplay.KeyInputEvent>>
struct ICollection_1_t8ABF6946BE390477C753192DB12FD20FF6F687A1;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<VungleSDK.NetworkResult>>
struct ICollection_1_t9739E1AED56E66516E830757BDFE22A61F09446C;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<System.Object>>
struct ICollection_1_t6C76109A68ADAE27EC0D05A8873DCC60869BB91F;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<VungleSDK.adplay.StartEndEvent>>
struct ICollection_1_t3495F8E23727F509AAAE4841711EF7A02D3966E7;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>>
struct ICollection_1_tF462DD4258A1A7727C8C0BA91852A5811E3AB25E;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<VungleSDK.AdManager/AdAvailaibilityEvent>>
struct ICollection_1_t43A7B74D94945E1695BE94474886067065A5982C;
// System.Collections.Generic.ICollection`1<System.EventHandler`1<VungleSDK.bridge.WebViewBridge/DebuggerEventArgs>>
struct ICollection_1_tD0D186E24C62FBE93AB5A140CA0A27EEFD52715A;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct ICollection_1_t84046D579DC45F64F3B24A525752E4529405C1AA;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ICollection_1_t40647947AF8A529A0F63807328ADB2167C163441;
// System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct ICollection_1_t2FDD75B2F3EBB2E68D0FFD87B7425DD1F9D5861D;
// System.Collections.Generic.ICollection`1<System.Tuple`2<System.Guid,System.Int32>>
struct ICollection_1_t1ADB52CEE54A2AEB55D5027F5A84179ECFB6F44D;
// System.Collections.Generic.ICollection`1<System.Boolean>
struct ICollection_1_t655D141A762682C0B23DCBB178920F6E16ACDCC1;
// System.Collections.Generic.ICollection`1<System.EventHandler>
struct ICollection_1_t8D7167EEE7917B9890046AD7C4C92D5A833563F0;
// System.Collections.Generic.ICollection`1<System.Xml.IDtdEntityInfo>
struct ICollection_1_t658BABDD4525BBD1A53AEA63CF4ADCDB9677C363;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t1C0C51B19916511E9D525272F055515334C93525;
// System.Collections.Generic.ICollection`1<Mono.Security.Interface.MonoTlsProvider>
struct ICollection_1_tE631A8EDFAFE0BE618DAA83172258BA4DE9BAAE8;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t35488BE070734B4C5D136DC1A68CBC9CE507D488;
// System.Collections.Generic.ICollection`1<VungleSDK.NetworkManager/DebugJsonDelegate>
struct ICollection_1_tEC0CECF7A8D854EA7E82BC73427B10C590C5B853;
// System.Collections.Generic.IList`1<System.Linq.Expressions.Expression>
struct IList_1_tBA929C89BC35AAE67764DAA82D62E01A200D3C7D;
// System.Collections.Generic.IList`1<System.Linq.Expressions.ParameterExpression>
struct IList_1_t577FCBB6A17E4D24559E5AD6C70155CFF0DFACAC;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.IO.Stream>
struct TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B;
// System.Threading.Tasks.TaskFactory`1<System.Net.WebResponse>
struct TaskFactory_1_t59C1EE1FD5B07F2BEBFFB103A93A760D61A39406;
// System.Threading.Tasks.TaskFactory`1<System.Net.WebResponseStream>
struct TaskFactory_1_t013331FD79369EBE4F211D12E48EE81880B105E0;
// System.Threading.Tasks.TaskFactory`1<System.Net.WebCompletionSource/Result>
struct TaskFactory_1_t70266DFCB25D824BF5DA2A7738BE839DEA63F75E;
// Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow,Windows.UI.Core.WindowActivatedEventArgs>
struct TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4;
// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC;
// Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewContentLoadingEventArgs>
struct TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC;
// Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewDOMContentLoadedEventArgs>
struct TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB;
// Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationCompletedEventArgs>
struct TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A;
// Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationStartingEventArgs>
struct TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Windows.UI.Core.CoreWindow
struct CoreWindow_t036E38CD43CB603ECB94E90C48D1F6A8A89AFBFD;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// IActivationFactory
struct Il2CppIActivationFactory;
// Windows.UI.Core.ICoreWindowStatic
struct ICoreWindowStatic_tB835F5EE366BF4CEAF53D728AED7F81C36BBF0BF;
// Windows.UI.Xaml.IDependencyObjectFactory
struct IDependencyObjectFactory_t53DD512B2193177B8B2B38F8AC6F07EF676984F6;
// Windows.UI.Xaml.IFrameworkElementFactory
struct IFrameworkElementFactory_tD9E8BF62E9BEFD7C6F39DDCB1174D836AC893882;
// Windows.UI.Xaml.IFrameworkElementStatics
struct IFrameworkElementStatics_t7013CC9124DF9FF1B5E016C2EFC86C3269153A4B;
// Windows.UI.Xaml.IFrameworkElementStatics2
struct IFrameworkElementStatics2_t006E0C94B58E512979C0E26CF92E31C1EC3E6DBC;
// Windows.UI.Xaml.IFrameworkElementStatics4
struct IFrameworkElementStatics4_tF635D14CACDD3DB2A464776C6340C0C29BEE0D6A;
// Windows.UI.Xaml.IFrameworkElementStatics5
struct IFrameworkElementStatics5_t54FA18E9837077C2A0D541D2B178D7EFC13A2A6B;
// Windows.UI.Xaml.IFrameworkElementStatics6
struct IFrameworkElementStatics6_tC1600E6717511D85D36AF9171D396EE4BBC7F63D;
// Windows.UI.Xaml.IUIElementFactory
struct IUIElementFactory_t8473CF5D644588F10274B3442877492C94BE44B9;
// Windows.UI.Xaml.IUIElementStatics
struct IUIElementStatics_tB02707A810D7C1BDB2299D5118D80766992B77D9;
// Windows.UI.Xaml.IUIElementStatics10
struct IUIElementStatics10_tDA98B1B182BD703F4A86B0D1F3EBFDA797EAF192;
// Windows.UI.Xaml.IUIElementStatics2
struct IUIElementStatics2_tC3C9022FB8A229C3AD76A66F7133E21B34E0A0DD;
// Windows.UI.Xaml.IUIElementStatics3
struct IUIElementStatics3_t99682FAA1CF9A8F5C9DDE103AACFAAAFE104065B;
// Windows.UI.Xaml.IUIElementStatics4
struct IUIElementStatics4_tAA933596F5F4C2AC8D29647965A7D5B20910268F;
// Windows.UI.Xaml.IUIElementStatics5
struct IUIElementStatics5_tBF8D386F03A2C63384D7905C49773AFA2C2A4ADF;
// Windows.UI.Xaml.IUIElementStatics6
struct IUIElementStatics6_tD65C6A77C6F2B429FC22E5F2A6313341C3F4C15F;
// Windows.UI.Xaml.IUIElementStatics7
struct IUIElementStatics7_tF5F261FE18EECE3F0E1138302832C639A7191A31;
// Windows.UI.Xaml.IUIElementStatics8
struct IUIElementStatics8_tD360A36B188CDCFE36A174231CB4B730B2FDC8A1;
// Windows.UI.Xaml.IUIElementStatics9
struct IUIElementStatics9_t3C508635952F0E0FC2380184F404B476603371E6;
// Windows.UI.Xaml.Controls.IWebViewFactory4
struct IWebViewFactory4_tC20B68997D7100D6E8B6A6542E59C676FAA35DCA;
// Windows.UI.Xaml.Controls.IWebViewStatics
struct IWebViewStatics_tAC20E8BE89CCBA14F817656DA6001187D5890D7F;
// Windows.UI.Xaml.Controls.IWebViewStatics2
struct IWebViewStatics2_tD6A4BCC57B50E42BC42148C40DD03E4B3218736F;
// Windows.UI.Xaml.Controls.IWebViewStatics3
struct IWebViewStatics3_t5397B709E7080AF0A0413985E72AFDF4B1AA1F33;
// Windows.UI.Xaml.Controls.IWebViewStatics4
struct IWebViewStatics4_t49CC152C57561D1CE210A84F65892F7C994D8E79;
// Windows.UI.Xaml.Controls.IWebViewStatics5
struct IWebViewStatics5_tA08B995FCC3024509E7990674453C179E1587DEC;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.IO.Stream
struct Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB;
// System.String
struct String_t;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Net.WebResponse
struct WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0;
// System.Net.WebResponseStream
struct WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F;
// Windows.UI.Xaml.Controls.WebView
struct WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900;
// Windows.UI.Xaml.Controls.WebViewContentLoadingEventArgs
struct WebViewContentLoadingEventArgs_t1F95E97D138594CA25666D61BD97B611B475A860;
// Windows.UI.Xaml.Controls.WebViewDOMContentLoadedEventArgs
struct WebViewDOMContentLoadedEventArgs_tAEE554A6493E9466F1C8C9A48ABEE6F47BB10D6A;
// Windows.UI.Xaml.Controls.WebViewNavigationCompletedEventArgs
struct WebViewNavigationCompletedEventArgs_tD0B8AF703EFA6C717B244D4B356B6BD0165A426D;
// Windows.UI.Xaml.Controls.WebViewNavigationStartingEventArgs
struct WebViewNavigationStartingEventArgs_t30F625D3F53DFD47538748F0F6D8C36921011265;
// Windows.UI.Core.WindowActivatedEventArgs
struct WindowActivatedEventArgs_tB97F0E07C4CCB04C8352C960B90FE29A3505FBD4;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Net.WebCompletionSource/Result
struct Result_t6AD2B95B32BB932F08E76BEE08D87983CAD79435;

IL2CPP_EXTERN_C RuntimeClass* CoreWindow_t036E38CD43CB603ECB94E90C48D1F6A8A89AFBFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebViewContentLoadingEventArgs_t1F95E97D138594CA25666D61BD97B611B475A860_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebViewDOMContentLoadedEventArgs_tAEE554A6493E9466F1C8C9A48ABEE6F47BB10D6A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebViewNavigationCompletedEventArgs_tD0B8AF703EFA6C717B244D4B356B6BD0165A426D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebViewNavigationStartingEventArgs_t30F625D3F53DFD47538748F0F6D8C36921011265_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WindowActivatedEventArgs_tB97F0E07C4CCB04C8352C960B90FE29A3505FBD4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2_Invoke_m00EFA8EB349790EFFACB1D896688752AA2C5825D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2_Invoke_m43FB38D24159D2B8BDB576C6B63F9CB2D632CD56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2_Invoke_m9A924CD33673F9E421D09A2E7F4F561A698DE402_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2_Invoke_mAA97CEB0DEAB91B05551D4FD95A611C2002D302F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TypedEventHandler_2_Invoke_mFCCED2ADBCE7FEBA981D3EDC3A6BC4378C69CD6A_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB;
struct IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA;
struct ICoreDispatcher_t24D33D9C3D66BDC211A3A727B07B9309E4510CF5;
struct ICoreWindow_t8171C3C9F3639753CE689551F960C1F0189C3B70;
struct IDependencyObject_t861A2C6CAD7003394999C785F5370849FC8AF265;
struct IFrameworkElement_tDC8BB5DE9135F009377A767F6A26D5F4497BE8C1;
struct IIterator_1_t010C84FB691B93F5282F086A63FD2FC0204DF8C1;
struct IIterator_1_t4B49DCCA506E292492E84CAAD9F2B5B1C080BAF0;
struct IIterator_1_t633CABC20CB9311C39C96BD0C94CBB86458845B4;
struct IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4;
struct IIterator_1_t8740C181128AED3F3D250FB1DD4DEAB681678231;
struct IIterator_1_tA139984CFC4F44276F5D79FCE000AEB22BD6837A;
struct IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C;
struct IIterator_1_tBA5B0A0D15D97D2195251F2025585A36AB8DBBF3;
struct IIterator_1_tCE1228F7036709D8995228E4D6B062403BE4A179;
struct IIterator_1_tD1A6AB7C797A40AA55DDA1B9302213C0C31F185C;
struct IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67;
struct IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF;
struct IIterator_1_tF8707DD64D52BDB8A012DE199056F7ACB722A66F;
struct IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C;
struct ILoadCompletedEventHandler_t1D23C58B03D6A46DDD222498F6DD227C441AA087_ComCallableWrapper;
struct INotifyEventHandler_tDCCD56A74C41F9E61B166E24F69878D4BD846FBC_ComCallableWrapper;
struct ITypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper;
struct IUIElement_t72C92D252F4067225C6B70EC570602BB79D51898;
struct IWebViewContentLoadingEventArgs_t0CFDA5E6797A282D2E1882E41996190E282B8519;
struct IWebViewDOMContentLoadedEventArgs_tA316BEA13E58B98198CA8AB68B25A373FA6C353B;
struct IWebViewNavigationCompletedEventArgs_tF6A2CE4137DF6EC9B63814EB940FCC8D8C70022E;
struct IWebViewNavigationStartingEventArgs_t4B0070222F6E02101A7C5D048745E98D3B8FFFC1;
struct IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA;
struct IWindowActivatedEventArgs_tF45E992219EA24A36AA1BC2727B40024FDDA5906;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Foundation.Collections.IIterable`1<System.EventHandler`1<VungleSDK.AdEndEventArgs>>
struct NOVTABLE IIterable_1_t8BA588C8C55DB87154DD0E5CFB2142C32C192F94 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m10B9CEF4E2365F68B696BAA376DD71E50C4F03CF(IIterator_1_t010C84FB691B93F5282F086A63FD2FC0204DF8C1** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.EventHandler`1<VungleSDK.AdEventArgs>>
struct NOVTABLE IIterable_1_tC27FDCD852454F7442EBB7FB02AC5B89FC69358D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDC3A085FD88BD51803D0108F4BE55CC0A62F04BD(IIterator_1_tCE1228F7036709D8995228E4D6B062403BE4A179** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.EventHandler`1<VungleSDK.AdPlayableEventArgs>>
struct NOVTABLE IIterable_1_tEAE981D07D8974FAC0C115D463DA2D6E08F74DF1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m69A2608FA3F7C2D60F8A1492A72FD4FD7861C5CF(IIterator_1_tF8707DD64D52BDB8A012DE199056F7ACB722A66F** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.EventHandler`1<VungleSDK.AdViewEventArgs>>
struct NOVTABLE IIterable_1_tD274D6C55D7284FD0F1563AE2AC8518913F7FE02 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m57839A783E9A1B960462AAEBB26AE8C05F1231FB(IIterator_1_t633CABC20CB9311C39C96BD0C94CBB86458845B4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.EventHandler`1<VungleSDK.ConfigEventArgs>>
struct NOVTABLE IIterable_1_t86A0285D6E173974BC2F86C5C1536FC1E4BFED5F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC25A6579B73668A43386C242D195C7AE733F1834(IIterator_1_tA139984CFC4F44276F5D79FCE000AEB22BD6837A** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.EventHandler`1<VungleSDK.DiagnosticLogEvent>>
struct NOVTABLE IIterable_1_t27C7A849BF6A27C4982B1A1F57F3B89951368AB4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m7CC5BFCA3F68A57AFCBABBF364165E9DA07DECA2(IIterator_1_tD1A6AB7C797A40AA55DDA1B9302213C0C31F185C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.EventHandler`1<System.Object>>
struct NOVTABLE IIterable_1_tE146E8945534A64251D7E1D0243EF371CAF55B18 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA17781E559876116F3471301EC6F7F061390E5AB(IIterator_1_tBA5B0A0D15D97D2195251F2025585A36AB8DBBF3** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>>
struct NOVTABLE IIterable_1_t0D0F9DD263F325354DE7A1E27467CA259406B74B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE209B1D5394F56E0788A71FD5AB0EA404515BA42(IIterator_1_t4B49DCCA506E292492E84CAAD9F2B5B1C080BAF0** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.IEnumerable`1<System.Object>>
struct NOVTABLE IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct NOVTABLE IIterable_1_tEAB82D72E93310B7B99AE0982238491929BEDFD6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m633A6619394B3D5F3C491E07218865F0DF049B13(IIterator_1_t8740C181128AED3F3D250FB1DD4DEAB681678231** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Boolean>
struct NOVTABLE IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB(IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.IEnumerable>
struct NOVTABLE IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Int32>
struct NOVTABLE IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Object>
struct NOVTABLE IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableIterable
struct NOVTABLE IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) = 0;
};
// Windows.UI.Xaml.Interop.IBindableVector
struct NOVTABLE IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() = 0;
	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() = 0;
};
// Windows.UI.Core.ICoreWindowStatic
struct NOVTABLE ICoreWindowStatic_tB835F5EE366BF4CEAF53D728AED7F81C36BBF0BF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindowStatic_U24__Stripped0_GetForCurrentThread_m4388A714A1392D2182939DCEF9D6360C61383404() = 0;
};
// Windows.UI.Xaml.IDependencyObjectFactory
struct NOVTABLE IDependencyObjectFactory_t53DD512B2193177B8B2B38F8AC6F07EF676984F6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IDependencyObjectFactory_U24__Stripped0_CreateInstance_m46764E653128FD85E92515C45AB5C02F92D5B54E() = 0;
};
// Windows.UI.Xaml.IFrameworkElementFactory
struct NOVTABLE IFrameworkElementFactory_tD9E8BF62E9BEFD7C6F39DDCB1174D836AC893882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementFactory_U24__Stripped0_CreateInstance_m79488FB56AEFDA5D193E269681FD466C81A2D46B() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics
struct NOVTABLE IFrameworkElementStatics_t7013CC9124DF9FF1B5E016C2EFC86C3269153A4B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped0_get_TagProperty_mA6D958A4935D02953E1629C9E552F9E93F9CF912() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped1_get_LanguageProperty_mD8817D3134DE608F869430ACB59E18B5F1AD9520() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped2_get_ActualWidthProperty_m7DD3661C341BDB6B54D016DE63088F549CB9263B() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped3_get_ActualHeightProperty_mAAD24E5AFD8AAD1E6893E89633BC05F0D786E005() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped4_get_WidthProperty_m223375DBD07931B125A2789362BBBEF11B92E32F() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped5_get_HeightProperty_m89EE14D256C7A7B6F9DE70110A4C13C946C5580D() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped6_get_MinWidthProperty_m0D1C8544ADBD34B649C791E17FA2CAA923425E3A() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped7_get_MaxWidthProperty_m27F1F143683AE82B66E4ED3B64527BD857A8F81C() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped8_get_MinHeightProperty_m085473E8976307B793E826053E72671CA92E83C0() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped9_get_MaxHeightProperty_m0B3CA7D6DF1FBB4245DEBCFCB3E3AD423662A4A0() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped10_get_HorizontalAlignmentProperty_m3E26B7CF856E79A812E3B4432220059529396A3F() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped11_get_VerticalAlignmentProperty_mE764E15464907D8B07785B924E9E80BA84410685() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped12_get_MarginProperty_mD34FACF1EE041F822144B17664F6C0B977F84580() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped13_get_NameProperty_mFC99D74CECF46BDEF80518233E65A570C8C8BFC0() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped14_get_DataContextProperty_m93196870F4CB973A7E251DD43C444CBC320D9FA0() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped15_get_StyleProperty_mE37C57435E53EA08B716C4D2E75789955B4B739F() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics_U24__Stripped16_get_FlowDirectionProperty_m24808D4EB4BD979D55811281CFEB8B6A0DF807E4() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics2
struct NOVTABLE IFrameworkElementStatics2_t006E0C94B58E512979C0E26CF92E31C1EC3E6DBC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics2_U24__Stripped0_get_RequestedThemeProperty_m8EB2E6AEA63C0F7CAF95C90FD64815DBA58231EA() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics4
struct NOVTABLE IFrameworkElementStatics4_tF635D14CACDD3DB2A464776C6340C0C29BEE0D6A : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped0_get_AllowFocusOnInteractionProperty_mE05C814BA53BC2A60C91B64A918389054585697E() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped1_get_FocusVisualMarginProperty_m9824FF87FE5099996FE338130975B649028C57FB() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped2_get_FocusVisualSecondaryThicknessProperty_mEBC0BEC39AC095A314ADF55F93D13C51E3D7938E() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped3_get_FocusVisualPrimaryThicknessProperty_mC6E671002AA23555F9F5E1C4B9559C4CBB7BA9FD() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped4_get_FocusVisualSecondaryBrushProperty_m16B6C10077A0A8513C62545045322EAF0A64ECCE() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped5_get_FocusVisualPrimaryBrushProperty_mCF8FFEBA094D697E698EE8B941B8D7FF10EEF809() = 0;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics4_U24__Stripped6_get_AllowFocusWhenDisabledProperty_m98330B3BA5A459EF858E6B0B2D20AB216DE9D488() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics5
struct NOVTABLE IFrameworkElementStatics5_t54FA18E9837077C2A0D541D2B178D7EFC13A2A6B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics5_U24__Stripped0_DeferTree_mDEFFA57B73A6C3E813AB05BD4775C1F558BA9ECF() = 0;
};
// Windows.UI.Xaml.IFrameworkElementStatics6
struct NOVTABLE IFrameworkElementStatics6_tC1600E6717511D85D36AF9171D396EE4BBC7F63D : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IFrameworkElementStatics6_U24__Stripped0_get_ActualThemeProperty_mBCC49E55A24A134410CB26157CA45C85836B2B2B() = 0;
};
// Windows.UI.Xaml.IUIElementFactory
struct NOVTABLE IUIElementFactory_t8473CF5D644588F10274B3442877492C94BE44B9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.UI.Xaml.IUIElementStatics
struct NOVTABLE IUIElementStatics_tB02707A810D7C1BDB2299D5118D80766992B77D9 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped0_get_KeyDownEvent_mBADF19E5F39226156AEC42EBFB162E0C6651726F() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped1_get_KeyUpEvent_m411AB17ADB581A23D1BB5CA68137980A531ED05D() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped2_get_PointerEnteredEvent_m7C209379A47F2476A832A863383D21C775912AA5() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped3_get_PointerPressedEvent_m7851E9136EA4B26ECC889159B5D195897D429DB2() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped4_get_PointerMovedEvent_m4F8725E1CAC407D8A013AEAC2D2C4B06E90FA654() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped5_get_PointerReleasedEvent_mDB5F16E5F8130CEB144D33D41FD0C55FC1807B99() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped6_get_PointerExitedEvent_m47A9D15E68B7502EB6BA4AB342A37CB62BA7CFDE() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped7_get_PointerCaptureLostEvent_mC20E1A70408CF500C969B924D904FB44CDC9F614() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped8_get_PointerCanceledEvent_m1B22548152E349D38DCE29F4FCB9F95E47F464E1() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped9_get_PointerWheelChangedEvent_mE884EB3B86EBA7A7A2C88C8AC9A0D7E5473E21AB() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped10_get_TappedEvent_m1CB08ACC2EA1BEA6A887A3A511DFCFC6EA21F894() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped11_get_DoubleTappedEvent_m3D08D59302010D25C6A0995315AF26E1D98530ED() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped12_get_HoldingEvent_m063D198C6209AB41503D9DD4E0B84F62D3CD7044() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped13_get_RightTappedEvent_m62CBFD1C6DCFC6C3C86258BE7E9685DAF967C17F() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped14_get_ManipulationStartingEvent_m4A58B72D5BC316AA929A5B7917C129D7EE9AD43C() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped15_get_ManipulationInertiaStartingEvent_mC2BB84FF5C811BE4AA29B470A92740178CDBC744() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped16_get_ManipulationStartedEvent_m9058F772FA866F517DC7CA237CED9F29E09D3853() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped17_get_ManipulationDeltaEvent_m5A5984A534BF990570936B8FF256AF20C52C2FDF() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped18_get_ManipulationCompletedEvent_m408077B4ED8B23B3B42F8287243C1DA7A434DEBA() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped19_get_DragEnterEvent_mF893B64460B2F858A4EE98629A2F6E6A15140B25() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped20_get_DragLeaveEvent_m210D52788EAFB13B4FCCDEFD5DAC1F8C9704C207() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped21_get_DragOverEvent_mB31391D24F3DCBD48072B126FD5B25219397B64A() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped22_get_DropEvent_mF15D30FA0C50AEA2B7B54A58D7821E511DCC789E() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped23_get_AllowDropProperty_m203DED7A6C31109E52E88775FE979D1F60EF8624() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped24_get_OpacityProperty_m4C76D2284DC87701897F92B22ED3F41FA34DEE1D() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped25_get_ClipProperty_m7EFBDF1029216A09F6AC34A370893FF26F663BE2() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped26_get_RenderTransformProperty_mBEEED03715C466A0EDFB209CE5BBC0C45A12CBD6() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped27_get_ProjectionProperty_m4E91E3EC416DF357BBFE85B6DE19DD7C988DCD6E() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped28_get_RenderTransformOriginProperty_m7D974FE8A98E854A2AD1A988D718B1057D74B51E() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped29_get_IsHitTestVisibleProperty_mD43C7204ED2AE1884D09FA5B1A7B0F538195865E() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped30_get_VisibilityProperty_m5CE92AB9AC7744F8A0C0B1D000E6524D193FA58E() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped31_get_UseLayoutRoundingProperty_m7B7000BADEF8D896A3689BD0973DE5FEE07560E3() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped32_get_TransitionsProperty_mD652F093C0DA38536F13E32E5A665798105A407E() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped33_get_CacheModeProperty_mC8EA3B1560CEEDBA3EC120A71C58134259569EF4() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped34_get_IsTapEnabledProperty_m3BBF0E15E933437F206AAD3A93D1AB83A92FF20F() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped35_get_IsDoubleTapEnabledProperty_mB8C8B6D2F24584D300E2B68A73AE03BF74EF9FEE() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped36_get_IsRightTapEnabledProperty_m078FB97603D7C88B80A967F1A7DBFAB5886F90C7() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped37_get_IsHoldingEnabledProperty_mC8D4FB60DC561C7442D7C11CC156E09F3323966D() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped38_get_ManipulationModeProperty_mDC08365C4ACFFEF4FC6EAAC8F2E313395DAA8404() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics_U24__Stripped39_get_PointerCapturesProperty_m8C153FCCF85F40847E092780DFE85283ECF507AF() = 0;
};
// Windows.UI.Xaml.IUIElementStatics10
struct NOVTABLE IUIElementStatics10_tDA98B1B182BD703F4A86B0D1F3EBFDA797EAF192 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics10_U24__Stripped0_get_ShadowProperty_m9CB81D5FBEC73338F3AFCE832F01098E4C4CD20C() = 0;
};
// Windows.UI.Xaml.IUIElementStatics2
struct NOVTABLE IUIElementStatics2_tC3C9022FB8A229C3AD76A66F7133E21B34E0A0DD : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics2_U24__Stripped0_get_CompositeModeProperty_mDB00D6C15AEEBC99B3EA11E26E1AFFD727A9CD8E() = 0;
};
// Windows.UI.Xaml.IUIElementStatics3
struct NOVTABLE IUIElementStatics3_t99682FAA1CF9A8F5C9DDE103AACFAAAFE104065B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped0_get_Transform3DProperty_mC4CD514395C21C470B3E78BBA9B760C9BEE59502() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped1_get_CanDragProperty_m3967CCC63F13088B6E491FEC5F8B050E0BBF3A6B() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics3_U24__Stripped2_TryStartDirectManipulation_mC7243559E9F92D878A645BC03006314F9B4F80EE() = 0;
};
// Windows.UI.Xaml.IUIElementStatics4
struct NOVTABLE IUIElementStatics4_tAA933596F5F4C2AC8D29647965A7D5B20910268F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped0_get_ContextFlyoutProperty_m31C5C85CA71C6AF5CC5BD3CAEA17C7B95F79FDA6() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped1_get_ExitDisplayModeOnAccessKeyInvokedProperty_mDCC2D04168CD70D73D96E65D082CF77659BF4F07() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped2_get_IsAccessKeyScopeProperty_m9236AD9B187F21E4C8D6ECAFA1024001328D7C78() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped3_get_AccessKeyScopeOwnerProperty_mA520C4FECC33DCEE726D1D97C52F9568C1456555() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics4_U24__Stripped4_get_AccessKeyProperty_mC52C3E9EB6F18425305BED82BF5B322A396E6A0E() = 0;
};
// Windows.UI.Xaml.IUIElementStatics5
struct NOVTABLE IUIElementStatics5_tBF8D386F03A2C63384D7905C49773AFA2C2A4ADF : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped0_get_LightsProperty_mB4854CC40E7C519C6BFCDB84FF71983D9754ACE8() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped1_get_KeyTipPlacementModeProperty_mE8968F2AEDB6A287481C6A24074E3956201B625C() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped2_get_KeyTipHorizontalOffsetProperty_mB1FBC80598ABE404E6485C8C61D02C36E1F1A3C4() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped3_get_KeyTipVerticalOffsetProperty_m5D88CEE747892B0B5DA7391789A5FA565B6DF6CA() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped4_get_XYFocusKeyboardNavigationProperty_m34758AEEF5A0E0D28F50FF7B200BF82F928F3986() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped5_get_XYFocusUpNavigationStrategyProperty_m04084CC1FD9AF98EC9E133B26BB817A69748469F() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped6_get_XYFocusDownNavigationStrategyProperty_m741B8C89470AC9933DA3E0FC05FB947655BC252C() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped7_get_XYFocusLeftNavigationStrategyProperty_m2D79B3F5A8891CD2BACD2C633FF7A54C2172C3CA() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped8_get_XYFocusRightNavigationStrategyProperty_m29ADB05B70C6F95F1BA37DF0B17AAFE9F18F4231() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped9_get_HighContrastAdjustmentProperty_mBD596F8CBA34956A4A8F02259E2E5EB4D28FFBC0() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics5_U24__Stripped10_get_TabFocusNavigationProperty_m1DB322151C59AFC60447E00CCB2A701F66493A4F() = 0;
};
// Windows.UI.Xaml.IUIElementStatics6
struct NOVTABLE IUIElementStatics6_tD65C6A77C6F2B429FC22E5F2A6313341C3F4C15F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped0_get_GettingFocusEvent_mF2E621E70359A94D208F03412DF1CE9FA2BDD380() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped1_get_LosingFocusEvent_mF0E5C1C047EBED45FF1707EED23D404A45330FF3() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics6_U24__Stripped2_get_NoFocusCandidateFoundEvent_m81E375A95DEFCF13C63DD3B45DE26BF0448A8803() = 0;
};
// Windows.UI.Xaml.IUIElementStatics7
struct NOVTABLE IUIElementStatics7_tF5F261FE18EECE3F0E1138302832C639A7191A31 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped0_get_PreviewKeyDownEvent_mDAB19D25549F1CEA5ADE03AE036446151CAED7D2() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped1_get_CharacterReceivedEvent_m23268F9E0BCA692C9CBDA766C554FDF68BC1A1A9() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics7_U24__Stripped2_get_PreviewKeyUpEvent_m997AAAB22B43FDB5479B023A991F4715C988D438() = 0;
};
// Windows.UI.Xaml.IUIElementStatics8
struct NOVTABLE IUIElementStatics8_tD360A36B188CDCFE36A174231CB4B730B2FDC8A1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped0_get_BringIntoViewRequestedEvent_mC8210802A0185189DB23B7AA0B8E468F2681D51B() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped1_get_ContextRequestedEvent_m78C5CF045B9544D14E80091BDFA56F8F20F4A9A5() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped2_get_KeyTipTargetProperty_mB2784C094A4320575DF2DBE1845472D73A5DD359() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped3_get_KeyboardAcceleratorPlacementTargetProperty_mA5148568766FE96CE610B13A0D815025C5F3FCA2() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped4_get_KeyboardAcceleratorPlacementModeProperty_mD3843BA5BAA4C94D787806FD9FA926E8202E5EE5() = 0;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics8_U24__Stripped5_RegisterAsScrollPort_m6CC64075370A445FE43F05CC1BCE14C8854CEA49() = 0;
};
// Windows.UI.Xaml.IUIElementStatics9
struct NOVTABLE IUIElementStatics9_t3C508635952F0E0FC2380184F404B476603371E6 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUIElementStatics9_U24__Stripped0_get_CanBeScrollAnchorProperty_m8F04627432F08B56BAE09EF2A5CC431F5A2EF940() = 0;
};
// Windows.UI.Xaml.Controls.IWebViewContentLoadingEventArgs
struct NOVTABLE IWebViewContentLoadingEventArgs_t0CFDA5E6797A282D2E1882E41996190E282B8519 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWebViewContentLoadingEventArgs_U24__Stripped0_get_Uri_m1CFDAF24C0F8A785AF40FCCF79EC69FCC9B8BAE5() = 0;
};
// Windows.UI.Xaml.Controls.IWebViewDOMContentLoadedEventArgs
struct NOVTABLE IWebViewDOMContentLoadedEventArgs_tA316BEA13E58B98198CA8AB68B25A373FA6C353B : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWebViewDOMContentLoadedEventArgs_U24__Stripped0_get_Uri_mEB429E702323F100212C56FE91396D8DA4D2A7E3() = 0;
};
// Windows.UI.Xaml.Controls.IWebViewFactory4
struct NOVTABLE IWebViewFactory4_tC20B68997D7100D6E8B6A6542E59C676FAA35DCA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWebViewFactory4_U24__Stripped0_CreateInstanceWithExecutionMode_mD7C134B90D71D20D56287DFA1986233E26A622F8() = 0;
};
// Windows.UI.Xaml.Controls.IWebViewNavigationCompletedEventArgs
struct NOVTABLE IWebViewNavigationCompletedEventArgs_tF6A2CE4137DF6EC9B63814EB940FCC8D8C70022E : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWebViewNavigationCompletedEventArgs_U24__Stripped0_get_Uri_m557A5A74D65197AA3EDAB99E037B3CADCE54983E() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewNavigationCompletedEventArgs_get_IsSuccess_mCB8797FD27365AAE9E588C553B55034C357F3641(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewNavigationCompletedEventArgs_U24__Stripped1_get_WebErrorStatus_m961E8E149A02DDE236072A1367FDB8896BB06F1B() = 0;
};
// Windows.UI.Xaml.Controls.IWebViewNavigationStartingEventArgs
struct NOVTABLE IWebViewNavigationStartingEventArgs_t4B0070222F6E02101A7C5D048745E98D3B8FFFC1 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWebViewNavigationStartingEventArgs_U24__Stripped0_get_Uri_mC691A32FDD5B7968BF6D3789D7F2E48BCB335837() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewNavigationStartingEventArgs_U24__Stripped1_get_Cancel_m03954E0AB5DABBE8016B15A6FB71877CEFBC4D41() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewNavigationStartingEventArgs_U24__Stripped2_put_Cancel_m580F9A2173587732635C5ECA746A22144D6563A1() = 0;
};
// Windows.UI.Xaml.Controls.IWebViewStatics
struct NOVTABLE IWebViewStatics_tAC20E8BE89CCBA14F817656DA6001187D5890D7F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics_U24__Stripped0_get_AnyScriptNotifyUri_mA177835902AB46203A0BCB56A22E8C979CDBA1DF() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics_U24__Stripped1_get_SourceProperty_mA97EA8B4394252AE55D59B9DB5655DA98609C420() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics_U24__Stripped2_get_AllowedScriptNotifyUrisProperty_mDD6A71E98FFEE1A5866DE8E8CB399E6F13C58424() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics_U24__Stripped3_get_DataTransferPackageProperty_mC3B68CAC6C6D6B222CEBD620BAE4BBA69F8F06A1() = 0;
};
// Windows.UI.Xaml.Controls.IWebViewStatics2
struct NOVTABLE IWebViewStatics2_tD6A4BCC57B50E42BC42148C40DD03E4B3218736F : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics2_U24__Stripped0_get_CanGoBackProperty_m7C563464E4E258982DF4309550BDC2D212F80822() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics2_U24__Stripped1_get_CanGoForwardProperty_mA14E458C6D10FE50E819BCFEC4CA56E0E7A496FD() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics2_U24__Stripped2_get_DocumentTitleProperty_m6FFCD797C5E919304AA95C52F9F1F6C97F1EEFFA() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics2_U24__Stripped3_get_DefaultBackgroundColorProperty_mF0649A49D64B541506E0D3FBE272BB655B8E9717() = 0;
};
// Windows.UI.Xaml.Controls.IWebViewStatics3
struct NOVTABLE IWebViewStatics3_t5397B709E7080AF0A0413985E72AFDF4B1AA1F33 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics3_U24__Stripped0_get_ContainsFullScreenElementProperty_m3D6E04854B290AC6EA3357BE97E23BC879DA773A() = 0;
};
// Windows.UI.Xaml.Controls.IWebViewStatics4
struct NOVTABLE IWebViewStatics4_t49CC152C57561D1CE210A84F65892F7C994D8E79 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics4_U24__Stripped0_get_DefaultExecutionMode_m71B2E88E32EE25E14820EAC4612E760C695039A6() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics4_U24__Stripped1_ClearTemporaryWebDataAsync_m7B4886939D50E1A180B2B975E9E1DBE4DF82EDE7() = 0;
};
// Windows.UI.Xaml.Controls.IWebViewStatics5
struct NOVTABLE IWebViewStatics5_tA08B995FCC3024509E7990674453C179E1587DEC : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics5_U24__Stripped0_get_XYFocusLeftProperty_m2F3AAAC61C125C6F36A1AC5DF677FCE813805CA4() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics5_U24__Stripped1_get_XYFocusRightProperty_m7BB7C78E9E07F5139191CEAEA1E535F436993DD6() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics5_U24__Stripped2_get_XYFocusUpProperty_mC5AEEABA3889500FF90F079444E84326BB74457D() = 0;
	virtual il2cpp_hresult_t STDCALL IWebViewStatics5_U24__Stripped3_get_XYFocusDownProperty_m5482A983C4C8831D90F1FB746F1314DFF7DE226B() = 0;
};

// System.Object


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct  ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct  ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct  ValueCollection_t987D376B17F692C3A1C2223C277336DAAA8DE68E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t79A0FFC8A9EA909E2397C10AFBD9F64EC0154963 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t987D376B17F692C3A1C2223C277336DAAA8DE68E, ___dictionary_0)); }
	inline Dictionary_2_t79A0FFC8A9EA909E2397C10AFBD9F64EC0154963 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t79A0FFC8A9EA909E2397C10AFBD9F64EC0154963 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t79A0FFC8A9EA909E2397C10AFBD9F64EC0154963 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct  ValueCollection_t083FEA9A75D32522810BB19D2EA1C29E37E6ECB2  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t083FEA9A75D32522810BB19D2EA1C29E37E6ECB2, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t083FEA9A75D32522810BB19D2EA1C29E37E6ECB2, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.Serialization.DataContractPairKey,System.Object>
struct  ValueCollection_tE2A18A5FD5A055D96ABE4A0C5564258B5E1EF507  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tAE6517D958482ABDCC71D4DE037C89E9E67D3283 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tE2A18A5FD5A055D96ABE4A0C5564258B5E1EF507, ___dictionary_0)); }
	inline Dictionary_2_tAE6517D958482ABDCC71D4DE037C89E9E67D3283 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAE6517D958482ABDCC71D4DE037C89E9E67D3283 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAE6517D958482ABDCC71D4DE037C89E9E67D3283 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.Serialization.DataContractPairKey,System.Object>
struct  ValueCollection_tE108D94B9A5ECBF7618C0AA62BBF056235DA58EC  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tE108D94B9A5ECBF7618C0AA62BBF056235DA58EC, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tE108D94B9A5ECBF7618C0AA62BBF056235DA58EC, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.DateTime,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct  ValueCollection_t9070E10AB460E9A29EB73BA18C752F9260A9416F  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t9070E10AB460E9A29EB73BA18C752F9260A9416F, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t9070E10AB460E9A29EB73BA18C752F9260A9416F, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.Action`1<System.Boolean>>
struct  ValueCollection_t7CB4C6146BDDAABC94D5EBD50220C4C573854435  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t6107C35906C65493CD79072E6B34F496C5924B0E * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t7CB4C6146BDDAABC94D5EBD50220C4C573854435, ___dictionary_0)); }
	inline Dictionary_2_t6107C35906C65493CD79072E6B34F496C5924B0E * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t6107C35906C65493CD79072E6B34F496C5924B0E ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t6107C35906C65493CD79072E6B34F496C5924B0E * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.Action`1<System.Boolean>>
struct  ValueCollection_tA59B58CCEE3482CDF5F547BFA23A9CEB7F8D4526  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tA59B58CCEE3482CDF5F547BFA23A9CEB7F8D4526, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tA59B58CCEE3482CDF5F547BFA23A9CEB7F8D4526, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdEndEventArgs>>
struct  ValueCollection_tD88DCFD8E4DEFFA3FB0A02296D6C084425442BC2  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tE0815C070F789E72A04F84BE7844FBB5A52BC500 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tD88DCFD8E4DEFFA3FB0A02296D6C084425442BC2, ___dictionary_0)); }
	inline Dictionary_2_tE0815C070F789E72A04F84BE7844FBB5A52BC500 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE0815C070F789E72A04F84BE7844FBB5A52BC500 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE0815C070F789E72A04F84BE7844FBB5A52BC500 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdEndEventArgs>>
struct  ValueCollection_t923CCC0EEEB18158393B28CC68AAC7CB3665B06F  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t923CCC0EEEB18158393B28CC68AAC7CB3665B06F, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t923CCC0EEEB18158393B28CC68AAC7CB3665B06F, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdEventArgs>>
struct  ValueCollection_t1146431DFED000CA9300233D53AFEA2A3FCA744E  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t637F0CC7C578B68A010FCCFCB519DC1C7C4CA1AC * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t1146431DFED000CA9300233D53AFEA2A3FCA744E, ___dictionary_0)); }
	inline Dictionary_2_t637F0CC7C578B68A010FCCFCB519DC1C7C4CA1AC * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t637F0CC7C578B68A010FCCFCB519DC1C7C4CA1AC ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t637F0CC7C578B68A010FCCFCB519DC1C7C4CA1AC * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdEventArgs>>
struct  ValueCollection_t243659F37FB6DF2399EA3946D200D939C4D6981B  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t243659F37FB6DF2399EA3946D200D939C4D6981B, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t243659F37FB6DF2399EA3946D200D939C4D6981B, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdPlayableEventArgs>>
struct  ValueCollection_t888438C262B0DC59E2A745D284F7AE7C8D9B4B7B  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t2B248EEB0414C868C5237424BD4A9EFD348C6006 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t888438C262B0DC59E2A745D284F7AE7C8D9B4B7B, ___dictionary_0)); }
	inline Dictionary_2_t2B248EEB0414C868C5237424BD4A9EFD348C6006 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2B248EEB0414C868C5237424BD4A9EFD348C6006 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2B248EEB0414C868C5237424BD4A9EFD348C6006 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdPlayableEventArgs>>
struct  ValueCollection_t11C2D4E6DD6772B31E5F38D624C298B68DBAA060  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t11C2D4E6DD6772B31E5F38D624C298B68DBAA060, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t11C2D4E6DD6772B31E5F38D624C298B68DBAA060, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdViewEventArgs>>
struct  ValueCollection_t10207FF027C0BB36CD24C81A337B78B039B8EAEE  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tEF4A736DF95D297991FC1435C1D10EAB0965AE8D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t10207FF027C0BB36CD24C81A337B78B039B8EAEE, ___dictionary_0)); }
	inline Dictionary_2_tEF4A736DF95D297991FC1435C1D10EAB0965AE8D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tEF4A736DF95D297991FC1435C1D10EAB0965AE8D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tEF4A736DF95D297991FC1435C1D10EAB0965AE8D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdViewEventArgs>>
struct  ValueCollection_tC69CA5F660B6E6CD88387F0424794A158EE93EE1  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tC69CA5F660B6E6CD88387F0424794A158EE93EE1, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tC69CA5F660B6E6CD88387F0424794A158EE93EE1, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.ConfigEventArgs>>
struct  ValueCollection_tEC2C4C2F64A8E2B60CF8D479282AF1D6F98FEE3F  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t80BA445386655663504085E18699C4A5F045821E * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tEC2C4C2F64A8E2B60CF8D479282AF1D6F98FEE3F, ___dictionary_0)); }
	inline Dictionary_2_t80BA445386655663504085E18699C4A5F045821E * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t80BA445386655663504085E18699C4A5F045821E ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t80BA445386655663504085E18699C4A5F045821E * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.ConfigEventArgs>>
struct  ValueCollection_tBA22FD3412194EEC1BFAE9CFF24B825C0A76BE29  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tBA22FD3412194EEC1BFAE9CFF24B825C0A76BE29, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tBA22FD3412194EEC1BFAE9CFF24B825C0A76BE29, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.DiagnosticLogEvent>>
struct  ValueCollection_t73BB7FCA14070CB22222C9F287083AA775EC51CB  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tFC76A989CA270C072075A853A1503FAD2A03BE33 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t73BB7FCA14070CB22222C9F287083AA775EC51CB, ___dictionary_0)); }
	inline Dictionary_2_tFC76A989CA270C072075A853A1503FAD2A03BE33 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tFC76A989CA270C072075A853A1503FAD2A03BE33 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tFC76A989CA270C072075A853A1503FAD2A03BE33 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.DiagnosticLogEvent>>
struct  ValueCollection_tB36951CD092074538DA735F1368B98FC6A524680  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tB36951CD092074538DA735F1368B98FC6A524680, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tB36951CD092074538DA735F1368B98FC6A524680, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<System.EventArgs>>
struct  ValueCollection_tA3D6030D8AD288D3BFE493DA06F02D5E459FC190  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t1EE6303108CCB2511428FB8B856A0F484E9F36C8 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tA3D6030D8AD288D3BFE493DA06F02D5E459FC190, ___dictionary_0)); }
	inline Dictionary_2_t1EE6303108CCB2511428FB8B856A0F484E9F36C8 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t1EE6303108CCB2511428FB8B856A0F484E9F36C8 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t1EE6303108CCB2511428FB8B856A0F484E9F36C8 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<System.EventArgs>>
struct  ValueCollection_tB2AD7962667B289F9A8EE3E50983F05823831782  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tB2AD7962667B289F9A8EE3E50983F05823831782, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tB2AD7962667B289F9A8EE3E50983F05823831782, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.adplay.KeyInputEvent>>
struct  ValueCollection_t6AF153570F01717C94EA1E22ACC9020E3FA1407C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tAE0DCD8F32B19624025ED3AB045C7EE073735CF3 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t6AF153570F01717C94EA1E22ACC9020E3FA1407C, ___dictionary_0)); }
	inline Dictionary_2_tAE0DCD8F32B19624025ED3AB045C7EE073735CF3 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tAE0DCD8F32B19624025ED3AB045C7EE073735CF3 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tAE0DCD8F32B19624025ED3AB045C7EE073735CF3 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.adplay.KeyInputEvent>>
struct  ValueCollection_t5608E42EA583DFDFBA7564D30B61381D2A12B3C9  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t5608E42EA583DFDFBA7564D30B61381D2A12B3C9, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t5608E42EA583DFDFBA7564D30B61381D2A12B3C9, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.NetworkResult>>
struct  ValueCollection_t832F7BD74A5903AFFBB184226E5D9F5F4A3084C7  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tF16E075303ACCEE55BA01FA301D941A8AF047F7D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t832F7BD74A5903AFFBB184226E5D9F5F4A3084C7, ___dictionary_0)); }
	inline Dictionary_2_tF16E075303ACCEE55BA01FA301D941A8AF047F7D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF16E075303ACCEE55BA01FA301D941A8AF047F7D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF16E075303ACCEE55BA01FA301D941A8AF047F7D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.NetworkResult>>
struct  ValueCollection_tB0D9B99FE058403DEFBCE259ADBB65FA28A0059C  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tB0D9B99FE058403DEFBCE259ADBB65FA28A0059C, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tB0D9B99FE058403DEFBCE259ADBB65FA28A0059C, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<System.Object>>
struct  ValueCollection_tC94F388C8229DD4C46F7BEF998345607A097AC58  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t654798A9F17760C1141072075001BA839FC003EA * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tC94F388C8229DD4C46F7BEF998345607A097AC58, ___dictionary_0)); }
	inline Dictionary_2_t654798A9F17760C1141072075001BA839FC003EA * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t654798A9F17760C1141072075001BA839FC003EA ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t654798A9F17760C1141072075001BA839FC003EA * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<System.Object>>
struct  ValueCollection_t90FDE164C079EB9FC40AAC5C60F6D05AFB0A3DBC  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t90FDE164C079EB9FC40AAC5C60F6D05AFB0A3DBC, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t90FDE164C079EB9FC40AAC5C60F6D05AFB0A3DBC, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.adplay.StartEndEvent>>
struct  ValueCollection_t796C789EB1417888D72FC7D2F330B3F282DC0B41  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t9D712E6DBFFE6BBE35AEA22F56766927FF26C121 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t796C789EB1417888D72FC7D2F330B3F282DC0B41, ___dictionary_0)); }
	inline Dictionary_2_t9D712E6DBFFE6BBE35AEA22F56766927FF26C121 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t9D712E6DBFFE6BBE35AEA22F56766927FF26C121 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t9D712E6DBFFE6BBE35AEA22F56766927FF26C121 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.adplay.StartEndEvent>>
struct  ValueCollection_t43B34778A0686A55434090B8A870F725471853DA  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t43B34778A0686A55434090B8A870F725471853DA, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t43B34778A0686A55434090B8A870F725471853DA, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>>
struct  ValueCollection_tEF1CA204578A4740EBB242E6DFB823F3CF128D89  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t30FED002C877273C05AEB84FF8B963D06D7C472D * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tEF1CA204578A4740EBB242E6DFB823F3CF128D89, ___dictionary_0)); }
	inline Dictionary_2_t30FED002C877273C05AEB84FF8B963D06D7C472D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t30FED002C877273C05AEB84FF8B963D06D7C472D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t30FED002C877273C05AEB84FF8B963D06D7C472D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>>
struct  ValueCollection_t11B47B95E45A566482E5C8D7ACC95DF1D74ED214  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t11B47B95E45A566482E5C8D7ACC95DF1D74ED214, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t11B47B95E45A566482E5C8D7ACC95DF1D74ED214, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdManager/AdAvailaibilityEvent>>
struct  ValueCollection_tF80B0BFEF641E512C4C6DB831C3DDDBAC536575D  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t0C1FE55AA402DBD9B502B3FD18246039E49BFF9C * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tF80B0BFEF641E512C4C6DB831C3DDDBAC536575D, ___dictionary_0)); }
	inline Dictionary_2_t0C1FE55AA402DBD9B502B3FD18246039E49BFF9C * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t0C1FE55AA402DBD9B502B3FD18246039E49BFF9C ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t0C1FE55AA402DBD9B502B3FD18246039E49BFF9C * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdManager/AdAvailaibilityEvent>>
struct  ValueCollection_t78B8313762E2BC6184FF01F46B40FCF59E375664  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t78B8313762E2BC6184FF01F46B40FCF59E375664, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t78B8313762E2BC6184FF01F46B40FCF59E375664, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.bridge.WebViewBridge/DebuggerEventArgs>>
struct  ValueCollection_t293E82CF70D4F4780B6C375D2D6A36F07D201297  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tD22FFC55940117952A225AA2482D805889799760 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t293E82CF70D4F4780B6C375D2D6A36F07D201297, ___dictionary_0)); }
	inline Dictionary_2_tD22FFC55940117952A225AA2482D805889799760 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tD22FFC55940117952A225AA2482D805889799760 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tD22FFC55940117952A225AA2482D805889799760 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.bridge.WebViewBridge/DebuggerEventArgs>>
struct  ValueCollection_tC9CD0CF16F8490DA348A9FB15857A2F698709042  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tC9CD0CF16F8490DA348A9FB15857A2F698709042, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tC9CD0CF16F8490DA348A9FB15857A2F698709042, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler>
struct  ValueCollection_tC6EA5D988B5B6DA72511D10E849B86BEA0819429  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t3171FA17DB7EA8EBAD1B0A99FED8C3FDF06B9C0F * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tC6EA5D988B5B6DA72511D10E849B86BEA0819429, ___dictionary_0)); }
	inline Dictionary_2_t3171FA17DB7EA8EBAD1B0A99FED8C3FDF06B9C0F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t3171FA17DB7EA8EBAD1B0A99FED8C3FDF06B9C0F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t3171FA17DB7EA8EBAD1B0A99FED8C3FDF06B9C0F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler>
struct  ValueCollection_tB27C67720B7DE8F0BD9FA50B5D34EBAE2C1CED5D  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tB27C67720B7DE8F0BD9FA50B5D34EBAE2C1CED5D, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tB27C67720B7DE8F0BD9FA50B5D34EBAE2C1CED5D, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,VungleSDK.NetworkManager/DebugJsonDelegate>
struct  ValueCollection_tD480ADDD907DE13AA894ED7F9A8345C5F42FF5C7  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tDC3A2D8BA31D0412361D16701DBDB867E7D4DB20 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tD480ADDD907DE13AA894ED7F9A8345C5F42FF5C7, ___dictionary_0)); }
	inline Dictionary_2_tDC3A2D8BA31D0412361D16701DBDB867E7D4DB20 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tDC3A2D8BA31D0412361D16701DBDB867E7D4DB20 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tDC3A2D8BA31D0412361D16701DBDB867E7D4DB20 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,VungleSDK.NetworkManager/DebugJsonDelegate>
struct  ValueCollection_tD40B3354CE78D30A1C9F202153B19FE6D34922E7  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tD40B3354CE78D30A1C9F202153B19FE6D34922E7, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tD40B3354CE78D30A1C9F202153B19FE6D34922E7, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct  ValueCollection_t8A993A746E028F37667CE7308EB65DE1C38208A7  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t4F42AAD6C75C36A4A9D4B0CD537DAF5D5F503079 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t8A993A746E028F37667CE7308EB65DE1C38208A7, ___dictionary_0)); }
	inline Dictionary_2_t4F42AAD6C75C36A4A9D4B0CD537DAF5D5F503079 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t4F42AAD6C75C36A4A9D4B0CD537DAF5D5F503079 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t4F42AAD6C75C36A4A9D4B0CD537DAF5D5F503079 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct  ValueCollection_t009B949C11EB2408622858A03487A795C1B1C1EC  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t009B949C11EB2408622858A03487A795C1B1C1EC, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t009B949C11EB2408622858A03487A795C1B1C1EC, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<Windows.UI.Xaml.FrameworkElement,System.Boolean>
struct  ValueCollection_t2F08C8FF26E1255EC73EA1433A24B58A59FB7053  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t2B4D1DE2140E1A4CD0295C3CD2FF4C7D80661E3B * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t2F08C8FF26E1255EC73EA1433A24B58A59FB7053, ___dictionary_0)); }
	inline Dictionary_2_t2B4D1DE2140E1A4CD0295C3CD2FF4C7D80661E3B * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t2B4D1DE2140E1A4CD0295C3CD2FF4C7D80661E3B ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t2B4D1DE2140E1A4CD0295C3CD2FF4C7D80661E3B * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Windows.UI.Xaml.FrameworkElement,System.Boolean>
struct  ValueCollection_t6338914217E195D318603F2AE8A91E71BCA52FB1  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t6338914217E195D318603F2AE8A91E71BCA52FB1, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t6338914217E195D318603F2AE8A91E71BCA52FB1, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
struct  ValueCollection_tC19268DA6D70C8D072C7093D8ABCA28DAD4C6E3C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t51811C4D09EBB297C0DFE9FA972CEB160E185E11 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tC19268DA6D70C8D072C7093D8ABCA28DAD4C6E3C, ___dictionary_0)); }
	inline Dictionary_2_t51811C4D09EBB297C0DFE9FA972CEB160E185E11 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t51811C4D09EBB297C0DFE9FA972CEB160E185E11 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t51811C4D09EBB297C0DFE9FA972CEB160E185E11 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
struct  ValueCollection_t30AD529B9F75532560A194BC17C58F7FC6730EED  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t30AD529B9F75532560A194BC17C58F7FC6730EED, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t30AD529B9F75532560A194BC17C58F7FC6730EED, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct  ValueCollection_t6A5B0DF4354EAC00C0B894C9DA2A5EEC7D797A3F  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t6A5B0DF4354EAC00C0B894C9DA2A5EEC7D797A3F, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t6A5B0DF4354EAC00C0B894C9DA2A5EEC7D797A3F, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Guid,System.Int32>
struct  ValueCollection_t36A365EF75A9898A232CCFD4C304FC50183E03D6  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t36A365EF75A9898A232CCFD4C304FC50183E03D6, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t36A365EF75A9898A232CCFD4C304FC50183E03D6, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,Mono.Security.Interface.MonoTlsProvider>
struct  ValueCollection_t7DC6DDFFAD238E15BB167357CEF9E4CD52937E9F  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t94DF7D57A0FF045929FE85E29881A95D7B508301 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t7DC6DDFFAD238E15BB167357CEF9E4CD52937E9F, ___dictionary_0)); }
	inline Dictionary_2_t94DF7D57A0FF045929FE85E29881A95D7B508301 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t94DF7D57A0FF045929FE85E29881A95D7B508301 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t94DF7D57A0FF045929FE85E29881A95D7B508301 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Guid,Mono.Security.Interface.MonoTlsProvider>
struct  ValueCollection_tC4AF1B1608EB696402FE15D10D7D96287A18DAE5  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tC4AF1B1608EB696402FE15D10D7D96287A18DAE5, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tC4AF1B1608EB696402FE15D10D7D96287A18DAE5, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Threading.IAsyncLocal,System.Object>
struct  ValueCollection_tF61B113C13A26D63D35C2C68CB0E099ABA87C9AA  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tF61B113C13A26D63D35C2C68CB0E099ABA87C9AA, ___dictionary_0)); }
	inline Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tED8EC0DF62452D89154D9584AC19F62C79BF3938 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Threading.IAsyncLocal,System.Object>
struct  ValueCollection_t829D1A2C21BCE93FBCBE9E029CCC77E24419ADC3  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t829D1A2C21BCE93FBCBE9E029CCC77E24419ADC3, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t829D1A2C21BCE93FBCBE9E029CCC77E24419ADC3, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
struct  ValueCollection_tBFDE9B9EC6D8A4DD5D5E4EDCB8D0C3FE7C902888  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t059F96DADCC8B901973F95056D8107AB675AEE96 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tBFDE9B9EC6D8A4DD5D5E4EDCB8D0C3FE7C902888, ___dictionary_0)); }
	inline Dictionary_2_t059F96DADCC8B901973F95056D8107AB675AEE96 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t059F96DADCC8B901973F95056D8107AB675AEE96 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t059F96DADCC8B901973F95056D8107AB675AEE96 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
struct  ValueCollection_tDFE3548B5884867CBB3AD8597EAF0B6F4F6E80D8  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tDFE3548B5884867CBB3AD8597EAF0B6F4F6E80D8, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tDFE3548B5884867CBB3AD8597EAF0B6F4F6E80D8, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.IClipper,System.Int32>
struct  ValueCollection_tAF8510AEC053B82FDD729C9744C8A2CF6EF6197C  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_tE0026BDD5CB0F84F7271F011A4C20757945DE83F * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tAF8510AEC053B82FDD729C9744C8A2CF6EF6197C, ___dictionary_0)); }
	inline Dictionary_2_tE0026BDD5CB0F84F7271F011A4C20757945DE83F * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tE0026BDD5CB0F84F7271F011A4C20757945DE83F ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tE0026BDD5CB0F84F7271F011A4C20757945DE83F * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.UI.IClipper,System.Int32>
struct  ValueCollection_t576049C739ADEC4FC22A6AD4A068322B2F5A5C90  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t576049C739ADEC4FC22A6AD4A068322B2F5A5C90, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t576049C739ADEC4FC22A6AD4A068322B2F5A5C90, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Xml.IDtdEntityInfo,System.Xml.IDtdEntityInfo>
struct  ValueCollection_t9474AF8AEE4B46B1D7C906AB5B4F5B33CCD68AF7  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t7E4F75E23B8A710084DDD8B7D9D901F39C24B184 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t9474AF8AEE4B46B1D7C906AB5B4F5B33CCD68AF7, ___dictionary_0)); }
	inline Dictionary_2_t7E4F75E23B8A710084DDD8B7D9D901F39C24B184 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t7E4F75E23B8A710084DDD8B7D9D901F39C24B184 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t7E4F75E23B8A710084DDD8B7D9D901F39C24B184 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Xml.IDtdEntityInfo,System.Xml.IDtdEntityInfo>
struct  ValueCollection_t96C309AF925548A78CA0DAC76ADD9881986D5773  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t96C309AF925548A78CA0DAC76ADD9881986D5773, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t96C309AF925548A78CA0DAC76ADD9881986D5773, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Collections.Concurrent.ConcurrentDictionary`2<System.DateTime,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>>
struct  ValueCollection_t6A807AE5D000E2F7D1F0D294537BA939C74FDE03  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_t6A807AE5D000E2F7D1F0D294537BA939C74FDE03, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_t6A807AE5D000E2F7D1F0D294537BA939C74FDE03, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Boolean>
struct  ValueCollection_tB51F603A239485F05720315028C603D2DC30180E  : public RuntimeObject
{
public:
	// System.Collections.Generic.ICollection`1<TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_collection
	RuntimeObject* ___m_collection_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;

public:
	inline static int32_t get_offset_of_m_collection_0() { return static_cast<int32_t>(offsetof(ValueCollection_tB51F603A239485F05720315028C603D2DC30180E, ___m_collection_0)); }
	inline RuntimeObject* get_m_collection_0() const { return ___m_collection_0; }
	inline RuntimeObject** get_address_of_m_collection_0() { return &___m_collection_0; }
	inline void set_m_collection_0(RuntimeObject* value)
	{
		___m_collection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_collection_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ValueCollection_tB51F603A239485F05720315028C603D2DC30180E, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_syncRoot_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Globalization.CultureInfo>
struct  ValueCollection_tE84BE90A3A9ADA37C09165304138ECF878FE4ED7  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_tE84BE90A3A9ADA37C09165304138ECF878FE4ED7, ___dictionary_0)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
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

// System.__Il2CppComObject


// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct  TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082  : public ReadOnlyCollection_1_t7976DDE3F2FC7BAAF4F920193FF1B5BA33CCC2B5
{
public:

public:
};


// System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct  TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3  : public ReadOnlyCollection_1_t27106E268B51074ED9E2D5BB56A9C107EA4E8472
{
public:

public:
};


// Windows.UI.Core.CoreWindow
struct  CoreWindow_t036E38CD43CB603ECB94E90C48D1F6A8A89AFBFD  : public Il2CppComObject
{
public:

public:
};

struct CoreWindow_t036E38CD43CB603ECB94E90C48D1F6A8A89AFBFD_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Core.ICoreWindowStatic
	ICoreWindowStatic_tB835F5EE366BF4CEAF53D728AED7F81C36BBF0BF* ____icoreWindowStatic_tB835F5EE366BF4CEAF53D728AED7F81C36BBF0BF;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Core.CoreWindow"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline ICoreWindowStatic_tB835F5EE366BF4CEAF53D728AED7F81C36BBF0BF* get_____icoreWindowStatic_tB835F5EE366BF4CEAF53D728AED7F81C36BBF0BF()
	{
		ICoreWindowStatic_tB835F5EE366BF4CEAF53D728AED7F81C36BBF0BF* returnValue = ____icoreWindowStatic_tB835F5EE366BF4CEAF53D728AED7F81C36BBF0BF;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(ICoreWindowStatic_tB835F5EE366BF4CEAF53D728AED7F81C36BBF0BF::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____icoreWindowStatic_tB835F5EE366BF4CEAF53D728AED7F81C36BBF0BF), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icoreWindowStatic_tB835F5EE366BF4CEAF53D728AED7F81C36BBF0BF;
			}
		}
		return returnValue;
	}
};


// Windows.UI.Xaml.DependencyObject
struct  DependencyObject_t565023B4A840FEA98FC1ECA52A3E9FEE81E9BEEE  : public Il2CppComObject
{
public:

public:
};

struct DependencyObject_t565023B4A840FEA98FC1ECA52A3E9FEE81E9BEEE_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.IDependencyObjectFactory
	IDependencyObjectFactory_t53DD512B2193177B8B2B38F8AC6F07EF676984F6* ____idependencyObjectFactory_t53DD512B2193177B8B2B38F8AC6F07EF676984F6;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.DependencyObject"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IDependencyObjectFactory_t53DD512B2193177B8B2B38F8AC6F07EF676984F6* get_____idependencyObjectFactory_t53DD512B2193177B8B2B38F8AC6F07EF676984F6()
	{
		IDependencyObjectFactory_t53DD512B2193177B8B2B38F8AC6F07EF676984F6* returnValue = ____idependencyObjectFactory_t53DD512B2193177B8B2B38F8AC6F07EF676984F6;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IDependencyObjectFactory_t53DD512B2193177B8B2B38F8AC6F07EF676984F6::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____idependencyObjectFactory_t53DD512B2193177B8B2B38F8AC6F07EF676984F6), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____idependencyObjectFactory_t53DD512B2193177B8B2B38F8AC6F07EF676984F6;
			}
		}
		return returnValue;
	}
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

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct  EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
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


// Windows.Foundation.Point
struct  Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
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


// System.Threading.Tasks.VoidTaskResult
struct  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004__padding[1];
	};

public:
};


// Windows.UI.Xaml.Controls.WebViewContentLoadingEventArgs
struct  WebViewContentLoadingEventArgs_t1F95E97D138594CA25666D61BD97B611B475A860  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Xaml.Controls.WebViewDOMContentLoadedEventArgs
struct  WebViewDOMContentLoadedEventArgs_tAEE554A6493E9466F1C8C9A48ABEE6F47BB10D6A  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Xaml.Controls.WebViewNavigationCompletedEventArgs
struct  WebViewNavigationCompletedEventArgs_tD0B8AF703EFA6C717B244D4B356B6BD0165A426D  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Xaml.Controls.WebViewNavigationStartingEventArgs
struct  WebViewNavigationStartingEventArgs_t30F625D3F53DFD47538748F0F6D8C36921011265  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Core.WindowActivatedEventArgs
struct  WindowActivatedEventArgs_tB97F0E07C4CCB04C8352C960B90FE29A3505FBD4  : public Il2CppComObject
{
public:

public:
};


// Windows.UI.Core.CoreWindowActivationState
struct  CoreWindowActivationState_tA6873D6BC473F0CD28625B282EDC7C622FA4B469 
{
public:
	// System.Int32 Windows.UI.Core.CoreWindowActivationState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CoreWindowActivationState_tA6873D6BC473F0CD28625B282EDC7C622FA4B469, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Windows.UI.Core.ICoreWindow
struct NOVTABLE ICoreWindow_t8171C3C9F3639753CE689551F960C1F0189C3B70 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped0_get_AutomationHostProvider_m119BCC2C30EED752ECE0890731CD8430C837A980() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped1_get_Bounds_m41CF78033FF4DF66B984999D21EB43289C50209B() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped2_get_CustomProperties_m0ECBB30CC08F39AD7BEB6FCFCA5E1B84BEA71301() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_get_Dispatcher_m0F2849DBF60B74416143D2051A71808EC9FDC32F(ICoreDispatcher_t24D33D9C3D66BDC211A3A727B07B9309E4510CF5** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped3_get_FlowDirection_mF5811B47A1EE3958A94419C2B1DA5F103491605F() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped4_put_FlowDirection_m27087CA080F4F1D5D9EF32DA621079DDEDA6AD79() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped5_get_IsInputEnabled_m6551920AEE5F57520AAD70B34D7D365B1A8669D0() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped6_put_IsInputEnabled_m8EEFAD9BBBAFBB44DDF969F180F365951F3AEF1D() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped7_get_PointerCursor_m41391153C142F01489FC762D35002CE07B322004() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped8_put_PointerCursor_m67248EBD4A551919A713DF0224DFD5F500B732E9() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_get_PointerPosition_m9AFB129800EF569C2E1F4C8B6B7A54EE32791BDA(Point_t155CCDBE84DC37ABFA2CBB4649526701CA3A5578 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped9_get_Visible_mB3438DDF6F292047B466F1A8D32B15A54CC06C68() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped10_Activate_m8D230073C222B2C2BA3B8EC711FEE3CF6F5104F5() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped11_Close_mAAA770D226227235A4BF95C7F55002D4D53A14ED() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped12_GetAsyncKeyState_m0695771A6EEE734D27CD96D8C7C42ADDBAB64019() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped13_GetKeyState_mEE7CD7BECFBBA0E2700B8340DB256C223D187FE9() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped14_ReleasePointerCapture_m4F8436B9F4043A20288FE19F1F994A7A75F2809D() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped15_SetPointerCapture_m2ADD02A003D229E6DA27B8A5C50A1E026D5AC45A() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_add_Activated_m0E785407974013FC3CA2F66E2E332300E6E504B0(ITypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_remove_Activated_m7F502A2E083090BBD84F6AB27319BB8382BDC58C(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___cookie0) = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped16_add_AutomationProviderRequested_m29C3E8DBF2B0EB1EB7E9BD4D4A3D9C862A8D5502() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped17_remove_AutomationProviderRequested_mFA5F41D7B05BACB2C99F6B36A984059D4C901BFC() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped18_add_CharacterReceived_m02A5845E782467E69B090022301A504A31266F0A() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped19_remove_CharacterReceived_m4DDA894161CA72BA9CC0C7E65EF48F9610B48570() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped20_add_Closed_m3A80488516A6F39719ECE5DBCC8308427633823A() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped21_remove_Closed_m16745A95EF459F2EF4DA1444B2E8FE5BAB8A4CB6() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped22_add_InputEnabled_mE66034900F74BEE5BCB40081AD2E6AE9BA9F6ED9() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped23_remove_InputEnabled_mA5DEBDD59EED46ED8C6F1202F867205072A9252D() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped24_add_KeyDown_m07D9C41B42099E2BE741168BCFF3C770BF956B7B() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped25_remove_KeyDown_m5599A0C26F28198B2EA626312429D448A2C37309() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped26_add_KeyUp_mBFA8A9C6FD7ADEB225198FC1982600A80036253C() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped27_remove_KeyUp_m0CB955B1148F036AD061990B46F8D32FCBD3E738() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped28_add_PointerCaptureLost_m21F092E41EE00B53F6E60FF3C221118312976571() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped29_remove_PointerCaptureLost_mA40BEADBAB9BCF66B8C1FBD0E4AF46A21460D507() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped30_add_PointerEntered_m918625CEA7A0B8A2863D9C4A0EC6E187AEAD73A8() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped31_remove_PointerEntered_m615C34A33AEBED987E5893A0C66177A4F22D8684() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped32_add_PointerExited_m31742BCAED4630853DEB7EE106D8205FB6E09C0A() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped33_remove_PointerExited_m13509054E3A711C567574F06321FF0EC02C90E4C() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped34_add_PointerMoved_m3180FCA380EF61EEC214FA867FC9C180361ECDBB() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped35_remove_PointerMoved_m80FD1C907F8DE07F7BFC5446799E7D99DEF0B4EE() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped36_add_PointerPressed_m293B7BDC4869AF2E1E1B80BC8FEBBBF8332BA45E() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped37_remove_PointerPressed_mA197AD3DEDED014B6DF7312219EEBECBC93D0D46() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped38_add_PointerReleased_mBF8F23AAED8C33ADD44BAE6973460D0666223CED() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped39_remove_PointerReleased_m2E159FD8A725259880AEC3103653A4C24A53238F() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped40_add_TouchHitTesting_m671BF4575F3ACFC5C319FFC2C4EAE820206A98FF() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped41_remove_TouchHitTesting_m5C2932D296E410540157C66B20C9769EBEDAB625() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped42_add_PointerWheelChanged_mDED879A4B4F97C375D15411B48FAB18DEA739F7E() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped43_remove_PointerWheelChanged_mD2CA51C39378700A9447980F686C2DB2BED7784C() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped44_add_SizeChanged_mB5755B005D3BC1BC0E6D1CE623A8012C1A0F1907() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped45_remove_SizeChanged_m5BABC373412561F7AC0E1E30BCA07A99D41A87E0() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped46_add_VisibilityChanged_m95934A16A931E9EFE5809521201C49BF94B1D232() = 0;
	virtual il2cpp_hresult_t STDCALL ICoreWindow_U24__Stripped47_remove_VisibilityChanged_m14E51B26B3B46FFA98D0C8F69FB0800B54D20B97() = 0;
};
// Windows.UI.Xaml.Controls.IWebView
struct NOVTABLE IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWebView_U24__Stripped0_get_Source_m7F4DC97F0EC2DAF8D2ABBF7DB7BB7BB4D44574E2() = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_U24__Stripped1_put_Source_mCDFC108FBED36FF55E61002032380099AC90943D() = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_U24__Stripped2_get_AllowedScriptNotifyUris_m3FA271BFE389B430F3C18FDF2211DC7C72694E7B() = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_U24__Stripped3_put_AllowedScriptNotifyUris_m1AD312BB230BF43AE34592F691C58E09F6F8A7D0() = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_U24__Stripped4_get_DataTransferPackage_m3258D15979FB93050EC4C400A83F356124F685D1() = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_add_LoadCompleted_m18691E15432DEEA65B84AB3ABBD81DD71140AA26(ILoadCompletedEventHandler_t1D23C58B03D6A46DDD222498F6DD227C441AA087_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_remove_LoadCompleted_m5AFBB970D5D8DB040C834A803779236E9BB772A0(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_add_ScriptNotify_mD790D60B7A2A2203513B475FF7D5C7130CA70D94(INotifyEventHandler_tDCCD56A74C41F9E61B166E24F69878D4BD846FBC_ComCallableWrapper* ___handler0, EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_remove_ScriptNotify_m39C153E0B056329264FDC0031B199663A8645A06(EventRegistrationToken_t5460ED02F1A6B74B604DFD634E8D5429857E9830  ___token0) = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_U24__Stripped5_add_NavigationFailed_mFB39E9F9C0EE86180EBE6E9C39DDEF82C73F0098() = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_U24__Stripped6_remove_NavigationFailed_m93B16B51CB3D75F15E3DA500D7589958E1837E21() = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_U24__Stripped7_InvokeScript_m1560A79851AD83344780477A82BD8844D9E7746F() = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_U24__Stripped8_Navigate_mB0A0DFD8902503F60E00E7D4048555572218C35A() = 0;
	virtual il2cpp_hresult_t STDCALL IWebView_NavigateToString_mBD3559B90ACDEF9A28B9F9BDAA5E2ED6BC39DED2(Il2CppHString ___text0) = 0;
};

// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// Windows.UI.Xaml.UIElement
struct  UIElement_tEDEA851DC9C723EA90E1D112D5FA56B15667FC0E  : public DependencyObject_t565023B4A840FEA98FC1ECA52A3E9FEE81E9BEEE
{
public:

public:
};

struct UIElement_tEDEA851DC9C723EA90E1D112D5FA56B15667FC0E_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.IUIElementFactory
	IUIElementFactory_t8473CF5D644588F10274B3442877492C94BE44B9* ____iuIElementFactory_t8473CF5D644588F10274B3442877492C94BE44B9;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics
	IUIElementStatics_tB02707A810D7C1BDB2299D5118D80766992B77D9* ____iuIElementStatics_tB02707A810D7C1BDB2299D5118D80766992B77D9;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics2
	IUIElementStatics2_tC3C9022FB8A229C3AD76A66F7133E21B34E0A0DD* ____iuIElementStatics2_tC3C9022FB8A229C3AD76A66F7133E21B34E0A0DD;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics3
	IUIElementStatics3_t99682FAA1CF9A8F5C9DDE103AACFAAAFE104065B* ____iuIElementStatics3_t99682FAA1CF9A8F5C9DDE103AACFAAAFE104065B;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics4
	IUIElementStatics4_tAA933596F5F4C2AC8D29647965A7D5B20910268F* ____iuIElementStatics4_tAA933596F5F4C2AC8D29647965A7D5B20910268F;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics5
	IUIElementStatics5_tBF8D386F03A2C63384D7905C49773AFA2C2A4ADF* ____iuIElementStatics5_tBF8D386F03A2C63384D7905C49773AFA2C2A4ADF;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics7
	IUIElementStatics7_tF5F261FE18EECE3F0E1138302832C639A7191A31* ____iuIElementStatics7_tF5F261FE18EECE3F0E1138302832C639A7191A31;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics10
	IUIElementStatics10_tDA98B1B182BD703F4A86B0D1F3EBFDA797EAF192* ____iuIElementStatics10_tDA98B1B182BD703F4A86B0D1F3EBFDA797EAF192;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics9
	IUIElementStatics9_t3C508635952F0E0FC2380184F404B476603371E6* ____iuIElementStatics9_t3C508635952F0E0FC2380184F404B476603371E6;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics8
	IUIElementStatics8_tD360A36B188CDCFE36A174231CB4B730B2FDC8A1* ____iuIElementStatics8_tD360A36B188CDCFE36A174231CB4B730B2FDC8A1;
	// Cached pointer to Windows.UI.Xaml.IUIElementStatics6
	IUIElementStatics6_tD65C6A77C6F2B429FC22E5F2A6313341C3F4C15F* ____iuIElementStatics6_tD65C6A77C6F2B429FC22E5F2A6313341C3F4C15F;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.UIElement"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IUIElementFactory_t8473CF5D644588F10274B3442877492C94BE44B9* get_____iuIElementFactory_t8473CF5D644588F10274B3442877492C94BE44B9()
	{
		IUIElementFactory_t8473CF5D644588F10274B3442877492C94BE44B9* returnValue = ____iuIElementFactory_t8473CF5D644588F10274B3442877492C94BE44B9;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementFactory_t8473CF5D644588F10274B3442877492C94BE44B9::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iuIElementFactory_t8473CF5D644588F10274B3442877492C94BE44B9), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementFactory_t8473CF5D644588F10274B3442877492C94BE44B9;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics_tB02707A810D7C1BDB2299D5118D80766992B77D9* get_____iuIElementStatics_tB02707A810D7C1BDB2299D5118D80766992B77D9()
	{
		IUIElementStatics_tB02707A810D7C1BDB2299D5118D80766992B77D9* returnValue = ____iuIElementStatics_tB02707A810D7C1BDB2299D5118D80766992B77D9;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics_tB02707A810D7C1BDB2299D5118D80766992B77D9::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iuIElementStatics_tB02707A810D7C1BDB2299D5118D80766992B77D9), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics_tB02707A810D7C1BDB2299D5118D80766992B77D9;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics2_tC3C9022FB8A229C3AD76A66F7133E21B34E0A0DD* get_____iuIElementStatics2_tC3C9022FB8A229C3AD76A66F7133E21B34E0A0DD()
	{
		IUIElementStatics2_tC3C9022FB8A229C3AD76A66F7133E21B34E0A0DD* returnValue = ____iuIElementStatics2_tC3C9022FB8A229C3AD76A66F7133E21B34E0A0DD;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics2_tC3C9022FB8A229C3AD76A66F7133E21B34E0A0DD::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iuIElementStatics2_tC3C9022FB8A229C3AD76A66F7133E21B34E0A0DD), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics2_tC3C9022FB8A229C3AD76A66F7133E21B34E0A0DD;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics3_t99682FAA1CF9A8F5C9DDE103AACFAAAFE104065B* get_____iuIElementStatics3_t99682FAA1CF9A8F5C9DDE103AACFAAAFE104065B()
	{
		IUIElementStatics3_t99682FAA1CF9A8F5C9DDE103AACFAAAFE104065B* returnValue = ____iuIElementStatics3_t99682FAA1CF9A8F5C9DDE103AACFAAAFE104065B;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics3_t99682FAA1CF9A8F5C9DDE103AACFAAAFE104065B::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iuIElementStatics3_t99682FAA1CF9A8F5C9DDE103AACFAAAFE104065B), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics3_t99682FAA1CF9A8F5C9DDE103AACFAAAFE104065B;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics4_tAA933596F5F4C2AC8D29647965A7D5B20910268F* get_____iuIElementStatics4_tAA933596F5F4C2AC8D29647965A7D5B20910268F()
	{
		IUIElementStatics4_tAA933596F5F4C2AC8D29647965A7D5B20910268F* returnValue = ____iuIElementStatics4_tAA933596F5F4C2AC8D29647965A7D5B20910268F;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics4_tAA933596F5F4C2AC8D29647965A7D5B20910268F::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iuIElementStatics4_tAA933596F5F4C2AC8D29647965A7D5B20910268F), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics4_tAA933596F5F4C2AC8D29647965A7D5B20910268F;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics5_tBF8D386F03A2C63384D7905C49773AFA2C2A4ADF* get_____iuIElementStatics5_tBF8D386F03A2C63384D7905C49773AFA2C2A4ADF()
	{
		IUIElementStatics5_tBF8D386F03A2C63384D7905C49773AFA2C2A4ADF* returnValue = ____iuIElementStatics5_tBF8D386F03A2C63384D7905C49773AFA2C2A4ADF;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics5_tBF8D386F03A2C63384D7905C49773AFA2C2A4ADF::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iuIElementStatics5_tBF8D386F03A2C63384D7905C49773AFA2C2A4ADF), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics5_tBF8D386F03A2C63384D7905C49773AFA2C2A4ADF;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics7_tF5F261FE18EECE3F0E1138302832C639A7191A31* get_____iuIElementStatics7_tF5F261FE18EECE3F0E1138302832C639A7191A31()
	{
		IUIElementStatics7_tF5F261FE18EECE3F0E1138302832C639A7191A31* returnValue = ____iuIElementStatics7_tF5F261FE18EECE3F0E1138302832C639A7191A31;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics7_tF5F261FE18EECE3F0E1138302832C639A7191A31::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iuIElementStatics7_tF5F261FE18EECE3F0E1138302832C639A7191A31), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics7_tF5F261FE18EECE3F0E1138302832C639A7191A31;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics10_tDA98B1B182BD703F4A86B0D1F3EBFDA797EAF192* get_____iuIElementStatics10_tDA98B1B182BD703F4A86B0D1F3EBFDA797EAF192()
	{
		IUIElementStatics10_tDA98B1B182BD703F4A86B0D1F3EBFDA797EAF192* returnValue = ____iuIElementStatics10_tDA98B1B182BD703F4A86B0D1F3EBFDA797EAF192;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics10_tDA98B1B182BD703F4A86B0D1F3EBFDA797EAF192::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iuIElementStatics10_tDA98B1B182BD703F4A86B0D1F3EBFDA797EAF192), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics10_tDA98B1B182BD703F4A86B0D1F3EBFDA797EAF192;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics9_t3C508635952F0E0FC2380184F404B476603371E6* get_____iuIElementStatics9_t3C508635952F0E0FC2380184F404B476603371E6()
	{
		IUIElementStatics9_t3C508635952F0E0FC2380184F404B476603371E6* returnValue = ____iuIElementStatics9_t3C508635952F0E0FC2380184F404B476603371E6;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics9_t3C508635952F0E0FC2380184F404B476603371E6::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iuIElementStatics9_t3C508635952F0E0FC2380184F404B476603371E6), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics9_t3C508635952F0E0FC2380184F404B476603371E6;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics8_tD360A36B188CDCFE36A174231CB4B730B2FDC8A1* get_____iuIElementStatics8_tD360A36B188CDCFE36A174231CB4B730B2FDC8A1()
	{
		IUIElementStatics8_tD360A36B188CDCFE36A174231CB4B730B2FDC8A1* returnValue = ____iuIElementStatics8_tD360A36B188CDCFE36A174231CB4B730B2FDC8A1;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics8_tD360A36B188CDCFE36A174231CB4B730B2FDC8A1::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iuIElementStatics8_tD360A36B188CDCFE36A174231CB4B730B2FDC8A1), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics8_tD360A36B188CDCFE36A174231CB4B730B2FDC8A1;
			}
		}
		return returnValue;
	}

	inline IUIElementStatics6_tD65C6A77C6F2B429FC22E5F2A6313341C3F4C15F* get_____iuIElementStatics6_tD65C6A77C6F2B429FC22E5F2A6313341C3F4C15F()
	{
		IUIElementStatics6_tD65C6A77C6F2B429FC22E5F2A6313341C3F4C15F* returnValue = ____iuIElementStatics6_tD65C6A77C6F2B429FC22E5F2A6313341C3F4C15F;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUIElementStatics6_tD65C6A77C6F2B429FC22E5F2A6313341C3F4C15F::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iuIElementStatics6_tD65C6A77C6F2B429FC22E5F2A6313341C3F4C15F), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuIElementStatics6_tD65C6A77C6F2B429FC22E5F2A6313341C3F4C15F;
			}
		}
		return returnValue;
	}
};


// System.Threading.Tasks.Task`1<System.IO.Stream>
struct  Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602, ___m_result_22)); }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * get_m_result_22() const { return ___m_result_22; }
	inline Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Stream_t5DC87DD578C2C5298D98E7802E92DEABB66E2ECB * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t4F381CB16ECB0701C89F772EAF8F5DCD3A8E5F8B * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tAED7D799F8DF45785D811BDBACC7E9480C0B901B * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct  Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3, ___m_result_22)); }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  get_m_result_22() const { return ___m_result_22; }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Net.WebResponse>
struct  Task_1_t2A3672CB79B7A66967AEB67A7CCF5EA583D25765  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t2A3672CB79B7A66967AEB67A7CCF5EA583D25765, ___m_result_22)); }
	inline WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * get_m_result_22() const { return ___m_result_22; }
	inline WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(WebResponse_t4EB79E9B7A899FD18A4AE51B7FE4FBE9A2D636B0 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t2A3672CB79B7A66967AEB67A7CCF5EA583D25765_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t59C1EE1FD5B07F2BEBFFB103A93A760D61A39406 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t2C94CFD55C2E528DE57128CD2A37F45F9E914E5C * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t2A3672CB79B7A66967AEB67A7CCF5EA583D25765_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t59C1EE1FD5B07F2BEBFFB103A93A760D61A39406 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t59C1EE1FD5B07F2BEBFFB103A93A760D61A39406 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t59C1EE1FD5B07F2BEBFFB103A93A760D61A39406 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t2A3672CB79B7A66967AEB67A7CCF5EA583D25765_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t2C94CFD55C2E528DE57128CD2A37F45F9E914E5C * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t2C94CFD55C2E528DE57128CD2A37F45F9E914E5C ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t2C94CFD55C2E528DE57128CD2A37F45F9E914E5C * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Net.WebResponseStream>
struct  Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6, ___m_result_22)); }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * get_m_result_22() const { return ___m_result_22; }
	inline WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(WebResponseStream_tE736622E064B3EC1760F08EC5F0C5BD342E8016F * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t013331FD79369EBE4F211D12E48EE81880B105E0 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tDCDF51EBB03B2A126B495E31C37EE500F05ACE24 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t013331FD79369EBE4F211D12E48EE81880B105E0 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t013331FD79369EBE4F211D12E48EE81880B105E0 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t013331FD79369EBE4F211D12E48EE81880B105E0 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tDCDF51EBB03B2A126B495E31C37EE500F05ACE24 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tDCDF51EBB03B2A126B495E31C37EE500F05ACE24 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tDCDF51EBB03B2A126B495E31C37EE500F05ACE24 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Net.WebCompletionSource/Result>
struct  Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Result_t6AD2B95B32BB932F08E76BEE08D87983CAD79435 * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F, ___m_result_22)); }
	inline Result_t6AD2B95B32BB932F08E76BEE08D87983CAD79435 * get_m_result_22() const { return ___m_result_22; }
	inline Result_t6AD2B95B32BB932F08E76BEE08D87983CAD79435 ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(Result_t6AD2B95B32BB932F08E76BEE08D87983CAD79435 * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t70266DFCB25D824BF5DA2A7738BE839DEA63F75E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tBFDE5128E33C297BBEAA374E8C50091244EF6DD2 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t70266DFCB25D824BF5DA2A7738BE839DEA63F75E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t70266DFCB25D824BF5DA2A7738BE839DEA63F75E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t70266DFCB25D824BF5DA2A7738BE839DEA63F75E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_tBFDE5128E33C297BBEAA374E8C50091244EF6DD2 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_tBFDE5128E33C297BBEAA374E8C50091244EF6DD2 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_tBFDE5128E33C297BBEAA374E8C50091244EF6DD2 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// Windows.UI.Xaml.FrameworkElement
struct  FrameworkElement_t79B8DC49AE55DF3631FE61A8C17747AD4CDA7FF7  : public UIElement_tEDEA851DC9C723EA90E1D112D5FA56B15667FC0E
{
public:

public:
};

struct FrameworkElement_t79B8DC49AE55DF3631FE61A8C17747AD4CDA7FF7_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.IFrameworkElementFactory
	IFrameworkElementFactory_tD9E8BF62E9BEFD7C6F39DDCB1174D836AC893882* ____iframeworkElementFactory_tD9E8BF62E9BEFD7C6F39DDCB1174D836AC893882;
	// Cached pointer to Windows.UI.Xaml.IFrameworkElementStatics5
	IFrameworkElementStatics5_t54FA18E9837077C2A0D541D2B178D7EFC13A2A6B* ____iframeworkElementStatics5_t54FA18E9837077C2A0D541D2B178D7EFC13A2A6B;
	// Cached pointer to Windows.UI.Xaml.IFrameworkElementStatics4
	IFrameworkElementStatics4_tF635D14CACDD3DB2A464776C6340C0C29BEE0D6A* ____iframeworkElementStatics4_tF635D14CACDD3DB2A464776C6340C0C29BEE0D6A;
	// Cached pointer to Windows.UI.Xaml.IFrameworkElementStatics
	IFrameworkElementStatics_t7013CC9124DF9FF1B5E016C2EFC86C3269153A4B* ____iframeworkElementStatics_t7013CC9124DF9FF1B5E016C2EFC86C3269153A4B;
	// Cached pointer to Windows.UI.Xaml.IFrameworkElementStatics6
	IFrameworkElementStatics6_tC1600E6717511D85D36AF9171D396EE4BBC7F63D* ____iframeworkElementStatics6_tC1600E6717511D85D36AF9171D396EE4BBC7F63D;
	// Cached pointer to Windows.UI.Xaml.IFrameworkElementStatics2
	IFrameworkElementStatics2_t006E0C94B58E512979C0E26CF92E31C1EC3E6DBC* ____iframeworkElementStatics2_t006E0C94B58E512979C0E26CF92E31C1EC3E6DBC;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.FrameworkElement"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IFrameworkElementFactory_tD9E8BF62E9BEFD7C6F39DDCB1174D836AC893882* get_____iframeworkElementFactory_tD9E8BF62E9BEFD7C6F39DDCB1174D836AC893882()
	{
		IFrameworkElementFactory_tD9E8BF62E9BEFD7C6F39DDCB1174D836AC893882* returnValue = ____iframeworkElementFactory_tD9E8BF62E9BEFD7C6F39DDCB1174D836AC893882;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IFrameworkElementFactory_tD9E8BF62E9BEFD7C6F39DDCB1174D836AC893882::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iframeworkElementFactory_tD9E8BF62E9BEFD7C6F39DDCB1174D836AC893882), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iframeworkElementFactory_tD9E8BF62E9BEFD7C6F39DDCB1174D836AC893882;
			}
		}
		return returnValue;
	}

	inline IFrameworkElementStatics5_t54FA18E9837077C2A0D541D2B178D7EFC13A2A6B* get_____iframeworkElementStatics5_t54FA18E9837077C2A0D541D2B178D7EFC13A2A6B()
	{
		IFrameworkElementStatics5_t54FA18E9837077C2A0D541D2B178D7EFC13A2A6B* returnValue = ____iframeworkElementStatics5_t54FA18E9837077C2A0D541D2B178D7EFC13A2A6B;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IFrameworkElementStatics5_t54FA18E9837077C2A0D541D2B178D7EFC13A2A6B::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iframeworkElementStatics5_t54FA18E9837077C2A0D541D2B178D7EFC13A2A6B), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iframeworkElementStatics5_t54FA18E9837077C2A0D541D2B178D7EFC13A2A6B;
			}
		}
		return returnValue;
	}

	inline IFrameworkElementStatics4_tF635D14CACDD3DB2A464776C6340C0C29BEE0D6A* get_____iframeworkElementStatics4_tF635D14CACDD3DB2A464776C6340C0C29BEE0D6A()
	{
		IFrameworkElementStatics4_tF635D14CACDD3DB2A464776C6340C0C29BEE0D6A* returnValue = ____iframeworkElementStatics4_tF635D14CACDD3DB2A464776C6340C0C29BEE0D6A;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IFrameworkElementStatics4_tF635D14CACDD3DB2A464776C6340C0C29BEE0D6A::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iframeworkElementStatics4_tF635D14CACDD3DB2A464776C6340C0C29BEE0D6A), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iframeworkElementStatics4_tF635D14CACDD3DB2A464776C6340C0C29BEE0D6A;
			}
		}
		return returnValue;
	}

	inline IFrameworkElementStatics_t7013CC9124DF9FF1B5E016C2EFC86C3269153A4B* get_____iframeworkElementStatics_t7013CC9124DF9FF1B5E016C2EFC86C3269153A4B()
	{
		IFrameworkElementStatics_t7013CC9124DF9FF1B5E016C2EFC86C3269153A4B* returnValue = ____iframeworkElementStatics_t7013CC9124DF9FF1B5E016C2EFC86C3269153A4B;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IFrameworkElementStatics_t7013CC9124DF9FF1B5E016C2EFC86C3269153A4B::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iframeworkElementStatics_t7013CC9124DF9FF1B5E016C2EFC86C3269153A4B), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iframeworkElementStatics_t7013CC9124DF9FF1B5E016C2EFC86C3269153A4B;
			}
		}
		return returnValue;
	}

	inline IFrameworkElementStatics6_tC1600E6717511D85D36AF9171D396EE4BBC7F63D* get_____iframeworkElementStatics6_tC1600E6717511D85D36AF9171D396EE4BBC7F63D()
	{
		IFrameworkElementStatics6_tC1600E6717511D85D36AF9171D396EE4BBC7F63D* returnValue = ____iframeworkElementStatics6_tC1600E6717511D85D36AF9171D396EE4BBC7F63D;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IFrameworkElementStatics6_tC1600E6717511D85D36AF9171D396EE4BBC7F63D::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iframeworkElementStatics6_tC1600E6717511D85D36AF9171D396EE4BBC7F63D), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iframeworkElementStatics6_tC1600E6717511D85D36AF9171D396EE4BBC7F63D;
			}
		}
		return returnValue;
	}

	inline IFrameworkElementStatics2_t006E0C94B58E512979C0E26CF92E31C1EC3E6DBC* get_____iframeworkElementStatics2_t006E0C94B58E512979C0E26CF92E31C1EC3E6DBC()
	{
		IFrameworkElementStatics2_t006E0C94B58E512979C0E26CF92E31C1EC3E6DBC* returnValue = ____iframeworkElementStatics2_t006E0C94B58E512979C0E26CF92E31C1EC3E6DBC;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IFrameworkElementStatics2_t006E0C94B58E512979C0E26CF92E31C1EC3E6DBC::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iframeworkElementStatics2_t006E0C94B58E512979C0E26CF92E31C1EC3E6DBC), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iframeworkElementStatics2_t006E0C94B58E512979C0E26CF92E31C1EC3E6DBC;
			}
		}
		return returnValue;
	}
};

// Windows.UI.Core.IWindowActivatedEventArgs
struct NOVTABLE IWindowActivatedEventArgs_tF45E992219EA24A36AA1BC2727B40024FDDA5906 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWindowActivatedEventArgs_get_WindowActivationState_mEB302D632FB0CA806517DD1D46E056300BF6C0C7(int32_t* comReturnValue) = 0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow,Windows.UI.Core.WindowActivatedEventArgs>
struct  TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow,Windows.UI.Core.WindowActivatedEventArgs>
struct ITypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(ICoreWindow_t8171C3C9F3639753CE689551F960C1F0189C3B70* ___sender0, IWindowActivatedEventArgs_tF45E992219EA24A36AA1BC2727B40024FDDA5906* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct  TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewContentLoadingEventArgs>
struct  TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewContentLoadingEventArgs>
struct ITypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA* ___sender0, IWebViewContentLoadingEventArgs_t0CFDA5E6797A282D2E1882E41996190E282B8519* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewDOMContentLoadedEventArgs>
struct  TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewDOMContentLoadedEventArgs>
struct ITypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA* ___sender0, IWebViewDOMContentLoadedEventArgs_tA316BEA13E58B98198CA8AB68B25A373FA6C353B* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationCompletedEventArgs>
struct  TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationCompletedEventArgs>
struct ITypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA* ___sender0, IWebViewNavigationCompletedEventArgs_tF6A2CE4137DF6EC9B63814EB940FCC8D8C70022E* ___args1) = 0;
};


// Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationStartingEventArgs>
struct  TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationStartingEventArgs>
struct ITypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA* ___sender0, IWebViewNavigationStartingEventArgs_t4B0070222F6E02101A7C5D048745E98D3B8FFFC1* ___args1) = 0;
};


// System.Threading.Tasks.UnwrapPromise`1<System.IO.Stream>
struct  UnwrapPromise_1_t476F900657609ACBE11CF4AD7DEB3BFF1033C1AD  : public Task_1_t9886BD44244DCD8CA9A7E5EF87684455E7FFF602
{
public:
	// System.Byte System.Threading.Tasks.UnwrapPromise`1::_state
	uint8_t ____state_25;
	// System.Boolean System.Threading.Tasks.UnwrapPromise`1::_lookForOce
	bool ____lookForOce_26;

public:
	inline static int32_t get_offset_of__state_25() { return static_cast<int32_t>(offsetof(UnwrapPromise_1_t476F900657609ACBE11CF4AD7DEB3BFF1033C1AD, ____state_25)); }
	inline uint8_t get__state_25() const { return ____state_25; }
	inline uint8_t* get_address_of__state_25() { return &____state_25; }
	inline void set__state_25(uint8_t value)
	{
		____state_25 = value;
	}

	inline static int32_t get_offset_of__lookForOce_26() { return static_cast<int32_t>(offsetof(UnwrapPromise_1_t476F900657609ACBE11CF4AD7DEB3BFF1033C1AD, ____lookForOce_26)); }
	inline bool get__lookForOce_26() const { return ____lookForOce_26; }
	inline bool* get_address_of__lookForOce_26() { return &____lookForOce_26; }
	inline void set__lookForOce_26(bool value)
	{
		____lookForOce_26 = value;
	}
};


// System.Threading.Tasks.UnwrapPromise`1<System.Threading.Tasks.VoidTaskResult>
struct  UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962  : public Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3
{
public:
	// System.Byte System.Threading.Tasks.UnwrapPromise`1::_state
	uint8_t ____state_25;
	// System.Boolean System.Threading.Tasks.UnwrapPromise`1::_lookForOce
	bool ____lookForOce_26;

public:
	inline static int32_t get_offset_of__state_25() { return static_cast<int32_t>(offsetof(UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962, ____state_25)); }
	inline uint8_t get__state_25() const { return ____state_25; }
	inline uint8_t* get_address_of__state_25() { return &____state_25; }
	inline void set__state_25(uint8_t value)
	{
		____state_25 = value;
	}

	inline static int32_t get_offset_of__lookForOce_26() { return static_cast<int32_t>(offsetof(UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962, ____lookForOce_26)); }
	inline bool get__lookForOce_26() const { return ____lookForOce_26; }
	inline bool* get_address_of__lookForOce_26() { return &____lookForOce_26; }
	inline void set__lookForOce_26(bool value)
	{
		____lookForOce_26 = value;
	}
};


// System.Threading.Tasks.UnwrapPromise`1<System.Net.WebResponse>
struct  UnwrapPromise_1_t37E48204B4DA3C52EFF216774B0149293E5E946D  : public Task_1_t2A3672CB79B7A66967AEB67A7CCF5EA583D25765
{
public:
	// System.Byte System.Threading.Tasks.UnwrapPromise`1::_state
	uint8_t ____state_25;
	// System.Boolean System.Threading.Tasks.UnwrapPromise`1::_lookForOce
	bool ____lookForOce_26;

public:
	inline static int32_t get_offset_of__state_25() { return static_cast<int32_t>(offsetof(UnwrapPromise_1_t37E48204B4DA3C52EFF216774B0149293E5E946D, ____state_25)); }
	inline uint8_t get__state_25() const { return ____state_25; }
	inline uint8_t* get_address_of__state_25() { return &____state_25; }
	inline void set__state_25(uint8_t value)
	{
		____state_25 = value;
	}

	inline static int32_t get_offset_of__lookForOce_26() { return static_cast<int32_t>(offsetof(UnwrapPromise_1_t37E48204B4DA3C52EFF216774B0149293E5E946D, ____lookForOce_26)); }
	inline bool get__lookForOce_26() const { return ____lookForOce_26; }
	inline bool* get_address_of__lookForOce_26() { return &____lookForOce_26; }
	inline void set__lookForOce_26(bool value)
	{
		____lookForOce_26 = value;
	}
};


// Windows.UI.Xaml.Controls.WebView
struct  WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900  : public FrameworkElement_t79B8DC49AE55DF3631FE61A8C17747AD4CDA7FF7
{
public:

public:
};

struct WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900_StaticFields
{
public:
	// Cached pointer to Windows.UI.Xaml.Controls.IWebViewFactory4
	IWebViewFactory4_tC20B68997D7100D6E8B6A6542E59C676FAA35DCA* ____iwebViewFactory4_tC20B68997D7100D6E8B6A6542E59C676FAA35DCA;
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.UI.Xaml.Controls.IWebViewStatics5
	IWebViewStatics5_tA08B995FCC3024509E7990674453C179E1587DEC* ____iwebViewStatics5_tA08B995FCC3024509E7990674453C179E1587DEC;
	// Cached pointer to Windows.UI.Xaml.Controls.IWebViewStatics
	IWebViewStatics_tAC20E8BE89CCBA14F817656DA6001187D5890D7F* ____iwebViewStatics_tAC20E8BE89CCBA14F817656DA6001187D5890D7F;
	// Cached pointer to Windows.UI.Xaml.Controls.IWebViewStatics2
	IWebViewStatics2_tD6A4BCC57B50E42BC42148C40DD03E4B3218736F* ____iwebViewStatics2_tD6A4BCC57B50E42BC42148C40DD03E4B3218736F;
	// Cached pointer to Windows.UI.Xaml.Controls.IWebViewStatics4
	IWebViewStatics4_t49CC152C57561D1CE210A84F65892F7C994D8E79* ____iwebViewStatics4_t49CC152C57561D1CE210A84F65892F7C994D8E79;
	// Cached pointer to Windows.UI.Xaml.Controls.IWebViewStatics3
	IWebViewStatics3_t5397B709E7080AF0A0413985E72AFDF4B1AA1F33* ____iwebViewStatics3_t5397B709E7080AF0A0413985E72AFDF4B1AA1F33;

public:
	inline IWebViewFactory4_tC20B68997D7100D6E8B6A6542E59C676FAA35DCA* get_____iwebViewFactory4_tC20B68997D7100D6E8B6A6542E59C676FAA35DCA()
	{
		IWebViewFactory4_tC20B68997D7100D6E8B6A6542E59C676FAA35DCA* returnValue = ____iwebViewFactory4_tC20B68997D7100D6E8B6A6542E59C676FAA35DCA;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWebViewFactory4_tC20B68997D7100D6E8B6A6542E59C676FAA35DCA::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iwebViewFactory4_tC20B68997D7100D6E8B6A6542E59C676FAA35DCA), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwebViewFactory4_tC20B68997D7100D6E8B6A6542E59C676FAA35DCA;
			}
		}
		return returnValue;
	}

	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.UI.Xaml.Controls.WebView"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IWebViewStatics5_tA08B995FCC3024509E7990674453C179E1587DEC* get_____iwebViewStatics5_tA08B995FCC3024509E7990674453C179E1587DEC()
	{
		IWebViewStatics5_tA08B995FCC3024509E7990674453C179E1587DEC* returnValue = ____iwebViewStatics5_tA08B995FCC3024509E7990674453C179E1587DEC;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWebViewStatics5_tA08B995FCC3024509E7990674453C179E1587DEC::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iwebViewStatics5_tA08B995FCC3024509E7990674453C179E1587DEC), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwebViewStatics5_tA08B995FCC3024509E7990674453C179E1587DEC;
			}
		}
		return returnValue;
	}

	inline IWebViewStatics_tAC20E8BE89CCBA14F817656DA6001187D5890D7F* get_____iwebViewStatics_tAC20E8BE89CCBA14F817656DA6001187D5890D7F()
	{
		IWebViewStatics_tAC20E8BE89CCBA14F817656DA6001187D5890D7F* returnValue = ____iwebViewStatics_tAC20E8BE89CCBA14F817656DA6001187D5890D7F;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWebViewStatics_tAC20E8BE89CCBA14F817656DA6001187D5890D7F::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iwebViewStatics_tAC20E8BE89CCBA14F817656DA6001187D5890D7F), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwebViewStatics_tAC20E8BE89CCBA14F817656DA6001187D5890D7F;
			}
		}
		return returnValue;
	}

	inline IWebViewStatics2_tD6A4BCC57B50E42BC42148C40DD03E4B3218736F* get_____iwebViewStatics2_tD6A4BCC57B50E42BC42148C40DD03E4B3218736F()
	{
		IWebViewStatics2_tD6A4BCC57B50E42BC42148C40DD03E4B3218736F* returnValue = ____iwebViewStatics2_tD6A4BCC57B50E42BC42148C40DD03E4B3218736F;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWebViewStatics2_tD6A4BCC57B50E42BC42148C40DD03E4B3218736F::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iwebViewStatics2_tD6A4BCC57B50E42BC42148C40DD03E4B3218736F), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwebViewStatics2_tD6A4BCC57B50E42BC42148C40DD03E4B3218736F;
			}
		}
		return returnValue;
	}

	inline IWebViewStatics4_t49CC152C57561D1CE210A84F65892F7C994D8E79* get_____iwebViewStatics4_t49CC152C57561D1CE210A84F65892F7C994D8E79()
	{
		IWebViewStatics4_t49CC152C57561D1CE210A84F65892F7C994D8E79* returnValue = ____iwebViewStatics4_t49CC152C57561D1CE210A84F65892F7C994D8E79;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWebViewStatics4_t49CC152C57561D1CE210A84F65892F7C994D8E79::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iwebViewStatics4_t49CC152C57561D1CE210A84F65892F7C994D8E79), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwebViewStatics4_t49CC152C57561D1CE210A84F65892F7C994D8E79;
			}
		}
		return returnValue;
	}

	inline IWebViewStatics3_t5397B709E7080AF0A0413985E72AFDF4B1AA1F33* get_____iwebViewStatics3_t5397B709E7080AF0A0413985E72AFDF4B1AA1F33()
	{
		IWebViewStatics3_t5397B709E7080AF0A0413985E72AFDF4B1AA1F33* returnValue = ____iwebViewStatics3_t5397B709E7080AF0A0413985E72AFDF4B1AA1F33;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IWebViewStatics3_t5397B709E7080AF0A0413985E72AFDF4B1AA1F33::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____iwebViewStatics3_t5397B709E7080AF0A0413985E72AFDF4B1AA1F33), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iwebViewStatics3_t5397B709E7080AF0A0413985E72AFDF4B1AA1F33;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif

il2cpp_hresult_t IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue);
il2cpp_hresult_t IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue);
il2cpp_hresult_t IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue);
il2cpp_hresult_t IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable* ___value1);
il2cpp_hresult_t IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0);
il2cpp_hresult_t IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0);
il2cpp_hresult_t IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(RuntimeObject* __this);
il2cpp_hresult_t IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, Il2CppIInspectable** comReturnValue);
il2cpp_hresult_t IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue);
il2cpp_hresult_t IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue);
il2cpp_hresult_t IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue);
il2cpp_hresult_t IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m633A6619394B3D5F3C491E07218865F0DF049B13_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t8740C181128AED3F3D250FB1DD4DEAB681678231** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m10B9CEF4E2365F68B696BAA376DD71E50C4F03CF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t010C84FB691B93F5282F086A63FD2FC0204DF8C1** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mDC3A085FD88BD51803D0108F4BE55CC0A62F04BD_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tCE1228F7036709D8995228E4D6B062403BE4A179** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m69A2608FA3F7C2D60F8A1492A72FD4FD7861C5CF_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tF8707DD64D52BDB8A012DE199056F7ACB722A66F** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m57839A783E9A1B960462AAEBB26AE8C05F1231FB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t633CABC20CB9311C39C96BD0C94CBB86458845B4** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mC25A6579B73668A43386C242D195C7AE733F1834_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tA139984CFC4F44276F5D79FCE000AEB22BD6837A** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m7CC5BFCA3F68A57AFCBABBF364165E9DA07DECA2_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tD1A6AB7C797A40AA55DDA1B9302213C0C31F185C** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mA17781E559876116F3471301EC6F7F061390E5AB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tBA5B0A0D15D97D2195251F2025585A36AB8DBBF3** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mE209B1D5394F56E0788A71FD5AB0EA404515BA42_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t4B49DCCA506E292492E84CAAD9F2B5B1C080BAF0** comReturnValue);
il2cpp_hresult_t IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF** comReturnValue);
il2cpp_hresult_t IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue);

// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::Invoke(TSender,TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared (TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method);

// System.Void Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow,Windows.UI.Core.WindowActivatedEventArgs>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_mAA97CEB0DEAB91B05551D4FD95A611C2002D302F (TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4 * __this, CoreWindow_t036E38CD43CB603ECB94E90C48D1F6A8A89AFBFD * ___sender0, WindowActivatedEventArgs_tB97F0E07C4CCB04C8352C960B90FE29A3505FBD4 * ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4 *, CoreWindow_t036E38CD43CB603ECB94E90C48D1F6A8A89AFBFD *, WindowActivatedEventArgs_tB97F0E07C4CCB04C8352C960B90FE29A3505FBD4 *, const RuntimeMethod*))TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67 (TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewContentLoadingEventArgs>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m00EFA8EB349790EFFACB1D896688752AA2C5825D (TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC * __this, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 * ___sender0, WebViewContentLoadingEventArgs_t1F95E97D138594CA25666D61BD97B611B475A860 * ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC *, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 *, WebViewContentLoadingEventArgs_t1F95E97D138594CA25666D61BD97B611B475A860 *, const RuntimeMethod*))TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewDOMContentLoadedEventArgs>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m9A924CD33673F9E421D09A2E7F4F561A698DE402 (TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB * __this, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 * ___sender0, WebViewDOMContentLoadedEventArgs_tAEE554A6493E9466F1C8C9A48ABEE6F47BB10D6A * ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB *, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 *, WebViewDOMContentLoadedEventArgs_tAEE554A6493E9466F1C8C9A48ABEE6F47BB10D6A *, const RuntimeMethod*))TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationCompletedEventArgs>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_mFCCED2ADBCE7FEBA981D3EDC3A6BC4378C69CD6A (TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A * __this, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 * ___sender0, WebViewNavigationCompletedEventArgs_tD0B8AF703EFA6C717B244D4B356B6BD0165A426D * ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A *, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 *, WebViewNavigationCompletedEventArgs_tD0B8AF703EFA6C717B244D4B356B6BD0165A426D *, const RuntimeMethod*))TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared)(__this, ___sender0, ___args1, method);
}
// System.Void Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationStartingEventArgs>::Invoke(TSender,TResult)
inline void TypedEventHandler_2_Invoke_m43FB38D24159D2B8BDB576C6B63F9CB2D632CD56 (TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9 * __this, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 * ___sender0, WebViewNavigationStartingEventArgs_t30F625D3F53DFD47538748F0F6D8C36921011265 * ___args1, const RuntimeMethod* method)
{
	((  void (*) (TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9 *, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 *, WebViewNavigationStartingEventArgs_t30F625D3F53DFD47538748F0F6D8C36921011265 *, const RuntimeMethod*))TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_gshared)(__this, ___sender0, ___args1, method);
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Net.WebResponseStream>
struct Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_t9B51BE1BAD1D5EDAE57D8E4A3D3BD8AB9054E8C6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.Task`1<System.Net.WebCompletionSource/Result>
struct Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) Task_1_tCDDFB5A5588B0063A47556542106C447CDA8614F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A
{
	inline TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[3] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrueReadOnlyCollection_1_t06D7E0A73C830464D87F10A513072796E7172082_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Runtime.CompilerServices.TrueReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>
struct TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8, IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC, IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A
{
	inline TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;
		interfaceIds[2] = IBindableVector_tC070A96258CD93818901E9B7808E1A8EFB64B7EC::IID;
		interfaceIds[3] = IVectorView_1_t9D427951F2D09C2E6F846759B5273E993F185D4A::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetAt_m33D2170810828C01473D9BDC22745A0354FA4FED_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_get_Size_m45347BCD42A1FE180ED2B377BB9C88C7B50CD7D9_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38(IBindableVectorView_tD80A01049DD2609FEA5FACD5E77BF95A875534FA** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_GetView_m9736FE93BC8979E0CBF8ED26090D1FE54C2E1A38_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableVector_IndexOf_m2F1A64750D19C5A03E9B65880F4A04275E6AABF4_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_SetAt_mD4C84EC02EAD7F636873B77E6D48E7132055A213_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5(uint32_t ___index0, Il2CppIInspectable* ___value1) IL2CPP_OVERRIDE
	{
		return IBindableVector_InsertAt_m19A0C885F7C7A7FFA257A46218D7232317E022B5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, ___value1);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0(uint32_t ___index0) IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAt_m1AC6E54165809374E91F456B9922A9B24F8652B0_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F(Il2CppIInspectable* ___value0) IL2CPP_OVERRIDE
	{
		return IBindableVector_Append_mCA138F8E4026725AC867B607FA63709B6752BB7F_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0);
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3() IL2CPP_OVERRIDE
	{
		return IBindableVector_RemoveAtEnd_mB3178911995D4CC7BAC0EA43720C1280267E54E3_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF() IL2CPP_OVERRIDE
	{
		return IBindableVector_Clear_mEF05B40EFF6D42CBB5A5E336B0946FECE7A4A6EF_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260(uint32_t ___index0, Il2CppIInspectable** comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetAt_m38CCDDE1E25317AEF5170D9818FC01816AF34260_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___index0, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B(uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_get_Size_m33BC340C458F20A80A8B07FF4764CEF1F5513F8B_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_IndexOf_mFAE432DA0C1902EEF54AB68CFFD3E2182C443F67_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___value0, ___index1, comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) IL2CPP_OVERRIDE
	{
		return IVectorView_1_GetMany_m6AA46969FB50015EB7107EBCC29E48B7AD4BB6B1_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), ___startIndex0, ___items1ArraySize, ___items1, comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TrueReadOnlyCollection_1_tFACBB37A6A09F5303FA9A457A34FAFE7002020A3_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow,Windows.UI.Core.WindowActivatedEventArgs>
struct TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper>, ITypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper
{
	inline TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<Windows.UI.Core.CoreWindow,Windows.UI.Core.WindowActivatedEventArgs>
	virtual il2cpp_hresult_t STDCALL Invoke(ICoreWindow_t8171C3C9F3639753CE689551F960C1F0189C3B70* ___sender0, IWindowActivatedEventArgs_tF45E992219EA24A36AA1BC2727B40024FDDA5906* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreWindow_t036E38CD43CB603ECB94E90C48D1F6A8A89AFBFD_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_Invoke_mAA97CEB0DEAB91B05551D4FD95A611C2002D302F_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WindowActivatedEventArgs_tB97F0E07C4CCB04C8352C960B90FE29A3505FBD4_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		CoreWindow_t036E38CD43CB603ECB94E90C48D1F6A8A89AFBFD * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<CoreWindow_t036E38CD43CB603ECB94E90C48D1F6A8A89AFBFD>(___sender0, CoreWindow_t036E38CD43CB603ECB94E90C48D1F6A8A89AFBFD_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), ICoreWindow_t8171C3C9F3639753CE689551F960C1F0189C3B70::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		WindowActivatedEventArgs_tB97F0E07C4CCB04C8352C960B90FE29A3505FBD4 * ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<WindowActivatedEventArgs_tB97F0E07C4CCB04C8352C960B90FE29A3505FBD4>(___args1, WindowActivatedEventArgs_tB97F0E07C4CCB04C8352C960B90FE29A3505FBD4_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), IWindowActivatedEventArgs_tF45E992219EA24A36AA1BC2727B40024FDDA5906::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4 * __thisValue = (TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4 *)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_mAA97CEB0DEAB91B05551D4FD95A611C2002D302F(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, TypedEventHandler_2_Invoke_mAA97CEB0DEAB91B05551D4FD95A611C2002D302F_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_t7E9611092CAC1E42926A8FF5CF8AC1AC7C66A0D4_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper>, ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper
{
	inline TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Il2CppComObject_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_RuntimeMethod_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		RuntimeObject * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___sender0, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), Il2CppIInspectable::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		RuntimeObject * ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___args1, Il2CppComObject_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), Il2CppIInspectable::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC * __thisValue = (TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC *)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, TypedEventHandler_2_Invoke_m5D952F3779C15A5E243841A324A3342D1D58CE67_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_t8D72D4CAB5DF9F7D9AE52E95A431BD4738A32CDC_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewContentLoadingEventArgs>
struct TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC_ComCallableWrapper>, ITypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC_ComCallableWrapper
{
	inline TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewContentLoadingEventArgs>
	virtual il2cpp_hresult_t STDCALL Invoke(IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA* ___sender0, IWebViewContentLoadingEventArgs_t0CFDA5E6797A282D2E1882E41996190E282B8519* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_Invoke_m00EFA8EB349790EFFACB1D896688752AA2C5825D_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewContentLoadingEventArgs_t1F95E97D138594CA25666D61BD97B611B475A860_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900>(___sender0, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		WebViewContentLoadingEventArgs_t1F95E97D138594CA25666D61BD97B611B475A860 * ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<WebViewContentLoadingEventArgs_t1F95E97D138594CA25666D61BD97B611B475A860>(___args1, WebViewContentLoadingEventArgs_t1F95E97D138594CA25666D61BD97B611B475A860_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), IWebViewContentLoadingEventArgs_t0CFDA5E6797A282D2E1882E41996190E282B8519::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC * __thisValue = (TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC *)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m00EFA8EB349790EFFACB1D896688752AA2C5825D(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, TypedEventHandler_2_Invoke_m00EFA8EB349790EFFACB1D896688752AA2C5825D_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_tCA19DB2B5869E8434234F943D26A2D01B867EDFC_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewDOMContentLoadedEventArgs>
struct TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB_ComCallableWrapper>, ITypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB_ComCallableWrapper
{
	inline TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewDOMContentLoadedEventArgs>
	virtual il2cpp_hresult_t STDCALL Invoke(IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA* ___sender0, IWebViewDOMContentLoadedEventArgs_tA316BEA13E58B98198CA8AB68B25A373FA6C353B* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_Invoke_m9A924CD33673F9E421D09A2E7F4F561A698DE402_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewDOMContentLoadedEventArgs_tAEE554A6493E9466F1C8C9A48ABEE6F47BB10D6A_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900>(___sender0, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		WebViewDOMContentLoadedEventArgs_tAEE554A6493E9466F1C8C9A48ABEE6F47BB10D6A * ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<WebViewDOMContentLoadedEventArgs_tAEE554A6493E9466F1C8C9A48ABEE6F47BB10D6A>(___args1, WebViewDOMContentLoadedEventArgs_tAEE554A6493E9466F1C8C9A48ABEE6F47BB10D6A_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), IWebViewDOMContentLoadedEventArgs_tA316BEA13E58B98198CA8AB68B25A373FA6C353B::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB * __thisValue = (TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB *)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m9A924CD33673F9E421D09A2E7F4F561A698DE402(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, TypedEventHandler_2_Invoke_m9A924CD33673F9E421D09A2E7F4F561A698DE402_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_t89FAB11DF9040F8497F950179BC1B57FACF213FB_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationCompletedEventArgs>
struct TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A_ComCallableWrapper>, ITypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A_ComCallableWrapper
{
	inline TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationCompletedEventArgs>
	virtual il2cpp_hresult_t STDCALL Invoke(IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA* ___sender0, IWebViewNavigationCompletedEventArgs_tF6A2CE4137DF6EC9B63814EB940FCC8D8C70022E* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_Invoke_mFCCED2ADBCE7FEBA981D3EDC3A6BC4378C69CD6A_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewNavigationCompletedEventArgs_tD0B8AF703EFA6C717B244D4B356B6BD0165A426D_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900>(___sender0, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		WebViewNavigationCompletedEventArgs_tD0B8AF703EFA6C717B244D4B356B6BD0165A426D * ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<WebViewNavigationCompletedEventArgs_tD0B8AF703EFA6C717B244D4B356B6BD0165A426D>(___args1, WebViewNavigationCompletedEventArgs_tD0B8AF703EFA6C717B244D4B356B6BD0165A426D_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), IWebViewNavigationCompletedEventArgs_tF6A2CE4137DF6EC9B63814EB940FCC8D8C70022E::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A * __thisValue = (TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A *)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_mFCCED2ADBCE7FEBA981D3EDC3A6BC4378C69CD6A(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, TypedEventHandler_2_Invoke_mFCCED2ADBCE7FEBA981D3EDC3A6BC4378C69CD6A_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_t6BE93FC95A108EFEE8F061B21E043C677D319B2A_ComCallableWrapper(obj));
}

// COM Callable Wrapper class definition for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationStartingEventArgs>
struct TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9_ComCallableWrapper>, ITypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9_ComCallableWrapper
{
	inline TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9_ComCallableWrapper(RuntimeObject * obj) : 
		il2cpp::vm::CachedCCWBase<TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9_ComCallableWrapper>(obj)
	{
	}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &ITypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9_ComCallableWrapper::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<ITypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9_ComCallableWrapper*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	// COM Callable invoker for Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Controls.WebView,Windows.UI.Xaml.Controls.WebViewNavigationStartingEventArgs>
	virtual il2cpp_hresult_t STDCALL Invoke(IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA* ___sender0, IWebViewNavigationStartingEventArgs_t4B0070222F6E02101A7C5D048745E98D3B8FFFC1* ___args1) override
	{
		static bool s_Il2CppMethodInitialized;
		if (!s_Il2CppMethodInitialized)
		{
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypedEventHandler_2_Invoke_m43FB38D24159D2B8BDB576C6B63F9CB2D632CD56_RuntimeMethod_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebViewNavigationStartingEventArgs_t30F625D3F53DFD47538748F0F6D8C36921011265_il2cpp_TypeInfo_var);
			il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900_il2cpp_TypeInfo_var);
			s_Il2CppMethodInitialized = true;
		}
		il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

		// Marshaling of parameter '___sender0' to managed representation
		WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900 * ____sender0_unmarshaled = NULL;
		if (___sender0 != NULL)
		{
			____sender0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900>(___sender0, WebView_t647EAB2542324D0D0A12F18D6CEA03612A272900_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____sender0_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____sender0_unmarshaled), IWebView_t23F7FD577AD04DA263F3904F125BE3C8ACBC6EDA::IID, ___sender0);
			}
		}
		else
		{
			____sender0_unmarshaled = NULL;
		}

		// Marshaling of parameter '___args1' to managed representation
		WebViewNavigationStartingEventArgs_t30F625D3F53DFD47538748F0F6D8C36921011265 * ____args1_unmarshaled = NULL;
		if (___args1 != NULL)
		{
			____args1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<WebViewNavigationStartingEventArgs_t30F625D3F53DFD47538748F0F6D8C36921011265>(___args1, WebViewNavigationStartingEventArgs_t30F625D3F53DFD47538748F0F6D8C36921011265_il2cpp_TypeInfo_var);

			if (il2cpp_codegen_is_import_or_windows_runtime(____args1_unmarshaled))
			{
				il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(____args1_unmarshaled), IWebViewNavigationStartingEventArgs_t4B0070222F6E02101A7C5D048745E98D3B8FFFC1::IID, ___args1);
			}
		}
		else
		{
			____args1_unmarshaled = NULL;
		}

		// Managed method invocation
		try
		{
			TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9 * __thisValue = (TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9 *)GetManagedObjectInline();
			TypedEventHandler_2_Invoke_m43FB38D24159D2B8BDB576C6B63F9CB2D632CD56(__thisValue, ____sender0_unmarshaled, ____args1_unmarshaled, TypedEventHandler_2_Invoke_m43FB38D24159D2B8BDB576C6B63F9CB2D632CD56_RuntimeMethod_var);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			String_t* exceptionStr = NULL;
			try
			{
				exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
			}
			catch (const Il2CppExceptionWrapper&)
			{
				exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
			}
			il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
			return ex.ex->hresult;
		}

		return IL2CPP_S_OK;
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) TypedEventHandler_2_tAE42F570DF6A204C8C6F5CA12696F5B0C2B439D9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.UnwrapPromise`1<System.IO.Stream>
struct UnwrapPromise_1_t476F900657609ACBE11CF4AD7DEB3BFF1033C1AD_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnwrapPromise_1_t476F900657609ACBE11CF4AD7DEB3BFF1033C1AD_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline UnwrapPromise_1_t476F900657609ACBE11CF4AD7DEB3BFF1033C1AD_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnwrapPromise_1_t476F900657609ACBE11CF4AD7DEB3BFF1033C1AD_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnwrapPromise_1_t476F900657609ACBE11CF4AD7DEB3BFF1033C1AD(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnwrapPromise_1_t476F900657609ACBE11CF4AD7DEB3BFF1033C1AD_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnwrapPromise_1_t476F900657609ACBE11CF4AD7DEB3BFF1033C1AD_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.UnwrapPromise`1<System.Threading.Tasks.VoidTaskResult>
struct UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnwrapPromise_1_t77E2E731BA3ACCCB0D6C1B4FFCACAE2A3E4E7962_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Threading.Tasks.UnwrapPromise`1<System.Net.WebResponse>
struct UnwrapPromise_1_t37E48204B4DA3C52EFF216774B0149293E5E946D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<UnwrapPromise_1_t37E48204B4DA3C52EFF216774B0149293E5E946D_ComCallableWrapper>, IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953
{
	inline UnwrapPromise_1_t37E48204B4DA3C52EFF216774B0149293E5E946D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<UnwrapPromise_1_t37E48204B4DA3C52EFF216774B0149293E5E946D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IClosable_t30CA7D2BE598B3BD6AA57CE9DF977DB51540B953::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999() IL2CPP_OVERRIDE
	{
		return IClosable_Close_m7DE2119A960C4E3898E6E5D03245D047BF113999_ComCallableWrapperProjectedMethod(GetManagedObjectInline());
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_UnwrapPromise_1_t37E48204B4DA3C52EFF216774B0149293E5E946D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(UnwrapPromise_1_t37E48204B4DA3C52EFF216774B0149293E5E946D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) UnwrapPromise_1_t37E48204B4DA3C52EFF216774B0149293E5E946D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ValueCollection_t987D376B17F692C3A1C2223C277336DAAA8DE68E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t987D376B17F692C3A1C2223C277336DAAA8DE68E_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t987D376B17F692C3A1C2223C277336DAAA8DE68E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t987D376B17F692C3A1C2223C277336DAAA8DE68E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t987D376B17F692C3A1C2223C277336DAAA8DE68E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t987D376B17F692C3A1C2223C277336DAAA8DE68E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t987D376B17F692C3A1C2223C277336DAAA8DE68E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct ValueCollection_t083FEA9A75D32522810BB19D2EA1C29E37E6ECB2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t083FEA9A75D32522810BB19D2EA1C29E37E6ECB2_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t083FEA9A75D32522810BB19D2EA1C29E37E6ECB2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t083FEA9A75D32522810BB19D2EA1C29E37E6ECB2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t083FEA9A75D32522810BB19D2EA1C29E37E6ECB2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t083FEA9A75D32522810BB19D2EA1C29E37E6ECB2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t083FEA9A75D32522810BB19D2EA1C29E37E6ECB2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.Serialization.DataContractPairKey,System.Object>
struct ValueCollection_tE2A18A5FD5A055D96ABE4A0C5564258B5E1EF507_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tE2A18A5FD5A055D96ABE4A0C5564258B5E1EF507_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tE2A18A5FD5A055D96ABE4A0C5564258B5E1EF507_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tE2A18A5FD5A055D96ABE4A0C5564258B5E1EF507_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tE2A18A5FD5A055D96ABE4A0C5564258B5E1EF507(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tE2A18A5FD5A055D96ABE4A0C5564258B5E1EF507_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tE2A18A5FD5A055D96ABE4A0C5564258B5E1EF507_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.Serialization.DataContractPairKey,System.Object>
struct ValueCollection_tE108D94B9A5ECBF7618C0AA62BBF056235DA58EC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tE108D94B9A5ECBF7618C0AA62BBF056235DA58EC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tE108D94B9A5ECBF7618C0AA62BBF056235DA58EC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tE108D94B9A5ECBF7618C0AA62BBF056235DA58EC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tE108D94B9A5ECBF7618C0AA62BBF056235DA58EC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tE108D94B9A5ECBF7618C0AA62BBF056235DA58EC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tE108D94B9A5ECBF7618C0AA62BBF056235DA58EC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.DateTime,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct ValueCollection_t9070E10AB460E9A29EB73BA18C752F9260A9416F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t9070E10AB460E9A29EB73BA18C752F9260A9416F_ComCallableWrapper>, IIterable_1_tEAB82D72E93310B7B99AE0982238491929BEDFD6, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t9070E10AB460E9A29EB73BA18C752F9260A9416F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t9070E10AB460E9A29EB73BA18C752F9260A9416F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tEAB82D72E93310B7B99AE0982238491929BEDFD6::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tEAB82D72E93310B7B99AE0982238491929BEDFD6*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_tEAB82D72E93310B7B99AE0982238491929BEDFD6::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m633A6619394B3D5F3C491E07218865F0DF049B13(IIterator_1_t8740C181128AED3F3D250FB1DD4DEAB681678231** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m633A6619394B3D5F3C491E07218865F0DF049B13_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t9070E10AB460E9A29EB73BA18C752F9260A9416F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t9070E10AB460E9A29EB73BA18C752F9260A9416F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t9070E10AB460E9A29EB73BA18C752F9260A9416F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.Action`1<System.Boolean>>
struct ValueCollection_t7CB4C6146BDDAABC94D5EBD50220C4C573854435_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t7CB4C6146BDDAABC94D5EBD50220C4C573854435_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t7CB4C6146BDDAABC94D5EBD50220C4C573854435_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t7CB4C6146BDDAABC94D5EBD50220C4C573854435_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t7CB4C6146BDDAABC94D5EBD50220C4C573854435(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t7CB4C6146BDDAABC94D5EBD50220C4C573854435_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t7CB4C6146BDDAABC94D5EBD50220C4C573854435_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.Action`1<System.Boolean>>
struct ValueCollection_tA59B58CCEE3482CDF5F547BFA23A9CEB7F8D4526_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tA59B58CCEE3482CDF5F547BFA23A9CEB7F8D4526_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tA59B58CCEE3482CDF5F547BFA23A9CEB7F8D4526_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tA59B58CCEE3482CDF5F547BFA23A9CEB7F8D4526_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tA59B58CCEE3482CDF5F547BFA23A9CEB7F8D4526(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tA59B58CCEE3482CDF5F547BFA23A9CEB7F8D4526_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tA59B58CCEE3482CDF5F547BFA23A9CEB7F8D4526_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdEndEventArgs>>
struct ValueCollection_tD88DCFD8E4DEFFA3FB0A02296D6C084425442BC2_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tD88DCFD8E4DEFFA3FB0A02296D6C084425442BC2_ComCallableWrapper>, IIterable_1_t8BA588C8C55DB87154DD0E5CFB2142C32C192F94, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tD88DCFD8E4DEFFA3FB0A02296D6C084425442BC2_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tD88DCFD8E4DEFFA3FB0A02296D6C084425442BC2_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t8BA588C8C55DB87154DD0E5CFB2142C32C192F94::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t8BA588C8C55DB87154DD0E5CFB2142C32C192F94*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t8BA588C8C55DB87154DD0E5CFB2142C32C192F94::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m10B9CEF4E2365F68B696BAA376DD71E50C4F03CF(IIterator_1_t010C84FB691B93F5282F086A63FD2FC0204DF8C1** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m10B9CEF4E2365F68B696BAA376DD71E50C4F03CF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tD88DCFD8E4DEFFA3FB0A02296D6C084425442BC2(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tD88DCFD8E4DEFFA3FB0A02296D6C084425442BC2_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tD88DCFD8E4DEFFA3FB0A02296D6C084425442BC2_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdEndEventArgs>>
struct ValueCollection_t923CCC0EEEB18158393B28CC68AAC7CB3665B06F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t923CCC0EEEB18158393B28CC68AAC7CB3665B06F_ComCallableWrapper>, IIterable_1_t8BA588C8C55DB87154DD0E5CFB2142C32C192F94, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t923CCC0EEEB18158393B28CC68AAC7CB3665B06F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t923CCC0EEEB18158393B28CC68AAC7CB3665B06F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t8BA588C8C55DB87154DD0E5CFB2142C32C192F94::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t8BA588C8C55DB87154DD0E5CFB2142C32C192F94*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t8BA588C8C55DB87154DD0E5CFB2142C32C192F94::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m10B9CEF4E2365F68B696BAA376DD71E50C4F03CF(IIterator_1_t010C84FB691B93F5282F086A63FD2FC0204DF8C1** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m10B9CEF4E2365F68B696BAA376DD71E50C4F03CF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t923CCC0EEEB18158393B28CC68AAC7CB3665B06F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t923CCC0EEEB18158393B28CC68AAC7CB3665B06F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t923CCC0EEEB18158393B28CC68AAC7CB3665B06F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdEventArgs>>
struct ValueCollection_t1146431DFED000CA9300233D53AFEA2A3FCA744E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t1146431DFED000CA9300233D53AFEA2A3FCA744E_ComCallableWrapper>, IIterable_1_tC27FDCD852454F7442EBB7FB02AC5B89FC69358D, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t1146431DFED000CA9300233D53AFEA2A3FCA744E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t1146431DFED000CA9300233D53AFEA2A3FCA744E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tC27FDCD852454F7442EBB7FB02AC5B89FC69358D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tC27FDCD852454F7442EBB7FB02AC5B89FC69358D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_tC27FDCD852454F7442EBB7FB02AC5B89FC69358D::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDC3A085FD88BD51803D0108F4BE55CC0A62F04BD(IIterator_1_tCE1228F7036709D8995228E4D6B062403BE4A179** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDC3A085FD88BD51803D0108F4BE55CC0A62F04BD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t1146431DFED000CA9300233D53AFEA2A3FCA744E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t1146431DFED000CA9300233D53AFEA2A3FCA744E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t1146431DFED000CA9300233D53AFEA2A3FCA744E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdEventArgs>>
struct ValueCollection_t243659F37FB6DF2399EA3946D200D939C4D6981B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t243659F37FB6DF2399EA3946D200D939C4D6981B_ComCallableWrapper>, IIterable_1_tC27FDCD852454F7442EBB7FB02AC5B89FC69358D, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t243659F37FB6DF2399EA3946D200D939C4D6981B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t243659F37FB6DF2399EA3946D200D939C4D6981B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tC27FDCD852454F7442EBB7FB02AC5B89FC69358D::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tC27FDCD852454F7442EBB7FB02AC5B89FC69358D*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_tC27FDCD852454F7442EBB7FB02AC5B89FC69358D::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mDC3A085FD88BD51803D0108F4BE55CC0A62F04BD(IIterator_1_tCE1228F7036709D8995228E4D6B062403BE4A179** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mDC3A085FD88BD51803D0108F4BE55CC0A62F04BD_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t243659F37FB6DF2399EA3946D200D939C4D6981B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t243659F37FB6DF2399EA3946D200D939C4D6981B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t243659F37FB6DF2399EA3946D200D939C4D6981B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdPlayableEventArgs>>
struct ValueCollection_t888438C262B0DC59E2A745D284F7AE7C8D9B4B7B_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t888438C262B0DC59E2A745D284F7AE7C8D9B4B7B_ComCallableWrapper>, IIterable_1_tEAE981D07D8974FAC0C115D463DA2D6E08F74DF1, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t888438C262B0DC59E2A745D284F7AE7C8D9B4B7B_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t888438C262B0DC59E2A745D284F7AE7C8D9B4B7B_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tEAE981D07D8974FAC0C115D463DA2D6E08F74DF1::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tEAE981D07D8974FAC0C115D463DA2D6E08F74DF1*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_tEAE981D07D8974FAC0C115D463DA2D6E08F74DF1::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m69A2608FA3F7C2D60F8A1492A72FD4FD7861C5CF(IIterator_1_tF8707DD64D52BDB8A012DE199056F7ACB722A66F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m69A2608FA3F7C2D60F8A1492A72FD4FD7861C5CF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t888438C262B0DC59E2A745D284F7AE7C8D9B4B7B(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t888438C262B0DC59E2A745D284F7AE7C8D9B4B7B_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t888438C262B0DC59E2A745D284F7AE7C8D9B4B7B_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdPlayableEventArgs>>
struct ValueCollection_t11C2D4E6DD6772B31E5F38D624C298B68DBAA060_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t11C2D4E6DD6772B31E5F38D624C298B68DBAA060_ComCallableWrapper>, IIterable_1_tEAE981D07D8974FAC0C115D463DA2D6E08F74DF1, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t11C2D4E6DD6772B31E5F38D624C298B68DBAA060_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t11C2D4E6DD6772B31E5F38D624C298B68DBAA060_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tEAE981D07D8974FAC0C115D463DA2D6E08F74DF1::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tEAE981D07D8974FAC0C115D463DA2D6E08F74DF1*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_tEAE981D07D8974FAC0C115D463DA2D6E08F74DF1::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m69A2608FA3F7C2D60F8A1492A72FD4FD7861C5CF(IIterator_1_tF8707DD64D52BDB8A012DE199056F7ACB722A66F** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m69A2608FA3F7C2D60F8A1492A72FD4FD7861C5CF_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t11C2D4E6DD6772B31E5F38D624C298B68DBAA060(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t11C2D4E6DD6772B31E5F38D624C298B68DBAA060_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t11C2D4E6DD6772B31E5F38D624C298B68DBAA060_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdViewEventArgs>>
struct ValueCollection_t10207FF027C0BB36CD24C81A337B78B039B8EAEE_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t10207FF027C0BB36CD24C81A337B78B039B8EAEE_ComCallableWrapper>, IIterable_1_tD274D6C55D7284FD0F1563AE2AC8518913F7FE02, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t10207FF027C0BB36CD24C81A337B78B039B8EAEE_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t10207FF027C0BB36CD24C81A337B78B039B8EAEE_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tD274D6C55D7284FD0F1563AE2AC8518913F7FE02::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tD274D6C55D7284FD0F1563AE2AC8518913F7FE02*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_tD274D6C55D7284FD0F1563AE2AC8518913F7FE02::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m57839A783E9A1B960462AAEBB26AE8C05F1231FB(IIterator_1_t633CABC20CB9311C39C96BD0C94CBB86458845B4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m57839A783E9A1B960462AAEBB26AE8C05F1231FB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t10207FF027C0BB36CD24C81A337B78B039B8EAEE(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t10207FF027C0BB36CD24C81A337B78B039B8EAEE_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t10207FF027C0BB36CD24C81A337B78B039B8EAEE_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdViewEventArgs>>
struct ValueCollection_tC69CA5F660B6E6CD88387F0424794A158EE93EE1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tC69CA5F660B6E6CD88387F0424794A158EE93EE1_ComCallableWrapper>, IIterable_1_tD274D6C55D7284FD0F1563AE2AC8518913F7FE02, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tC69CA5F660B6E6CD88387F0424794A158EE93EE1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tC69CA5F660B6E6CD88387F0424794A158EE93EE1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tD274D6C55D7284FD0F1563AE2AC8518913F7FE02::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tD274D6C55D7284FD0F1563AE2AC8518913F7FE02*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_tD274D6C55D7284FD0F1563AE2AC8518913F7FE02::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m57839A783E9A1B960462AAEBB26AE8C05F1231FB(IIterator_1_t633CABC20CB9311C39C96BD0C94CBB86458845B4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m57839A783E9A1B960462AAEBB26AE8C05F1231FB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tC69CA5F660B6E6CD88387F0424794A158EE93EE1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tC69CA5F660B6E6CD88387F0424794A158EE93EE1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tC69CA5F660B6E6CD88387F0424794A158EE93EE1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.ConfigEventArgs>>
struct ValueCollection_tEC2C4C2F64A8E2B60CF8D479282AF1D6F98FEE3F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tEC2C4C2F64A8E2B60CF8D479282AF1D6F98FEE3F_ComCallableWrapper>, IIterable_1_t86A0285D6E173974BC2F86C5C1536FC1E4BFED5F, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tEC2C4C2F64A8E2B60CF8D479282AF1D6F98FEE3F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tEC2C4C2F64A8E2B60CF8D479282AF1D6F98FEE3F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t86A0285D6E173974BC2F86C5C1536FC1E4BFED5F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t86A0285D6E173974BC2F86C5C1536FC1E4BFED5F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t86A0285D6E173974BC2F86C5C1536FC1E4BFED5F::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC25A6579B73668A43386C242D195C7AE733F1834(IIterator_1_tA139984CFC4F44276F5D79FCE000AEB22BD6837A** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC25A6579B73668A43386C242D195C7AE733F1834_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tEC2C4C2F64A8E2B60CF8D479282AF1D6F98FEE3F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tEC2C4C2F64A8E2B60CF8D479282AF1D6F98FEE3F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tEC2C4C2F64A8E2B60CF8D479282AF1D6F98FEE3F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.ConfigEventArgs>>
struct ValueCollection_tBA22FD3412194EEC1BFAE9CFF24B825C0A76BE29_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tBA22FD3412194EEC1BFAE9CFF24B825C0A76BE29_ComCallableWrapper>, IIterable_1_t86A0285D6E173974BC2F86C5C1536FC1E4BFED5F, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tBA22FD3412194EEC1BFAE9CFF24B825C0A76BE29_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tBA22FD3412194EEC1BFAE9CFF24B825C0A76BE29_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t86A0285D6E173974BC2F86C5C1536FC1E4BFED5F::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t86A0285D6E173974BC2F86C5C1536FC1E4BFED5F*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t86A0285D6E173974BC2F86C5C1536FC1E4BFED5F::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC25A6579B73668A43386C242D195C7AE733F1834(IIterator_1_tA139984CFC4F44276F5D79FCE000AEB22BD6837A** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC25A6579B73668A43386C242D195C7AE733F1834_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tBA22FD3412194EEC1BFAE9CFF24B825C0A76BE29(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tBA22FD3412194EEC1BFAE9CFF24B825C0A76BE29_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tBA22FD3412194EEC1BFAE9CFF24B825C0A76BE29_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.DiagnosticLogEvent>>
struct ValueCollection_t73BB7FCA14070CB22222C9F287083AA775EC51CB_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t73BB7FCA14070CB22222C9F287083AA775EC51CB_ComCallableWrapper>, IIterable_1_t27C7A849BF6A27C4982B1A1F57F3B89951368AB4, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t73BB7FCA14070CB22222C9F287083AA775EC51CB_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t73BB7FCA14070CB22222C9F287083AA775EC51CB_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t27C7A849BF6A27C4982B1A1F57F3B89951368AB4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t27C7A849BF6A27C4982B1A1F57F3B89951368AB4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t27C7A849BF6A27C4982B1A1F57F3B89951368AB4::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m7CC5BFCA3F68A57AFCBABBF364165E9DA07DECA2(IIterator_1_tD1A6AB7C797A40AA55DDA1B9302213C0C31F185C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m7CC5BFCA3F68A57AFCBABBF364165E9DA07DECA2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t73BB7FCA14070CB22222C9F287083AA775EC51CB(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t73BB7FCA14070CB22222C9F287083AA775EC51CB_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t73BB7FCA14070CB22222C9F287083AA775EC51CB_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.DiagnosticLogEvent>>
struct ValueCollection_tB36951CD092074538DA735F1368B98FC6A524680_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tB36951CD092074538DA735F1368B98FC6A524680_ComCallableWrapper>, IIterable_1_t27C7A849BF6A27C4982B1A1F57F3B89951368AB4, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tB36951CD092074538DA735F1368B98FC6A524680_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tB36951CD092074538DA735F1368B98FC6A524680_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t27C7A849BF6A27C4982B1A1F57F3B89951368AB4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t27C7A849BF6A27C4982B1A1F57F3B89951368AB4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t27C7A849BF6A27C4982B1A1F57F3B89951368AB4::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m7CC5BFCA3F68A57AFCBABBF364165E9DA07DECA2(IIterator_1_tD1A6AB7C797A40AA55DDA1B9302213C0C31F185C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m7CC5BFCA3F68A57AFCBABBF364165E9DA07DECA2_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tB36951CD092074538DA735F1368B98FC6A524680(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tB36951CD092074538DA735F1368B98FC6A524680_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tB36951CD092074538DA735F1368B98FC6A524680_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<System.EventArgs>>
struct ValueCollection_tA3D6030D8AD288D3BFE493DA06F02D5E459FC190_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tA3D6030D8AD288D3BFE493DA06F02D5E459FC190_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tA3D6030D8AD288D3BFE493DA06F02D5E459FC190_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tA3D6030D8AD288D3BFE493DA06F02D5E459FC190_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tA3D6030D8AD288D3BFE493DA06F02D5E459FC190(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tA3D6030D8AD288D3BFE493DA06F02D5E459FC190_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tA3D6030D8AD288D3BFE493DA06F02D5E459FC190_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<System.EventArgs>>
struct ValueCollection_tB2AD7962667B289F9A8EE3E50983F05823831782_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tB2AD7962667B289F9A8EE3E50983F05823831782_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tB2AD7962667B289F9A8EE3E50983F05823831782_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tB2AD7962667B289F9A8EE3E50983F05823831782_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tB2AD7962667B289F9A8EE3E50983F05823831782(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tB2AD7962667B289F9A8EE3E50983F05823831782_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tB2AD7962667B289F9A8EE3E50983F05823831782_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.adplay.KeyInputEvent>>
struct ValueCollection_t6AF153570F01717C94EA1E22ACC9020E3FA1407C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t6AF153570F01717C94EA1E22ACC9020E3FA1407C_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t6AF153570F01717C94EA1E22ACC9020E3FA1407C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t6AF153570F01717C94EA1E22ACC9020E3FA1407C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t6AF153570F01717C94EA1E22ACC9020E3FA1407C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t6AF153570F01717C94EA1E22ACC9020E3FA1407C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t6AF153570F01717C94EA1E22ACC9020E3FA1407C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.adplay.KeyInputEvent>>
struct ValueCollection_t5608E42EA583DFDFBA7564D30B61381D2A12B3C9_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t5608E42EA583DFDFBA7564D30B61381D2A12B3C9_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t5608E42EA583DFDFBA7564D30B61381D2A12B3C9_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t5608E42EA583DFDFBA7564D30B61381D2A12B3C9_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t5608E42EA583DFDFBA7564D30B61381D2A12B3C9(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t5608E42EA583DFDFBA7564D30B61381D2A12B3C9_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t5608E42EA583DFDFBA7564D30B61381D2A12B3C9_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.NetworkResult>>
struct ValueCollection_t832F7BD74A5903AFFBB184226E5D9F5F4A3084C7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t832F7BD74A5903AFFBB184226E5D9F5F4A3084C7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t832F7BD74A5903AFFBB184226E5D9F5F4A3084C7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t832F7BD74A5903AFFBB184226E5D9F5F4A3084C7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t832F7BD74A5903AFFBB184226E5D9F5F4A3084C7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t832F7BD74A5903AFFBB184226E5D9F5F4A3084C7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t832F7BD74A5903AFFBB184226E5D9F5F4A3084C7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.NetworkResult>>
struct ValueCollection_tB0D9B99FE058403DEFBCE259ADBB65FA28A0059C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tB0D9B99FE058403DEFBCE259ADBB65FA28A0059C_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tB0D9B99FE058403DEFBCE259ADBB65FA28A0059C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tB0D9B99FE058403DEFBCE259ADBB65FA28A0059C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tB0D9B99FE058403DEFBCE259ADBB65FA28A0059C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tB0D9B99FE058403DEFBCE259ADBB65FA28A0059C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tB0D9B99FE058403DEFBCE259ADBB65FA28A0059C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<System.Object>>
struct ValueCollection_tC94F388C8229DD4C46F7BEF998345607A097AC58_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tC94F388C8229DD4C46F7BEF998345607A097AC58_ComCallableWrapper>, IIterable_1_tE146E8945534A64251D7E1D0243EF371CAF55B18, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tC94F388C8229DD4C46F7BEF998345607A097AC58_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tC94F388C8229DD4C46F7BEF998345607A097AC58_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tE146E8945534A64251D7E1D0243EF371CAF55B18::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tE146E8945534A64251D7E1D0243EF371CAF55B18*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_tE146E8945534A64251D7E1D0243EF371CAF55B18::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA17781E559876116F3471301EC6F7F061390E5AB(IIterator_1_tBA5B0A0D15D97D2195251F2025585A36AB8DBBF3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mA17781E559876116F3471301EC6F7F061390E5AB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tC94F388C8229DD4C46F7BEF998345607A097AC58(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tC94F388C8229DD4C46F7BEF998345607A097AC58_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tC94F388C8229DD4C46F7BEF998345607A097AC58_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<System.Object>>
struct ValueCollection_t90FDE164C079EB9FC40AAC5C60F6D05AFB0A3DBC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t90FDE164C079EB9FC40AAC5C60F6D05AFB0A3DBC_ComCallableWrapper>, IIterable_1_tE146E8945534A64251D7E1D0243EF371CAF55B18, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t90FDE164C079EB9FC40AAC5C60F6D05AFB0A3DBC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t90FDE164C079EB9FC40AAC5C60F6D05AFB0A3DBC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tE146E8945534A64251D7E1D0243EF371CAF55B18::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tE146E8945534A64251D7E1D0243EF371CAF55B18*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_tE146E8945534A64251D7E1D0243EF371CAF55B18::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mA17781E559876116F3471301EC6F7F061390E5AB(IIterator_1_tBA5B0A0D15D97D2195251F2025585A36AB8DBBF3** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mA17781E559876116F3471301EC6F7F061390E5AB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t90FDE164C079EB9FC40AAC5C60F6D05AFB0A3DBC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t90FDE164C079EB9FC40AAC5C60F6D05AFB0A3DBC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t90FDE164C079EB9FC40AAC5C60F6D05AFB0A3DBC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.adplay.StartEndEvent>>
struct ValueCollection_t796C789EB1417888D72FC7D2F330B3F282DC0B41_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t796C789EB1417888D72FC7D2F330B3F282DC0B41_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t796C789EB1417888D72FC7D2F330B3F282DC0B41_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t796C789EB1417888D72FC7D2F330B3F282DC0B41_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t796C789EB1417888D72FC7D2F330B3F282DC0B41(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t796C789EB1417888D72FC7D2F330B3F282DC0B41_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t796C789EB1417888D72FC7D2F330B3F282DC0B41_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.adplay.StartEndEvent>>
struct ValueCollection_t43B34778A0686A55434090B8A870F725471853DA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t43B34778A0686A55434090B8A870F725471853DA_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t43B34778A0686A55434090B8A870F725471853DA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t43B34778A0686A55434090B8A870F725471853DA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t43B34778A0686A55434090B8A870F725471853DA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t43B34778A0686A55434090B8A870F725471853DA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t43B34778A0686A55434090B8A870F725471853DA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>>
struct ValueCollection_tEF1CA204578A4740EBB242E6DFB823F3CF128D89_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tEF1CA204578A4740EBB242E6DFB823F3CF128D89_ComCallableWrapper>, IIterable_1_t0D0F9DD263F325354DE7A1E27467CA259406B74B, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tEF1CA204578A4740EBB242E6DFB823F3CF128D89_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tEF1CA204578A4740EBB242E6DFB823F3CF128D89_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0D0F9DD263F325354DE7A1E27467CA259406B74B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0D0F9DD263F325354DE7A1E27467CA259406B74B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t0D0F9DD263F325354DE7A1E27467CA259406B74B::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE209B1D5394F56E0788A71FD5AB0EA404515BA42(IIterator_1_t4B49DCCA506E292492E84CAAD9F2B5B1C080BAF0** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE209B1D5394F56E0788A71FD5AB0EA404515BA42_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tEF1CA204578A4740EBB242E6DFB823F3CF128D89(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tEF1CA204578A4740EBB242E6DFB823F3CF128D89_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tEF1CA204578A4740EBB242E6DFB823F3CF128D89_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<Windows.ApplicationModel.SuspendingEventArgs>>
struct ValueCollection_t11B47B95E45A566482E5C8D7ACC95DF1D74ED214_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t11B47B95E45A566482E5C8D7ACC95DF1D74ED214_ComCallableWrapper>, IIterable_1_t0D0F9DD263F325354DE7A1E27467CA259406B74B, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t11B47B95E45A566482E5C8D7ACC95DF1D74ED214_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t11B47B95E45A566482E5C8D7ACC95DF1D74ED214_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0D0F9DD263F325354DE7A1E27467CA259406B74B::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0D0F9DD263F325354DE7A1E27467CA259406B74B*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t0D0F9DD263F325354DE7A1E27467CA259406B74B::IID;
		interfaceIds[1] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mE209B1D5394F56E0788A71FD5AB0EA404515BA42(IIterator_1_t4B49DCCA506E292492E84CAAD9F2B5B1C080BAF0** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mE209B1D5394F56E0788A71FD5AB0EA404515BA42_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t11B47B95E45A566482E5C8D7ACC95DF1D74ED214(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t11B47B95E45A566482E5C8D7ACC95DF1D74ED214_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t11B47B95E45A566482E5C8D7ACC95DF1D74ED214_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdManager/AdAvailaibilityEvent>>
struct ValueCollection_tF80B0BFEF641E512C4C6DB831C3DDDBAC536575D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tF80B0BFEF641E512C4C6DB831C3DDDBAC536575D_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tF80B0BFEF641E512C4C6DB831C3DDDBAC536575D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tF80B0BFEF641E512C4C6DB831C3DDDBAC536575D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tF80B0BFEF641E512C4C6DB831C3DDDBAC536575D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tF80B0BFEF641E512C4C6DB831C3DDDBAC536575D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tF80B0BFEF641E512C4C6DB831C3DDDBAC536575D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.AdManager/AdAvailaibilityEvent>>
struct ValueCollection_t78B8313762E2BC6184FF01F46B40FCF59E375664_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t78B8313762E2BC6184FF01F46B40FCF59E375664_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t78B8313762E2BC6184FF01F46B40FCF59E375664_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t78B8313762E2BC6184FF01F46B40FCF59E375664_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t78B8313762E2BC6184FF01F46B40FCF59E375664(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t78B8313762E2BC6184FF01F46B40FCF59E375664_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t78B8313762E2BC6184FF01F46B40FCF59E375664_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.bridge.WebViewBridge/DebuggerEventArgs>>
struct ValueCollection_t293E82CF70D4F4780B6C375D2D6A36F07D201297_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t293E82CF70D4F4780B6C375D2D6A36F07D201297_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t293E82CF70D4F4780B6C375D2D6A36F07D201297_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t293E82CF70D4F4780B6C375D2D6A36F07D201297_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t293E82CF70D4F4780B6C375D2D6A36F07D201297(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t293E82CF70D4F4780B6C375D2D6A36F07D201297_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t293E82CF70D4F4780B6C375D2D6A36F07D201297_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler`1<VungleSDK.bridge.WebViewBridge/DebuggerEventArgs>>
struct ValueCollection_tC9CD0CF16F8490DA348A9FB15857A2F698709042_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tC9CD0CF16F8490DA348A9FB15857A2F698709042_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tC9CD0CF16F8490DA348A9FB15857A2F698709042_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tC9CD0CF16F8490DA348A9FB15857A2F698709042_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tC9CD0CF16F8490DA348A9FB15857A2F698709042(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tC9CD0CF16F8490DA348A9FB15857A2F698709042_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tC9CD0CF16F8490DA348A9FB15857A2F698709042_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler>
struct ValueCollection_tC6EA5D988B5B6DA72511D10E849B86BEA0819429_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tC6EA5D988B5B6DA72511D10E849B86BEA0819429_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tC6EA5D988B5B6DA72511D10E849B86BEA0819429_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tC6EA5D988B5B6DA72511D10E849B86BEA0819429_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tC6EA5D988B5B6DA72511D10E849B86BEA0819429(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tC6EA5D988B5B6DA72511D10E849B86BEA0819429_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tC6EA5D988B5B6DA72511D10E849B86BEA0819429_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,System.EventHandler>
struct ValueCollection_tB27C67720B7DE8F0BD9FA50B5D34EBAE2C1CED5D_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tB27C67720B7DE8F0BD9FA50B5D34EBAE2C1CED5D_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tB27C67720B7DE8F0BD9FA50B5D34EBAE2C1CED5D_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tB27C67720B7DE8F0BD9FA50B5D34EBAE2C1CED5D_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tB27C67720B7DE8F0BD9FA50B5D34EBAE2C1CED5D(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tB27C67720B7DE8F0BD9FA50B5D34EBAE2C1CED5D_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tB27C67720B7DE8F0BD9FA50B5D34EBAE2C1CED5D_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,VungleSDK.NetworkManager/DebugJsonDelegate>
struct ValueCollection_tD480ADDD907DE13AA894ED7F9A8345C5F42FF5C7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tD480ADDD907DE13AA894ED7F9A8345C5F42FF5C7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tD480ADDD907DE13AA894ED7F9A8345C5F42FF5C7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tD480ADDD907DE13AA894ED7F9A8345C5F42FF5C7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tD480ADDD907DE13AA894ED7F9A8345C5F42FF5C7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tD480ADDD907DE13AA894ED7F9A8345C5F42FF5C7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tD480ADDD907DE13AA894ED7F9A8345C5F42FF5C7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken,VungleSDK.NetworkManager/DebugJsonDelegate>
struct ValueCollection_tD40B3354CE78D30A1C9F202153B19FE6D34922E7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tD40B3354CE78D30A1C9F202153B19FE6D34922E7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tD40B3354CE78D30A1C9F202153B19FE6D34922E7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tD40B3354CE78D30A1C9F202153B19FE6D34922E7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tD40B3354CE78D30A1C9F202153B19FE6D34922E7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tD40B3354CE78D30A1C9F202153B19FE6D34922E7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tD40B3354CE78D30A1C9F202153B19FE6D34922E7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct ValueCollection_t8A993A746E028F37667CE7308EB65DE1C38208A7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t8A993A746E028F37667CE7308EB65DE1C38208A7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t8A993A746E028F37667CE7308EB65DE1C38208A7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t8A993A746E028F37667CE7308EB65DE1C38208A7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t8A993A746E028F37667CE7308EB65DE1C38208A7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t8A993A746E028F37667CE7308EB65DE1C38208A7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t8A993A746E028F37667CE7308EB65DE1C38208A7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.Font,System.Collections.Generic.HashSet`1<UnityEngine.UI.Text>>
struct ValueCollection_t009B949C11EB2408622858A03487A795C1B1C1EC_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t009B949C11EB2408622858A03487A795C1B1C1EC_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t009B949C11EB2408622858A03487A795C1B1C1EC_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t009B949C11EB2408622858A03487A795C1B1C1EC_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(4);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_tB7611E3565ADF2561FF7521E03A1E3B93F7BD113::IID;
		interfaceIds[2] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[3] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 4;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879(IIterator_1_tD5C5DE60C4A835F60D32B19C44430B59B26BFA67** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m1E9A9F6DA2EC9A3A751A6E85F67C9BB40798A879_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t009B949C11EB2408622858A03487A795C1B1C1EC(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t009B949C11EB2408622858A03487A795C1B1C1EC_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t009B949C11EB2408622858A03487A795C1B1C1EC_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<Windows.UI.Xaml.FrameworkElement,System.Boolean>
struct ValueCollection_t2F08C8FF26E1255EC73EA1433A24B58A59FB7053_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t2F08C8FF26E1255EC73EA1433A24B58A59FB7053_ComCallableWrapper>, IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t2F08C8FF26E1255EC73EA1433A24B58A59FB7053_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t2F08C8FF26E1255EC73EA1433A24B58A59FB7053_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB(IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t2F08C8FF26E1255EC73EA1433A24B58A59FB7053(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t2F08C8FF26E1255EC73EA1433A24B58A59FB7053_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t2F08C8FF26E1255EC73EA1433A24B58A59FB7053_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<Windows.UI.Xaml.FrameworkElement,System.Boolean>
struct ValueCollection_t6338914217E195D318603F2AE8A91E71BCA52FB1_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t6338914217E195D318603F2AE8A91E71BCA52FB1_ComCallableWrapper>, IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t6338914217E195D318603F2AE8A91E71BCA52FB1_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t6338914217E195D318603F2AE8A91E71BCA52FB1_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB(IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t6338914217E195D318603F2AE8A91E71BCA52FB1(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t6338914217E195D318603F2AE8A91E71BCA52FB1_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t6338914217E195D318603F2AE8A91E71BCA52FB1_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
struct ValueCollection_tC19268DA6D70C8D072C7093D8ABCA28DAD4C6E3C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tC19268DA6D70C8D072C7093D8ABCA28DAD4C6E3C_ComCallableWrapper>, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tC19268DA6D70C8D072C7093D8ABCA28DAD4C6E3C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tC19268DA6D70C8D072C7093D8ABCA28DAD4C6E3C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tC19268DA6D70C8D072C7093D8ABCA28DAD4C6E3C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tC19268DA6D70C8D072C7093D8ABCA28DAD4C6E3C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tC19268DA6D70C8D072C7093D8ABCA28DAD4C6E3C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.UI.Graphic,System.Int32>
struct ValueCollection_t30AD529B9F75532560A194BC17C58F7FC6730EED_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t30AD529B9F75532560A194BC17C58F7FC6730EED_ComCallableWrapper>, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t30AD529B9F75532560A194BC17C58F7FC6730EED_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t30AD529B9F75532560A194BC17C58F7FC6730EED_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t30AD529B9F75532560A194BC17C58F7FC6730EED(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t30AD529B9F75532560A194BC17C58F7FC6730EED_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t30AD529B9F75532560A194BC17C58F7FC6730EED_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Guid,System.Tuple`2<System.Guid,System.Int32>>
struct ValueCollection_t6A5B0DF4354EAC00C0B894C9DA2A5EEC7D797A3F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t6A5B0DF4354EAC00C0B894C9DA2A5EEC7D797A3F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t6A5B0DF4354EAC00C0B894C9DA2A5EEC7D797A3F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t6A5B0DF4354EAC00C0B894C9DA2A5EEC7D797A3F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t6A5B0DF4354EAC00C0B894C9DA2A5EEC7D797A3F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t6A5B0DF4354EAC00C0B894C9DA2A5EEC7D797A3F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t6A5B0DF4354EAC00C0B894C9DA2A5EEC7D797A3F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Guid,System.Int32>
struct ValueCollection_t36A365EF75A9898A232CCFD4C304FC50183E03D6_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t36A365EF75A9898A232CCFD4C304FC50183E03D6_ComCallableWrapper>, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t36A365EF75A9898A232CCFD4C304FC50183E03D6_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t36A365EF75A9898A232CCFD4C304FC50183E03D6_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t36A365EF75A9898A232CCFD4C304FC50183E03D6(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t36A365EF75A9898A232CCFD4C304FC50183E03D6_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t36A365EF75A9898A232CCFD4C304FC50183E03D6_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Guid,Mono.Security.Interface.MonoTlsProvider>
struct ValueCollection_t7DC6DDFFAD238E15BB167357CEF9E4CD52937E9F_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t7DC6DDFFAD238E15BB167357CEF9E4CD52937E9F_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t7DC6DDFFAD238E15BB167357CEF9E4CD52937E9F_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t7DC6DDFFAD238E15BB167357CEF9E4CD52937E9F_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t7DC6DDFFAD238E15BB167357CEF9E4CD52937E9F(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t7DC6DDFFAD238E15BB167357CEF9E4CD52937E9F_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t7DC6DDFFAD238E15BB167357CEF9E4CD52937E9F_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Guid,Mono.Security.Interface.MonoTlsProvider>
struct ValueCollection_tC4AF1B1608EB696402FE15D10D7D96287A18DAE5_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tC4AF1B1608EB696402FE15D10D7D96287A18DAE5_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tC4AF1B1608EB696402FE15D10D7D96287A18DAE5_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tC4AF1B1608EB696402FE15D10D7D96287A18DAE5_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tC4AF1B1608EB696402FE15D10D7D96287A18DAE5(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tC4AF1B1608EB696402FE15D10D7D96287A18DAE5_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tC4AF1B1608EB696402FE15D10D7D96287A18DAE5_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Threading.IAsyncLocal,System.Object>
struct ValueCollection_tF61B113C13A26D63D35C2C68CB0E099ABA87C9AA_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tF61B113C13A26D63D35C2C68CB0E099ABA87C9AA_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tF61B113C13A26D63D35C2C68CB0E099ABA87C9AA_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tF61B113C13A26D63D35C2C68CB0E099ABA87C9AA_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tF61B113C13A26D63D35C2C68CB0E099ABA87C9AA(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tF61B113C13A26D63D35C2C68CB0E099ABA87C9AA_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tF61B113C13A26D63D35C2C68CB0E099ABA87C9AA_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Threading.IAsyncLocal,System.Object>
struct ValueCollection_t829D1A2C21BCE93FBCBE9E029CCC77E24419ADC3_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t829D1A2C21BCE93FBCBE9E029CCC77E24419ADC3_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t829D1A2C21BCE93FBCBE9E029CCC77E24419ADC3_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t829D1A2C21BCE93FBCBE9E029CCC77E24419ADC3_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t829D1A2C21BCE93FBCBE9E029CCC77E24419ADC3(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t829D1A2C21BCE93FBCBE9E029CCC77E24419ADC3_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t829D1A2C21BCE93FBCBE9E029CCC77E24419ADC3_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
struct ValueCollection_tBFDE9B9EC6D8A4DD5D5E4EDCB8D0C3FE7C902888_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tBFDE9B9EC6D8A4DD5D5E4EDCB8D0C3FE7C902888_ComCallableWrapper>, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tBFDE9B9EC6D8A4DD5D5E4EDCB8D0C3FE7C902888_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tBFDE9B9EC6D8A4DD5D5E4EDCB8D0C3FE7C902888_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tBFDE9B9EC6D8A4DD5D5E4EDCB8D0C3FE7C902888(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tBFDE9B9EC6D8A4DD5D5E4EDCB8D0C3FE7C902888_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tBFDE9B9EC6D8A4DD5D5E4EDCB8D0C3FE7C902888_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.UI.ICanvasElement,System.Int32>
struct ValueCollection_tDFE3548B5884867CBB3AD8597EAF0B6F4F6E80D8_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tDFE3548B5884867CBB3AD8597EAF0B6F4F6E80D8_ComCallableWrapper>, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tDFE3548B5884867CBB3AD8597EAF0B6F4F6E80D8_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tDFE3548B5884867CBB3AD8597EAF0B6F4F6E80D8_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tDFE3548B5884867CBB3AD8597EAF0B6F4F6E80D8(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tDFE3548B5884867CBB3AD8597EAF0B6F4F6E80D8_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tDFE3548B5884867CBB3AD8597EAF0B6F4F6E80D8_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<UnityEngine.UI.IClipper,System.Int32>
struct ValueCollection_tAF8510AEC053B82FDD729C9744C8A2CF6EF6197C_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tAF8510AEC053B82FDD729C9744C8A2CF6EF6197C_ComCallableWrapper>, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tAF8510AEC053B82FDD729C9744C8A2CF6EF6197C_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tAF8510AEC053B82FDD729C9744C8A2CF6EF6197C_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tAF8510AEC053B82FDD729C9744C8A2CF6EF6197C(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tAF8510AEC053B82FDD729C9744C8A2CF6EF6197C_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tAF8510AEC053B82FDD729C9744C8A2CF6EF6197C_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<UnityEngine.UI.IClipper,System.Int32>
struct ValueCollection_t576049C739ADEC4FC22A6AD4A068322B2F5A5C90_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t576049C739ADEC4FC22A6AD4A068322B2F5A5C90_ComCallableWrapper>, IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t576049C739ADEC4FC22A6AD4A068322B2F5A5C90_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t576049C739ADEC4FC22A6AD4A068322B2F5A5C90_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t3FD1FB01310262788B2A8868AA7395E023511050::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5(IIterator_1_tFF647CAD19D34FD0606CDD3425C431F82B94589C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_mC1E90957AD904E68CE3F84D1EF22D5EFACE8C2D5_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t576049C739ADEC4FC22A6AD4A068322B2F5A5C90(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t576049C739ADEC4FC22A6AD4A068322B2F5A5C90_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t576049C739ADEC4FC22A6AD4A068322B2F5A5C90_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Xml.IDtdEntityInfo,System.Xml.IDtdEntityInfo>
struct ValueCollection_t9474AF8AEE4B46B1D7C906AB5B4F5B33CCD68AF7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t9474AF8AEE4B46B1D7C906AB5B4F5B33CCD68AF7_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t9474AF8AEE4B46B1D7C906AB5B4F5B33CCD68AF7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t9474AF8AEE4B46B1D7C906AB5B4F5B33CCD68AF7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t9474AF8AEE4B46B1D7C906AB5B4F5B33CCD68AF7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t9474AF8AEE4B46B1D7C906AB5B4F5B33CCD68AF7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t9474AF8AEE4B46B1D7C906AB5B4F5B33CCD68AF7_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Xml.IDtdEntityInfo,System.Xml.IDtdEntityInfo>
struct ValueCollection_t96C309AF925548A78CA0DAC76ADD9881986D5773_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t96C309AF925548A78CA0DAC76ADD9881986D5773_ComCallableWrapper>, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t96C309AF925548A78CA0DAC76ADD9881986D5773_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t96C309AF925548A78CA0DAC76ADD9881986D5773_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t96C309AF925548A78CA0DAC76ADD9881986D5773(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t96C309AF925548A78CA0DAC76ADD9881986D5773_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t96C309AF925548A78CA0DAC76ADD9881986D5773_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Collections.Concurrent.ConcurrentDictionary`2<System.DateTime,System.Collections.Generic.KeyValuePair`2<System.String,System.String>>>
struct ValueCollection_t6A807AE5D000E2F7D1F0D294537BA939C74FDE03_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_t6A807AE5D000E2F7D1F0D294537BA939C74FDE03_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_t6A807AE5D000E2F7D1F0D294537BA939C74FDE03_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_t6A807AE5D000E2F7D1F0D294537BA939C74FDE03_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(3);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IIterable_1_t6359E278A71A51A15FA83695BA7C54F9B3E04824::IID;
		interfaceIds[2] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 3;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8(IIterator_1_t6A46A7244E5AAD0AE4F2A07AF43DA5052D55F4A4** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m512126C71D7E9D1C31B56F64455F33E9FEEC89F8_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_t6A807AE5D000E2F7D1F0D294537BA939C74FDE03(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_t6A807AE5D000E2F7D1F0D294537BA939C74FDE03_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_t6A807AE5D000E2F7D1F0D294537BA939C74FDE03_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Boolean>
struct ValueCollection_tB51F603A239485F05720315028C603D2DC30180E_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tB51F603A239485F05720315028C603D2DC30180E_ComCallableWrapper>, IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tB51F603A239485F05720315028C603D2DC30180E_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tB51F603A239485F05720315028C603D2DC30180E_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t0F0E81F8630AABFA67939A3C4C7A6448EC21FB24::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB(IIterator_1_tE13F884343548B90CBE44A0A597D5A31E29178BF** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m0DF5AB173068D2FBCA182101EF7C9DD4C9135BCB_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tB51F603A239485F05720315028C603D2DC30180E(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tB51F603A239485F05720315028C603D2DC30180E_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tB51F603A239485F05720315028C603D2DC30180E_ComCallableWrapper(obj));
}

// COM Callable Wrapper for System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Globalization.CultureInfo>
struct ValueCollection_tE84BE90A3A9ADA37C09165304138ECF878FE4ED7_ComCallableWrapper IL2CPP_FINAL : il2cpp::vm::CachedCCWBase<ValueCollection_tE84BE90A3A9ADA37C09165304138ECF878FE4ED7_ComCallableWrapper>, IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4, IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8
{
	inline ValueCollection_tE84BE90A3A9ADA37C09165304138ECF878FE4ED7_ComCallableWrapper(RuntimeObject* obj) : il2cpp::vm::CachedCCWBase<ValueCollection_tE84BE90A3A9ADA37C09165304138ECF878FE4ED7_ComCallableWrapper>(obj) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIWeakReferenceSource::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIWeakReferenceSource*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(2);
		interfaceIds[0] = IIterable_1_t64693143CE4E5082C6101BC54B0427C21F3C01C4::IID;
		interfaceIds[1] = IBindableIterable_tF6BD0C070562CD9C91E3C1B1A5F4667E9C3C74A8::IID;

		*iidCount = 2;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return GetRuntimeClassNameImpl(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}

	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619(IIterator_1_tB1AB5AB497E87D6A397AA084D3D3D6B8D211022C** comReturnValue) IL2CPP_OVERRIDE
	{
		return IIterable_1_First_m54AC7E778E98ED35C6B7AD98C35C325B8A3DF619_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}

	virtual il2cpp_hresult_t STDCALL IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7(IBindableIterator_tD7550F1144CFBE58090050457A2BE92B1CAEABBB** comReturnValue) IL2CPP_OVERRIDE
	{
		return IBindableIterable_First_m91EC6ED0173145266318FDB7F9074798CD766BD7_ComCallableWrapperProjectedMethod(GetManagedObjectInline(), comReturnValue);
	}
};

IL2CPP_EXTERN_C Il2CppIUnknown* CreateComCallableWrapperFor_ValueCollection_tE84BE90A3A9ADA37C09165304138ECF878FE4ED7(RuntimeObject* obj)
{
	void* memory = il2cpp::utils::Memory::Malloc(sizeof(ValueCollection_tE84BE90A3A9ADA37C09165304138ECF878FE4ED7_ComCallableWrapper));
	if (memory == NULL)
	{
		il2cpp_codegen_raise_out_of_memory_exception();
	}

	return static_cast<Il2CppIManagedObjectHolder*>(new(memory) ValueCollection_tE84BE90A3A9ADA37C09165304138ECF878FE4ED7_ComCallableWrapper(obj));
}
