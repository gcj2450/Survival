#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Object>
struct ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.SslSession>
struct ConcurrentDictionary_2_t70F0CA0CFD682359F3B09C5C39F97E95DB690413;
// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.TcpSession>
struct ConcurrentDictionary_2_t5568A91C1721AB09A5C87B73F110BC4AC4D467B4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding>
struct Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_tD7413105CA5DBF6629BE5E9EE453204D7C0D90FB;
// System.Collections.Generic.ICollection`1<NetCoreServer.SslSession>
struct ICollection_1_t3FF059C46892814B6D7AEA8B08A5EB6B4D19C3CF;
// System.Collections.Generic.ICollection`1<NetCoreServer.TcpSession>
struct ICollection_1_tDAA61DB818F055E82EF480DC0DC0A56936803891;
// System.Collections.Generic.IEqualityComparer`1<System.Guid>
struct IEqualityComparer_1_t0706C8CEAD5235F761D9A8DB3AC57BA61E96F1C9;
// System.Collections.Generic.List`1<System.Tuple`2<System.String,System.String>>
struct List_1_tF5069A557129EC14D34BBB161694A1A94C95B26A;
// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Guid,NetCoreServer.SslSession>
struct Tables_tB0976E30562F6A7F8EE6A1C72CF58F657A252669;
// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<System.Guid,NetCoreServer.TcpSession>
struct Tables_t1EF5172B6FEE1D5DD8D32D5223E197B6431B424F;
// System.Collections.Generic.KeyValuePair`2<System.Guid,NetCoreServer.SslSession>[]
struct KeyValuePair_2U5BU5D_t59A1A6F6D09E91F448C1418AC3AEF180C096A6F1;
// System.Collections.Generic.KeyValuePair`2<System.Guid,NetCoreServer.TcpSession>[]
struct KeyValuePair_2U5BU5D_t767F1EA37D4B5DBD20E909B81FB91E497D2DA854;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// NetCoreServer.Buffer
struct Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2;
// System.Text.DecoderFallback
struct DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90;
// System.Text.EncoderFallback
struct EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// NetCoreServer.FileCache
struct FileCache_t877A0B4CDFBCF6CF52F9128BE63B14C9FAE0816C;
// NetCoreServer.HttpClient
struct HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC;
// NetCoreServer.HttpRequest
struct HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2;
// NetCoreServer.HttpResponse
struct HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3;
// NetCoreServer.HttpServer
struct HttpServer_tEA17B8DFEC74D9C45D9CB94BDF25436F5C7F12DC;
// NetCoreServer.HttpSession
struct HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C;
// NetCoreServer.HttpsClient
struct HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27;
// NetCoreServer.HttpsServer
struct HttpsServer_t00113C7DCFFD6BEACBE183D879F2C166F9C0BCC1;
// NetCoreServer.HttpsSession
struct HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641;
// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484;
// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB;
// NetCoreServer.IWebSocket
struct IWebSocket_tE846577C73724CE2BC08A172DD852FC02A4F7785;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955;
// System.Net.Sockets.Socket
struct Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E;
// System.Net.Sockets.SocketAsyncEventArgs
struct SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC;
// NetCoreServer.SslClient
struct SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14;
// NetCoreServer.SslContext
struct SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE;
// NetCoreServer.SslServer
struct SslServer_tD3CFB907EC7F7539A7ECFDC9B8FAD40B6D2B1CE7;
// NetCoreServer.SslSession
struct SslSession_t9D95509EF5240CE51BE26FD0103B8271A438E98B;
// System.Net.Security.SslStream
struct SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27;
// System.String
struct String_t;
// NetCoreServer.TcpClient
struct TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB;
// NetCoreServer.TcpServer
struct TcpServer_t5C6F2AC817CBED1047609592DB48A314B9BCD8C8;
// NetCoreServer.TcpSession
struct TcpSession_t63E3917A3EF0ED9E800C753734E7E444688A2F3C;
// NetCoreServer.WebSocket
struct WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C;
// NetCoreServer.WsClient
struct WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4;
// NetCoreServer.WsServer
struct WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B;
// NetCoreServer.WsSession
struct WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B;
// NetCoreServer.WssClient
struct WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C;
// NetCoreServer.WssServer
struct WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D;
// NetCoreServer.WssSession
struct WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB;

IL2CPP_EXTERN_C RuntimeClass* Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t25F16C14B7DE2F4DF278F54419449988B5E113DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tD093CFFDE0E9DD781A87F8067FE1EDC24180E811_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t4ACC78D979AF65A014A1B9D93C5FCAD2BCA8F0F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tA1196D9F38AA75EF0D9AC0EFEE07CD59033CEB89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_get_Values_m5F3E88E187A158C4C23615F33933FD6352A291FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_get_Values_mBAB9FC49E51423639C3D82225580B8F5DEFC56A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.SslSession>
struct ConcurrentDictionary_2_t70F0CA0CFD682359F3B09C5C39F97E95DB690413  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_tB0976E30562F6A7F8EE6A1C72CF58F657A252669* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t59A1A6F6D09E91F448C1418AC3AEF180C096A6F1* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.TcpSession>
struct ConcurrentDictionary_2_t5568A91C1721AB09A5C87B73F110BC4AC4D467B4  : public RuntimeObject
{
	// System.Collections.Concurrent.ConcurrentDictionary`2/Tables<TKey,TValue> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentDictionary`2::_tables
	Tables_t1EF5172B6FEE1D5DD8D32D5223E197B6431B424F* ____tables_0;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Concurrent.ConcurrentDictionary`2::_comparer
	RuntimeObject* ____comparer_1;
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::_growLockArray
	bool ____growLockArray_2;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_budget
	int32_t ____budget_3;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Collections.Concurrent.ConcurrentDictionary`2::_serializationArray
	KeyValuePair_2U5BU5D_t767F1EA37D4B5DBD20E909B81FB91E497D2DA854* ____serializationArray_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationConcurrencyLevel
	int32_t ____serializationConcurrencyLevel_5;
	// System.Int32 System.Collections.Concurrent.ConcurrentDictionary`2::_serializationCapacity
	int32_t ____serializationCapacity_6;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// NetCoreServer.Buffer
struct Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883  : public RuntimeObject
{
	// System.Byte[] NetCoreServer.Buffer::_data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____data_0;
	// System.Int64 NetCoreServer.Buffer::_size
	int64_t ____size_1;
	// System.Int64 NetCoreServer.Buffer::_offset
	int64_t ____offset_2;
};

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095  : public RuntimeObject
{
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t52460FA30AE37F4F26ACB81055E58002262F19F2* ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tD2C40CE114AA9D8E1F7196608B2D088548015293* ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t7324102215E4ED41EC065C02EB501CB0BC23CD90* ___decoderFallback_14;
};

// System.Net.EndPoint
struct EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564  : public RuntimeObject
{
};

// NetCoreServer.HttpRequest
struct HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2  : public RuntimeObject
{
	// System.Boolean NetCoreServer.HttpRequest::<IsErrorSet>k__BackingField
	bool ___U3CIsErrorSetU3Ek__BackingField_0;
	// System.String NetCoreServer.HttpRequest::_method
	String_t* ____method_1;
	// System.String NetCoreServer.HttpRequest::_url
	String_t* ____url_2;
	// System.String NetCoreServer.HttpRequest::_protocol
	String_t* ____protocol_3;
	// System.Collections.Generic.List`1<System.Tuple`2<System.String,System.String>> NetCoreServer.HttpRequest::_headers
	List_1_tF5069A557129EC14D34BBB161694A1A94C95B26A* ____headers_4;
	// System.Collections.Generic.List`1<System.Tuple`2<System.String,System.String>> NetCoreServer.HttpRequest::_cookies
	List_1_tF5069A557129EC14D34BBB161694A1A94C95B26A* ____cookies_5;
	// System.Int32 NetCoreServer.HttpRequest::_bodyIndex
	int32_t ____bodyIndex_6;
	// System.Int32 NetCoreServer.HttpRequest::_bodySize
	int32_t ____bodySize_7;
	// System.Int32 NetCoreServer.HttpRequest::_bodyLength
	int32_t ____bodyLength_8;
	// System.Boolean NetCoreServer.HttpRequest::_bodyLengthProvided
	bool ____bodyLengthProvided_9;
	// NetCoreServer.Buffer NetCoreServer.HttpRequest::_cache
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____cache_10;
	// System.Int32 NetCoreServer.HttpRequest::_cacheSize
	int32_t ____cacheSize_11;
};

// NetCoreServer.HttpResponse
struct HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3  : public RuntimeObject
{
	// System.Boolean NetCoreServer.HttpResponse::<IsErrorSet>k__BackingField
	bool ___U3CIsErrorSetU3Ek__BackingField_0;
	// System.Int32 NetCoreServer.HttpResponse::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_1;
	// System.String NetCoreServer.HttpResponse::_statusPhrase
	String_t* ____statusPhrase_2;
	// System.String NetCoreServer.HttpResponse::_protocol
	String_t* ____protocol_3;
	// System.Collections.Generic.List`1<System.Tuple`2<System.String,System.String>> NetCoreServer.HttpResponse::_headers
	List_1_tF5069A557129EC14D34BBB161694A1A94C95B26A* ____headers_4;
	// System.Int32 NetCoreServer.HttpResponse::_bodyIndex
	int32_t ____bodyIndex_5;
	// System.Int32 NetCoreServer.HttpResponse::_bodySize
	int32_t ____bodySize_6;
	// System.Int32 NetCoreServer.HttpResponse::_bodyLength
	int32_t ____bodyLength_7;
	// System.Boolean NetCoreServer.HttpResponse::_bodyLengthProvided
	bool ____bodyLengthProvided_8;
	// NetCoreServer.Buffer NetCoreServer.HttpResponse::_cache
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____cache_9;
	// System.Int32 NetCoreServer.HttpResponse::_cacheSize
	int32_t ____cacheSize_10;
};

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484  : public RuntimeObject
{
	// System.UInt32 System.Net.IPAddress::_addressOrScopeId
	uint32_t ____addressOrScopeId_8;
	// System.UInt16[] System.Net.IPAddress::_numbers
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____numbers_9;
	// System.String System.Net.IPAddress::_toString
	String_t* ____toString_10;
	// System.Int32 System.Net.IPAddress::_hashCode
	int32_t ____hashCode_11;
};

// NetCoreServer.SslContext
struct SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE  : public RuntimeObject
{
	// System.Security.Authentication.SslProtocols NetCoreServer.SslContext::<Protocols>k__BackingField
	int32_t ___U3CProtocolsU3Ek__BackingField_0;
	// System.Security.Cryptography.X509Certificates.X509Certificate NetCoreServer.SslContext::<Certificate>k__BackingField
	X509Certificate_t966CC553AF25AE7991F5B4C2AACBCF6C66C8F9C4* ___U3CCertificateU3Ek__BackingField_1;
	// System.Security.Cryptography.X509Certificates.X509Certificate2Collection NetCoreServer.SslContext::<Certificates>k__BackingField
	X509Certificate2Collection_t703D5135E74BA606B564EF174E08964B9C3DADEB* ___U3CCertificatesU3Ek__BackingField_2;
	// System.Net.Security.RemoteCertificateValidationCallback NetCoreServer.SslContext::<CertificateValidationCallback>k__BackingField
	RemoteCertificateValidationCallback_t2F4C5801F96B2C2BF934511796C5BFEAEBF01955* ___U3CCertificateValidationCallbackU3Ek__BackingField_3;
	// System.Boolean NetCoreServer.SslContext::<ClientCertificateRequired>k__BackingField
	bool ___U3CClientCertificateRequiredU3Ek__BackingField_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// NetCoreServer.WebSocket
struct WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C  : public RuntimeObject
{
	// NetCoreServer.IWebSocket NetCoreServer.WebSocket::_wsHandler
	RuntimeObject* ____wsHandler_0;
	// System.Boolean NetCoreServer.WebSocket::WsHandshaked
	bool ___WsHandshaked_7;
	// System.Boolean NetCoreServer.WebSocket::WsReceived
	bool ___WsReceived_8;
	// System.Int32 NetCoreServer.WebSocket::WsHeaderSize
	int32_t ___WsHeaderSize_9;
	// System.Int32 NetCoreServer.WebSocket::WsPayloadSize
	int32_t ___WsPayloadSize_10;
	// System.Object NetCoreServer.WebSocket::WsReceiveLock
	RuntimeObject* ___WsReceiveLock_11;
	// System.Collections.Generic.List`1<System.Byte> NetCoreServer.WebSocket::WsReceiveBuffer
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___WsReceiveBuffer_12;
	// System.Byte[] NetCoreServer.WebSocket::WsReceiveMask
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___WsReceiveMask_13;
	// System.Object NetCoreServer.WebSocket::WsSendLock
	RuntimeObject* ___WsSendLock_14;
	// System.Collections.Generic.List`1<System.Byte> NetCoreServer.WebSocket::WsSendBuffer
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* ___WsSendBuffer_15;
	// System.Byte[] NetCoreServer.WebSocket::WsSendMask
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___WsSendMask_16;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Guid
struct Guid_t 
{
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
};

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB  : public EndPoint_t6233F4E2EB9F0F2D36E187F12BE050E6D8B73564
{
	// System.Net.IPAddress System.Net.IPEndPoint::_address
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ____address_2;
	// System.Int32 System.Net.IPEndPoint::_port
	int32_t ____port_3;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48
struct __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE__padding[48];
	};
};

// System.Nullable`1<System.Guid>
struct Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Guid_t ___value_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

// NetCoreServer.SslServer
struct SslServer_tD3CFB907EC7F7539A7ECFDC9B8FAD40B6D2B1CE7  : public RuntimeObject
{
	// System.Guid NetCoreServer.SslServer::<Id>k__BackingField
	Guid_t ___U3CIdU3Ek__BackingField_0;
	// NetCoreServer.SslContext NetCoreServer.SslServer::<Context>k__BackingField
	SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___U3CContextU3Ek__BackingField_1;
	// System.Net.IPEndPoint NetCoreServer.SslServer::<Endpoint>k__BackingField
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___U3CEndpointU3Ek__BackingField_2;
	// System.Int32 NetCoreServer.SslServer::<OptionAcceptorBacklog>k__BackingField
	int32_t ___U3COptionAcceptorBacklogU3Ek__BackingField_3;
	// System.Boolean NetCoreServer.SslServer::<OptionDualMode>k__BackingField
	bool ___U3COptionDualModeU3Ek__BackingField_4;
	// System.Boolean NetCoreServer.SslServer::<OptionKeepAlive>k__BackingField
	bool ___U3COptionKeepAliveU3Ek__BackingField_5;
	// System.Boolean NetCoreServer.SslServer::<OptionNoDelay>k__BackingField
	bool ___U3COptionNoDelayU3Ek__BackingField_6;
	// System.Boolean NetCoreServer.SslServer::<OptionReuseAddress>k__BackingField
	bool ___U3COptionReuseAddressU3Ek__BackingField_7;
	// System.Boolean NetCoreServer.SslServer::<OptionExclusiveAddressUse>k__BackingField
	bool ___U3COptionExclusiveAddressUseU3Ek__BackingField_8;
	// System.Int32 NetCoreServer.SslServer::<OptionReceiveBufferSize>k__BackingField
	int32_t ___U3COptionReceiveBufferSizeU3Ek__BackingField_9;
	// System.Int32 NetCoreServer.SslServer::<OptionSendBufferSize>k__BackingField
	int32_t ___U3COptionSendBufferSizeU3Ek__BackingField_10;
	// System.Net.Sockets.Socket NetCoreServer.SslServer::_acceptorSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____acceptorSocket_11;
	// System.Net.Sockets.SocketAsyncEventArgs NetCoreServer.SslServer::_acceptorEventArg
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ____acceptorEventArg_12;
	// System.Int64 NetCoreServer.SslServer::_bytesPending
	int64_t ____bytesPending_13;
	// System.Int64 NetCoreServer.SslServer::_bytesSent
	int64_t ____bytesSent_14;
	// System.Int64 NetCoreServer.SslServer::_bytesReceived
	int64_t ____bytesReceived_15;
	// System.Boolean NetCoreServer.SslServer::<IsStarted>k__BackingField
	bool ___U3CIsStartedU3Ek__BackingField_16;
	// System.Boolean NetCoreServer.SslServer::<IsAccepting>k__BackingField
	bool ___U3CIsAcceptingU3Ek__BackingField_17;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.SslSession> NetCoreServer.SslServer::Sessions
	ConcurrentDictionary_2_t70F0CA0CFD682359F3B09C5C39F97E95DB690413* ___Sessions_18;
	// System.Boolean NetCoreServer.SslServer::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_19;
	// System.Boolean NetCoreServer.SslServer::<IsSocketDisposed>k__BackingField
	bool ___U3CIsSocketDisposedU3Ek__BackingField_20;
};

// NetCoreServer.TcpClient
struct TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB  : public RuntimeObject
{
	// System.Guid NetCoreServer.TcpClient::<Id>k__BackingField
	Guid_t ___U3CIdU3Ek__BackingField_0;
	// System.Net.IPEndPoint NetCoreServer.TcpClient::<Endpoint>k__BackingField
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___U3CEndpointU3Ek__BackingField_1;
	// System.Net.Sockets.Socket NetCoreServer.TcpClient::<Socket>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CSocketU3Ek__BackingField_2;
	// System.Int64 NetCoreServer.TcpClient::<BytesPending>k__BackingField
	int64_t ___U3CBytesPendingU3Ek__BackingField_3;
	// System.Int64 NetCoreServer.TcpClient::<BytesSending>k__BackingField
	int64_t ___U3CBytesSendingU3Ek__BackingField_4;
	// System.Int64 NetCoreServer.TcpClient::<BytesSent>k__BackingField
	int64_t ___U3CBytesSentU3Ek__BackingField_5;
	// System.Int64 NetCoreServer.TcpClient::<BytesReceived>k__BackingField
	int64_t ___U3CBytesReceivedU3Ek__BackingField_6;
	// System.Boolean NetCoreServer.TcpClient::<OptionDualMode>k__BackingField
	bool ___U3COptionDualModeU3Ek__BackingField_7;
	// System.Boolean NetCoreServer.TcpClient::<OptionKeepAlive>k__BackingField
	bool ___U3COptionKeepAliveU3Ek__BackingField_8;
	// System.Boolean NetCoreServer.TcpClient::<OptionNoDelay>k__BackingField
	bool ___U3COptionNoDelayU3Ek__BackingField_9;
	// System.Int32 NetCoreServer.TcpClient::<OptionReceiveBufferSize>k__BackingField
	int32_t ___U3COptionReceiveBufferSizeU3Ek__BackingField_10;
	// System.Int32 NetCoreServer.TcpClient::<OptionSendBufferSize>k__BackingField
	int32_t ___U3COptionSendBufferSizeU3Ek__BackingField_11;
	// System.Net.Sockets.SocketAsyncEventArgs NetCoreServer.TcpClient::_connectEventArg
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ____connectEventArg_12;
	// System.Boolean NetCoreServer.TcpClient::<IsConnecting>k__BackingField
	bool ___U3CIsConnectingU3Ek__BackingField_13;
	// System.Boolean NetCoreServer.TcpClient::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_14;
	// System.Boolean NetCoreServer.TcpClient::_receiving
	bool ____receiving_15;
	// NetCoreServer.Buffer NetCoreServer.TcpClient::_receiveBuffer
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____receiveBuffer_16;
	// System.Net.Sockets.SocketAsyncEventArgs NetCoreServer.TcpClient::_receiveEventArg
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ____receiveEventArg_17;
	// System.Object NetCoreServer.TcpClient::_sendLock
	RuntimeObject* ____sendLock_18;
	// System.Boolean NetCoreServer.TcpClient::_sending
	bool ____sending_19;
	// NetCoreServer.Buffer NetCoreServer.TcpClient::_sendBufferMain
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____sendBufferMain_20;
	// NetCoreServer.Buffer NetCoreServer.TcpClient::_sendBufferFlush
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____sendBufferFlush_21;
	// System.Net.Sockets.SocketAsyncEventArgs NetCoreServer.TcpClient::_sendEventArg
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ____sendEventArg_22;
	// System.Int64 NetCoreServer.TcpClient::_sendBufferFlushOffset
	int64_t ____sendBufferFlushOffset_23;
	// System.Boolean NetCoreServer.TcpClient::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_24;
	// System.Boolean NetCoreServer.TcpClient::<IsSocketDisposed>k__BackingField
	bool ___U3CIsSocketDisposedU3Ek__BackingField_25;
};

// NetCoreServer.TcpServer
struct TcpServer_t5C6F2AC817CBED1047609592DB48A314B9BCD8C8  : public RuntimeObject
{
	// System.Guid NetCoreServer.TcpServer::<Id>k__BackingField
	Guid_t ___U3CIdU3Ek__BackingField_0;
	// System.Net.IPEndPoint NetCoreServer.TcpServer::<Endpoint>k__BackingField
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___U3CEndpointU3Ek__BackingField_1;
	// System.Int32 NetCoreServer.TcpServer::<OptionAcceptorBacklog>k__BackingField
	int32_t ___U3COptionAcceptorBacklogU3Ek__BackingField_2;
	// System.Boolean NetCoreServer.TcpServer::<OptionDualMode>k__BackingField
	bool ___U3COptionDualModeU3Ek__BackingField_3;
	// System.Boolean NetCoreServer.TcpServer::<OptionKeepAlive>k__BackingField
	bool ___U3COptionKeepAliveU3Ek__BackingField_4;
	// System.Boolean NetCoreServer.TcpServer::<OptionNoDelay>k__BackingField
	bool ___U3COptionNoDelayU3Ek__BackingField_5;
	// System.Boolean NetCoreServer.TcpServer::<OptionReuseAddress>k__BackingField
	bool ___U3COptionReuseAddressU3Ek__BackingField_6;
	// System.Boolean NetCoreServer.TcpServer::<OptionExclusiveAddressUse>k__BackingField
	bool ___U3COptionExclusiveAddressUseU3Ek__BackingField_7;
	// System.Int32 NetCoreServer.TcpServer::<OptionReceiveBufferSize>k__BackingField
	int32_t ___U3COptionReceiveBufferSizeU3Ek__BackingField_8;
	// System.Int32 NetCoreServer.TcpServer::<OptionSendBufferSize>k__BackingField
	int32_t ___U3COptionSendBufferSizeU3Ek__BackingField_9;
	// System.Net.Sockets.Socket NetCoreServer.TcpServer::_acceptorSocket
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ____acceptorSocket_10;
	// System.Net.Sockets.SocketAsyncEventArgs NetCoreServer.TcpServer::_acceptorEventArg
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ____acceptorEventArg_11;
	// System.Int64 NetCoreServer.TcpServer::_bytesPending
	int64_t ____bytesPending_12;
	// System.Int64 NetCoreServer.TcpServer::_bytesSent
	int64_t ____bytesSent_13;
	// System.Int64 NetCoreServer.TcpServer::_bytesReceived
	int64_t ____bytesReceived_14;
	// System.Boolean NetCoreServer.TcpServer::<IsStarted>k__BackingField
	bool ___U3CIsStartedU3Ek__BackingField_15;
	// System.Boolean NetCoreServer.TcpServer::<IsAccepting>k__BackingField
	bool ___U3CIsAcceptingU3Ek__BackingField_16;
	// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.TcpSession> NetCoreServer.TcpServer::Sessions
	ConcurrentDictionary_2_t5568A91C1721AB09A5C87B73F110BC4AC4D467B4* ___Sessions_17;
	// System.Boolean NetCoreServer.TcpServer::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_18;
	// System.Boolean NetCoreServer.TcpServer::<IsSocketDisposed>k__BackingField
	bool ___U3CIsSocketDisposedU3Ek__BackingField_19;
};

// NetCoreServer.TcpSession
struct TcpSession_t63E3917A3EF0ED9E800C753734E7E444688A2F3C  : public RuntimeObject
{
	// System.Guid NetCoreServer.TcpSession::<Id>k__BackingField
	Guid_t ___U3CIdU3Ek__BackingField_0;
	// NetCoreServer.TcpServer NetCoreServer.TcpSession::<Server>k__BackingField
	TcpServer_t5C6F2AC817CBED1047609592DB48A314B9BCD8C8* ___U3CServerU3Ek__BackingField_1;
	// System.Net.Sockets.Socket NetCoreServer.TcpSession::<Socket>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CSocketU3Ek__BackingField_2;
	// System.Int64 NetCoreServer.TcpSession::<BytesPending>k__BackingField
	int64_t ___U3CBytesPendingU3Ek__BackingField_3;
	// System.Int64 NetCoreServer.TcpSession::<BytesSending>k__BackingField
	int64_t ___U3CBytesSendingU3Ek__BackingField_4;
	// System.Int64 NetCoreServer.TcpSession::<BytesSent>k__BackingField
	int64_t ___U3CBytesSentU3Ek__BackingField_5;
	// System.Int64 NetCoreServer.TcpSession::<BytesReceived>k__BackingField
	int64_t ___U3CBytesReceivedU3Ek__BackingField_6;
	// System.Int32 NetCoreServer.TcpSession::<OptionReceiveBufferSize>k__BackingField
	int32_t ___U3COptionReceiveBufferSizeU3Ek__BackingField_7;
	// System.Int32 NetCoreServer.TcpSession::<OptionSendBufferSize>k__BackingField
	int32_t ___U3COptionSendBufferSizeU3Ek__BackingField_8;
	// System.Boolean NetCoreServer.TcpSession::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_9;
	// System.Boolean NetCoreServer.TcpSession::_receiving
	bool ____receiving_10;
	// NetCoreServer.Buffer NetCoreServer.TcpSession::_receiveBuffer
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____receiveBuffer_11;
	// System.Net.Sockets.SocketAsyncEventArgs NetCoreServer.TcpSession::_receiveEventArg
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ____receiveEventArg_12;
	// System.Object NetCoreServer.TcpSession::_sendLock
	RuntimeObject* ____sendLock_13;
	// System.Boolean NetCoreServer.TcpSession::_sending
	bool ____sending_14;
	// NetCoreServer.Buffer NetCoreServer.TcpSession::_sendBufferMain
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____sendBufferMain_15;
	// NetCoreServer.Buffer NetCoreServer.TcpSession::_sendBufferFlush
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____sendBufferFlush_16;
	// System.Net.Sockets.SocketAsyncEventArgs NetCoreServer.TcpSession::_sendEventArg
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ____sendEventArg_17;
	// System.Int64 NetCoreServer.TcpSession::_sendBufferFlushOffset
	int64_t ____sendBufferFlushOffset_18;
	// System.Boolean NetCoreServer.TcpSession::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_19;
	// System.Boolean NetCoreServer.TcpSession::<IsSocketDisposed>k__BackingField
	bool ___U3CIsSocketDisposedU3Ek__BackingField_20;
};

// NetCoreServer.HttpClient
struct HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC  : public TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB
{
	// NetCoreServer.HttpRequest NetCoreServer.HttpClient::<Request>k__BackingField
	HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___U3CRequestU3Ek__BackingField_26;
	// NetCoreServer.HttpResponse NetCoreServer.HttpClient::<Response>k__BackingField
	HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___U3CResponseU3Ek__BackingField_27;
};

// NetCoreServer.HttpServer
struct HttpServer_tEA17B8DFEC74D9C45D9CB94BDF25436F5C7F12DC  : public TcpServer_t5C6F2AC817CBED1047609592DB48A314B9BCD8C8
{
	// NetCoreServer.FileCache NetCoreServer.HttpServer::<Cache>k__BackingField
	FileCache_t877A0B4CDFBCF6CF52F9128BE63B14C9FAE0816C* ___U3CCacheU3Ek__BackingField_20;
};

// NetCoreServer.HttpSession
struct HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C  : public TcpSession_t63E3917A3EF0ED9E800C753734E7E444688A2F3C
{
	// NetCoreServer.FileCache NetCoreServer.HttpSession::<Cache>k__BackingField
	FileCache_t877A0B4CDFBCF6CF52F9128BE63B14C9FAE0816C* ___U3CCacheU3Ek__BackingField_21;
	// NetCoreServer.HttpRequest NetCoreServer.HttpSession::<Request>k__BackingField
	HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___U3CRequestU3Ek__BackingField_22;
	// NetCoreServer.HttpResponse NetCoreServer.HttpSession::<Response>k__BackingField
	HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___U3CResponseU3Ek__BackingField_23;
};

// NetCoreServer.HttpsServer
struct HttpsServer_t00113C7DCFFD6BEACBE183D879F2C166F9C0BCC1  : public SslServer_tD3CFB907EC7F7539A7ECFDC9B8FAD40B6D2B1CE7
{
	// NetCoreServer.FileCache NetCoreServer.HttpsServer::<Cache>k__BackingField
	FileCache_t877A0B4CDFBCF6CF52F9128BE63B14C9FAE0816C* ___U3CCacheU3Ek__BackingField_21;
};

// NetCoreServer.SslClient
struct SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14  : public RuntimeObject
{
	// System.Guid NetCoreServer.SslClient::<Id>k__BackingField
	Guid_t ___U3CIdU3Ek__BackingField_0;
	// System.String NetCoreServer.SslClient::<Address>k__BackingField
	String_t* ___U3CAddressU3Ek__BackingField_1;
	// NetCoreServer.SslContext NetCoreServer.SslClient::<Context>k__BackingField
	SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___U3CContextU3Ek__BackingField_2;
	// System.Net.IPEndPoint NetCoreServer.SslClient::<Endpoint>k__BackingField
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___U3CEndpointU3Ek__BackingField_3;
	// System.Net.Sockets.Socket NetCoreServer.SslClient::<Socket>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CSocketU3Ek__BackingField_4;
	// System.Int64 NetCoreServer.SslClient::<BytesPending>k__BackingField
	int64_t ___U3CBytesPendingU3Ek__BackingField_5;
	// System.Int64 NetCoreServer.SslClient::<BytesSending>k__BackingField
	int64_t ___U3CBytesSendingU3Ek__BackingField_6;
	// System.Int64 NetCoreServer.SslClient::<BytesSent>k__BackingField
	int64_t ___U3CBytesSentU3Ek__BackingField_7;
	// System.Int64 NetCoreServer.SslClient::<BytesReceived>k__BackingField
	int64_t ___U3CBytesReceivedU3Ek__BackingField_8;
	// System.Boolean NetCoreServer.SslClient::<OptionDualMode>k__BackingField
	bool ___U3COptionDualModeU3Ek__BackingField_9;
	// System.Boolean NetCoreServer.SslClient::<OptionKeepAlive>k__BackingField
	bool ___U3COptionKeepAliveU3Ek__BackingField_10;
	// System.Boolean NetCoreServer.SslClient::<OptionNoDelay>k__BackingField
	bool ___U3COptionNoDelayU3Ek__BackingField_11;
	// System.Int32 NetCoreServer.SslClient::<OptionReceiveBufferSize>k__BackingField
	int32_t ___U3COptionReceiveBufferSizeU3Ek__BackingField_12;
	// System.Int32 NetCoreServer.SslClient::<OptionSendBufferSize>k__BackingField
	int32_t ___U3COptionSendBufferSizeU3Ek__BackingField_13;
	// System.Boolean NetCoreServer.SslClient::_disconnecting
	bool ____disconnecting_14;
	// System.Net.Sockets.SocketAsyncEventArgs NetCoreServer.SslClient::_connectEventArg
	SocketAsyncEventArgs_t69FA99F5C4FBBE1F321A770B65D38FE5D62027EC* ____connectEventArg_15;
	// System.Net.Security.SslStream NetCoreServer.SslClient::_sslStream
	SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ____sslStream_16;
	// System.Nullable`1<System.Guid> NetCoreServer.SslClient::_sslStreamId
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ____sslStreamId_17;
	// System.Boolean NetCoreServer.SslClient::<IsConnecting>k__BackingField
	bool ___U3CIsConnectingU3Ek__BackingField_18;
	// System.Boolean NetCoreServer.SslClient::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_19;
	// System.Boolean NetCoreServer.SslClient::<IsHandshaking>k__BackingField
	bool ___U3CIsHandshakingU3Ek__BackingField_20;
	// System.Boolean NetCoreServer.SslClient::<IsHandshaked>k__BackingField
	bool ___U3CIsHandshakedU3Ek__BackingField_21;
	// System.Boolean NetCoreServer.SslClient::_receiving
	bool ____receiving_22;
	// NetCoreServer.Buffer NetCoreServer.SslClient::_receiveBuffer
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____receiveBuffer_23;
	// System.Object NetCoreServer.SslClient::_sendLock
	RuntimeObject* ____sendLock_24;
	// System.Boolean NetCoreServer.SslClient::_sending
	bool ____sending_25;
	// NetCoreServer.Buffer NetCoreServer.SslClient::_sendBufferMain
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____sendBufferMain_26;
	// NetCoreServer.Buffer NetCoreServer.SslClient::_sendBufferFlush
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____sendBufferFlush_27;
	// System.Int64 NetCoreServer.SslClient::_sendBufferFlushOffset
	int64_t ____sendBufferFlushOffset_28;
	// System.Boolean NetCoreServer.SslClient::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_29;
	// System.Boolean NetCoreServer.SslClient::<IsSocketDisposed>k__BackingField
	bool ___U3CIsSocketDisposedU3Ek__BackingField_30;
};

// NetCoreServer.SslSession
struct SslSession_t9D95509EF5240CE51BE26FD0103B8271A438E98B  : public RuntimeObject
{
	// System.Guid NetCoreServer.SslSession::<Id>k__BackingField
	Guid_t ___U3CIdU3Ek__BackingField_0;
	// NetCoreServer.SslServer NetCoreServer.SslSession::<Server>k__BackingField
	SslServer_tD3CFB907EC7F7539A7ECFDC9B8FAD40B6D2B1CE7* ___U3CServerU3Ek__BackingField_1;
	// System.Net.Sockets.Socket NetCoreServer.SslSession::<Socket>k__BackingField
	Socket_t1F49472CDA22B581C29A258225ABF3ADA9DED67E* ___U3CSocketU3Ek__BackingField_2;
	// System.Int64 NetCoreServer.SslSession::<BytesPending>k__BackingField
	int64_t ___U3CBytesPendingU3Ek__BackingField_3;
	// System.Int64 NetCoreServer.SslSession::<BytesSending>k__BackingField
	int64_t ___U3CBytesSendingU3Ek__BackingField_4;
	// System.Int64 NetCoreServer.SslSession::<BytesSent>k__BackingField
	int64_t ___U3CBytesSentU3Ek__BackingField_5;
	// System.Int64 NetCoreServer.SslSession::<BytesReceived>k__BackingField
	int64_t ___U3CBytesReceivedU3Ek__BackingField_6;
	// System.Int32 NetCoreServer.SslSession::<OptionReceiveBufferSize>k__BackingField
	int32_t ___U3COptionReceiveBufferSizeU3Ek__BackingField_7;
	// System.Int32 NetCoreServer.SslSession::<OptionSendBufferSize>k__BackingField
	int32_t ___U3COptionSendBufferSizeU3Ek__BackingField_8;
	// System.Boolean NetCoreServer.SslSession::_disconnecting
	bool ____disconnecting_9;
	// System.Net.Security.SslStream NetCoreServer.SslSession::_sslStream
	SslStream_t19A079881850F9CAD7BAA6FB625BBC4647ED5A27* ____sslStream_10;
	// System.Nullable`1<System.Guid> NetCoreServer.SslSession::_sslStreamId
	Nullable_1_t0ECB838EB0C9A81655750B26970F21CF9A83A5F7 ____sslStreamId_11;
	// System.Boolean NetCoreServer.SslSession::<IsConnected>k__BackingField
	bool ___U3CIsConnectedU3Ek__BackingField_12;
	// System.Boolean NetCoreServer.SslSession::<IsHandshaked>k__BackingField
	bool ___U3CIsHandshakedU3Ek__BackingField_13;
	// System.Boolean NetCoreServer.SslSession::_receiving
	bool ____receiving_14;
	// NetCoreServer.Buffer NetCoreServer.SslSession::_receiveBuffer
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____receiveBuffer_15;
	// System.Object NetCoreServer.SslSession::_sendLock
	RuntimeObject* ____sendLock_16;
	// System.Boolean NetCoreServer.SslSession::_sending
	bool ____sending_17;
	// NetCoreServer.Buffer NetCoreServer.SslSession::_sendBufferMain
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____sendBufferMain_18;
	// NetCoreServer.Buffer NetCoreServer.SslSession::_sendBufferFlush
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* ____sendBufferFlush_19;
	// System.Int64 NetCoreServer.SslSession::_sendBufferFlushOffset
	int64_t ____sendBufferFlushOffset_20;
	// System.Boolean NetCoreServer.SslSession::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_21;
	// System.Boolean NetCoreServer.SslSession::<IsSocketDisposed>k__BackingField
	bool ___U3CIsSocketDisposedU3Ek__BackingField_22;
};

// NetCoreServer.HttpsClient
struct HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27  : public SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14
{
	// NetCoreServer.HttpRequest NetCoreServer.HttpsClient::<Request>k__BackingField
	HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___U3CRequestU3Ek__BackingField_31;
	// NetCoreServer.HttpResponse NetCoreServer.HttpsClient::<Response>k__BackingField
	HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___U3CResponseU3Ek__BackingField_32;
};

// NetCoreServer.HttpsSession
struct HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641  : public SslSession_t9D95509EF5240CE51BE26FD0103B8271A438E98B
{
	// NetCoreServer.FileCache NetCoreServer.HttpsSession::<Cache>k__BackingField
	FileCache_t877A0B4CDFBCF6CF52F9128BE63B14C9FAE0816C* ___U3CCacheU3Ek__BackingField_23;
	// NetCoreServer.HttpRequest NetCoreServer.HttpsSession::<Request>k__BackingField
	HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___U3CRequestU3Ek__BackingField_24;
	// NetCoreServer.HttpResponse NetCoreServer.HttpsSession::<Response>k__BackingField
	HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___U3CResponseU3Ek__BackingField_25;
};

// NetCoreServer.WsClient
struct WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4  : public HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC
{
	// NetCoreServer.WebSocket NetCoreServer.WsClient::WebSocket
	WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* ___WebSocket_28;
	// System.Boolean NetCoreServer.WsClient::_syncConnect
	bool ____syncConnect_29;
};

// NetCoreServer.WsServer
struct WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B  : public HttpServer_tEA17B8DFEC74D9C45D9CB94BDF25436F5C7F12DC
{
	// NetCoreServer.WebSocket NetCoreServer.WsServer::WebSocket
	WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* ___WebSocket_21;
};

// NetCoreServer.WsSession
struct WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B  : public HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C
{
	// NetCoreServer.WebSocket NetCoreServer.WsSession::WebSocket
	WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* ___WebSocket_24;
};

// NetCoreServer.WssServer
struct WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D  : public HttpsServer_t00113C7DCFFD6BEACBE183D879F2C166F9C0BCC1
{
	// NetCoreServer.WebSocket NetCoreServer.WssServer::WebSocket
	WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* ___WebSocket_22;
};

// NetCoreServer.WssClient
struct WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C  : public HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27
{
	// NetCoreServer.WebSocket NetCoreServer.WssClient::WebSocket
	WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* ___WebSocket_33;
	// System.Boolean NetCoreServer.WssClient::_syncConnect
	bool ____syncConnect_34;
};

// NetCoreServer.WssSession
struct WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8  : public HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641
{
	// NetCoreServer.WebSocket NetCoreServer.WssSession::WebSocket
	WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* ___WebSocket_26;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.SslSession>
struct ConcurrentDictionary_2_t70F0CA0CFD682359F3B09C5C39F97E95DB690413_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.SslSession>

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.TcpSession>
struct ConcurrentDictionary_2_t5568A91C1721AB09A5C87B73F110BC4AC4D467B4_StaticFields
{
	// System.Boolean System.Collections.Concurrent.ConcurrentDictionary`2::s_isValueWriteAtomic
	bool ___s_isValueWriteAtomic_7;
};

// System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.TcpSession>

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte>

// NetCoreServer.Buffer

// NetCoreServer.Buffer

// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095_StaticFields
{
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ___latin1Encoding_7;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Text.Encoding> modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Dictionary_2_t87EDE08B2E48F793A22DE50D6B3CC2E7EBB2DB54* ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject* ___s_InternalSyncObject_15;
};

// System.Text.Encoding

// System.Net.EndPoint

// System.Net.EndPoint

// NetCoreServer.HttpRequest

// NetCoreServer.HttpRequest

// NetCoreServer.HttpResponse

// NetCoreServer.HttpResponse

// System.Net.IPAddress
struct IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484_StaticFields
{
	// System.Net.IPAddress System.Net.IPAddress::Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Any_0;
	// System.Net.IPAddress System.Net.IPAddress::Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Loopback_1;
	// System.Net.IPAddress System.Net.IPAddress::Broadcast
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___Broadcast_2;
	// System.Net.IPAddress System.Net.IPAddress::None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___None_3;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Any
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Any_5;
	// System.Net.IPAddress System.Net.IPAddress::IPv6Loopback
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6Loopback_6;
	// System.Net.IPAddress System.Net.IPAddress::IPv6None
	IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___IPv6None_7;
};

// System.Net.IPAddress

// NetCoreServer.SslContext

// NetCoreServer.SslContext

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// NetCoreServer.WebSocket

// NetCoreServer.WebSocket

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Guid
struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Guid

// System.Net.IPEndPoint
struct IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB_StaticFields
{
	// System.Net.IPEndPoint System.Net.IPEndPoint::Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___Any_5;
	// System.Net.IPEndPoint System.Net.IPEndPoint::IPv6Any
	IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___IPv6Any_6;
};

// System.Net.IPEndPoint

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48

// System.Nullable`1<System.Guid>

// System.Nullable`1<System.Guid>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=48 <PrivateImplementationDetails>::E6E9744093095066D1EFC68ADC0251F798C0E734CFE63E41F60E1B6AE56B2BBA
	__StaticArrayInitTypeSizeU3D48_tB184AFC7E0116F4B6DAFA18B66C9B248A3A9F2FE ___E6E9744093095066D1EFC68ADC0251F798C0E734CFE63E41F60E1B6AE56B2BBA_0;
};

// <PrivateImplementationDetails>

// NetCoreServer.SslServer

// NetCoreServer.SslServer

// NetCoreServer.TcpClient

// NetCoreServer.TcpClient

// NetCoreServer.TcpServer

// NetCoreServer.TcpServer

// NetCoreServer.TcpSession

// NetCoreServer.TcpSession

// NetCoreServer.HttpClient

// NetCoreServer.HttpClient

// NetCoreServer.HttpServer

// NetCoreServer.HttpServer

// NetCoreServer.HttpSession

// NetCoreServer.HttpSession

// NetCoreServer.HttpsServer

// NetCoreServer.HttpsServer

// NetCoreServer.SslClient

// NetCoreServer.SslClient

// NetCoreServer.SslSession

// NetCoreServer.SslSession

// NetCoreServer.HttpsClient

// NetCoreServer.HttpsClient

// NetCoreServer.HttpsSession

// NetCoreServer.HttpsSession

// NetCoreServer.WsClient

// NetCoreServer.WsClient

// NetCoreServer.WsServer

// NetCoreServer.WsServer

// NetCoreServer.WsSession

// NetCoreServer.WsSession

// NetCoreServer.WssServer

// NetCoreServer.WssServer

// NetCoreServer.WssClient

// NetCoreServer.WssClient

// NetCoreServer.WssSession

// NetCoreServer.WssSession
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};


// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConcurrentDictionary_2_get_Values_m235C6180A0C20FC729046A61A55843617F381007_gshared (ConcurrentDictionary_2_t85DA6368A00F30B81EBB65ED020A21501D665561* __this, const RuntimeMethod* method) ;

// System.Void NetCoreServer.HttpClient::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_mA44E874C7BCC8E42685F61B55B13E9451BDBF54D (HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_address, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Void NetCoreServer.WebSocket::.ctor(NetCoreServer.IWebSocket)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690 (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* __this, RuntimeObject* ___0_wsHandler, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpClient::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_m6D918605963EDB9C09EF1242C5C031556E1F7E8E (HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC* __this, String_t* ___0_address, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpClient::.ctor(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient__ctor_m54C7DA661FBC53153ED71FE8F0D4AE6FD472E438 (HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_endpoint, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.TcpClient::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_Connect_m7978ABAFDA7D0E9156B14FD1733CEC70962AE030 (TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB* __this, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.TcpClient::ConnectAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_ConnectAsync_m0F7A9219837416F386411DB938870034D377105C (TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB* __this, const RuntimeMethod* method) ;
// System.Int64 NetCoreServer.WsClient::SendClose(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsClient_SendClose_m008394C206D21F44E2090519B7428A1AE0480F9F (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.TcpClient::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_Disconnect_m2EDDC22D2E50247C36663B2053BF2F1DB3B29806 (TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB* __this, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.WsClient::SendCloseAsync(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendCloseAsync_m514BE3277027CE5DC67A9BC45D5D8D6F1014C0D1 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.TcpClient::DisconnectAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_DisconnectAsync_mD1C89F2F127949B4AE07D7B4C22BD7AD86B02921 (TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void NetCoreServer.WebSocket::PrepareSendFrame(System.Byte,System.Boolean,System.Byte[],System.Int64,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487 (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* __this, uint8_t ___0_opcode, bool ___1_mask, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_buffer, int64_t ___3_offset, int64_t ___4_size, int32_t ___5_status, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Byte>::ToArray()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24 (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* __this, const RuntimeMethod* method)
{
	return ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_gshared)(__this, method);
}
// System.Int64 NetCoreServer.TcpClient::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TcpClient_Send_m43CE8E394811BA4DDC5BF4DB8C769605E0C9452E (TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Text.Encoding System.Text.Encoding::get_UTF8()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9 (const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.TcpClient::SendAsync(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpClient_SendAsync_m46979A52C8AD64337AF082C72726CA27D5D22AB9 (TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Void NetCoreServer.Buffer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* __this, const RuntimeMethod* method) ;
// System.Byte[] NetCoreServer.Buffer::get_Data()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* __this, const RuntimeMethod* method) ;
// System.String NetCoreServer.Buffer::ExtractString(System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08 (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* __this, int64_t ___0_offset, int64_t ___1_size, const RuntimeMethod* method) ;
// System.Int32 NetCoreServer.WebSocket::RequiredReceiveFrameSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WebSocket_RequiredReceiveFrameSize_m22BE754E76A88D50404F9E9D3E8E898E227FB8B4 (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* __this, const RuntimeMethod* method) ;
// System.Void NetCoreServer.Buffer::Resize(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_Resize_m287C14F99E306780993169E02C05F4725D91A668 (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* __this, int64_t ___0_size, const RuntimeMethod* method) ;
// System.Int64 NetCoreServer.TcpClient::Receive(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TcpClient_Receive_mBD8196E6E45085869FD5DA18069D892C80E671EB (TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Void NetCoreServer.WebSocket::PrepareReceiveFrame(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7 (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Int64 NetCoreServer.Buffer::Append(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Buffer_Append_m2459291B4DF91A57178461DEB63F96F940AC6117 (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Void NetCoreServer.WebSocket::ClearWsBuffers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WebSocket_ClearWsBuffers_mEACF0B65CC77BDDC5EC45F81BD214C64C71D87C1 (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* __this, const RuntimeMethod* method) ;
// NetCoreServer.HttpRequest NetCoreServer.HttpClient::get_Request()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* HttpClient_get_Request_m3AF2795F7A9436858FE05D850558280EB57855C6_inline (HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC* __this, const RuntimeMethod* method) ;
// NetCoreServer.HttpRequest NetCoreServer.HttpRequest::SetBody(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* HttpRequest_SetBody_mAAEB4CA114BA7234B556CEB5635EB04EC9E7ACE0 (HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* __this, String_t* ___0_body, const RuntimeMethod* method) ;
// NetCoreServer.Buffer NetCoreServer.HttpRequest::get_Cache()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* HttpRequest_get_Cache_m343FBA220345DD12A9273ACC959CBD1BCBBAC0D4_inline (HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* __this, const RuntimeMethod* method) ;
// NetCoreServer.HttpRequest NetCoreServer.HttpRequest::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* HttpRequest_Clear_mF988679ABD84F934E81C4D54EFC463943D479D9B (HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* __this, const RuntimeMethod* method) ;
// NetCoreServer.HttpResponse NetCoreServer.HttpClient::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* HttpClient_get_Response_m3B1798352B6691E18C9C21A207257273655843DB_inline (HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC* __this, const RuntimeMethod* method) ;
// NetCoreServer.HttpResponse NetCoreServer.HttpResponse::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* HttpResponse_Clear_mD749A83A49CC84434689576B16D2260B8215699A (HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* __this, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpClient::OnReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient_OnReceived_m06C41034B57E12FA5DF45A9DCA25262D5C875406 (HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Guid NetCoreServer.TcpClient::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t TcpClient_get_Id_mFB8E4DF514D9B6A467198A060B7EF0BE62F4357F_inline (TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB* __this, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.WebSocket::PerformClientUpgrade(NetCoreServer.HttpResponse,System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_PerformClientUpgrade_m61E2944A7AE9EFD4914483799FA4842B4C0D2EBA (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, Guid_t ___1_id, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpClient::OnReceivedResponseHeader(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient_OnReceivedResponseHeader_mB796D7F1D26D28B92C26CC614EA785D0EDDC4DD0 (HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) ;
// System.String NetCoreServer.HttpRequest::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HttpRequest_get_Body_m3A0C5431AC84A0A5606FB1E8F3C9941D748D5074 (HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* __this, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpClient::OnReceivedResponse(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient_OnReceivedResponse_m10FAF25B525585C9353F99BE3162DCC7FD5BB631 (HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpClient::OnReceivedResponseError(NetCoreServer.HttpResponse,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpClient_OnReceivedResponseError_m2553D87001177BB38E1026D28D639EF2376DE68C (HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, String_t* ___1_error, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.WsClient::SendPongAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendPongAsync_m19D1512F07A4AB02823319260F2A54E5F82D7A71 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsClient::.ctor(NetCoreServer.SslContext,System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsClient__ctor_m60A5E4DB61B02572B009AB42638211D832101475 (HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___1_address, int32_t ___2_port, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsClient::.ctor(NetCoreServer.SslContext,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsClient__ctor_mEEB3AD97BDE7057462D561B646FF24B31ABB60A1 (HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, String_t* ___1_address, int32_t ___2_port, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsClient::.ctor(NetCoreServer.SslContext,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsClient__ctor_m4EB77D72E5C38964691DB7BA634E7B8DE63B4DF4 (HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___1_endpoint, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.SslClient::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslClient_Connect_mCE7513E6D2C0D3F787F11F786B638FE494127467 (SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14* __this, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.SslClient::ConnectAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslClient_ConnectAsync_m773B8B44961483E2D7B98CD9077DBBC9F49B3E4D (SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14* __this, const RuntimeMethod* method) ;
// System.Int64 NetCoreServer.WssClient::SendClose(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssClient_SendClose_m148F36A9524562D70E08F553AD841F669D5E1F72 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.SslClient::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslClient_Disconnect_m6533C40E14DA2347674C7186B6C2C35CE7A64668 (SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14* __this, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.WssClient::SendCloseAsync(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendCloseAsync_mDA8AB1C9A084FBCB30FC5763365588C45E80424D (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.SslClient::DisconnectAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslClient_DisconnectAsync_m5E36F90E0AB54AF03BBAD16194A7711838D12AF1 (SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14* __this, const RuntimeMethod* method) ;
// System.Int64 NetCoreServer.SslClient::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslClient_Send_mFDC4BAB93F84A94ACD7D3E66DAB1FBE3C630268E (SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.SslClient::SendAsync(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslClient_SendAsync_mC9CE9AB1C8E69522509C9CF11472CD647A4072F4 (SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Int64 NetCoreServer.SslClient::Receive(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslClient_Receive_mA9672491D4F1BB0337212B992D4B72E237DC25E4 (SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// NetCoreServer.HttpRequest NetCoreServer.HttpsClient::get_Request()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* HttpsClient_get_Request_m45278DC70A69F8ACABC6FE4C2D91E7F1D6B33D1C_inline (HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27* __this, const RuntimeMethod* method) ;
// NetCoreServer.HttpResponse NetCoreServer.HttpsClient::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* HttpsClient_get_Response_mB8B85F4F3D45164C24DFCA16EB97959782FFD3A1_inline (HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27* __this, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsClient::OnReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsClient_OnReceived_mD7DA535AC13718685A0146654DC9BABDCB6136F2 (HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Guid NetCoreServer.SslClient::get_Id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t SslClient_get_Id_m1CAAEB17E3EC613A3B7BBBCDB5ED6FF03406F561_inline (SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14* __this, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsClient::OnReceivedResponseHeader(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsClient_OnReceivedResponseHeader_m33E524A21A675D1E7CD231980C936D8581D6646C (HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsClient::OnReceivedResponse(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsClient_OnReceivedResponse_mA8B53319A334DA061DE62444A0C205627567A251 (HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsClient::OnReceivedResponseError(NetCoreServer.HttpResponse,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsClient_OnReceivedResponseError_m73136BBCD178785BED7DF267C600F8597F1F4389 (HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, String_t* ___1_error, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.WssClient::SendPongAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendPongAsync_mBDB83F2278E535E4667EA15108FFA8814376DAE6 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpServer::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpServer__ctor_mE78676BDD8FBA0BBFD2E8C01E581DE65EFF15038 (HttpServer_tEA17B8DFEC74D9C45D9CB94BDF25436F5C7F12DC* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_address, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpServer::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpServer__ctor_mBCA5444D3964988D2FC8B9340B4615C0D2D42642 (HttpServer_tEA17B8DFEC74D9C45D9CB94BDF25436F5C7F12DC* __this, String_t* ___0_address, int32_t ___1_port, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpServer::.ctor(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpServer__ctor_m7C3967714E90F5A14F680068DF81061C2EECD121 (HttpServer_tEA17B8DFEC74D9C45D9CB94BDF25436F5C7F12DC* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_endpoint, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.TcpServer::DisconnectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpServer_DisconnectAll_m8A0884FDAAE93EC9AD4965C5D715056EB3164D4C (TcpServer_t5C6F2AC817CBED1047609592DB48A314B9BCD8C8* __this, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.TcpServer::get_IsStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TcpServer_get_IsStarted_m13DA0CAD8C68BBDE04A609A79C2C9AED6076FDA7_inline (TcpServer_t5C6F2AC817CBED1047609592DB48A314B9BCD8C8* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.TcpSession>::get_Values()
inline RuntimeObject* ConcurrentDictionary_2_get_Values_mBAB9FC49E51423639C3D82225580B8F5DEFC56A1 (ConcurrentDictionary_2_t5568A91C1721AB09A5C87B73F110BC4AC4D467B4* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t5568A91C1721AB09A5C87B73F110BC4AC4D467B4*, const RuntimeMethod*))ConcurrentDictionary_2_get_Values_m235C6180A0C20FC729046A61A55843617F381007_gshared)(__this, method);
}
// System.Void NetCoreServer.WsSession::.ctor(NetCoreServer.WsServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession__ctor_mE59AAFB2A35443B0ACE79DC20BCC445318CB2A51 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* ___0_server, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpSession::.ctor(NetCoreServer.HttpServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpSession__ctor_m20E8A7AC507D18E7EF0191C0AE12B0655310B90F (HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C* __this, HttpServer_tEA17B8DFEC74D9C45D9CB94BDF25436F5C7F12DC* ___0_server, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.WsSession::SendCloseAsync(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendCloseAsync_m424ABB86246EC979DCD374D1D2ABCBB08CBB1D9D (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.TcpSession::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpSession_Disconnect_m75B632AF8F7871DAAD7F99B851CC28C3E726923D (TcpSession_t63E3917A3EF0ED9E800C753734E7E444688A2F3C* __this, const RuntimeMethod* method) ;
// System.Int64 NetCoreServer.TcpSession::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TcpSession_Send_mD8CA9888AAFC032EAA22EDF3573ADDF913F3A6CF (TcpSession_t63E3917A3EF0ED9E800C753734E7E444688A2F3C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.TcpSession::SendAsync(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TcpSession_SendAsync_m60089C6CF72D62E35E40C398BFE0A9BBBD046C9B (TcpSession_t63E3917A3EF0ED9E800C753734E7E444688A2F3C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Int64 NetCoreServer.TcpSession::Receive(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TcpSession_Receive_m05B8B835B49F1141C20C70D19EB8F83932F38795 (TcpSession_t63E3917A3EF0ED9E800C753734E7E444688A2F3C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// NetCoreServer.HttpRequest NetCoreServer.HttpSession::get_Request()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* HttpSession_get_Request_mA2B3E106FF05FCE43CA50A3A78510DE023245C72_inline (HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C* __this, const RuntimeMethod* method) ;
// NetCoreServer.HttpResponse NetCoreServer.HttpSession::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* HttpSession_get_Response_m85959FC049415AAE77676B4E565CC9C065AD6D49_inline (HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C* __this, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpSession::OnReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpSession_OnReceived_m9319C5751443623E14ECE0CCDE2D3107E0C3F9A8 (HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.WebSocket::PerformServerUpgrade(NetCoreServer.HttpRequest,NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WebSocket_PerformServerUpgrade_m9A03164339E765037F1E21D4FF8D24EF2C30C548 (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___1_response, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpSession::OnReceivedRequestHeader(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpSession_OnReceivedRequestHeader_m05C101172F35C46D53AA748B5D59056EA08C9D39 (HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpSession::OnReceivedRequest(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpSession_OnReceivedRequest_m3153CCE38E0411B61452C5A4AD2ADF41B108E6F9 (HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpSession::OnReceivedRequestError(NetCoreServer.HttpRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpSession_OnReceivedRequestError_m463C570D8694296A4BA4D03799B32C49C495AD74 (HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, String_t* ___1_error, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.WsSession::SendPongAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendPongAsync_m588B72CA369DF2D9A4FA3AF545F55D5F2376DC4D (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.HttpSession::SendResponseAsync(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpSession_SendResponseAsync_mE00A7E3FB86E498810C941139D0D5B5477E06ECF (HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsServer::.ctor(NetCoreServer.SslContext,System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsServer__ctor_m0E918132A8FAAE603FFE0A8992198CBEF6ACCBD8 (HttpsServer_t00113C7DCFFD6BEACBE183D879F2C166F9C0BCC1* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___1_address, int32_t ___2_port, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsServer::.ctor(NetCoreServer.SslContext,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsServer__ctor_mD3F7B86BB21BA58C65D928CD374EDF707207D3AE (HttpsServer_t00113C7DCFFD6BEACBE183D879F2C166F9C0BCC1* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, String_t* ___1_address, int32_t ___2_port, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsServer::.ctor(NetCoreServer.SslContext,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsServer__ctor_mBC1012A1568AEA7D0FD4AB283321E00221F2676F (HttpsServer_t00113C7DCFFD6BEACBE183D879F2C166F9C0BCC1* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___1_endpoint, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.SslServer::DisconnectAll()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslServer_DisconnectAll_m7F2263BC0B668FDA26727D28588525C50D803C1F (SslServer_tD3CFB907EC7F7539A7ECFDC9B8FAD40B6D2B1CE7* __this, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.SslServer::get_IsStarted()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SslServer_get_IsStarted_mAF607798E818A5FC41ED75AFF27BD599DF748A0F_inline (SslServer_tD3CFB907EC7F7539A7ECFDC9B8FAD40B6D2B1CE7* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Concurrent.ConcurrentDictionary`2<System.Guid,NetCoreServer.SslSession>::get_Values()
inline RuntimeObject* ConcurrentDictionary_2_get_Values_m5F3E88E187A158C4C23615F33933FD6352A291FA (ConcurrentDictionary_2_t70F0CA0CFD682359F3B09C5C39F97E95DB690413* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ConcurrentDictionary_2_t70F0CA0CFD682359F3B09C5C39F97E95DB690413*, const RuntimeMethod*))ConcurrentDictionary_2_get_Values_m235C6180A0C20FC729046A61A55843617F381007_gshared)(__this, method);
}
// System.Void NetCoreServer.WssSession::.ctor(NetCoreServer.WssServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession__ctor_m9BB5255D3D41D8BD9B37C33982EA07A37F00889C (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* ___0_server, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsSession::.ctor(NetCoreServer.HttpsServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsSession__ctor_m7FA805C289572E62217DD6D2A394C8535187C6DB (HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641* __this, HttpsServer_t00113C7DCFFD6BEACBE183D879F2C166F9C0BCC1* ___0_server, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.WssSession::SendCloseAsync(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendCloseAsync_mAED727F4603AB9E544937E79C93DE83FAB420B68 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.SslSession::Disconnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslSession_Disconnect_m9D8D16F04E7E6A59D42F56184AE9DD1F00C0A0A2 (SslSession_t9D95509EF5240CE51BE26FD0103B8271A438E98B* __this, const RuntimeMethod* method) ;
// System.Int64 NetCoreServer.SslSession::Send(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslSession_Send_m77F8D4B2898DBD35E0B0F37233A4D9972E3D08CD (SslSession_t9D95509EF5240CE51BE26FD0103B8271A438E98B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.SslSession::SendAsync(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SslSession_SendAsync_m41F3B24745111A37F1F17C83137594C617DCF5C7 (SslSession_t9D95509EF5240CE51BE26FD0103B8271A438E98B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, const RuntimeMethod* method) ;
// System.Int64 NetCoreServer.SslSession::Receive(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t SslSession_Receive_mAEEFAE9F323D69EBF286781E61BDE2B497BBBC40 (SslSession_t9D95509EF5240CE51BE26FD0103B8271A438E98B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// NetCoreServer.HttpRequest NetCoreServer.HttpsSession::get_Request()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* HttpsSession_get_Request_m66D0F6E8E7547576F7DDC270607F04F4C66E460C_inline (HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641* __this, const RuntimeMethod* method) ;
// NetCoreServer.HttpResponse NetCoreServer.HttpsSession::get_Response()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* HttpsSession_get_Response_m905F3026D6E1697465193E96E7EAC24774DA3EBE_inline (HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641* __this, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsSession::OnReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsSession_OnReceived_mBDE7221D784493BE7C969618795188FC4A7C1490 (HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsSession::OnReceivedRequestHeader(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsSession_OnReceivedRequestHeader_m0E8F4B7C7969B4ABD16BD77A064642AB7D3916A8 (HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsSession::OnReceivedRequest(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsSession_OnReceivedRequest_m91EA625C06661028337FB3EAFEF87CE8BC7E297E (HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) ;
// System.Void NetCoreServer.HttpsSession::OnReceivedRequestError(NetCoreServer.HttpRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpsSession_OnReceivedRequestError_mD7B96584E9348C6F84C0DBEB8070AF6ABC714CDF (HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, String_t* ___1_error, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.WssSession::SendPongAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendPongAsync_m65707EF309012845C8BC1E7B19FAAE0E281AC367 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Boolean NetCoreServer.HttpsSession::SendResponseAsync(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HttpsSession_SendResponseAsync_m39A43585BE7D84266425A07F21D6BB9B06DEBBAB (HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void NetCoreServer.WsClient::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient__ctor_mC50DED163FFDDDB4681C193030B74FBFD953A540 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_address, int32_t ___1_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WsClient(IPAddress address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___0_address;
		int32_t L_1 = ___1_port;
		HttpClient__ctor_mA44E874C7BCC8E42685F61B55B13E9451BDBF54D(__this, L_0, L_1, NULL);
		// public WsClient(IPAddress address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_2, __this, NULL);
		__this->___WebSocket_28 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_28), (void*)L_2);
		// public WsClient(IPAddress address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Void NetCoreServer.WsClient::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient__ctor_mD4CCE9380B9599C83D4F0885650B6EDACB68BA88 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, String_t* ___0_address, int32_t ___1_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WsClient(string address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		String_t* L_0 = ___0_address;
		int32_t L_1 = ___1_port;
		HttpClient__ctor_m6D918605963EDB9C09EF1242C5C031556E1F7E8E(__this, L_0, L_1, NULL);
		// public WsClient(string address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_2, __this, NULL);
		__this->___WebSocket_28 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_28), (void*)L_2);
		// public WsClient(string address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Void NetCoreServer.WsClient::.ctor(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient__ctor_m87B4359B12A70F2A5507224B2C45332AA7D1DF77 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_endpoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WsClient(IPEndPoint endpoint) : base(endpoint) { WebSocket = new WebSocket(this); }
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_0 = ___0_endpoint;
		HttpClient__ctor_m54C7DA661FBC53153ED71FE8F0D4AE6FD472E438(__this, L_0, NULL);
		// public WsClient(IPEndPoint endpoint) : base(endpoint) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_1, __this, NULL);
		__this->___WebSocket_28 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_28), (void*)L_1);
		// public WsClient(IPEndPoint endpoint) : base(endpoint) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Boolean NetCoreServer.WsClient::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_Connect_mEE805C41362C62165E01B83F7E26003E1BC4A7D7 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, const RuntimeMethod* method) 
{
	{
		// public override bool Connect() { _syncConnect = true; return base.Connect(); }
		__this->____syncConnect_29 = (bool)1;
		// public override bool Connect() { _syncConnect = true; return base.Connect(); }
		bool L_0;
		L_0 = TcpClient_Connect_m7978ABAFDA7D0E9156B14FD1733CEC70962AE030(__this, NULL);
		return L_0;
	}
}
// System.Boolean NetCoreServer.WsClient::ConnectAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_ConnectAsync_m222F52E027689B916D32339AD4F51B62319A669A (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, const RuntimeMethod* method) 
{
	{
		// public override bool ConnectAsync() { _syncConnect = true; return base.ConnectAsync(); }
		__this->____syncConnect_29 = (bool)1;
		// public override bool ConnectAsync() { _syncConnect = true; return base.ConnectAsync(); }
		bool L_0;
		L_0 = TcpClient_ConnectAsync_m0F7A9219837416F386411DB938870034D377105C(__this, NULL);
		return L_0;
	}
}
// System.Boolean NetCoreServer.WsClient::Close(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_Close_m2DB13191A9502C2FA4D93C5D1F2A2FE5329476C0 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// public virtual bool Close(int status) { SendClose(status, null, 0, 0); base.Disconnect(); return true; }
		int32_t L_0 = ___0_status;
		int64_t L_1;
		L_1 = WsClient_SendClose_m008394C206D21F44E2090519B7428A1AE0480F9F(__this, L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// public virtual bool Close(int status) { SendClose(status, null, 0, 0); base.Disconnect(); return true; }
		bool L_2;
		L_2 = TcpClient_Disconnect_m2EDDC22D2E50247C36663B2053BF2F1DB3B29806(__this, NULL);
		// public virtual bool Close(int status) { SendClose(status, null, 0, 0); base.Disconnect(); return true; }
		return (bool)1;
	}
}
// System.Boolean NetCoreServer.WsClient::CloseAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_CloseAsync_m0B04B53C231538AEB106A7FF72A5D6F815DE70F0 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// public virtual bool CloseAsync(int status) { SendCloseAsync(status, null, 0, 0); base.DisconnectAsync(); return true; }
		int32_t L_0 = ___0_status;
		bool L_1;
		L_1 = WsClient_SendCloseAsync_m514BE3277027CE5DC67A9BC45D5D8D6F1014C0D1(__this, L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// public virtual bool CloseAsync(int status) { SendCloseAsync(status, null, 0, 0); base.DisconnectAsync(); return true; }
		bool L_2;
		L_2 = TcpClient_DisconnectAsync_mD1C89F2F127949B4AE07D7B4C22BD7AD86B02921(__this, NULL);
		// public virtual bool CloseAsync(int status) { SendCloseAsync(status, null, 0, 0); base.DisconnectAsync(); return true; }
		return (bool)1;
	}
}
// System.Int64 NetCoreServer.WsClient::SendText(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsClient_SendText_mF2E8EF66202F2B9B57A56CF68CEB143F9875EAA1 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)129), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_28;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = TcpClient_Send_m43CE8E394811BA4DDC5BF4DB8C769605E0C9452E(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WsClient::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsClient_SendText_m4EFB61DF4ED7A4EA6B39876DAB1CAF9BADA95A53 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)129), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_28;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = TcpClient_Send_m43CE8E394811BA4DDC5BF4DB8C769605E0C9452E(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WsClient::SendTextAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendTextAsync_m942B6EAA81B7BCE361EF85CDA04A03A2E0D480E9 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)129), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_28;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = TcpClient_SendAsync_m46979A52C8AD64337AF082C72726CA27D5D22AB9(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsClient::SendTextAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendTextAsync_m8082E38EEEE465A5AFC55420158E7AF0DE1A7C40 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)129), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_28;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = TcpClient_SendAsync_m46979A52C8AD64337AF082C72726CA27D5D22AB9(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WsClient::SendBinary(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsClient_SendBinary_m41682F534A200E0FB6D88CAFA00A70567304BFF1 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)130), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_28;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = TcpClient_Send_m43CE8E394811BA4DDC5BF4DB8C769605E0C9452E(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WsClient::SendBinary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsClient_SendBinary_m6E72FECED9027DD38B7ECE6647E42C41CACFA271 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)130), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_28;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = TcpClient_Send_m43CE8E394811BA4DDC5BF4DB8C769605E0C9452E(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WsClient::SendBinaryAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendBinaryAsync_m7ABAC04E905363656C7697638147EF6A3D31B60E (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)130), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_28;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = TcpClient_SendAsync_m46979A52C8AD64337AF082C72726CA27D5D22AB9(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsClient::SendBinaryAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendBinaryAsync_m0FF2733CCD5722178CE042E827F7090842E93F12 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)130), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_28;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = TcpClient_SendAsync_m46979A52C8AD64337AF082C72726CA27D5D22AB9(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WsClient::SendClose(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsClient_SendClose_m008394C206D21F44E2090519B7428A1AE0480F9F (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, true, buffer, offset, size, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_buffer;
			int64_t L_7 = ___2_offset;
			int64_t L_8 = ___3_size;
			int32_t L_9 = ___0_status;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)136), (bool)1, L_6, L_7, L_8, L_9, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_10 = __this->___WebSocket_28;
			NullCheck(L_10);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = L_10->___WsSendBuffer_15;
			NullCheck(L_11);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_11, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_13;
			L_13 = TcpClient_Send_m43CE8E394811BA4DDC5BF4DB8C769605E0C9452E(__this, L_12, NULL);
			V_2 = L_13;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		int64_t L_14 = V_2;
		return L_14;
	}
}
// System.Int64 NetCoreServer.WsClient::SendClose(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsClient_SendClose_m5B38E6736E3B7873D298F10F5123DA5E4A1D6E4A (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, int32_t ___0_status, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___1_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, true, data, 0, data.Length, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = ___0_status;
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)136), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), L_11, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_12 = __this->___WebSocket_28;
			NullCheck(L_12);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = L_12->___WsSendBuffer_15;
			NullCheck(L_13);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
			L_14 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_13, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_15;
			L_15 = TcpClient_Send_m43CE8E394811BA4DDC5BF4DB8C769605E0C9452E(__this, L_14, NULL);
			V_3 = L_15;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_16 = V_3;
		return L_16;
	}
}
// System.Boolean NetCoreServer.WsClient::SendCloseAsync(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendCloseAsync_m514BE3277027CE5DC67A9BC45D5D8D6F1014C0D1 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, true, buffer, offset, size, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_buffer;
			int64_t L_7 = ___2_offset;
			int64_t L_8 = ___3_size;
			int32_t L_9 = ___0_status;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)136), (bool)1, L_6, L_7, L_8, L_9, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_10 = __this->___WebSocket_28;
			NullCheck(L_10);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = L_10->___WsSendBuffer_15;
			NullCheck(L_11);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_11, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_13;
			L_13 = TcpClient_SendAsync_m46979A52C8AD64337AF082C72726CA27D5D22AB9(__this, L_12, NULL);
			V_2 = L_13;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean NetCoreServer.WsClient::SendCloseAsync(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendCloseAsync_m5FAF970D6A7AC73F3556DC90E865B075CAECF958 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, int32_t ___0_status, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___1_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, true, data, 0, data.Length, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = ___0_status;
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)136), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), L_11, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_12 = __this->___WebSocket_28;
			NullCheck(L_12);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = L_12->___WsSendBuffer_15;
			NullCheck(L_13);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
			L_14 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_13, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_15;
			L_15 = TcpClient_SendAsync_m46979A52C8AD64337AF082C72726CA27D5D22AB9(__this, L_14, NULL);
			V_3 = L_15;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_16 = V_3;
		return L_16;
	}
}
// System.Int64 NetCoreServer.WsClient::SendPing(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsClient_SendPing_mA476477F47D313879FA10073C06D10CDFB222104 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)137), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_28;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = TcpClient_Send_m43CE8E394811BA4DDC5BF4DB8C769605E0C9452E(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WsClient::SendPing(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsClient_SendPing_mC42A3A991A8D7E02AB209AD4D395424FF7C2443B (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)137), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_28;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = TcpClient_Send_m43CE8E394811BA4DDC5BF4DB8C769605E0C9452E(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WsClient::SendPingAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendPingAsync_m254A2993BA2633A7FFBDC60B46B99A7FF9717610 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)137), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_28;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = TcpClient_SendAsync_m46979A52C8AD64337AF082C72726CA27D5D22AB9(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsClient::SendPingAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendPingAsync_m0937711F042BC738822FA708DEDE4A07A9A41A6E (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)137), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_28;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = TcpClient_SendAsync_m46979A52C8AD64337AF082C72726CA27D5D22AB9(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WsClient::SendPong(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsClient_SendPong_m2042C02DDB426AE04677F3D084E8A28DF0D95D8F (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)138), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_28;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = TcpClient_Send_m43CE8E394811BA4DDC5BF4DB8C769605E0C9452E(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WsClient::SendPong(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsClient_SendPong_m6B3B52E2A10010D0FE3F2F06A0AE5EEE5D8DF323 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)138), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_28;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = TcpClient_Send_m43CE8E394811BA4DDC5BF4DB8C769605E0C9452E(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WsClient::SendPongAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendPongAsync_m19D1512F07A4AB02823319260F2A54E5F82D7A71 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)138), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_28;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = TcpClient_SendAsync_m46979A52C8AD64337AF082C72726CA27D5D22AB9(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsClient::SendPongAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_SendPongAsync_mA7AFEAE48AF1913331245E8DA34554FA66A15E39 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_28;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)138), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_28;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = TcpClient_SendAsync_m46979A52C8AD64337AF082C72726CA27D5D22AB9(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.String NetCoreServer.WsClient::ReceiveText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WsClient_ReceiveText_mD74908CDA7BEAC0DC90F24C9E8FB5623A827F423 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_0 = NULL;
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Buffer result = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_0 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_0, NULL);
		V_0 = L_0;
		// if (!WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = __this->___WebSocket_28;
		NullCheck(L_1);
		bool L_2 = L_1->___WsHandshaked_7;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_3 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_4, NULL);
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6;
		L_6 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_3, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), NULL);
		return L_6;
	}

IL_0025:
	{
		// Buffer cache = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_7 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_7, NULL);
		V_1 = L_7;
		goto IL_007e;
	}

IL_002d:
	{
		// int required = WebSocket.RequiredReceiveFrameSize();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_28;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = WebSocket_RequiredReceiveFrameSize_m22BE754E76A88D50404F9E9D3E8E898E227FB8B4(L_8, NULL);
		V_2 = L_9;
		// cache.Resize(required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Buffer_Resize_m287C14F99E306780993169E02C05F4725D91A668(L_10, ((int64_t)L_11), NULL);
		// int received = (int)base.Receive(cache.Data, 0, required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_12 = V_1;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_12, NULL);
		int32_t L_14 = V_2;
		int64_t L_15;
		L_15 = TcpClient_Receive_mBD8196E6E45085869FD5DA18069D892C80E671EB(__this, L_13, ((int64_t)0), ((int64_t)L_14), NULL);
		V_3 = ((int32_t)L_15);
		// if (received != required)
		int32_t L_16 = V_3;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_0069;
		}
	}
	{
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_18 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_19 = V_0;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_19, NULL);
		NullCheck(L_20);
		NullCheck(L_18);
		String_t* L_21;
		L_21 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_18, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_20)->max_length))), NULL);
		return L_21;
	}

IL_0069:
	{
		// WebSocket.PrepareReceiveFrame(cache.Data, 0, received);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_22 = __this->___WebSocket_28;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_23 = V_1;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_23, NULL);
		int32_t L_25 = V_3;
		NullCheck(L_22);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_22, L_24, ((int64_t)0), ((int64_t)L_25), NULL);
	}

IL_007e:
	{
		// while (!WebSocket.WsReceived)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_26 = __this->___WebSocket_28;
		NullCheck(L_26);
		bool L_27 = L_26->___WsReceived_8;
		if (!L_27)
		{
			goto IL_002d;
		}
	}
	{
		// result.Append(WebSocket.WsReceiveBuffer.ToArray(), WebSocket.WsHeaderSize, WebSocket.WsHeaderSize + WebSocket.WsPayloadSize);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_28 = V_0;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_29 = __this->___WebSocket_28;
		NullCheck(L_29);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_30 = L_29->___WsReceiveBuffer_12;
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_30, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_32 = __this->___WebSocket_28;
		NullCheck(L_32);
		int32_t L_33 = L_32->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_34 = __this->___WebSocket_28;
		NullCheck(L_34);
		int32_t L_35 = L_34->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_36 = __this->___WebSocket_28;
		NullCheck(L_36);
		int32_t L_37 = L_36->___WsPayloadSize_10;
		NullCheck(L_28);
		int64_t L_38;
		L_38 = Buffer_Append_m2459291B4DF91A57178461DEB63F96F940AC6117(L_28, L_31, ((int64_t)L_33), ((int64_t)((int32_t)il2cpp_codegen_add(L_35, L_37))), NULL);
		// WebSocket.PrepareReceiveFrame(null, 0, 0);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_39 = __this->___WebSocket_28;
		NullCheck(L_39);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_39, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_40 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_41 = V_0;
		NullCheck(L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_41, NULL);
		NullCheck(L_42);
		NullCheck(L_40);
		String_t* L_43;
		L_43 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_40, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_42)->max_length))), NULL);
		return L_43;
	}
}
// NetCoreServer.Buffer NetCoreServer.WsClient::ReceiveBinary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* WsClient_ReceiveBinary_m8FE07A41A2612BFD00E143BEDA06B8F71BCB3DB6 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_0 = NULL;
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Buffer result = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_0 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_0, NULL);
		V_0 = L_0;
		// if (!WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = __this->___WebSocket_28;
		NullCheck(L_1);
		bool L_2 = L_1->___WsHandshaked_7;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_3 = V_0;
		return L_3;
	}

IL_0015:
	{
		// Buffer cache = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_4 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_4, NULL);
		V_1 = L_4;
		goto IL_005e;
	}

IL_001d:
	{
		// int required = WebSocket.RequiredReceiveFrameSize();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_28;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = WebSocket_RequiredReceiveFrameSize_m22BE754E76A88D50404F9E9D3E8E898E227FB8B4(L_5, NULL);
		V_2 = L_6;
		// cache.Resize(required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Buffer_Resize_m287C14F99E306780993169E02C05F4725D91A668(L_7, ((int64_t)L_8), NULL);
		// int received = (int)base.Receive(cache.Data, 0, required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_9 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_9, NULL);
		int32_t L_11 = V_2;
		int64_t L_12;
		L_12 = TcpClient_Receive_mBD8196E6E45085869FD5DA18069D892C80E671EB(__this, L_10, ((int64_t)0), ((int64_t)L_11), NULL);
		V_3 = ((int32_t)L_12);
		// if (received != required)
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_0049;
		}
	}
	{
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_15 = V_0;
		return L_15;
	}

IL_0049:
	{
		// WebSocket.PrepareReceiveFrame(cache.Data, 0, received);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_16 = __this->___WebSocket_28;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_17 = V_1;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_17, NULL);
		int32_t L_19 = V_3;
		NullCheck(L_16);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_16, L_18, ((int64_t)0), ((int64_t)L_19), NULL);
	}

IL_005e:
	{
		// while (!WebSocket.WsReceived)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_20 = __this->___WebSocket_28;
		NullCheck(L_20);
		bool L_21 = L_20->___WsReceived_8;
		if (!L_21)
		{
			goto IL_001d;
		}
	}
	{
		// result.Append(WebSocket.WsReceiveBuffer.ToArray(), WebSocket.WsHeaderSize, WebSocket.WsHeaderSize + WebSocket.WsPayloadSize);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_22 = V_0;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_23 = __this->___WebSocket_28;
		NullCheck(L_23);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_24 = L_23->___WsReceiveBuffer_12;
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_24, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_26 = __this->___WebSocket_28;
		NullCheck(L_26);
		int32_t L_27 = L_26->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_28 = __this->___WebSocket_28;
		NullCheck(L_28);
		int32_t L_29 = L_28->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_30 = __this->___WebSocket_28;
		NullCheck(L_30);
		int32_t L_31 = L_30->___WsPayloadSize_10;
		NullCheck(L_22);
		int64_t L_32;
		L_32 = Buffer_Append_m2459291B4DF91A57178461DEB63F96F940AC6117(L_22, L_25, ((int64_t)L_27), ((int64_t)((int32_t)il2cpp_codegen_add(L_29, L_31))), NULL);
		// WebSocket.PrepareReceiveFrame(null, 0, 0);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_33 = __this->___WebSocket_28;
		NullCheck(L_33);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_33, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_34 = V_0;
		return L_34;
	}
}
// System.Void NetCoreServer.WsClient::OnConnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnConnected_mC7E8C047FCB6A61A5014CFA8AA1E311BC0A6AD5B (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebSocket.ClearWsBuffers();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		WebSocket_ClearWsBuffers_mEACF0B65CC77BDDC5EC45F81BD214C64C71D87C1(L_0, NULL);
		// OnWsConnecting(Request);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_1;
		L_1 = HttpClient_get_Request_m3AF2795F7A9436858FE05D850558280EB57855C6_inline(__this, NULL);
		VirtualActionInvoker1< HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* >::Invoke(46 /* System.Void NetCoreServer.WsClient::OnWsConnecting(NetCoreServer.HttpRequest) */, __this, L_1);
		// Request.SetBody();
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_2;
		L_2 = HttpClient_get_Request_m3AF2795F7A9436858FE05D850558280EB57855C6_inline(__this, NULL);
		NullCheck(L_2);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_3;
		L_3 = HttpRequest_SetBody_mAAEB4CA114BA7234B556CEB5635EB04EC9E7ACE0(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// if (_syncConnect)
		bool L_4 = __this->____syncConnect_29;
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		// Send(Request.Cache.Data);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_5;
		L_5 = HttpClient_get_Request_m3AF2795F7A9436858FE05D850558280EB57855C6_inline(__this, NULL);
		NullCheck(L_5);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_6;
		L_6 = HttpRequest_get_Cache_m343FBA220345DD12A9273ACC959CBD1BCBBAC0D4_inline(L_5, NULL);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_6, NULL);
		int64_t L_8;
		L_8 = VirtualFuncInvoker1< int64_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Int64 NetCoreServer.TcpClient::Send(System.Byte[]) */, __this, L_7);
		return;
	}

IL_0048:
	{
		// SendAsync(Request.Cache.Data);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_9;
		L_9 = HttpClient_get_Request_m3AF2795F7A9436858FE05D850558280EB57855C6_inline(__this, NULL);
		NullCheck(L_9);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_10;
		L_10 = HttpRequest_get_Cache_m343FBA220345DD12A9273ACC959CBD1BCBBAC0D4_inline(L_9, NULL);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_10, NULL);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(15 /* System.Boolean NetCoreServer.TcpClient::SendAsync(System.Byte[]) */, __this, L_11);
		// }
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnDisconnected_mA633289AA1A4ED750EE9090B480E8F1C93A188A9 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// WebSocket.WsHandshaked = false;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_28;
		NullCheck(L_2);
		L_2->___WsHandshaked_7 = (bool)0;
		// OnWsDisconnected();
		VirtualActionInvoker0::Invoke(50 /* System.Void NetCoreServer.WsClient::OnWsDisconnected() */, __this);
	}

IL_001f:
	{
		// Request.Clear();
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_3;
		L_3 = HttpClient_get_Request_m3AF2795F7A9436858FE05D850558280EB57855C6_inline(__this, NULL);
		NullCheck(L_3);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_4;
		L_4 = HttpRequest_Clear_mF988679ABD84F934E81C4D54EFC463943D479D9B(L_3, NULL);
		// Response.Clear();
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_5;
		L_5 = HttpClient_get_Response_m3B1798352B6691E18C9C21A207257273655843DB_inline(__this, NULL);
		NullCheck(L_5);
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_6;
		L_6 = HttpResponse_Clear_mD749A83A49CC84434689576B16D2260B8215699A(L_5, NULL);
		// WebSocket.ClearWsBuffers();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_7 = __this->___WebSocket_28;
		NullCheck(L_7);
		WebSocket_ClearWsBuffers_mEACF0B65CC77BDDC5EC45F81BD214C64C71D87C1(L_7, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnReceived_mA2FEC6D9FB2EE98A79D7BBF67B2D1DB4D334E769 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// WebSocket.PrepareReceiveFrame(buffer, offset, size);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		int64_t L_4 = ___1_offset;
		int64_t L_5 = ___2_size;
		NullCheck(L_2);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_2, L_3, L_4, L_5, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// base.OnReceived(buffer, offset, size);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
		int64_t L_7 = ___1_offset;
		int64_t L_8 = ___2_size;
		HttpClient_OnReceived_m06C41034B57E12FA5DF45A9DCA25262D5C875406(__this, L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnReceivedResponseHeader(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnReceivedResponseHeader_m71EEB3CF8E68F4447C4026AB58B7109EE81ADCDE (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (!WebSocket.PerformClientUpgrade(response, Id))
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_28;
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_3 = ___0_response;
		Guid_t L_4;
		L_4 = TcpClient_get_Id_mFB8E4DF514D9B6A467198A060B7EF0BE62F4357F_inline(__this, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = WebSocket_PerformClientUpgrade_m61E2944A7AE9EFD4914483799FA4842B4C0D2EBA(L_2, L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		// base.OnReceivedResponseHeader(response);
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_6 = ___0_response;
		HttpClient_OnReceivedResponseHeader_mB796D7F1D26D28B92C26CC614EA785D0EDDC4DD0(__this, L_6, NULL);
		// return;
		return;
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnReceivedResponse(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnReceivedResponse_m2787444EA242709E6F88A5A8831966E0E3F17A5D (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// var body = Request.Body;
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_2;
		L_2 = HttpClient_get_Request_m3AF2795F7A9436858FE05D850558280EB57855C6_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = HttpRequest_get_Body_m3A0C5431AC84A0A5606FB1E8F3C9941D748D5074(L_2, NULL);
		V_0 = L_3;
		// var data = Encoding.UTF8.GetBytes(body);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_5 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		V_1 = L_6;
		// WebSocket.PrepareReceiveFrame(data, 0, data.Length);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_7 = __this->___WebSocket_28;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_7, L_8, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), NULL);
		// return;
		return;
	}

IL_0038:
	{
		// base.OnReceivedResponse(response);
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_10 = ___0_response;
		HttpClient_OnReceivedResponse_m10FAF25B525585C9353F99BE3162DCC7FD5BB631(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnReceivedResponseError(NetCoreServer.HttpResponse,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnReceivedResponseError_m6614DABA28DE4817E9B6A13222410C4878835809 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_28;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnError(new SocketError());
		VirtualActionInvoker1< int32_t >::Invoke(27 /* System.Void NetCoreServer.TcpClient::OnError(System.Net.Sockets.SocketError) */, __this, 0);
		// return;
		return;
	}

IL_0015:
	{
		// base.OnReceivedResponseError(response, error);
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_2 = ___0_response;
		String_t* L_3 = ___1_error;
		HttpClient_OnReceivedResponseError_m2553D87001177BB38E1026D28D639EF2376DE68C(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnWsConnecting(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnWsConnecting_mE46A6F3A0632D560359D6442EAFDDFB06399B3A2 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnecting(HttpRequest request) {}
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnWsConnected(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnWsConnected_m93F1CBAD6A2CCB4FAB8DF821DCE766EDD153A165 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnected(HttpResponse response) {}
		return;
	}
}
// System.Boolean NetCoreServer.WsClient::OnWsConnecting(NetCoreServer.HttpRequest,NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsClient_OnWsConnecting_m3B33F063D3DBEFB1E30D77DEBBA16C1FF4528F3D (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___1_response, const RuntimeMethod* method) 
{
	{
		// public virtual bool OnWsConnecting(HttpRequest request, HttpResponse response) { return true; }
		return (bool)1;
	}
}
// System.Void NetCoreServer.WsClient::OnWsConnected(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnWsConnected_m688E6B359C5DB75C200BC5BFE6C0C1DF512544F7 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnected(HttpRequest request) {}
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnWsDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnWsDisconnected_m36F6DEF1148660A3AEC409ECD0510019C245EBC0 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsDisconnected() {}
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnWsReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnWsReceived_m8F4D073B96CA9EE580E62562A49153AAF743C794 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsReceived(byte[] buffer, long offset, long size) {}
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnWsClose(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnWsClose_m84064E2727B3B0DE055D480E289DFD20226EC38A (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsClose(byte[] buffer, long offset, long size) { CloseAsync(1000); }
		bool L_0;
		L_0 = VirtualFuncInvoker1< bool, int32_t >::Invoke(45 /* System.Boolean NetCoreServer.WsClient::CloseAsync(System.Int32) */, __this, ((int32_t)1000));
		// public virtual void OnWsClose(byte[] buffer, long offset, long size) { CloseAsync(1000); }
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnWsPing(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnWsPing_m1C69A8033CF61FA7EB1C66D6FD0F733A338D3E57 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsPing(byte[] buffer, long offset, long size) { SendPongAsync(buffer, offset, size); }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int64_t L_1 = ___1_offset;
		int64_t L_2 = ___2_size;
		bool L_3;
		L_3 = WsClient_SendPongAsync_m19D1512F07A4AB02823319260F2A54E5F82D7A71(__this, L_0, L_1, L_2, NULL);
		// public virtual void OnWsPing(byte[] buffer, long offset, long size) { SendPongAsync(buffer, offset, size); }
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnWsPong(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnWsPong_mF2856D29F88F5D8485BB7E46CD724DA25D464435 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsPong(byte[] buffer, long offset, long size) {}
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnWsError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnWsError_m269361997286A25FE7850E4A16A703A78AB8850F (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsError(string error) { OnError(SocketError.SocketError); }
		VirtualActionInvoker1< int32_t >::Invoke(27 /* System.Void NetCoreServer.TcpClient::OnError(System.Net.Sockets.SocketError) */, __this, (-1));
		// public virtual void OnWsError(string error) { OnError(SocketError.SocketError); }
		return;
	}
}
// System.Void NetCoreServer.WsClient::OnWsError(System.Net.Sockets.SocketError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_OnWsError_m055E5E18DA8682078308BD44F7004ECD451F03E9 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, int32_t ___0_error, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsError(SocketError error) { OnError(error); }
		int32_t L_0 = ___0_error;
		VirtualActionInvoker1< int32_t >::Invoke(27 /* System.Void NetCoreServer.TcpClient::OnError(System.Net.Sockets.SocketError) */, __this, L_0);
		// public virtual void OnWsError(SocketError error) { OnError(error); }
		return;
	}
}
// System.Void NetCoreServer.WsClient::SendResponse(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsClient_SendResponse_m000D13C6988A46CA725E289E66D3DF5E2D4AE8E8 (WsClient_tE89E96DD7BD48BEB35FA3F2C5F0903E7805E29B4* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	{
		// public virtual void SendResponse(HttpResponse response) { }
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
// System.Void NetCoreServer.WssClient::.ctor(NetCoreServer.SslContext,System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient__ctor_m8993308F1C055A220E3A1B70B1FA24329B023946 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___1_address, int32_t ___2_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WssClient(SslContext context, IPAddress address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* L_0 = ___0_context;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1 = ___1_address;
		int32_t L_2 = ___2_port;
		HttpsClient__ctor_m60A5E4DB61B02572B009AB42638211D832101475(__this, L_0, L_1, L_2, NULL);
		// public WssClient(SslContext context, IPAddress address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_3 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_3, __this, NULL);
		__this->___WebSocket_33 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_33), (void*)L_3);
		// public WssClient(SslContext context, IPAddress address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Void NetCoreServer.WssClient::.ctor(NetCoreServer.SslContext,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient__ctor_mE0CADA29AD9F8A24D8F93D8A2CAB3D34388F047E (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, String_t* ___1_address, int32_t ___2_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WssClient(SslContext context, string address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* L_0 = ___0_context;
		String_t* L_1 = ___1_address;
		int32_t L_2 = ___2_port;
		HttpsClient__ctor_mEEB3AD97BDE7057462D561B646FF24B31ABB60A1(__this, L_0, L_1, L_2, NULL);
		// public WssClient(SslContext context, string address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_3 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_3, __this, NULL);
		__this->___WebSocket_33 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_33), (void*)L_3);
		// public WssClient(SslContext context, string address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Void NetCoreServer.WssClient::.ctor(NetCoreServer.SslContext,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient__ctor_m2BB9204AA144F00995DFFE7FCD169A981C4FBBA6 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___1_endpoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WssClient(SslContext context, IPEndPoint endpoint) : base(context, endpoint) { WebSocket = new WebSocket(this); }
		SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* L_0 = ___0_context;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1 = ___1_endpoint;
		HttpsClient__ctor_m4EB77D72E5C38964691DB7BA634E7B8DE63B4DF4(__this, L_0, L_1, NULL);
		// public WssClient(SslContext context, IPEndPoint endpoint) : base(context, endpoint) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_2, __this, NULL);
		__this->___WebSocket_33 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_33), (void*)L_2);
		// public WssClient(SslContext context, IPEndPoint endpoint) : base(context, endpoint) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Boolean NetCoreServer.WssClient::Connect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_Connect_m6911FB2EA965BA554617069523CB32A261700226 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, const RuntimeMethod* method) 
{
	{
		// public override bool Connect() { _syncConnect = true; return base.Connect(); }
		__this->____syncConnect_34 = (bool)1;
		// public override bool Connect() { _syncConnect = true; return base.Connect(); }
		bool L_0;
		L_0 = SslClient_Connect_mCE7513E6D2C0D3F787F11F786B638FE494127467(__this, NULL);
		return L_0;
	}
}
// System.Boolean NetCoreServer.WssClient::ConnectAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_ConnectAsync_mB3B41A811CDBF006492A9CB4CA17B6CFB8F59858 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, const RuntimeMethod* method) 
{
	{
		// public override bool ConnectAsync() { _syncConnect = true; return base.ConnectAsync(); }
		__this->____syncConnect_34 = (bool)1;
		// public override bool ConnectAsync() { _syncConnect = true; return base.ConnectAsync(); }
		bool L_0;
		L_0 = SslClient_ConnectAsync_m773B8B44961483E2D7B98CD9077DBBC9F49B3E4D(__this, NULL);
		return L_0;
	}
}
// System.Boolean NetCoreServer.WssClient::Close(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_Close_mBB1EC8EB0DE51937BAC85EF51526E1AFAB2D0131 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// public virtual bool Close(int status) { SendClose(status, null, 0, 0); base.Disconnect(); return true; }
		int32_t L_0 = ___0_status;
		int64_t L_1;
		L_1 = WssClient_SendClose_m148F36A9524562D70E08F553AD841F669D5E1F72(__this, L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// public virtual bool Close(int status) { SendClose(status, null, 0, 0); base.Disconnect(); return true; }
		bool L_2;
		L_2 = SslClient_Disconnect_m6533C40E14DA2347674C7186B6C2C35CE7A64668(__this, NULL);
		// public virtual bool Close(int status) { SendClose(status, null, 0, 0); base.Disconnect(); return true; }
		return (bool)1;
	}
}
// System.Boolean NetCoreServer.WssClient::CloseAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_CloseAsync_m7321FED241429BE801E888EECB4C935551532763 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// public virtual bool CloseAsync(int status) { SendCloseAsync(status, null, 0, 0); base.DisconnectAsync(); return true; }
		int32_t L_0 = ___0_status;
		bool L_1;
		L_1 = WssClient_SendCloseAsync_mDA8AB1C9A084FBCB30FC5763365588C45E80424D(__this, L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// public virtual bool CloseAsync(int status) { SendCloseAsync(status, null, 0, 0); base.DisconnectAsync(); return true; }
		bool L_2;
		L_2 = SslClient_DisconnectAsync_m5E36F90E0AB54AF03BBAD16194A7711838D12AF1(__this, NULL);
		// public virtual bool CloseAsync(int status) { SendCloseAsync(status, null, 0, 0); base.DisconnectAsync(); return true; }
		return (bool)1;
	}
}
// System.Int64 NetCoreServer.WssClient::SendText(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssClient_SendText_m34C84F8D29673A7EF7951CB2DD40FBEC741D16C1 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)129), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_33;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = SslClient_Send_mFDC4BAB93F84A94ACD7D3E66DAB1FBE3C630268E(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WssClient::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssClient_SendText_mEED5CE6F5192CDAEB6A9F93F9B68E5DBFFE322F7 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)129), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_33;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = SslClient_Send_mFDC4BAB93F84A94ACD7D3E66DAB1FBE3C630268E(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WssClient::SendTextAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendTextAsync_m88ADA10605961EC04756AE38D51760BD5CE87FAD (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)129), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_33;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = SslClient_SendAsync_mC9CE9AB1C8E69522509C9CF11472CD647A4072F4(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssClient::SendTextAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendTextAsync_m82435CB829990DB62BF792C2677A421CAB682460 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)129), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_33;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = SslClient_SendAsync_mC9CE9AB1C8E69522509C9CF11472CD647A4072F4(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WssClient::SendBinary(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssClient_SendBinary_m40CCC6BB6D09DEA4034023CB4F1F25911197BC85 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)130), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_33;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = SslClient_Send_mFDC4BAB93F84A94ACD7D3E66DAB1FBE3C630268E(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WssClient::SendBinary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssClient_SendBinary_m4EE035C97784C86D6548B9746C4B3688064D74D7 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)130), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_33;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = SslClient_Send_mFDC4BAB93F84A94ACD7D3E66DAB1FBE3C630268E(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WssClient::SendBinaryAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendBinaryAsync_mFC187CECE12031FFC8D0EE02A351CECB884E65AC (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)130), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_33;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = SslClient_SendAsync_mC9CE9AB1C8E69522509C9CF11472CD647A4072F4(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssClient::SendBinaryAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendBinaryAsync_m24119B619A5942CB5CE5299CEBEE9AEDD2091CA5 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)130), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_33;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = SslClient_SendAsync_mC9CE9AB1C8E69522509C9CF11472CD647A4072F4(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WssClient::SendClose(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssClient_SendClose_m148F36A9524562D70E08F553AD841F669D5E1F72 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, true, buffer, offset, size, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_buffer;
			int64_t L_7 = ___2_offset;
			int64_t L_8 = ___3_size;
			int32_t L_9 = ___0_status;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)136), (bool)1, L_6, L_7, L_8, L_9, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_10 = __this->___WebSocket_33;
			NullCheck(L_10);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = L_10->___WsSendBuffer_15;
			NullCheck(L_11);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_11, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_13;
			L_13 = SslClient_Send_mFDC4BAB93F84A94ACD7D3E66DAB1FBE3C630268E(__this, L_12, NULL);
			V_2 = L_13;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		int64_t L_14 = V_2;
		return L_14;
	}
}
// System.Int64 NetCoreServer.WssClient::SendClose(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssClient_SendClose_mE22D2C40B94B77EE3C8D5B685234BB343B15CDE2 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, int32_t ___0_status, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___1_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, true, data, 0, data.Length, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = ___0_status;
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)136), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), L_11, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_12 = __this->___WebSocket_33;
			NullCheck(L_12);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = L_12->___WsSendBuffer_15;
			NullCheck(L_13);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
			L_14 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_13, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_15;
			L_15 = SslClient_Send_mFDC4BAB93F84A94ACD7D3E66DAB1FBE3C630268E(__this, L_14, NULL);
			V_3 = L_15;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_16 = V_3;
		return L_16;
	}
}
// System.Boolean NetCoreServer.WssClient::SendCloseAsync(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendCloseAsync_mDA8AB1C9A084FBCB30FC5763365588C45E80424D (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, true, buffer, offset, size, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_buffer;
			int64_t L_7 = ___2_offset;
			int64_t L_8 = ___3_size;
			int32_t L_9 = ___0_status;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)136), (bool)1, L_6, L_7, L_8, L_9, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_10 = __this->___WebSocket_33;
			NullCheck(L_10);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = L_10->___WsSendBuffer_15;
			NullCheck(L_11);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_11, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_13;
			L_13 = SslClient_SendAsync_mC9CE9AB1C8E69522509C9CF11472CD647A4072F4(__this, L_12, NULL);
			V_2 = L_13;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean NetCoreServer.WssClient::SendCloseAsync(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendCloseAsync_mF13B767A1C24A6FA85D6CCD1819B437CBFD6DE30 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, int32_t ___0_status, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___1_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, true, data, 0, data.Length, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = ___0_status;
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)136), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), L_11, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_12 = __this->___WebSocket_33;
			NullCheck(L_12);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = L_12->___WsSendBuffer_15;
			NullCheck(L_13);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
			L_14 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_13, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_15;
			L_15 = SslClient_SendAsync_mC9CE9AB1C8E69522509C9CF11472CD647A4072F4(__this, L_14, NULL);
			V_3 = L_15;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_16 = V_3;
		return L_16;
	}
}
// System.Int64 NetCoreServer.WssClient::SendPing(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssClient_SendPing_m0020D9DE0BD09BB5289CB7239190E1287B3C5F43 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)137), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_33;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = SslClient_Send_mFDC4BAB93F84A94ACD7D3E66DAB1FBE3C630268E(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WssClient::SendPing(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssClient_SendPing_m181C8EB950A65CC3449BB891786714FE7CAFA551 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)137), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_33;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = SslClient_Send_mFDC4BAB93F84A94ACD7D3E66DAB1FBE3C630268E(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WssClient::SendPingAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendPingAsync_m3354143B6CA44C1724F773CC9870EF07E44A84A3 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)137), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_33;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = SslClient_SendAsync_mC9CE9AB1C8E69522509C9CF11472CD647A4072F4(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssClient::SendPingAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendPingAsync_m809BF808B7FB1BD866A92691507B10B0D5AD3D36 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)137), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_33;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = SslClient_SendAsync_mC9CE9AB1C8E69522509C9CF11472CD647A4072F4(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WssClient::SendPong(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssClient_SendPong_m80C186D53116CC4D1CCC62923C0B0100B167A9C3 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)138), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_33;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = SslClient_Send_mFDC4BAB93F84A94ACD7D3E66DAB1FBE3C630268E(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WssClient::SendPong(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssClient_SendPong_m58D82727F9661C1980DD9E7955FAA7CB4AE9A1B8 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)138), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_33;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = SslClient_Send_mFDC4BAB93F84A94ACD7D3E66DAB1FBE3C630268E(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WssClient::SendPongAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendPongAsync_mBDB83F2278E535E4667EA15108FFA8814376DAE6 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, true, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)138), (bool)1, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_33;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = SslClient_SendAsync_mC9CE9AB1C8E69522509C9CF11472CD647A4072F4(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssClient::SendPongAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_SendPongAsync_m4A791DE893410ECBB00CE8E73315F92FB5F58AC4 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_33;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)138), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_33;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = SslClient_SendAsync_mC9CE9AB1C8E69522509C9CF11472CD647A4072F4(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.String NetCoreServer.WssClient::ReceiveText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WssClient_ReceiveText_mD5558A1E96FB06B2802473C51197FC21E4F06FEB (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_0 = NULL;
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Buffer result = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_0 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_0, NULL);
		V_0 = L_0;
		// if (!WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = __this->___WebSocket_33;
		NullCheck(L_1);
		bool L_2 = L_1->___WsHandshaked_7;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_3 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_4, NULL);
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6;
		L_6 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_3, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), NULL);
		return L_6;
	}

IL_0025:
	{
		// Buffer cache = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_7 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_7, NULL);
		V_1 = L_7;
		goto IL_007e;
	}

IL_002d:
	{
		// int required = WebSocket.RequiredReceiveFrameSize();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_33;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = WebSocket_RequiredReceiveFrameSize_m22BE754E76A88D50404F9E9D3E8E898E227FB8B4(L_8, NULL);
		V_2 = L_9;
		// cache.Resize(required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Buffer_Resize_m287C14F99E306780993169E02C05F4725D91A668(L_10, ((int64_t)L_11), NULL);
		// int received = (int)base.Receive(cache.Data, 0, required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_12 = V_1;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_12, NULL);
		int32_t L_14 = V_2;
		int64_t L_15;
		L_15 = SslClient_Receive_mA9672491D4F1BB0337212B992D4B72E237DC25E4(__this, L_13, ((int64_t)0), ((int64_t)L_14), NULL);
		V_3 = ((int32_t)L_15);
		// if (received != required)
		int32_t L_16 = V_3;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_0069;
		}
	}
	{
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_18 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_19 = V_0;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_19, NULL);
		NullCheck(L_20);
		NullCheck(L_18);
		String_t* L_21;
		L_21 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_18, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_20)->max_length))), NULL);
		return L_21;
	}

IL_0069:
	{
		// WebSocket.PrepareReceiveFrame(cache.Data, 0, received);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_22 = __this->___WebSocket_33;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_23 = V_1;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_23, NULL);
		int32_t L_25 = V_3;
		NullCheck(L_22);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_22, L_24, ((int64_t)0), ((int64_t)L_25), NULL);
	}

IL_007e:
	{
		// while (!WebSocket.WsReceived)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_26 = __this->___WebSocket_33;
		NullCheck(L_26);
		bool L_27 = L_26->___WsReceived_8;
		if (!L_27)
		{
			goto IL_002d;
		}
	}
	{
		// result.Append(WebSocket.WsReceiveBuffer.ToArray(), WebSocket.WsHeaderSize, WebSocket.WsHeaderSize + WebSocket.WsPayloadSize);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_28 = V_0;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_29 = __this->___WebSocket_33;
		NullCheck(L_29);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_30 = L_29->___WsReceiveBuffer_12;
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_30, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_32 = __this->___WebSocket_33;
		NullCheck(L_32);
		int32_t L_33 = L_32->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_34 = __this->___WebSocket_33;
		NullCheck(L_34);
		int32_t L_35 = L_34->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_36 = __this->___WebSocket_33;
		NullCheck(L_36);
		int32_t L_37 = L_36->___WsPayloadSize_10;
		NullCheck(L_28);
		int64_t L_38;
		L_38 = Buffer_Append_m2459291B4DF91A57178461DEB63F96F940AC6117(L_28, L_31, ((int64_t)L_33), ((int64_t)((int32_t)il2cpp_codegen_add(L_35, L_37))), NULL);
		// WebSocket.PrepareReceiveFrame(null, 0, 0);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_39 = __this->___WebSocket_33;
		NullCheck(L_39);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_39, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_40 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_41 = V_0;
		NullCheck(L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_41, NULL);
		NullCheck(L_42);
		NullCheck(L_40);
		String_t* L_43;
		L_43 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_40, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_42)->max_length))), NULL);
		return L_43;
	}
}
// NetCoreServer.Buffer NetCoreServer.WssClient::ReceiveBinary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* WssClient_ReceiveBinary_m3EDCC784B59D0751007A55137FA667F6071C39EA (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_0 = NULL;
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Buffer result = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_0 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_0, NULL);
		V_0 = L_0;
		// if (!WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = __this->___WebSocket_33;
		NullCheck(L_1);
		bool L_2 = L_1->___WsHandshaked_7;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_3 = V_0;
		return L_3;
	}

IL_0015:
	{
		// Buffer cache = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_4 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_4, NULL);
		V_1 = L_4;
		goto IL_005e;
	}

IL_001d:
	{
		// int required = WebSocket.RequiredReceiveFrameSize();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_33;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = WebSocket_RequiredReceiveFrameSize_m22BE754E76A88D50404F9E9D3E8E898E227FB8B4(L_5, NULL);
		V_2 = L_6;
		// cache.Resize(required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Buffer_Resize_m287C14F99E306780993169E02C05F4725D91A668(L_7, ((int64_t)L_8), NULL);
		// int received = (int)base.Receive(cache.Data, 0, required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_9 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_9, NULL);
		int32_t L_11 = V_2;
		int64_t L_12;
		L_12 = SslClient_Receive_mA9672491D4F1BB0337212B992D4B72E237DC25E4(__this, L_10, ((int64_t)0), ((int64_t)L_11), NULL);
		V_3 = ((int32_t)L_12);
		// if (received != required)
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_0049;
		}
	}
	{
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_15 = V_0;
		return L_15;
	}

IL_0049:
	{
		// WebSocket.PrepareReceiveFrame(cache.Data, 0, received);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_16 = __this->___WebSocket_33;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_17 = V_1;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_17, NULL);
		int32_t L_19 = V_3;
		NullCheck(L_16);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_16, L_18, ((int64_t)0), ((int64_t)L_19), NULL);
	}

IL_005e:
	{
		// while (!WebSocket.WsReceived)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_20 = __this->___WebSocket_33;
		NullCheck(L_20);
		bool L_21 = L_20->___WsReceived_8;
		if (!L_21)
		{
			goto IL_001d;
		}
	}
	{
		// result.Append(WebSocket.WsReceiveBuffer.ToArray(), WebSocket.WsHeaderSize, WebSocket.WsHeaderSize + WebSocket.WsPayloadSize);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_22 = V_0;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_23 = __this->___WebSocket_33;
		NullCheck(L_23);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_24 = L_23->___WsReceiveBuffer_12;
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_24, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_26 = __this->___WebSocket_33;
		NullCheck(L_26);
		int32_t L_27 = L_26->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_28 = __this->___WebSocket_33;
		NullCheck(L_28);
		int32_t L_29 = L_28->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_30 = __this->___WebSocket_33;
		NullCheck(L_30);
		int32_t L_31 = L_30->___WsPayloadSize_10;
		NullCheck(L_22);
		int64_t L_32;
		L_32 = Buffer_Append_m2459291B4DF91A57178461DEB63F96F940AC6117(L_22, L_25, ((int64_t)L_27), ((int64_t)((int32_t)il2cpp_codegen_add(L_29, L_31))), NULL);
		// WebSocket.PrepareReceiveFrame(null, 0, 0);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_33 = __this->___WebSocket_33;
		NullCheck(L_33);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_33, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_34 = V_0;
		return L_34;
	}
}
// System.Void NetCoreServer.WssClient::OnHandshaked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnHandshaked_mB04897A20EE31441CEF5DE0F4BD346BB9D70FE6D (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// WebSocket.ClearWsBuffers();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		WebSocket_ClearWsBuffers_mEACF0B65CC77BDDC5EC45F81BD214C64C71D87C1(L_0, NULL);
		// OnWsConnecting(Request);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_1;
		L_1 = HttpsClient_get_Request_m45278DC70A69F8ACABC6FE4C2D91E7F1D6B33D1C_inline(__this, NULL);
		VirtualActionInvoker1< HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* >::Invoke(47 /* System.Void NetCoreServer.WssClient::OnWsConnecting(NetCoreServer.HttpRequest) */, __this, L_1);
		// Request.SetBody();
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_2;
		L_2 = HttpsClient_get_Request_m45278DC70A69F8ACABC6FE4C2D91E7F1D6B33D1C_inline(__this, NULL);
		NullCheck(L_2);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_3;
		L_3 = HttpRequest_SetBody_mAAEB4CA114BA7234B556CEB5635EB04EC9E7ACE0(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		// if (_syncConnect)
		bool L_4 = __this->____syncConnect_34;
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		// Send(Request.Cache.Data);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_5;
		L_5 = HttpsClient_get_Request_m45278DC70A69F8ACABC6FE4C2D91E7F1D6B33D1C_inline(__this, NULL);
		NullCheck(L_5);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_6;
		L_6 = HttpRequest_get_Cache_m343FBA220345DD12A9273ACC959CBD1BCBBAC0D4_inline(L_5, NULL);
		NullCheck(L_6);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_6, NULL);
		int64_t L_8;
		L_8 = VirtualFuncInvoker1< int64_t, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(12 /* System.Int64 NetCoreServer.SslClient::Send(System.Byte[]) */, __this, L_7);
		return;
	}

IL_0048:
	{
		// SendAsync(Request.Cache.Data);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_9;
		L_9 = HttpsClient_get_Request_m45278DC70A69F8ACABC6FE4C2D91E7F1D6B33D1C_inline(__this, NULL);
		NullCheck(L_9);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_10;
		L_10 = HttpRequest_get_Cache_m343FBA220345DD12A9273ACC959CBD1BCBBAC0D4_inline(L_9, NULL);
		NullCheck(L_10);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
		L_11 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_10, NULL);
		bool L_12;
		L_12 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(15 /* System.Boolean NetCoreServer.SslClient::SendAsync(System.Byte[]) */, __this, L_11);
		// }
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnDisconnected_m522572B14EC9D40B8C9372FBC1CBBE854C68D604 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// WebSocket.WsHandshaked = false;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_33;
		NullCheck(L_2);
		L_2->___WsHandshaked_7 = (bool)0;
		// OnWsDisconnected();
		VirtualActionInvoker0::Invoke(51 /* System.Void NetCoreServer.WssClient::OnWsDisconnected() */, __this);
	}

IL_001f:
	{
		// Request.Clear();
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_3;
		L_3 = HttpsClient_get_Request_m45278DC70A69F8ACABC6FE4C2D91E7F1D6B33D1C_inline(__this, NULL);
		NullCheck(L_3);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_4;
		L_4 = HttpRequest_Clear_mF988679ABD84F934E81C4D54EFC463943D479D9B(L_3, NULL);
		// Response.Clear();
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_5;
		L_5 = HttpsClient_get_Response_mB8B85F4F3D45164C24DFCA16EB97959782FFD3A1_inline(__this, NULL);
		NullCheck(L_5);
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_6;
		L_6 = HttpResponse_Clear_mD749A83A49CC84434689576B16D2260B8215699A(L_5, NULL);
		// WebSocket.ClearWsBuffers();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_7 = __this->___WebSocket_33;
		NullCheck(L_7);
		WebSocket_ClearWsBuffers_mEACF0B65CC77BDDC5EC45F81BD214C64C71D87C1(L_7, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnReceived_m3FBA86565F61C70D509A49D6A8301BA8B07CEADE (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// WebSocket.PrepareReceiveFrame(buffer, offset, size);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		int64_t L_4 = ___1_offset;
		int64_t L_5 = ___2_size;
		NullCheck(L_2);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_2, L_3, L_4, L_5, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// base.OnReceived(buffer, offset, size);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
		int64_t L_7 = ___1_offset;
		int64_t L_8 = ___2_size;
		HttpsClient_OnReceived_mD7DA535AC13718685A0146654DC9BABDCB6136F2(__this, L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnReceivedResponseHeader(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnReceivedResponseHeader_m2BC2E0AC8F0729792AADDDB9ADB5451E8C19DA28 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (!WebSocket.PerformClientUpgrade(response, Id))
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_33;
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_3 = ___0_response;
		Guid_t L_4;
		L_4 = SslClient_get_Id_m1CAAEB17E3EC613A3B7BBBCDB5ED6FF03406F561_inline(__this, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = WebSocket_PerformClientUpgrade_m61E2944A7AE9EFD4914483799FA4842B4C0D2EBA(L_2, L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		// base.OnReceivedResponseHeader(response);
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_6 = ___0_response;
		HttpsClient_OnReceivedResponseHeader_m33E524A21A675D1E7CD231980C936D8581D6646C(__this, L_6, NULL);
		// return;
		return;
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnReceivedResponse(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnReceivedResponse_mB5F7C3600725E9AEDC0B1CAD9B496555E226A814 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// var body = Request.Body;
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_2;
		L_2 = HttpsClient_get_Request_m45278DC70A69F8ACABC6FE4C2D91E7F1D6B33D1C_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = HttpRequest_get_Body_m3A0C5431AC84A0A5606FB1E8F3C9941D748D5074(L_2, NULL);
		V_0 = L_3;
		// var data = Encoding.UTF8.GetBytes(body);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_5 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		V_1 = L_6;
		// WebSocket.PrepareReceiveFrame(data, 0, data.Length);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_7 = __this->___WebSocket_33;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_7, L_8, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), NULL);
		// return;
		return;
	}

IL_0038:
	{
		// base.OnReceivedResponse(response);
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_10 = ___0_response;
		HttpsClient_OnReceivedResponse_mA8B53319A334DA061DE62444A0C205627567A251(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnReceivedResponseError(NetCoreServer.HttpResponse,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnReceivedResponseError_mA008DDEBF584FE5BD0E1F0F009CAD0A5F02CC0BC (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_33;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnError(new SocketError());
		VirtualActionInvoker1< int32_t >::Invoke(28 /* System.Void NetCoreServer.SslClient::OnError(System.Net.Sockets.SocketError) */, __this, 0);
		// return;
		return;
	}

IL_0015:
	{
		// base.OnReceivedResponseError(response, error);
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_2 = ___0_response;
		String_t* L_3 = ___1_error;
		HttpsClient_OnReceivedResponseError_m73136BBCD178785BED7DF267C600F8597F1F4389(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnWsConnecting(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnWsConnecting_mE2148783E91AFD21B8953141EF1035667A9875EF (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnecting(HttpRequest request) {}
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnWsConnected(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnWsConnected_m7F5E441C412EBB5300038230B8F5B02136BB01FD (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnected(HttpResponse response) {}
		return;
	}
}
// System.Boolean NetCoreServer.WssClient::OnWsConnecting(NetCoreServer.HttpRequest,NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssClient_OnWsConnecting_mAD8DE17AC0F17F4A5B265124F6FA4CD9FDCA70A7 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___1_response, const RuntimeMethod* method) 
{
	{
		// public virtual bool OnWsConnecting(HttpRequest request, HttpResponse response) { return true; }
		return (bool)1;
	}
}
// System.Void NetCoreServer.WssClient::OnWsConnected(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnWsConnected_m4E941CD1225643ADB1A77E8DF5F467807920836A (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnected(HttpRequest request) {}
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnWsDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnWsDisconnected_mDF3D3ADA40753B7B33536947D3C260CCF6C532BC (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsDisconnected() {}
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnWsReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnWsReceived_m7C56CDDDCBC524E28C6084B67E6A498335799B30 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsReceived(byte[] buffer, long offset, long size) {}
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnWsClose(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnWsClose_m6D3E1069C23924DA73BB43E5AD67A4A40E83BE6A (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsClose(byte[] buffer, long offset, long size) { CloseAsync(1000); }
		bool L_0;
		L_0 = VirtualFuncInvoker1< bool, int32_t >::Invoke(46 /* System.Boolean NetCoreServer.WssClient::CloseAsync(System.Int32) */, __this, ((int32_t)1000));
		// public virtual void OnWsClose(byte[] buffer, long offset, long size) { CloseAsync(1000); }
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnWsPing(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnWsPing_m2D57A91F73C7F8493228F5E055B9BAA3E9D9A88C (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsPing(byte[] buffer, long offset, long size) { SendPongAsync(buffer, offset, size); }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int64_t L_1 = ___1_offset;
		int64_t L_2 = ___2_size;
		bool L_3;
		L_3 = WssClient_SendPongAsync_mBDB83F2278E535E4667EA15108FFA8814376DAE6(__this, L_0, L_1, L_2, NULL);
		// public virtual void OnWsPing(byte[] buffer, long offset, long size) { SendPongAsync(buffer, offset, size); }
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnWsPong(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnWsPong_mBE1EF3028C19131BB41427DF1391836F44E7BFF0 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsPong(byte[] buffer, long offset, long size) {}
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnWsError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnWsError_mFC9899B0188DE851E13A6F44CDE664A324510A71 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsError(string error) { OnError(SocketError.SocketError); }
		VirtualActionInvoker1< int32_t >::Invoke(28 /* System.Void NetCoreServer.SslClient::OnError(System.Net.Sockets.SocketError) */, __this, (-1));
		// public virtual void OnWsError(string error) { OnError(SocketError.SocketError); }
		return;
	}
}
// System.Void NetCoreServer.WssClient::OnWsError(System.Net.Sockets.SocketError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_OnWsError_m7366364B00AE05D409BE43CDB8202AB6F57D0781 (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, int32_t ___0_error, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsError(SocketError error) { OnError(error); }
		int32_t L_0 = ___0_error;
		VirtualActionInvoker1< int32_t >::Invoke(28 /* System.Void NetCoreServer.SslClient::OnError(System.Net.Sockets.SocketError) */, __this, L_0);
		// public virtual void OnWsError(SocketError error) { OnError(error); }
		return;
	}
}
// System.Void NetCoreServer.WssClient::SendResponse(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssClient_SendResponse_m16926A33DE9719439761B51F47272364A471C2DB (WssClient_tF8F756FA914AA46E669F7D72C08F2DC1718D1F5C* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	{
		// public virtual void SendResponse(HttpResponse response) {}
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
// System.Void NetCoreServer.WsServer::.ctor(System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsServer__ctor_m1785FFE2F40B38448123FB62BDB25C3110CF5DB8 (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___0_address, int32_t ___1_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WsServer(IPAddress address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_0 = ___0_address;
		int32_t L_1 = ___1_port;
		HttpServer__ctor_mE78676BDD8FBA0BBFD2E8C01E581DE65EFF15038(__this, L_0, L_1, NULL);
		// public WsServer(IPAddress address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_2, __this, NULL);
		__this->___WebSocket_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_21), (void*)L_2);
		// public WsServer(IPAddress address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Void NetCoreServer.WsServer::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsServer__ctor_mD8D6BB26241B4F6EBED2AA217DC1C5EAD0DBCB21 (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, String_t* ___0_address, int32_t ___1_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WsServer(string address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		String_t* L_0 = ___0_address;
		int32_t L_1 = ___1_port;
		HttpServer__ctor_mBCA5444D3964988D2FC8B9340B4615C0D2D42642(__this, L_0, L_1, NULL);
		// public WsServer(string address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_2, __this, NULL);
		__this->___WebSocket_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_21), (void*)L_2);
		// public WsServer(string address, int port) : base(address, port) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Void NetCoreServer.WsServer::.ctor(System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsServer__ctor_mB44C03126749AF978CA372147810271492D197C2 (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___0_endpoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WsServer(IPEndPoint endpoint) : base(endpoint) { WebSocket = new WebSocket(this); }
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_0 = ___0_endpoint;
		HttpServer__ctor_m7C3967714E90F5A14F680068DF81061C2EECD121(__this, L_0, NULL);
		// public WsServer(IPEndPoint endpoint) : base(endpoint) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_1, __this, NULL);
		__this->___WebSocket_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_21), (void*)L_1);
		// public WsServer(IPEndPoint endpoint) : base(endpoint) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Boolean NetCoreServer.WsServer::CloseAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsServer_CloseAll_m4845ECA315936454732B86342B0CEB351E8C7D8A (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_21;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005b;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, false, null, 0, 0, status);
				WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_21;
				int32_t L_6 = ___0_status;
				NullCheck(L_5);
				WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)136), (bool)0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), L_6, NULL);
				// if (!Multicast(WebSocket.WsSendBuffer.ToArray()))
				WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_7 = __this->___WebSocket_21;
				NullCheck(L_7);
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_8 = L_7->___WsSendBuffer_15;
				NullCheck(L_8);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
				L_9 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_8, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
				bool L_10;
				L_10 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.TcpServer::Multicast(System.Byte[]) */, __this, L_9);
				if (L_10)
				{
					goto IL_0049_1;
				}
			}
			{
				// return false;
				V_2 = (bool)0;
				goto IL_005c;
			}

IL_0049_1:
			{
				// return base.DisconnectAll();
				bool L_11;
				L_11 = TcpServer_DisconnectAll_m8A0884FDAAE93EC9AD4965C5D715056EB3164D4C(__this, NULL);
				V_2 = L_11;
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// }
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Boolean NetCoreServer.WsServer::Multicast(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsServer_Multicast_m871338EC1278CA46ECB2ABA91192078214D92C33 (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_get_Values_mBAB9FC49E51423639C3D82225580B8F5DEFC56A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tD093CFFDE0E9DD781A87F8067FE1EDC24180E811_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t4ACC78D979AF65A014A1B9D93C5FCAD2BCA8F0F7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* V_1 = NULL;
	{
		// if (!IsStarted)
		bool L_0;
		L_0 = TcpServer_get_IsStarted_m13DA0CAD8C68BBDE04A609A79C2C9AED6076FDA7_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (size == 0)
		int64_t L_1 = ___2_size;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000f:
	{
		// foreach (var session in Sessions.Values)
		ConcurrentDictionary_2_t5568A91C1721AB09A5C87B73F110BC4AC4D467B4* L_2 = ((TcpServer_t5C6F2AC817CBED1047609592DB48A314B9BCD8C8*)__this)->___Sessions_17;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ConcurrentDictionary_2_get_Values_mBAB9FC49E51423639C3D82225580B8F5DEFC56A1(L_2, ConcurrentDictionary_2_get_Values_mBAB9FC49E51423639C3D82225580B8F5DEFC56A1_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<NetCoreServer.TcpSession>::GetEnumerator() */, IEnumerable_1_tD093CFFDE0E9DD781A87F8067FE1EDC24180E811_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_005b;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_005b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_0022_1:
			{
				// foreach (var session in Sessions.Values)
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				TcpSession_t63E3917A3EF0ED9E800C753734E7E444688A2F3C* L_8;
				L_8 = InterfaceFuncInvoker0< TcpSession_t63E3917A3EF0ED9E800C753734E7E444688A2F3C* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<NetCoreServer.TcpSession>::get_Current() */, IEnumerator_1_t4ACC78D979AF65A014A1B9D93C5FCAD2BCA8F0F7_il2cpp_TypeInfo_var, L_7);
				// if (session is WsSession wsSession)
				V_1 = ((WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B*)IsInstClass((RuntimeObject*)L_8, WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B_il2cpp_TypeInfo_var));
				WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* L_9 = V_1;
				if (!L_9)
				{
					goto IL_0048_1;
				}
			}
			{
				// if (wsSession.WebSocket.WsHandshaked)
				WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* L_10 = V_1;
				NullCheck(L_10);
				WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = L_10->___WebSocket_24;
				NullCheck(L_11);
				bool L_12 = L_11->___WsHandshaked_7;
				if (!L_12)
				{
					goto IL_0048_1;
				}
			}
			{
				// wsSession.SendAsync(buffer, offset, size);
				WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* L_13 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_buffer;
				int64_t L_15 = ___1_offset;
				int64_t L_16 = ___2_size;
				NullCheck(L_13);
				bool L_17;
				L_17 = VirtualFuncInvoker3< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t, int64_t >::Invoke(10 /* System.Boolean NetCoreServer.TcpSession::SendAsync(System.Byte[],System.Int64,System.Int64) */, L_13, L_14, L_15, L_16);
			}

IL_0048_1:
			{
				// foreach (var session in Sessions.Values)
				RuntimeObject* L_18 = V_0;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean NetCoreServer.WsServer::MulticastText(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsServer_MulticastText_m82FD6650EC766031344B3ECFCE09A5CBEBE253DC (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_21;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_21;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)129), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_21;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.TcpServer::Multicast(System.Byte[]) */, __this, L_11);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsServer::MulticastText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsServer_MulticastText_m087614FAA5DD308A168FE32E4CA81AD26550B62D (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_21;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_21;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)129), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_21;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.TcpServer::Multicast(System.Byte[]) */, __this, L_13);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WsServer::MulticastBinary(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsServer_MulticastBinary_m6A6BF9B0ABA2A6E9B43486018A7DA13D5A63DF19 (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_21;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_21;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)130), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_21;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.TcpServer::Multicast(System.Byte[]) */, __this, L_11);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsServer::MulticastBinary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsServer_MulticastBinary_m20231D3F13D9D5A71B25BA1BE379CEE145913DEB (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_21;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_21;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)130), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_21;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.TcpServer::Multicast(System.Byte[]) */, __this, L_13);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WsServer::SendPing(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsServer_SendPing_m72EB760D7FF4311184989316F6EE15F947FBA4D9 (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_21;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_21;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)137), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_21;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.TcpServer::Multicast(System.Byte[]) */, __this, L_11);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsServer::SendPing(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsServer_SendPing_m4389B9244B9CCA9A1CF1B78712B841B86CF93797 (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_21;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_21;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)137), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_21;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.TcpServer::Multicast(System.Byte[]) */, __this, L_13);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WsServer::SendPong(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsServer_SendPong_mB9922F981EA4D8B27EA6F1468A1D5B2487B66A59 (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_21;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_21;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)138), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_21;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.TcpServer::Multicast(System.Byte[]) */, __this, L_11);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsServer::SendPong(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsServer_SendPong_mB5C402142D1D51F220079B41E7F1C08578A89D6B (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_21;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_21;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)138), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_21;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.TcpServer::Multicast(System.Byte[]) */, __this, L_13);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// NetCoreServer.TcpSession NetCoreServer.WsServer::CreateSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TcpSession_t63E3917A3EF0ED9E800C753734E7E444688A2F3C* WsServer_CreateSession_mFE4ED28CFF832449E7B3F56D27331A331E48EC78 (WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override TcpSession CreateSession() { return new WsSession(this); }
		WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* L_0 = (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B*)il2cpp_codegen_object_new(WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WsSession__ctor_mE59AAFB2A35443B0ACE79DC20BCC445318CB2A51(L_0, __this, NULL);
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
// System.Void NetCoreServer.WsSession::.ctor(NetCoreServer.WsServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession__ctor_mE59AAFB2A35443B0ACE79DC20BCC445318CB2A51 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* ___0_server, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WsSession(WsServer server) : base(server) { WebSocket = new WebSocket(this); }
		WsServer_t5BFDEDDA49F401FA1BB6C5FF4B80825CE2D6EB0B* L_0 = ___0_server;
		HttpSession__ctor_m20E8A7AC507D18E7EF0191C0AE12B0655310B90F(__this, L_0, NULL);
		// public WsSession(WsServer server) : base(server) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_1, __this, NULL);
		__this->___WebSocket_24 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_24), (void*)L_1);
		// public WsSession(WsServer server) : base(server) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Boolean NetCoreServer.WsSession::Close(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_Close_m60FC404D9D0BB0FC69F1F2EC6436D9D44DB29CC6 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// public virtual bool Close(int status) { SendCloseAsync(status, null, 0, 0); base.Disconnect(); return true; }
		int32_t L_0 = ___0_status;
		bool L_1;
		L_1 = WsSession_SendCloseAsync_m424ABB86246EC979DCD374D1D2ABCBB08CBB1D9D(__this, L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// public virtual bool Close(int status) { SendCloseAsync(status, null, 0, 0); base.Disconnect(); return true; }
		bool L_2;
		L_2 = TcpSession_Disconnect_m75B632AF8F7871DAAD7F99B851CC28C3E726923D(__this, NULL);
		// public virtual bool Close(int status) { SendCloseAsync(status, null, 0, 0); base.Disconnect(); return true; }
		return (bool)1;
	}
}
// System.Int64 NetCoreServer.WsSession::SendText(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsSession_SendText_m8D0155C6F1BED1271C3F1CF5450A90744B7CE2FA (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)129), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_24;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = TcpSession_Send_mD8CA9888AAFC032EAA22EDF3573ADDF913F3A6CF(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WsSession::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsSession_SendText_m9C379714477D48E70BF38A44516F5757088B6BDB (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)129), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_24;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = TcpSession_Send_mD8CA9888AAFC032EAA22EDF3573ADDF913F3A6CF(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WsSession::SendTextAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendTextAsync_m5A08478C54570E1AA4CB1FF8EA5765194783AA57 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)129), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_24;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = TcpSession_SendAsync_m60089C6CF72D62E35E40C398BFE0A9BBBD046C9B(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsSession::SendTextAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendTextAsync_m8CAA717D269F9CF2DCEEE1E61BA73D604B363BB4 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)129), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_24;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = TcpSession_SendAsync_m60089C6CF72D62E35E40C398BFE0A9BBBD046C9B(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WsSession::SendBinary(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsSession_SendBinary_m337F0EFE867C0DB3072B01B0CBC4A6AB04A06200 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)130), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_24;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = TcpSession_Send_mD8CA9888AAFC032EAA22EDF3573ADDF913F3A6CF(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WsSession::SendBinary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsSession_SendBinary_m80CB101F6151678171F3E6A4207101A0C288CA21 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)130), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_24;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = TcpSession_Send_mD8CA9888AAFC032EAA22EDF3573ADDF913F3A6CF(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WsSession::SendBinaryAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendBinaryAsync_mFCF1F4DBC7FBE48281FB47956C0C2FF10B9F0421 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)130), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_24;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = TcpSession_SendAsync_m60089C6CF72D62E35E40C398BFE0A9BBBD046C9B(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsSession::SendBinaryAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendBinaryAsync_mA520B9A0D6FC20D3D9874A56AA4F29ED93869231 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)130), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_24;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = TcpSession_SendAsync_m60089C6CF72D62E35E40C398BFE0A9BBBD046C9B(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WsSession::SendClose(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsSession_SendClose_m35B384D7375583B6A67DD897CBBFD533EBE3BAA6 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, false, buffer, offset, size, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_buffer;
			int64_t L_7 = ___2_offset;
			int64_t L_8 = ___3_size;
			int32_t L_9 = ___0_status;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)136), (bool)0, L_6, L_7, L_8, L_9, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_10 = __this->___WebSocket_24;
			NullCheck(L_10);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = L_10->___WsSendBuffer_15;
			NullCheck(L_11);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_11, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_13;
			L_13 = TcpSession_Send_mD8CA9888AAFC032EAA22EDF3573ADDF913F3A6CF(__this, L_12, NULL);
			V_2 = L_13;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		int64_t L_14 = V_2;
		return L_14;
	}
}
// System.Int64 NetCoreServer.WsSession::SendClose(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsSession_SendClose_m4DBB7DB820BD3C72054055B8E33DF1DD3EEAB3C1 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, int32_t ___0_status, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___1_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, false, data, 0, data.Length, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = ___0_status;
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)136), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), L_11, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_12 = __this->___WebSocket_24;
			NullCheck(L_12);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = L_12->___WsSendBuffer_15;
			NullCheck(L_13);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
			L_14 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_13, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_15;
			L_15 = TcpSession_Send_mD8CA9888AAFC032EAA22EDF3573ADDF913F3A6CF(__this, L_14, NULL);
			V_3 = L_15;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_16 = V_3;
		return L_16;
	}
}
// System.Boolean NetCoreServer.WsSession::SendCloseAsync(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendCloseAsync_m424ABB86246EC979DCD374D1D2ABCBB08CBB1D9D (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, false, buffer, offset, size, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_buffer;
			int64_t L_7 = ___2_offset;
			int64_t L_8 = ___3_size;
			int32_t L_9 = ___0_status;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)136), (bool)0, L_6, L_7, L_8, L_9, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_10 = __this->___WebSocket_24;
			NullCheck(L_10);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = L_10->___WsSendBuffer_15;
			NullCheck(L_11);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_11, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_13;
			L_13 = TcpSession_SendAsync_m60089C6CF72D62E35E40C398BFE0A9BBBD046C9B(__this, L_12, NULL);
			V_2 = L_13;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean NetCoreServer.WsSession::SendCloseAsync(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendCloseAsync_mB290039178E24DB9C68DFEA8FFBE879B8751FF36 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, int32_t ___0_status, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___1_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, false, data, 0, data.Length, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = ___0_status;
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)136), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), L_11, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_12 = __this->___WebSocket_24;
			NullCheck(L_12);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = L_12->___WsSendBuffer_15;
			NullCheck(L_13);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
			L_14 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_13, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_15;
			L_15 = TcpSession_SendAsync_m60089C6CF72D62E35E40C398BFE0A9BBBD046C9B(__this, L_14, NULL);
			V_3 = L_15;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_16 = V_3;
		return L_16;
	}
}
// System.Int64 NetCoreServer.WsSession::SendPing(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsSession_SendPing_m9D048F9CFB8636AD32C980E40DA2F8D0DABCF5B1 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)137), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_24;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = TcpSession_Send_mD8CA9888AAFC032EAA22EDF3573ADDF913F3A6CF(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WsSession::SendPing(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsSession_SendPing_mB5EEEA8DA1A0BA2E2FE5470810D20B8B15ED7531 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)137), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_24;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = TcpSession_Send_mD8CA9888AAFC032EAA22EDF3573ADDF913F3A6CF(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WsSession::SendPingAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendPingAsync_m9CE4E181A32BA30D3B6EFAB1907507C2FA4D846B (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)137), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_24;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = TcpSession_SendAsync_m60089C6CF72D62E35E40C398BFE0A9BBBD046C9B(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsSession::SendPingAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendPingAsync_mBF6611228087462CAC95CC213A8B6B1F1387555A (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, true, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)137), (bool)1, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_24;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = TcpSession_SendAsync_m60089C6CF72D62E35E40C398BFE0A9BBBD046C9B(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WsSession::SendPong(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsSession_SendPong_m44DB7DA3C1EE3D39C3DCD8544DFFC25CB08FB1DE (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)138), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_24;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = TcpSession_Send_mD8CA9888AAFC032EAA22EDF3573ADDF913F3A6CF(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WsSession::SendPong(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WsSession_SendPong_m015E353B66625A494904F4DEDA3205E952368AB8 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)138), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_24;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = TcpSession_Send_mD8CA9888AAFC032EAA22EDF3573ADDF913F3A6CF(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WsSession::SendPongAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendPongAsync_m588B72CA369DF2D9A4FA3AF545F55D5F2376DC4D (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)138), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_24;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = TcpSession_SendAsync_m60089C6CF72D62E35E40C398BFE0A9BBBD046C9B(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WsSession::SendPongAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_SendPongAsync_m5CF5FF00B68C7849D193890113878AF0955A5B36 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_24;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)138), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_24;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = TcpSession_SendAsync_m60089C6CF72D62E35E40C398BFE0A9BBBD046C9B(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.String NetCoreServer.WsSession::ReceiveText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WsSession_ReceiveText_m5142AAD1F1E96B6598D4ED01C4DE05A8A5C9AC9E (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_0 = NULL;
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Buffer result = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_0 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_0, NULL);
		V_0 = L_0;
		// if (!WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = __this->___WebSocket_24;
		NullCheck(L_1);
		bool L_2 = L_1->___WsHandshaked_7;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_3 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_4, NULL);
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6;
		L_6 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_3, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), NULL);
		return L_6;
	}

IL_0025:
	{
		// Buffer cache = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_7 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_7, NULL);
		V_1 = L_7;
		goto IL_007e;
	}

IL_002d:
	{
		// int required = WebSocket.RequiredReceiveFrameSize();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_24;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = WebSocket_RequiredReceiveFrameSize_m22BE754E76A88D50404F9E9D3E8E898E227FB8B4(L_8, NULL);
		V_2 = L_9;
		// cache.Resize(required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Buffer_Resize_m287C14F99E306780993169E02C05F4725D91A668(L_10, ((int64_t)L_11), NULL);
		// int received = (int)base.Receive(cache.Data, 0, required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_12 = V_1;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_12, NULL);
		int32_t L_14 = V_2;
		int64_t L_15;
		L_15 = TcpSession_Receive_m05B8B835B49F1141C20C70D19EB8F83932F38795(__this, L_13, ((int64_t)0), ((int64_t)L_14), NULL);
		V_3 = ((int32_t)L_15);
		// if (received != required)
		int32_t L_16 = V_3;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_0069;
		}
	}
	{
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_18 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_19 = V_0;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_19, NULL);
		NullCheck(L_20);
		NullCheck(L_18);
		String_t* L_21;
		L_21 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_18, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_20)->max_length))), NULL);
		return L_21;
	}

IL_0069:
	{
		// WebSocket.PrepareReceiveFrame(cache.Data, 0, received);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_22 = __this->___WebSocket_24;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_23 = V_1;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_23, NULL);
		int32_t L_25 = V_3;
		NullCheck(L_22);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_22, L_24, ((int64_t)0), ((int64_t)L_25), NULL);
	}

IL_007e:
	{
		// while (!WebSocket.WsReceived)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_26 = __this->___WebSocket_24;
		NullCheck(L_26);
		bool L_27 = L_26->___WsReceived_8;
		if (!L_27)
		{
			goto IL_002d;
		}
	}
	{
		// result.Append(WebSocket.WsReceiveBuffer.ToArray(), WebSocket.WsHeaderSize, WebSocket.WsHeaderSize + WebSocket.WsPayloadSize);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_28 = V_0;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_29 = __this->___WebSocket_24;
		NullCheck(L_29);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_30 = L_29->___WsReceiveBuffer_12;
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_30, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_32 = __this->___WebSocket_24;
		NullCheck(L_32);
		int32_t L_33 = L_32->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_34 = __this->___WebSocket_24;
		NullCheck(L_34);
		int32_t L_35 = L_34->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_36 = __this->___WebSocket_24;
		NullCheck(L_36);
		int32_t L_37 = L_36->___WsPayloadSize_10;
		NullCheck(L_28);
		int64_t L_38;
		L_38 = Buffer_Append_m2459291B4DF91A57178461DEB63F96F940AC6117(L_28, L_31, ((int64_t)L_33), ((int64_t)((int32_t)il2cpp_codegen_add(L_35, L_37))), NULL);
		// WebSocket.PrepareReceiveFrame(null, 0, 0);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_39 = __this->___WebSocket_24;
		NullCheck(L_39);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_39, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_40 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_41 = V_0;
		NullCheck(L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_41, NULL);
		NullCheck(L_42);
		NullCheck(L_40);
		String_t* L_43;
		L_43 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_40, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_42)->max_length))), NULL);
		return L_43;
	}
}
// NetCoreServer.Buffer NetCoreServer.WsSession::ReceiveBinary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* WsSession_ReceiveBinary_mC40B73810D8351B77AF72A1E305E436D7745847D (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_0 = NULL;
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Buffer result = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_0 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_0, NULL);
		V_0 = L_0;
		// if (!WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = __this->___WebSocket_24;
		NullCheck(L_1);
		bool L_2 = L_1->___WsHandshaked_7;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_3 = V_0;
		return L_3;
	}

IL_0015:
	{
		// Buffer cache = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_4 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_4, NULL);
		V_1 = L_4;
		goto IL_005e;
	}

IL_001d:
	{
		// int required = WebSocket.RequiredReceiveFrameSize();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_24;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = WebSocket_RequiredReceiveFrameSize_m22BE754E76A88D50404F9E9D3E8E898E227FB8B4(L_5, NULL);
		V_2 = L_6;
		// cache.Resize(required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Buffer_Resize_m287C14F99E306780993169E02C05F4725D91A668(L_7, ((int64_t)L_8), NULL);
		// int received = (int)base.Receive(cache.Data, 0, required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_9 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_9, NULL);
		int32_t L_11 = V_2;
		int64_t L_12;
		L_12 = TcpSession_Receive_m05B8B835B49F1141C20C70D19EB8F83932F38795(__this, L_10, ((int64_t)0), ((int64_t)L_11), NULL);
		V_3 = ((int32_t)L_12);
		// if (received != required)
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_0049;
		}
	}
	{
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_15 = V_0;
		return L_15;
	}

IL_0049:
	{
		// WebSocket.PrepareReceiveFrame(cache.Data, 0, received);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_16 = __this->___WebSocket_24;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_17 = V_1;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_17, NULL);
		int32_t L_19 = V_3;
		NullCheck(L_16);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_16, L_18, ((int64_t)0), ((int64_t)L_19), NULL);
	}

IL_005e:
	{
		// while (!WebSocket.WsReceived)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_20 = __this->___WebSocket_24;
		NullCheck(L_20);
		bool L_21 = L_20->___WsReceived_8;
		if (!L_21)
		{
			goto IL_001d;
		}
	}
	{
		// result.Append(WebSocket.WsReceiveBuffer.ToArray(), WebSocket.WsHeaderSize, WebSocket.WsHeaderSize + WebSocket.WsPayloadSize);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_22 = V_0;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_23 = __this->___WebSocket_24;
		NullCheck(L_23);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_24 = L_23->___WsReceiveBuffer_12;
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_24, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_26 = __this->___WebSocket_24;
		NullCheck(L_26);
		int32_t L_27 = L_26->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_28 = __this->___WebSocket_24;
		NullCheck(L_28);
		int32_t L_29 = L_28->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_30 = __this->___WebSocket_24;
		NullCheck(L_30);
		int32_t L_31 = L_30->___WsPayloadSize_10;
		NullCheck(L_22);
		int64_t L_32;
		L_32 = Buffer_Append_m2459291B4DF91A57178461DEB63F96F940AC6117(L_22, L_25, ((int64_t)L_27), ((int64_t)((int32_t)il2cpp_codegen_add(L_29, L_31))), NULL);
		// WebSocket.PrepareReceiveFrame(null, 0, 0);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_33 = __this->___WebSocket_24;
		NullCheck(L_33);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_33, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_34 = V_0;
		return L_34;
	}
}
// System.Void NetCoreServer.WsSession::OnDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnDisconnected_mBA3FDD29E4A4384447953E5AD268CE720AE520EB (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// WebSocket.WsHandshaked = false;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_24;
		NullCheck(L_2);
		L_2->___WsHandshaked_7 = (bool)0;
		// OnWsDisconnected();
		VirtualActionInvoker0::Invoke(43 /* System.Void NetCoreServer.WsSession::OnWsDisconnected() */, __this);
	}

IL_001f:
	{
		// Request.Clear();
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_3;
		L_3 = HttpSession_get_Request_mA2B3E106FF05FCE43CA50A3A78510DE023245C72_inline(__this, NULL);
		NullCheck(L_3);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_4;
		L_4 = HttpRequest_Clear_mF988679ABD84F934E81C4D54EFC463943D479D9B(L_3, NULL);
		// Response.Clear();
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_5;
		L_5 = HttpSession_get_Response_m85959FC049415AAE77676B4E565CC9C065AD6D49_inline(__this, NULL);
		NullCheck(L_5);
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_6;
		L_6 = HttpResponse_Clear_mD749A83A49CC84434689576B16D2260B8215699A(L_5, NULL);
		// WebSocket.ClearWsBuffers();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_7 = __this->___WebSocket_24;
		NullCheck(L_7);
		WebSocket_ClearWsBuffers_mEACF0B65CC77BDDC5EC45F81BD214C64C71D87C1(L_7, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnReceived_mA450948E593C28492A48E28BC95F846E5CACFF4D (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// WebSocket.PrepareReceiveFrame(buffer, offset, size);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		int64_t L_4 = ___1_offset;
		int64_t L_5 = ___2_size;
		NullCheck(L_2);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_2, L_3, L_4, L_5, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// base.OnReceived(buffer, offset, size);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
		int64_t L_7 = ___1_offset;
		int64_t L_8 = ___2_size;
		HttpSession_OnReceived_m9319C5751443623E14ECE0CCDE2D3107E0C3F9A8(__this, L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnReceivedRequestHeader(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnReceivedRequestHeader_m02B970483F7EDB25ED99873327CADCA285F29D03 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (!WebSocket.PerformServerUpgrade(request, Response))
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_24;
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_3 = ___0_request;
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_4;
		L_4 = HttpSession_get_Response_m85959FC049415AAE77676B4E565CC9C065AD6D49_inline(__this, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = WebSocket_PerformServerUpgrade_m9A03164339E765037F1E21D4FF8D24EF2C30C548(L_2, L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		// base.OnReceivedRequestHeader(request);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_6 = ___0_request;
		HttpSession_OnReceivedRequestHeader_m05C101172F35C46D53AA748B5D59056EA08C9D39(__this, L_6, NULL);
		// return;
		return;
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnReceivedRequest(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnReceivedRequest_m5C6F723FAB21D23944E4682AE5AC29A3F65AEDD8 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// var body = Request.Body;
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_2;
		L_2 = HttpSession_get_Request_mA2B3E106FF05FCE43CA50A3A78510DE023245C72_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = HttpRequest_get_Body_m3A0C5431AC84A0A5606FB1E8F3C9941D748D5074(L_2, NULL);
		V_0 = L_3;
		// var data = Encoding.UTF8.GetBytes(body);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_5 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		V_1 = L_6;
		// WebSocket.PrepareReceiveFrame(data, 0, data.Length);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_7 = __this->___WebSocket_24;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_7, L_8, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), NULL);
		// return;
		return;
	}

IL_0038:
	{
		// base.OnReceivedRequest(request);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_10 = ___0_request;
		HttpSession_OnReceivedRequest_m3153CCE38E0411B61452C5A4AD2ADF41B108E6F9(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnReceivedRequestError(NetCoreServer.HttpRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnReceivedRequestError_mB9EF68A42696DA39182EC659C6A1940C11B293CA (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_24;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnError(new SocketError());
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void NetCoreServer.TcpSession::OnError(System.Net.Sockets.SocketError) */, __this, 0);
		// return;
		return;
	}

IL_0015:
	{
		// base.OnReceivedRequestError(request, error);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_2 = ___0_request;
		String_t* L_3 = ___1_error;
		HttpSession_OnReceivedRequestError_m463C570D8694296A4BA4D03799B32C49C495AD74(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnWsConnecting(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnWsConnecting_mCB5E3C6445BAD8DF242D95329CFD6351FF76EC51 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnecting(HttpRequest request) {}
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnWsConnected(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnWsConnected_mC9B174E7A163F8A28552B05AACC0F176A23807C0 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnected(HttpResponse response) {}
		return;
	}
}
// System.Boolean NetCoreServer.WsSession::OnWsConnecting(NetCoreServer.HttpRequest,NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WsSession_OnWsConnecting_mFCCBDA8FF86E8B35D11D94B87010ECF47E31B2AE (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___1_response, const RuntimeMethod* method) 
{
	{
		// public virtual bool OnWsConnecting(HttpRequest request, HttpResponse response) { return true; }
		return (bool)1;
	}
}
// System.Void NetCoreServer.WsSession::OnWsConnected(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnWsConnected_m361FA0BC8E107402DB651F798AED6D0BC10743F5 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnected(HttpRequest request) {}
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnWsDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnWsDisconnected_m7C839B5E5859201E420E5F5BBD6483AFC5C1D2BC (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsDisconnected() {}
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnWsReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnWsReceived_m1CFF71B6ECB5BB08DE9052153B663F5D737BAFFC (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsReceived(byte[] buffer, long offset, long size) {}
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnWsClose(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnWsClose_mBABE920B2BA4A7BD167F387D18FA0C68350746C3 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsClose(byte[] buffer, long offset, long size) { Close(1000); }
		bool L_0;
		L_0 = VirtualFuncInvoker1< bool, int32_t >::Invoke(38 /* System.Boolean NetCoreServer.WsSession::Close(System.Int32) */, __this, ((int32_t)1000));
		// public virtual void OnWsClose(byte[] buffer, long offset, long size) { Close(1000); }
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnWsPing(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnWsPing_mCD8D15ED5A13F6C4E41D6B02AD834FB780A0FF47 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsPing(byte[] buffer, long offset, long size) { SendPongAsync(buffer, offset, size); }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int64_t L_1 = ___1_offset;
		int64_t L_2 = ___2_size;
		bool L_3;
		L_3 = WsSession_SendPongAsync_m588B72CA369DF2D9A4FA3AF545F55D5F2376DC4D(__this, L_0, L_1, L_2, NULL);
		// public virtual void OnWsPing(byte[] buffer, long offset, long size) { SendPongAsync(buffer, offset, size); }
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnWsPong(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnWsPong_mB3C06E9FD17F1C20C8BA90B7AB52D4E379D14783 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsPong(byte[] buffer, long offset, long size) {}
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnWsError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnWsError_mDDB42DFE555A2CCEA3106EB8F61B82AB483F851A (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsError(string error) { OnError(SocketError.SocketError); }
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void NetCoreServer.TcpSession::OnError(System.Net.Sockets.SocketError) */, __this, (-1));
		// public virtual void OnWsError(string error) { OnError(SocketError.SocketError); }
		return;
	}
}
// System.Void NetCoreServer.WsSession::OnWsError(System.Net.Sockets.SocketError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_OnWsError_mF66CC70DAE38ED7068DF41F41AA986209A2C7265 (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, int32_t ___0_error, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsError(SocketError error) { OnError(error); }
		int32_t L_0 = ___0_error;
		VirtualActionInvoker1< int32_t >::Invoke(21 /* System.Void NetCoreServer.TcpSession::OnError(System.Net.Sockets.SocketError) */, __this, L_0);
		// public virtual void OnWsError(SocketError error) { OnError(error); }
		return;
	}
}
// System.Void NetCoreServer.WsSession::SendResponse(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WsSession_SendResponse_m0B2CB5A6BF8E907CD7EB30E605A02A53E7DA64DB (WsSession_t3D7C9E8F1A83E032212B2B4F4492A6D18A78D51B* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	{
		// public new virtual void SendResponse(HttpResponse response) { SendResponseAsync(response); }
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_0 = ___0_response;
		bool L_1;
		L_1 = HttpSession_SendResponseAsync_mE00A7E3FB86E498810C941139D0D5B5477E06ECF(__this, L_0, NULL);
		// public new virtual void SendResponse(HttpResponse response) { SendResponseAsync(response); }
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
// System.Void NetCoreServer.WssServer::.ctor(NetCoreServer.SslContext,System.Net.IPAddress,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssServer__ctor_mAF5B8F982E3D718BB1C528B777EE37578F168BDE (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* ___1_address, int32_t ___2_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WssServer(SslContext context, IPAddress address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* L_0 = ___0_context;
		IPAddress_t2F4486449B0D73FF2D3B36A9FE5E9C3F63116484* L_1 = ___1_address;
		int32_t L_2 = ___2_port;
		HttpsServer__ctor_m0E918132A8FAAE603FFE0A8992198CBEF6ACCBD8(__this, L_0, L_1, L_2, NULL);
		// public WssServer(SslContext context, IPAddress address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_3 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_3, __this, NULL);
		__this->___WebSocket_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_22), (void*)L_3);
		// public WssServer(SslContext context, IPAddress address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Void NetCoreServer.WssServer::.ctor(NetCoreServer.SslContext,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssServer__ctor_mE180A910491C044DBC70A28089469A30C460EB44 (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, String_t* ___1_address, int32_t ___2_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WssServer(SslContext context, string address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* L_0 = ___0_context;
		String_t* L_1 = ___1_address;
		int32_t L_2 = ___2_port;
		HttpsServer__ctor_mD3F7B86BB21BA58C65D928CD374EDF707207D3AE(__this, L_0, L_1, L_2, NULL);
		// public WssServer(SslContext context, string address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_3 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_3, __this, NULL);
		__this->___WebSocket_22 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_22), (void*)L_3);
		// public WssServer(SslContext context, string address, int port) : base(context, address, port) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Void NetCoreServer.WssServer::.ctor(NetCoreServer.SslContext,System.Net.IPEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssServer__ctor_m4C7472A97CE4B3930CC831E74930D25C0FC52F78 (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* ___0_context, IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* ___1_endpoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WssServer(SslContext context, IPEndPoint endpoint) : base(context, endpoint) { WebSocket = new WebSocket(this); }
		SslContext_tB8BA4748A75B729AEC10CF85B8AD5A59263FDDFE* L_0 = ___0_context;
		IPEndPoint_t2F09CBA7A808B67724B4E2954EEDC46D910F4ECB* L_1 = ___1_endpoint;
		HttpsServer__ctor_mBC1012A1568AEA7D0FD4AB283321E00221F2676F(__this, L_0, L_1, NULL);
		// public WssServer(SslContext context, IPEndPoint endpoint) : base(context, endpoint) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_2, __this, NULL);
		__this->___WebSocket_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_22), (void*)L_2);
		// public WssServer(SslContext context, IPEndPoint endpoint) : base(context, endpoint) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Boolean NetCoreServer.WssServer::CloseAll(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssServer_CloseAll_m3D10E8FFDC0BD2C6A6626115E97BDC30B1377894 (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_22;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005b;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, false, null, 0, 0, status);
				WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_22;
				int32_t L_6 = ___0_status;
				NullCheck(L_5);
				WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)136), (bool)0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), L_6, NULL);
				// if (!Multicast(WebSocket.WsSendBuffer.ToArray()))
				WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_7 = __this->___WebSocket_22;
				NullCheck(L_7);
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_8 = L_7->___WsSendBuffer_15;
				NullCheck(L_8);
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9;
				L_9 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_8, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
				bool L_10;
				L_10 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.SslServer::Multicast(System.Byte[]) */, __this, L_9);
				if (L_10)
				{
					goto IL_0049_1;
				}
			}
			{
				// return false;
				V_2 = (bool)0;
				goto IL_005c;
			}

IL_0049_1:
			{
				// return base.DisconnectAll();
				bool L_11;
				L_11 = SslServer_DisconnectAll_m7F2263BC0B668FDA26727D28588525C50D803C1F(__this, NULL);
				V_2 = L_11;
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// }
		bool L_12 = V_2;
		return L_12;
	}
}
// System.Boolean NetCoreServer.WssServer::Multicast(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssServer_Multicast_m11198F7200BFFA90E663F87D1745735DD1E6C8B4 (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_get_Values_m5F3E88E187A158C4C23615F33933FD6352A291FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t25F16C14B7DE2F4DF278F54419449988B5E113DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tA1196D9F38AA75EF0D9AC0EFEE07CD59033CEB89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* V_1 = NULL;
	{
		// if (!IsStarted)
		bool L_0;
		L_0 = SslServer_get_IsStarted_mAF607798E818A5FC41ED75AFF27BD599DF748A0F_inline(__this, NULL);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000a:
	{
		// if (size == 0)
		int64_t L_1 = ___2_size;
		if (L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return true;
		return (bool)1;
	}

IL_000f:
	{
		// foreach (var session in Sessions.Values)
		ConcurrentDictionary_2_t70F0CA0CFD682359F3B09C5C39F97E95DB690413* L_2 = ((SslServer_tD3CFB907EC7F7539A7ECFDC9B8FAD40B6D2B1CE7*)__this)->___Sessions_18;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = ConcurrentDictionary_2_get_Values_m5F3E88E187A158C4C23615F33933FD6352A291FA(L_2, ConcurrentDictionary_2_get_Values_m5F3E88E187A158C4C23615F33933FD6352A291FA_RuntimeMethod_var);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<NetCoreServer.SslSession>::GetEnumerator() */, IEnumerable_1_t25F16C14B7DE2F4DF278F54419449988B5E113DC_il2cpp_TypeInfo_var, L_3);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_5 = V_0;
					if (!L_5)
					{
						goto IL_005b;
					}
				}
				{
					RuntimeObject* L_6 = V_0;
					NullCheck(L_6);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_6);
				}

IL_005b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0048_1;
			}

IL_0022_1:
			{
				// foreach (var session in Sessions.Values)
				RuntimeObject* L_7 = V_0;
				NullCheck(L_7);
				SslSession_t9D95509EF5240CE51BE26FD0103B8271A438E98B* L_8;
				L_8 = InterfaceFuncInvoker0< SslSession_t9D95509EF5240CE51BE26FD0103B8271A438E98B* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<NetCoreServer.SslSession>::get_Current() */, IEnumerator_1_tA1196D9F38AA75EF0D9AC0EFEE07CD59033CEB89_il2cpp_TypeInfo_var, L_7);
				// if (session is WssSession wssSession)
				V_1 = ((WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8*)IsInstClass((RuntimeObject*)L_8, WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8_il2cpp_TypeInfo_var));
				WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* L_9 = V_1;
				if (!L_9)
				{
					goto IL_0048_1;
				}
			}
			{
				// if (wssSession.WebSocket.WsHandshaked)
				WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* L_10 = V_1;
				NullCheck(L_10);
				WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = L_10->___WebSocket_26;
				NullCheck(L_11);
				bool L_12 = L_11->___WsHandshaked_7;
				if (!L_12)
				{
					goto IL_0048_1;
				}
			}
			{
				// wssSession.SendAsync(buffer, offset, size);
				WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* L_13 = V_1;
				ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = ___0_buffer;
				int64_t L_15 = ___1_offset;
				int64_t L_16 = ___2_size;
				NullCheck(L_13);
				bool L_17;
				L_17 = VirtualFuncInvoker3< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, int64_t, int64_t >::Invoke(10 /* System.Boolean NetCoreServer.SslSession::SendAsync(System.Byte[],System.Int64,System.Int64) */, L_13, L_14, L_15, L_16);
			}

IL_0048_1:
			{
				// foreach (var session in Sessions.Values)
				RuntimeObject* L_18 = V_0;
				NullCheck(L_18);
				bool L_19;
				L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_18);
				if (L_19)
				{
					goto IL_0022_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// return true;
		return (bool)1;
	}
}
// System.Boolean NetCoreServer.WssServer::MulticastText(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssServer_MulticastText_m45A02C0B6A86D087E5328A652ADFBA18771094BE (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_22;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_22;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)129), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_22;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.SslServer::Multicast(System.Byte[]) */, __this, L_11);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssServer::MulticastText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssServer_MulticastText_m1A6ABB76DEB514293A9E6D8B72FAD70052A529C1 (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_22;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_22;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)129), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_22;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.SslServer::Multicast(System.Byte[]) */, __this, L_13);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WssServer::MulticastBinary(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssServer_MulticastBinary_mE713D3C8FC68971211DF99D7103AE849ED5230D0 (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_22;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_22;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)130), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_22;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.SslServer::Multicast(System.Byte[]) */, __this, L_11);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssServer::MulticastBinary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssServer_MulticastBinary_m8D74BC792C13CCC32A12AA4A9405A0712B82C303 (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_22;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_22;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)130), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_22;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.SslServer::Multicast(System.Byte[]) */, __this, L_13);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WssServer::SendPing(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssServer_SendPing_m4EEEABBFFB8CF6310CC74689F7D772F00AB87F4C (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_22;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_22;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)137), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_22;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.SslServer::Multicast(System.Byte[]) */, __this, L_11);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssServer::SendPing(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssServer_SendPing_m9ACDA86A723C2EF4F0817B5B243D866F8CAD6BB4 (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_22;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_22;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)137), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_22;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.SslServer::Multicast(System.Byte[]) */, __this, L_13);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WssServer::SendPong(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssServer_SendPong_m428123FD9BDA2248EA299A14DA4D52FAD8E09954 (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_22;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_22;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)138), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_22;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.SslServer::Multicast(System.Byte[]) */, __this, L_11);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssServer::SendPong(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssServer_SendPong_mAAFF97F77AA8BB2D59BF485F68A6047E688356D4 (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_22;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_22;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)138), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return Multicast(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_22;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = VirtualFuncInvoker1< bool, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* >::Invoke(11 /* System.Boolean NetCoreServer.SslServer::Multicast(System.Byte[]) */, __this, L_13);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// NetCoreServer.SslSession NetCoreServer.WssServer::CreateSession()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SslSession_t9D95509EF5240CE51BE26FD0103B8271A438E98B* WssServer_CreateSession_mB15C68D117221FD8C57BD49D65C3304029662D15 (WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override SslSession CreateSession() { return new WssSession(this); }
		WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* L_0 = (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8*)il2cpp_codegen_object_new(WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		WssSession__ctor_m9BB5255D3D41D8BD9B37C33982EA07A37F00889C(L_0, __this, NULL);
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
// System.Void NetCoreServer.WssSession::.ctor(NetCoreServer.WssServer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession__ctor_m9BB5255D3D41D8BD9B37C33982EA07A37F00889C (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* ___0_server, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public WssSession(WssServer server) : base(server) { WebSocket = new WebSocket(this); }
		WssServer_tBED117CA87E9872C936CC1E33BB82D304627697D* L_0 = ___0_server;
		HttpsSession__ctor_m7FA805C289572E62217DD6D2A394C8535187C6DB(__this, L_0, NULL);
		// public WssSession(WssServer server) : base(server) { WebSocket = new WebSocket(this); }
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = (WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C*)il2cpp_codegen_object_new(WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		WebSocket__ctor_m4AC10F1F3C3C9E31D72F4C69E116B1000B0AF690(L_1, __this, NULL);
		__this->___WebSocket_26 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___WebSocket_26), (void*)L_1);
		// public WssSession(WssServer server) : base(server) { WebSocket = new WebSocket(this); }
		return;
	}
}
// System.Boolean NetCoreServer.WssSession::Close(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_Close_mAAE47A136B114A5DE7FDE9103554D2C8BFBA7C2B (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, int32_t ___0_status, const RuntimeMethod* method) 
{
	{
		// public virtual bool Close(int status) { SendCloseAsync(status, null, 0, 0); base.Disconnect(); return true; }
		int32_t L_0 = ___0_status;
		bool L_1;
		L_1 = WssSession_SendCloseAsync_mAED727F4603AB9E544937E79C93DE83FAB420B68(__this, L_0, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// public virtual bool Close(int status) { SendCloseAsync(status, null, 0, 0); base.Disconnect(); return true; }
		bool L_2;
		L_2 = SslSession_Disconnect_m9D8D16F04E7E6A59D42F56184AE9DD1F00C0A0A2(__this, NULL);
		// public virtual bool Close(int status) { SendCloseAsync(status, null, 0, 0); base.Disconnect(); return true; }
		return (bool)1;
	}
}
// System.Int64 NetCoreServer.WssSession::SendText(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssSession_SendText_m3F6E0DBE53F181C63FCD49624903CD89704B80B9 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)129), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_26;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = SslSession_Send_m77F8D4B2898DBD35E0B0F37233A4D9972E3D08CD(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WssSession::SendText(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssSession_SendText_m7939B1D3D292263C5DA93EE17236E64F01A8A940 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)129), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_26;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = SslSession_Send_m77F8D4B2898DBD35E0B0F37233A4D9972E3D08CD(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WssSession::SendTextAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendTextAsync_mD0D9A5DB9B1FEBA55FBD15A2029EDF531FB561E9 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)129), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_26;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = SslSession_SendAsync_m41F3B24745111A37F1F17C83137594C617DCF5C7(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssSession::SendTextAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendTextAsync_m024D72ACFAEFECCA8D0EFA60D31CA54CFA7E0570 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_TEXT, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)129), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_26;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = SslSession_SendAsync_m41F3B24745111A37F1F17C83137594C617DCF5C7(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WssSession::SendBinary(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssSession_SendBinary_mA9272BFF8932DE3858A3DACB99F5746BAD25F70A (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)130), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_26;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = SslSession_Send_m77F8D4B2898DBD35E0B0F37233A4D9972E3D08CD(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WssSession::SendBinary(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssSession_SendBinary_m6613DCC37A543D8389A33FB8B65B9F9A441B1646 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)130), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_26;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = SslSession_Send_m77F8D4B2898DBD35E0B0F37233A4D9972E3D08CD(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WssSession::SendBinaryAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendBinaryAsync_mB06CE2E4253488FFAE9667DA210A86A20190AF0A (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)130), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_26;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = SslSession_SendAsync_m41F3B24745111A37F1F17C83137594C617DCF5C7(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssSession::SendBinaryAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendBinaryAsync_m227B8CB4DC95CB589154D8ED685450710B38E879 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_BINARY, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)130), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_26;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = SslSession_SendAsync_m41F3B24745111A37F1F17C83137594C617DCF5C7(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WssSession::SendClose(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssSession_SendClose_m0FAD92DCDBAA9040615C5EE3697637F54865010D (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, false, buffer, offset, size, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_buffer;
			int64_t L_7 = ___2_offset;
			int64_t L_8 = ___3_size;
			int32_t L_9 = ___0_status;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)136), (bool)0, L_6, L_7, L_8, L_9, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_10 = __this->___WebSocket_26;
			NullCheck(L_10);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = L_10->___WsSendBuffer_15;
			NullCheck(L_11);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_11, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_13;
			L_13 = SslSession_Send_m77F8D4B2898DBD35E0B0F37233A4D9972E3D08CD(__this, L_12, NULL);
			V_2 = L_13;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		int64_t L_14 = V_2;
		return L_14;
	}
}
// System.Int64 NetCoreServer.WssSession::SendClose(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssSession_SendClose_mEEC5C4975DA1226178C7B92BCFA11770B33C23AF (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, int32_t ___0_status, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___1_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, false, data, 0, data.Length, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = ___0_status;
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)136), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), L_11, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_12 = __this->___WebSocket_26;
			NullCheck(L_12);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = L_12->___WsSendBuffer_15;
			NullCheck(L_13);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
			L_14 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_13, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_15;
			L_15 = SslSession_Send_m77F8D4B2898DBD35E0B0F37233A4D9972E3D08CD(__this, L_14, NULL);
			V_3 = L_15;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_16 = V_3;
		return L_16;
	}
}
// System.Boolean NetCoreServer.WssSession::SendCloseAsync(System.Int32,System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendCloseAsync_mAED727F4603AB9E544937E79C93DE83FAB420B68 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, int32_t ___0_status, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___1_buffer, int64_t ___2_offset, int64_t ___3_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0045:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004e;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004e:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, false, buffer, offset, size, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___1_buffer;
			int64_t L_7 = ___2_offset;
			int64_t L_8 = ___3_size;
			int32_t L_9 = ___0_status;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)136), (bool)0, L_6, L_7, L_8, L_9, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_10 = __this->___WebSocket_26;
			NullCheck(L_10);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_11 = L_10->___WsSendBuffer_15;
			NullCheck(L_11);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_12;
			L_12 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_11, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_13;
			L_13 = SslSession_SendAsync_m41F3B24745111A37F1F17C83137594C617DCF5C7(__this, L_12, NULL);
			V_2 = L_13;
			goto IL_004f;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004f:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Boolean NetCoreServer.WssSession::SendCloseAsync(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendCloseAsync_m7132293CE2FD2D31BD904027B9B116FF9692B158 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, int32_t ___0_status, String_t* ___1_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___1_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_CLOSE, false, data, 0, data.Length, status);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			int32_t L_11 = ___0_status;
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)136), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), L_11, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_12 = __this->___WebSocket_26;
			NullCheck(L_12);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_13 = L_12->___WsSendBuffer_15;
			NullCheck(L_13);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14;
			L_14 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_13, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_15;
			L_15 = SslSession_SendAsync_m41F3B24745111A37F1F17C83137594C617DCF5C7(__this, L_14, NULL);
			V_3 = L_15;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_16 = V_3;
		return L_16;
	}
}
// System.Int64 NetCoreServer.WssSession::SendPing(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssSession_SendPing_mA3C9D772E41EBBADFBB40B518B82667B29229C1C (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)137), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_26;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = SslSession_Send_m77F8D4B2898DBD35E0B0F37233A4D9972E3D08CD(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WssSession::SendPing(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssSession_SendPing_m1AB6E2487828DC337E6128DBE87ECBA96AF0168C (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)137), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_26;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = SslSession_Send_m77F8D4B2898DBD35E0B0F37233A4D9972E3D08CD(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WssSession::SendPingAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendPingAsync_m4BD8B3D7CC6B793AE33CF69EF0345F1065DCFA5A (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)137), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_26;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = SslSession_SendAsync_m41F3B24745111A37F1F17C83137594C617DCF5C7(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssSession::SendPingAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendPingAsync_mCDBF504FE1B88DD15AF725AC2107F41FDEDEF07C (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PING, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)137), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_26;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = SslSession_SendAsync_m41F3B24745111A37F1F17C83137594C617DCF5C7(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.Int64 NetCoreServer.WssSession::SendPong(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssSession_SendPong_mB5E9C6AA9832C506B39DAEACB79B88A0230BA248 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int64_t V_2 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)138), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_26;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_12;
			L_12 = SslSession_Send_m77F8D4B2898DBD35E0B0F37233A4D9972E3D08CD(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		int64_t L_13 = V_2;
		return L_13;
	}
}
// System.Int64 NetCoreServer.WssSession::SendPong(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t WssSession_SendPong_mC5996DA5F6EE287F5051EC056512D015650FBBDA (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int64_t V_3 = 0;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)138), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.Send(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_26;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			int64_t L_14;
			L_14 = SslSession_Send_m77F8D4B2898DBD35E0B0F37233A4D9972E3D08CD(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		int64_t L_15 = V_3;
		return L_15;
	}
}
// System.Boolean NetCoreServer.WssSession::SendPongAsync(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendPongAsync_m65707EF309012845C8BC1E7B19FAAE0E281AC367 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0044:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_004d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_004d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, buffer, offset, size);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
			int64_t L_7 = ___1_offset;
			int64_t L_8 = ___2_size;
			NullCheck(L_5);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_5, (uint8_t)((int32_t)138), (bool)0, L_6, L_7, L_8, 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_9 = __this->___WebSocket_26;
			NullCheck(L_9);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_10 = L_9->___WsSendBuffer_15;
			NullCheck(L_10);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_11;
			L_11 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_10, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_12;
			L_12 = SslSession_SendAsync_m41F3B24745111A37F1F17C83137594C617DCF5C7(__this, L_11, NULL);
			V_2 = L_12;
			goto IL_004e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_004e:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Boolean NetCoreServer.WssSession::SendPongAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_SendPongAsync_m1B6F4225A17501C756708148085D2E766BB9D22F (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, String_t* ___0_text, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	bool V_3 = false;
	{
		// lock (WebSocket.WsSendLock)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___WsSendLock_14;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_005d;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_005d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			// var data = Encoding.UTF8.GetBytes(text);
			Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_5;
			L_5 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
			String_t* L_6 = ___0_text;
			NullCheck(L_5);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
			L_7 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_5, L_6);
			V_2 = L_7;
			// WebSocket.PrepareSendFrame(WebSocket.WS_FIN | WebSocket.WS_PONG, false, data, 0, data.Length);
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_26;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
			NullCheck(L_10);
			NullCheck(L_8);
			WebSocket_PrepareSendFrame_m627A530AFD891E77DDF292B3A8D0EF2CACF85487(L_8, (uint8_t)((int32_t)138), (bool)0, L_9, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_10)->max_length))), 0, NULL);
			// return base.SendAsync(WebSocket.WsSendBuffer.ToArray());
			WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_11 = __this->___WebSocket_26;
			NullCheck(L_11);
			List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_12 = L_11->___WsSendBuffer_15;
			NullCheck(L_12);
			ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
			L_13 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_12, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
			bool L_14;
			L_14 = SslSession_SendAsync_m41F3B24745111A37F1F17C83137594C617DCF5C7(__this, L_13, NULL);
			V_3 = L_14;
			goto IL_005e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		bool L_15 = V_3;
		return L_15;
	}
}
// System.String NetCoreServer.WssSession::ReceiveText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WssSession_ReceiveText_m578EAF1AA838E4E5F3FC64F32F55835FD780C5FF (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_0 = NULL;
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Buffer result = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_0 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_0, NULL);
		V_0 = L_0;
		// if (!WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = __this->___WebSocket_26;
		NullCheck(L_1);
		bool L_2 = L_1->___WsHandshaked_7;
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_3 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5;
		L_5 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_4, NULL);
		NullCheck(L_5);
		NullCheck(L_3);
		String_t* L_6;
		L_6 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_3, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_5)->max_length))), NULL);
		return L_6;
	}

IL_0025:
	{
		// Buffer cache = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_7 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_7, NULL);
		V_1 = L_7;
		goto IL_007e;
	}

IL_002d:
	{
		// int required = WebSocket.RequiredReceiveFrameSize();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_8 = __this->___WebSocket_26;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = WebSocket_RequiredReceiveFrameSize_m22BE754E76A88D50404F9E9D3E8E898E227FB8B4(L_8, NULL);
		V_2 = L_9;
		// cache.Resize(required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_10 = V_1;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		Buffer_Resize_m287C14F99E306780993169E02C05F4725D91A668(L_10, ((int64_t)L_11), NULL);
		// int received = (int)base.Receive(cache.Data, 0, required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_12 = V_1;
		NullCheck(L_12);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13;
		L_13 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_12, NULL);
		int32_t L_14 = V_2;
		int64_t L_15;
		L_15 = SslSession_Receive_mAEEFAE9F323D69EBF286781E61BDE2B497BBBC40(__this, L_13, ((int64_t)0), ((int64_t)L_14), NULL);
		V_3 = ((int32_t)L_15);
		// if (received != required)
		int32_t L_16 = V_3;
		int32_t L_17 = V_2;
		if ((((int32_t)L_16) == ((int32_t)L_17)))
		{
			goto IL_0069;
		}
	}
	{
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_18 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_19 = V_0;
		NullCheck(L_19);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20;
		L_20 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_19, NULL);
		NullCheck(L_20);
		NullCheck(L_18);
		String_t* L_21;
		L_21 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_18, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_20)->max_length))), NULL);
		return L_21;
	}

IL_0069:
	{
		// WebSocket.PrepareReceiveFrame(cache.Data, 0, received);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_22 = __this->___WebSocket_26;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_23 = V_1;
		NullCheck(L_23);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_24;
		L_24 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_23, NULL);
		int32_t L_25 = V_3;
		NullCheck(L_22);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_22, L_24, ((int64_t)0), ((int64_t)L_25), NULL);
	}

IL_007e:
	{
		// while (!WebSocket.WsReceived)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_26 = __this->___WebSocket_26;
		NullCheck(L_26);
		bool L_27 = L_26->___WsReceived_8;
		if (!L_27)
		{
			goto IL_002d;
		}
	}
	{
		// result.Append(WebSocket.WsReceiveBuffer.ToArray(), WebSocket.WsHeaderSize, WebSocket.WsHeaderSize + WebSocket.WsPayloadSize);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_28 = V_0;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_29 = __this->___WebSocket_26;
		NullCheck(L_29);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_30 = L_29->___WsReceiveBuffer_12;
		NullCheck(L_30);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_31;
		L_31 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_30, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_32 = __this->___WebSocket_26;
		NullCheck(L_32);
		int32_t L_33 = L_32->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_34 = __this->___WebSocket_26;
		NullCheck(L_34);
		int32_t L_35 = L_34->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_36 = __this->___WebSocket_26;
		NullCheck(L_36);
		int32_t L_37 = L_36->___WsPayloadSize_10;
		NullCheck(L_28);
		int64_t L_38;
		L_38 = Buffer_Append_m2459291B4DF91A57178461DEB63F96F940AC6117(L_28, L_31, ((int64_t)L_33), ((int64_t)((int32_t)il2cpp_codegen_add(L_35, L_37))), NULL);
		// WebSocket.PrepareReceiveFrame(null, 0, 0);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_39 = __this->___WebSocket_26;
		NullCheck(L_39);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_39, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// return result.ExtractString(0, result.Data.Length);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_40 = V_0;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_41 = V_0;
		NullCheck(L_41);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_42;
		L_42 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_41, NULL);
		NullCheck(L_42);
		NullCheck(L_40);
		String_t* L_43;
		L_43 = Buffer_ExtractString_mDE64A5235A5109EB7C4B7EE4DFCFFE23AD696F08(L_40, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_42)->max_length))), NULL);
		return L_43;
	}
}
// NetCoreServer.Buffer NetCoreServer.WssSession::ReceiveBinary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* WssSession_ReceiveBinary_m61347E39C1D052D7620BD3BFA294DCFDE9810730 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_0 = NULL;
	Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// Buffer result = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_0 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_0, NULL);
		V_0 = L_0;
		// if (!WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_1 = __this->___WebSocket_26;
		NullCheck(L_1);
		bool L_2 = L_1->___WsHandshaked_7;
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_3 = V_0;
		return L_3;
	}

IL_0015:
	{
		// Buffer cache = new Buffer();
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_4 = (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883*)il2cpp_codegen_object_new(Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Buffer__ctor_mD16255A9725AFAD9F32731A34E0E5A9C47F027AE(L_4, NULL);
		V_1 = L_4;
		goto IL_005e;
	}

IL_001d:
	{
		// int required = WebSocket.RequiredReceiveFrameSize();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_5 = __this->___WebSocket_26;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = WebSocket_RequiredReceiveFrameSize_m22BE754E76A88D50404F9E9D3E8E898E227FB8B4(L_5, NULL);
		V_2 = L_6;
		// cache.Resize(required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_7 = V_1;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Buffer_Resize_m287C14F99E306780993169E02C05F4725D91A668(L_7, ((int64_t)L_8), NULL);
		// int received = (int)base.Receive(cache.Data, 0, required);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_9 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10;
		L_10 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_9, NULL);
		int32_t L_11 = V_2;
		int64_t L_12;
		L_12 = SslSession_Receive_mAEEFAE9F323D69EBF286781E61BDE2B497BBBC40(__this, L_10, ((int64_t)0), ((int64_t)L_11), NULL);
		V_3 = ((int32_t)L_12);
		// if (received != required)
		int32_t L_13 = V_3;
		int32_t L_14 = V_2;
		if ((((int32_t)L_13) == ((int32_t)L_14)))
		{
			goto IL_0049;
		}
	}
	{
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_15 = V_0;
		return L_15;
	}

IL_0049:
	{
		// WebSocket.PrepareReceiveFrame(cache.Data, 0, received);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_16 = __this->___WebSocket_26;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_17 = V_1;
		NullCheck(L_17);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18;
		L_18 = Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline(L_17, NULL);
		int32_t L_19 = V_3;
		NullCheck(L_16);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_16, L_18, ((int64_t)0), ((int64_t)L_19), NULL);
	}

IL_005e:
	{
		// while (!WebSocket.WsReceived)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_20 = __this->___WebSocket_26;
		NullCheck(L_20);
		bool L_21 = L_20->___WsReceived_8;
		if (!L_21)
		{
			goto IL_001d;
		}
	}
	{
		// result.Append(WebSocket.WsReceiveBuffer.ToArray(), WebSocket.WsHeaderSize, WebSocket.WsHeaderSize + WebSocket.WsPayloadSize);
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_22 = V_0;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_23 = __this->___WebSocket_26;
		NullCheck(L_23);
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_24 = L_23->___WsReceiveBuffer_12;
		NullCheck(L_24);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25;
		L_25 = List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24(L_24, List_1_ToArray_m23F8BB7CABADC11EBCAB5AB701B75F56C865BE24_RuntimeMethod_var);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_26 = __this->___WebSocket_26;
		NullCheck(L_26);
		int32_t L_27 = L_26->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_28 = __this->___WebSocket_26;
		NullCheck(L_28);
		int32_t L_29 = L_28->___WsHeaderSize_9;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_30 = __this->___WebSocket_26;
		NullCheck(L_30);
		int32_t L_31 = L_30->___WsPayloadSize_10;
		NullCheck(L_22);
		int64_t L_32;
		L_32 = Buffer_Append_m2459291B4DF91A57178461DEB63F96F940AC6117(L_22, L_25, ((int64_t)L_27), ((int64_t)((int32_t)il2cpp_codegen_add(L_29, L_31))), NULL);
		// WebSocket.PrepareReceiveFrame(null, 0, 0);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_33 = __this->___WebSocket_26;
		NullCheck(L_33);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_33, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, ((int64_t)0), ((int64_t)0), NULL);
		// return result;
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_34 = V_0;
		return L_34;
	}
}
// System.Void NetCoreServer.WssSession::OnDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnDisconnected_m9DB45C3F7F9C9D749372DBBAF776DE61E0CFD361 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// WebSocket.WsHandshaked = false;
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_26;
		NullCheck(L_2);
		L_2->___WsHandshaked_7 = (bool)0;
		// OnWsDisconnected();
		VirtualActionInvoker0::Invoke(44 /* System.Void NetCoreServer.WssSession::OnWsDisconnected() */, __this);
	}

IL_001f:
	{
		// Request.Clear();
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_3;
		L_3 = HttpsSession_get_Request_m66D0F6E8E7547576F7DDC270607F04F4C66E460C_inline(__this, NULL);
		NullCheck(L_3);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_4;
		L_4 = HttpRequest_Clear_mF988679ABD84F934E81C4D54EFC463943D479D9B(L_3, NULL);
		// Response.Clear();
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_5;
		L_5 = HttpsSession_get_Response_m905F3026D6E1697465193E96E7EAC24774DA3EBE_inline(__this, NULL);
		NullCheck(L_5);
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_6;
		L_6 = HttpResponse_Clear_mD749A83A49CC84434689576B16D2260B8215699A(L_5, NULL);
		// WebSocket.ClearWsBuffers();
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_7 = __this->___WebSocket_26;
		NullCheck(L_7);
		WebSocket_ClearWsBuffers_mEACF0B65CC77BDDC5EC45F81BD214C64C71D87C1(L_7, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnReceived_mC70D68BE815BEF9D49AE3552DE10AEC00820379F (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// WebSocket.PrepareReceiveFrame(buffer, offset, size);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___0_buffer;
		int64_t L_4 = ___1_offset;
		int64_t L_5 = ___2_size;
		NullCheck(L_2);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_2, L_3, L_4, L_5, NULL);
		// return;
		return;
	}

IL_001c:
	{
		// base.OnReceived(buffer, offset, size);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___0_buffer;
		int64_t L_7 = ___1_offset;
		int64_t L_8 = ___2_size;
		HttpsSession_OnReceived_mBDE7221D784493BE7C969618795188FC4A7C1490(__this, L_6, L_7, L_8, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnReceivedRequestHeader(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnReceivedRequestHeader_mFBF0E4E08D985D64A7AB7C6E4F33861E43564B30 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// if (!WebSocket.PerformServerUpgrade(request, Response))
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_2 = __this->___WebSocket_26;
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_3 = ___0_request;
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_4;
		L_4 = HttpsSession_get_Response_m905F3026D6E1697465193E96E7EAC24774DA3EBE_inline(__this, NULL);
		NullCheck(L_2);
		bool L_5;
		L_5 = WebSocket_PerformServerUpgrade_m9A03164339E765037F1E21D4FF8D24EF2C30C548(L_2, L_3, L_4, NULL);
		if (L_5)
		{
			goto IL_002a;
		}
	}
	{
		// base.OnReceivedRequestHeader(request);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_6 = ___0_request;
		HttpsSession_OnReceivedRequestHeader_m0E8F4B7C7969B4ABD16BD77A064642AB7D3916A8(__this, L_6, NULL);
		// return;
		return;
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnReceivedRequest(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnReceivedRequest_mC4EF46040307D569FCBCA54600E76AD9A21D9B01 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	String_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		// var body = Request.Body;
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_2;
		L_2 = HttpsSession_get_Request_m66D0F6E8E7547576F7DDC270607F04F4C66E460C_inline(__this, NULL);
		NullCheck(L_2);
		String_t* L_3;
		L_3 = HttpRequest_get_Body_m3A0C5431AC84A0A5606FB1E8F3C9941D748D5074(L_2, NULL);
		V_0 = L_3;
		// var data = Encoding.UTF8.GetBytes(body);
		Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* L_4;
		L_4 = Encoding_get_UTF8_m9FA98A53CE96FD6D02982625C5246DD36C1235C9(NULL);
		String_t* L_5 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6;
		L_6 = VirtualFuncInvoker1< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*, String_t* >::Invoke(18 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		V_1 = L_6;
		// WebSocket.PrepareReceiveFrame(data, 0, data.Length);
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_7 = __this->___WebSocket_26;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = V_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_1;
		NullCheck(L_9);
		NullCheck(L_7);
		WebSocket_PrepareReceiveFrame_mF7CCEF38A6BB38404F96236EDA2BEA1185886EC7(L_7, L_8, ((int64_t)0), ((int64_t)((int32_t)(((RuntimeArray*)L_9)->max_length))), NULL);
		// return;
		return;
	}

IL_0038:
	{
		// base.OnReceivedRequest(request);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_10 = ___0_request;
		HttpsSession_OnReceivedRequest_m91EA625C06661028337FB3EAFEF87CE8BC7E297E(__this, L_10, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnReceivedRequestError(NetCoreServer.HttpRequest,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnReceivedRequestError_m49287036F98E34B6834F988FD604D08C7B9D7290 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, String_t* ___1_error, const RuntimeMethod* method) 
{
	{
		// if (WebSocket.WsHandshaked)
		WebSocket_t53570620BD82FA0D01F15B94ECF54507DB3F240C* L_0 = __this->___WebSocket_26;
		NullCheck(L_0);
		bool L_1 = L_0->___WsHandshaked_7;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// OnError(new SocketError());
		VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void NetCoreServer.SslSession::OnError(System.Net.Sockets.SocketError) */, __this, 0);
		// return;
		return;
	}

IL_0015:
	{
		// base.OnReceivedRequestError(request, error);
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_2 = ___0_request;
		String_t* L_3 = ___1_error;
		HttpsSession_OnReceivedRequestError_mD7B96584E9348C6F84C0DBEB8070AF6ABC714CDF(__this, L_2, L_3, NULL);
		// }
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnWsConnecting(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnWsConnecting_m944769D2B4F57AE452D30C9969C934D8224158ED (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnecting(HttpRequest request) {}
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnWsConnected(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnWsConnected_mE649F3B7D1E4F22A4AEF8A8415E605DA675996F2 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnected(HttpResponse response) {}
		return;
	}
}
// System.Boolean NetCoreServer.WssSession::OnWsConnecting(NetCoreServer.HttpRequest,NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WssSession_OnWsConnecting_m8710F91D45AFE1334F605F72784FD06DF8E7757A (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___1_response, const RuntimeMethod* method) 
{
	{
		// public virtual bool OnWsConnecting(HttpRequest request, HttpResponse response) { return true; }
		return (bool)1;
	}
}
// System.Void NetCoreServer.WssSession::OnWsConnected(NetCoreServer.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnWsConnected_mED0DBB0CB209BC25ED49BB766BDC2B7D649F39EB (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* ___0_request, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsConnected(HttpRequest request) {}
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnWsDisconnected()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnWsDisconnected_m07A22A13D6C4E97F9ADC18DF7983D10175ACD17D (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsDisconnected() {}
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnWsReceived(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnWsReceived_mE40DF9F14FCB97BF347F59CFD38559A999496A6E (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsReceived(byte[] buffer, long offset, long size) {}
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnWsClose(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnWsClose_m845D99949577CDD52EBCF0F1CF567DD759B112D0 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsClose(byte[] buffer, long offset, long size) { Close(1000); }
		bool L_0;
		L_0 = VirtualFuncInvoker1< bool, int32_t >::Invoke(39 /* System.Boolean NetCoreServer.WssSession::Close(System.Int32) */, __this, ((int32_t)1000));
		// public virtual void OnWsClose(byte[] buffer, long offset, long size) { Close(1000); }
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnWsPing(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnWsPing_m9E668DBB50950A5381692C705CEC5C349F39B28D (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsPing(byte[] buffer, long offset, long size) { SendPongAsync(buffer, offset, size); }
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_buffer;
		int64_t L_1 = ___1_offset;
		int64_t L_2 = ___2_size;
		bool L_3;
		L_3 = WssSession_SendPongAsync_m65707EF309012845C8BC1E7B19FAAE0E281AC367(__this, L_0, L_1, L_2, NULL);
		// public virtual void OnWsPing(byte[] buffer, long offset, long size) { SendPongAsync(buffer, offset, size); }
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnWsPong(System.Byte[],System.Int64,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnWsPong_m5FA6BB265CE4561DFB33FF33E06430A35B652196 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_buffer, int64_t ___1_offset, int64_t ___2_size, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsPong(byte[] buffer, long offset, long size) {}
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnWsError(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnWsError_m7A759EB120A3AD22723FE13B371459672D2BCD3F (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, String_t* ___0_error, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsError(string error) { OnError(SocketError.SocketError); }
		VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void NetCoreServer.SslSession::OnError(System.Net.Sockets.SocketError) */, __this, (-1));
		// public virtual void OnWsError(string error) { OnError(SocketError.SocketError); }
		return;
	}
}
// System.Void NetCoreServer.WssSession::OnWsError(System.Net.Sockets.SocketError)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_OnWsError_mAA0D98D25A9F31BB3429B179F341F59A90B863C6 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, int32_t ___0_error, const RuntimeMethod* method) 
{
	{
		// public virtual void OnWsError(SocketError error) { OnError(error); }
		int32_t L_0 = ___0_error;
		VirtualActionInvoker1< int32_t >::Invoke(22 /* System.Void NetCoreServer.SslSession::OnError(System.Net.Sockets.SocketError) */, __this, L_0);
		// public virtual void OnWsError(SocketError error) { OnError(error); }
		return;
	}
}
// System.Void NetCoreServer.WssSession::SendResponse(NetCoreServer.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WssSession_SendResponse_m22952DC1272F5DE104D329FC336AF3C135E11A28 (WssSession_t4B6383814D5515BC0E6CBCC6F2AC6593DF6D2DE8* __this, HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* ___0_response, const RuntimeMethod* method) 
{
	{
		// public new virtual void SendResponse(HttpResponse response) { SendResponseAsync(response); }
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_0 = ___0_response;
		bool L_1;
		L_1 = HttpsSession_SendResponseAsync_m39A43585BE7D84266425A07F21D6BB9B06DEBBAB(__this, L_0, NULL);
		// public new virtual void SendResponse(HttpResponse response) { SendResponseAsync(response); }
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* Buffer_get_Data_m1CAC56FE595AD7843B31E62A8BA40EC62173EF15_inline (Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Data => _data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->____data_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* HttpClient_get_Request_m3AF2795F7A9436858FE05D850558280EB57855C6_inline (HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC* __this, const RuntimeMethod* method) 
{
	{
		// public HttpRequest Request { get; protected set; }
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_0 = __this->___U3CRequestU3Ek__BackingField_26;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* HttpRequest_get_Cache_m343FBA220345DD12A9273ACC959CBD1BCBBAC0D4_inline (HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* __this, const RuntimeMethod* method) 
{
	{
		// public Buffer Cache { get { return _cache; } }
		Buffer_tBA2D79A42AF88E010B95FEA6CD1B782E94390883* L_0 = __this->____cache_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* HttpClient_get_Response_m3B1798352B6691E18C9C21A207257273655843DB_inline (HttpClient_t148F7A153E911B54F3CC1856B8FB99A5E907D0CC* __this, const RuntimeMethod* method) 
{
	{
		// protected HttpResponse Response { get; set; }
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_0 = __this->___U3CResponseU3Ek__BackingField_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t TcpClient_get_Id_mFB8E4DF514D9B6A467198A060B7EF0BE62F4357F_inline (TcpClient_t8816FBB771E8EB867D9D818739645822FEDF9FCB* __this, const RuntimeMethod* method) 
{
	{
		// public Guid Id { get; }
		Guid_t L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* HttpsClient_get_Request_m45278DC70A69F8ACABC6FE4C2D91E7F1D6B33D1C_inline (HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27* __this, const RuntimeMethod* method) 
{
	{
		// public HttpRequest Request { get; protected set; }
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_0 = __this->___U3CRequestU3Ek__BackingField_31;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* HttpsClient_get_Response_mB8B85F4F3D45164C24DFCA16EB97959782FFD3A1_inline (HttpsClient_t128D69E1AFE3A4B729329674A3A34203E8F03F27* __this, const RuntimeMethod* method) 
{
	{
		// protected HttpResponse Response { get; set; }
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_0 = __this->___U3CResponseU3Ek__BackingField_32;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t SslClient_get_Id_m1CAAEB17E3EC613A3B7BBBCDB5ED6FF03406F561_inline (SslClient_t06BBD56B70F1409F429877C6CB4E9322CE501A14* __this, const RuntimeMethod* method) 
{
	{
		// public Guid Id { get; }
		Guid_t L_0 = __this->___U3CIdU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool TcpServer_get_IsStarted_m13DA0CAD8C68BBDE04A609A79C2C9AED6076FDA7_inline (TcpServer_t5C6F2AC817CBED1047609592DB48A314B9BCD8C8* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsStarted { get; private set; }
		bool L_0 = __this->___U3CIsStartedU3Ek__BackingField_15;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* HttpSession_get_Request_mA2B3E106FF05FCE43CA50A3A78510DE023245C72_inline (HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C* __this, const RuntimeMethod* method) 
{
	{
		// protected HttpRequest Request { get; }
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_0 = __this->___U3CRequestU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* HttpSession_get_Response_m85959FC049415AAE77676B4E565CC9C065AD6D49_inline (HttpSession_tD966A7975BFDCBFE55D7E02E3609C2AFC3C59D4C* __this, const RuntimeMethod* method) 
{
	{
		// public HttpResponse Response { get; }
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_0 = __this->___U3CResponseU3Ek__BackingField_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool SslServer_get_IsStarted_mAF607798E818A5FC41ED75AFF27BD599DF748A0F_inline (SslServer_tD3CFB907EC7F7539A7ECFDC9B8FAD40B6D2B1CE7* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsStarted { get; private set; }
		bool L_0 = __this->___U3CIsStartedU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* HttpsSession_get_Request_m66D0F6E8E7547576F7DDC270607F04F4C66E460C_inline (HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641* __this, const RuntimeMethod* method) 
{
	{
		// protected HttpRequest Request { get; }
		HttpRequest_tFFE31D88E2A0078DDBA5634417DFA52BDC9B4AB2* L_0 = __this->___U3CRequestU3Ek__BackingField_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* HttpsSession_get_Response_m905F3026D6E1697465193E96E7EAC24774DA3EBE_inline (HttpsSession_tB337C29B47D7E01C9256C950A834D930F0646641* __this, const RuntimeMethod* method) 
{
	{
		// public HttpResponse Response { get; }
		HttpResponse_t7823A1A53C49AF3535C72AEC8EDF7FC6050AC9C3* L_0 = __this->___U3CResponseU3Ek__BackingField_25;
		return L_0;
	}
}
