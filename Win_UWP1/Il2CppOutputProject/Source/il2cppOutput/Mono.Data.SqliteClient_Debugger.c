#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#else
static const Il2CppMethodExecutionContextInfo g_methodExecutionContextInfos[1] = { { 0, 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#else
static const char* g_methodExecutionContextInfoStrings[1] = { NULL };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[121] = 
{
	{ 0, 0 } /* 0x06000001 System.Void Mono.Data.SqliteClient.SqliteCommand::.ctor(System.String,Mono.Data.SqliteClient.SqliteConnection) */,
	{ 0, 0 } /* 0x06000002 System.Void Mono.Data.SqliteClient.SqliteCommand::.ctor(System.String,Mono.Data.SqliteClient.SqliteConnection,System.Data.IDbTransaction) */,
	{ 0, 0 } /* 0x06000003 System.Object Mono.Data.SqliteClient.SqliteCommand::System.ICloneable.Clone() */,
	{ 0, 0 } /* 0x06000004 System.Void Mono.Data.SqliteClient.SqliteCommand::set_CommandText(System.String) */,
	{ 0, 0 } /* 0x06000005 Mono.Data.SqliteClient.SqliteConnection Mono.Data.SqliteClient.SqliteCommand::get_Connection() */,
	{ 0, 0 } /* 0x06000006 Mono.Data.SqliteClient.SqliteParameterCollection Mono.Data.SqliteClient.SqliteCommand::get_Parameters() */,
	{ 0, 0 } /* 0x06000007 System.Int32 Mono.Data.SqliteClient.SqliteCommand::NumChanges() */,
	{ 0, 0 } /* 0x06000008 System.Void Mono.Data.SqliteClient.SqliteCommand::BindParameters3(System.IntPtr) */,
	{ 0, 0 } /* 0x06000009 System.Void Mono.Data.SqliteClient.SqliteCommand::GetNextStatement(System.IntPtr,System.IntPtr&,System.IntPtr&) */,
	{ 0, 0 } /* 0x0600000A System.Void Mono.Data.SqliteClient.SqliteCommand::ExecuteStatement(System.IntPtr) */,
	{ 0, 0 } /* 0x0600000B System.Boolean Mono.Data.SqliteClient.SqliteCommand::ExecuteStatement(System.IntPtr,System.Int32&,System.IntPtr&,System.IntPtr&) */,
	{ 0, 0 } /* 0x0600000C System.String Mono.Data.SqliteClient.SqliteCommand::BindParameters2() */,
	{ 0, 0 } /* 0x0600000D System.Void Mono.Data.SqliteClient.SqliteCommand::Prepare() */,
	{ 0, 0 } /* 0x0600000E System.Int32 Mono.Data.SqliteClient.SqliteCommand::ExecuteNonQuery() */,
	{ 0, 0 } /* 0x0600000F Mono.Data.SqliteClient.SqliteDataReader Mono.Data.SqliteClient.SqliteCommand::ExecuteReader(System.Data.CommandBehavior) */,
	{ 0, 0 } /* 0x06000010 System.Data.Common.DbDataReader Mono.Data.SqliteClient.SqliteCommand::ExecuteDbDataReader(System.Data.CommandBehavior) */,
	{ 0, 0 } /* 0x06000011 Mono.Data.SqliteClient.SqliteDataReader Mono.Data.SqliteClient.SqliteCommand::ExecuteReader(System.Data.CommandBehavior,System.Boolean,System.Int32&) */,
	{ 0, 0 } /* 0x06000012 System.String Mono.Data.SqliteClient.SqliteCommand::GetError3() */,
	{ 0, 0 } /* 0x06000013 System.Void Mono.Data.SqliteClient.SqliteConnection::.ctor() */,
	{ 0, 0 } /* 0x06000014 System.Void Mono.Data.SqliteClient.SqliteConnection::.ctor(System.String) */,
	{ 0, 0 } /* 0x06000015 System.Object Mono.Data.SqliteClient.SqliteConnection::System.ICloneable.Clone() */,
	{ 0, 0 } /* 0x06000016 System.Void Mono.Data.SqliteClient.SqliteConnection::Dispose(System.Boolean) */,
	{ 0, 0 } /* 0x06000017 System.String Mono.Data.SqliteClient.SqliteConnection::get_ConnectionString() */,
	{ 0, 0 } /* 0x06000018 System.Void Mono.Data.SqliteClient.SqliteConnection::set_ConnectionString(System.String) */,
	{ 0, 0 } /* 0x06000019 System.Data.ConnectionState Mono.Data.SqliteClient.SqliteConnection::get_State() */,
	{ 0, 0 } /* 0x0600001A System.Text.Encoding Mono.Data.SqliteClient.SqliteConnection::get_Encoding() */,
	{ 0, 0 } /* 0x0600001B System.Int32 Mono.Data.SqliteClient.SqliteConnection::get_Version() */,
	{ 0, 0 } /* 0x0600001C System.IntPtr Mono.Data.SqliteClient.SqliteConnection::get_Handle() */,
	{ 0, 0 } /* 0x0600001D System.Void Mono.Data.SqliteClient.SqliteConnection::SetConnectionString(System.String) */,
	{ 0, 0 } /* 0x0600001E System.Void Mono.Data.SqliteClient.SqliteConnection::StartExec() */,
	{ 0, 0 } /* 0x0600001F System.Void Mono.Data.SqliteClient.SqliteConnection::EndExec() */,
	{ 0, 0 } /* 0x06000020 System.Void Mono.Data.SqliteClient.SqliteConnection::Close() */,
	{ 0, 0 } /* 0x06000021 System.Data.Common.DbCommand Mono.Data.SqliteClient.SqliteConnection::CreateDbCommand() */,
	{ 0, 0 } /* 0x06000022 System.Void Mono.Data.SqliteClient.SqliteConnection::Open() */,
	{ 0, 0 } /* 0x06000023 System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite_open(System.String,System.Int32,System.IntPtr&) */,
	{ 0, 0 } /* 0x06000024 System.Void Mono.Data.SqliteClient.Sqlite::sqlite_close(System.IntPtr) */,
	{ 0, 0 } /* 0x06000025 System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite_changes(System.IntPtr) */,
	{ 0, 0 } /* 0x06000026 System.Void Mono.Data.SqliteClient.Sqlite::sqliteFree(System.IntPtr) */,
	{ 0, 0 } /* 0x06000027 Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite_compile(System.IntPtr,System.IntPtr,System.IntPtr&,System.IntPtr&,System.IntPtr&) */,
	{ 0, 0 } /* 0x06000028 Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite_step(System.IntPtr,System.Int32&,System.IntPtr&,System.IntPtr&) */,
	{ 0, 0 } /* 0x06000029 Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite_finalize(System.IntPtr,System.IntPtr&) */,
	{ 0, 0 } /* 0x0600002A System.Void Mono.Data.SqliteClient.Sqlite::sqlite_busy_timeout(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x0600002B System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_open16(System.String,System.IntPtr&) */,
	{ 0, 0 } /* 0x0600002C System.Void Mono.Data.SqliteClient.Sqlite::sqlite3_close(System.IntPtr) */,
	{ 0, 0 } /* 0x0600002D System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_errmsg16(System.IntPtr) */,
	{ 0, 0 } /* 0x0600002E System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_changes(System.IntPtr) */,
	{ 0, 0 } /* 0x0600002F Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_prepare16(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&,System.IntPtr&) */,
	{ 0, 0 } /* 0x06000030 Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_step(System.IntPtr) */,
	{ 0, 0 } /* 0x06000031 Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_finalize(System.IntPtr) */,
	{ 0, 0 } /* 0x06000032 System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_column_name16(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x06000033 System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_column_text16(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x06000034 System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_column_blob(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x06000035 System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_column_bytes16(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x06000036 System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_column_count(System.IntPtr) */,
	{ 0, 0 } /* 0x06000037 System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_column_type(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x06000038 System.Int64 Mono.Data.SqliteClient.Sqlite::sqlite3_column_int64(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x06000039 System.Double Mono.Data.SqliteClient.Sqlite::sqlite3_column_double(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x0600003A System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_column_decltype16(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x0600003B System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_bind_parameter_count(System.IntPtr) */,
	{ 0, 0 } /* 0x0600003C System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_bind_parameter_name(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x0600003D Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_blob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr) */,
	{ 0, 0 } /* 0x0600003E Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_double(System.IntPtr,System.Int32,System.Double) */,
	{ 0, 0 } /* 0x0600003F Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_int(System.IntPtr,System.Int32,System.Int32) */,
	{ 0, 0 } /* 0x06000040 Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_int64(System.IntPtr,System.Int32,System.Int64) */,
	{ 0, 0 } /* 0x06000041 Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_null(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x06000042 Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_text16(System.IntPtr,System.Int32,System.String,System.Int32,System.IntPtr) */,
	{ 0, 0 } /* 0x06000043 System.Void Mono.Data.SqliteClient.Sqlite::sqlite3_busy_timeout(System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x06000044 System.IntPtr Mono.Data.SqliteClient.Sqlite::StringToHeap(System.String,System.Text.Encoding) */,
	{ 0, 0 } /* 0x06000045 System.String Mono.Data.SqliteClient.Sqlite::HeapToString(System.IntPtr,System.Text.Encoding) */,
	{ 0, 0 } /* 0x06000046 System.Void Mono.Data.SqliteClient.SqliteDataReader::.ctor(Mono.Data.SqliteClient.SqliteCommand,System.IntPtr,System.Int32) */,
	{ 0, 0 } /* 0x06000047 System.Int32 Mono.Data.SqliteClient.SqliteDataReader::get_FieldCount() */,
	{ 0, 0 } /* 0x06000048 System.Boolean Mono.Data.SqliteClient.SqliteDataReader::get_IsClosed() */,
	{ 0, 0 } /* 0x06000049 System.Void Mono.Data.SqliteClient.SqliteDataReader::ReadpVm(System.IntPtr,System.Int32,Mono.Data.SqliteClient.SqliteCommand) */,
	{ 0, 0 } /* 0x0600004A System.Void Mono.Data.SqliteClient.SqliteDataReader::ReadingDone() */,
	{ 0, 0 } /* 0x0600004B System.Void Mono.Data.SqliteClient.SqliteDataReader::Close() */,
	{ 0, 0 } /* 0x0600004C System.Void Mono.Data.SqliteClient.SqliteDataReader::Dispose(System.Boolean) */,
	{ 0, 0 } /* 0x0600004D System.Collections.IEnumerator Mono.Data.SqliteClient.SqliteDataReader::GetEnumerator() */,
	{ 0, 0 } /* 0x0600004E System.Boolean Mono.Data.SqliteClient.SqliteDataReader::NextResult() */,
	{ 0, 0 } /* 0x0600004F System.Boolean Mono.Data.SqliteClient.SqliteDataReader::Read() */,
	{ 0, 0 } /* 0x06000050 System.String Mono.Data.SqliteClient.SqliteDataReader::GetDataTypeName(System.Int32) */,
	{ 0, 0 } /* 0x06000051 System.Type Mono.Data.SqliteClient.SqliteDataReader::GetFieldType(System.Int32) */,
	{ 0, 0 } /* 0x06000052 System.Int16 Mono.Data.SqliteClient.SqliteDataReader::GetInt16(System.Int32) */,
	{ 0, 0 } /* 0x06000053 System.Int32 Mono.Data.SqliteClient.SqliteDataReader::GetInt32(System.Int32) */,
	{ 0, 0 } /* 0x06000054 System.String Mono.Data.SqliteClient.SqliteDataReader::GetName(System.Int32) */,
	{ 0, 0 } /* 0x06000055 System.String Mono.Data.SqliteClient.SqliteDataReader::GetString(System.Int32) */,
	{ 0, 0 } /* 0x06000056 System.Int32 Mono.Data.SqliteClient.SqliteDataReader::GetValues(System.Object[]) */,
	{ 0, 0 } /* 0x06000057 System.Void Mono.Data.SqliteClient.SqliteSyntaxException::.ctor(System.String) */,
	{ 0, 0 } /* 0x06000058 System.Void Mono.Data.SqliteClient.SqliteExecutionException::.ctor() */,
	{ 0, 0 } /* 0x06000059 System.Void Mono.Data.SqliteClient.SqliteExecutionException::.ctor(System.String) */,
	{ 0, 0 } /* 0x0600005A System.Void Mono.Data.SqliteClient.SqliteBusyException::.ctor() */,
	{ 0, 0 } /* 0x0600005B System.Void Mono.Data.SqliteClient.SqliteBusyException::.ctor(System.String) */,
	{ 0, 0 } /* 0x0600005C System.Void Mono.Data.SqliteClient.SqliteParameterCollection::.ctor() */,
	{ 0, 0 } /* 0x0600005D System.Void Mono.Data.SqliteClient.SqliteParameterCollection::CheckSqliteParam(System.Object) */,
	{ 0, 0 } /* 0x0600005E System.Void Mono.Data.SqliteClient.SqliteParameterCollection::RecreateNamedHash() */,
	{ 0, 0 } /* 0x0600005F System.String Mono.Data.SqliteClient.SqliteParameterCollection::GenerateParameterName() */,
	{ 0, 0 } /* 0x06000060 System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::isPrefixed(System.String) */,
	{ 0, 0 } /* 0x06000061 System.Data.Common.DbParameter Mono.Data.SqliteClient.SqliteParameterCollection::GetParameter(System.Int32) */,
	{ 0, 0 } /* 0x06000062 System.Data.Common.DbParameter Mono.Data.SqliteClient.SqliteParameterCollection::GetParameter(System.String) */,
	{ 0, 0 } /* 0x06000063 System.Void Mono.Data.SqliteClient.SqliteParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter) */,
	{ 0, 0 } /* 0x06000064 System.Int32 Mono.Data.SqliteClient.SqliteParameterCollection::get_Count() */,
	{ 0, 0 } /* 0x06000065 System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::get_IsFixedSize() */,
	{ 0, 0 } /* 0x06000066 System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::get_IsReadOnly() */,
	{ 0, 0 } /* 0x06000067 System.Object Mono.Data.SqliteClient.SqliteParameterCollection::get_SyncRoot() */,
	{ 0, 0 } /* 0x06000068 System.Int32 Mono.Data.SqliteClient.SqliteParameterCollection::Add(System.Object) */,
	{ 0, 0 } /* 0x06000069 System.Void Mono.Data.SqliteClient.SqliteParameterCollection::Clear() */,
	{ 0, 0 } /* 0x0600006A System.Void Mono.Data.SqliteClient.SqliteParameterCollection::CopyTo(System.Array,System.Int32) */,
	{ 0, 0 } /* 0x0600006B System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::Contains(System.Object) */,
	{ 0, 0 } /* 0x0600006C System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::Contains(System.String) */,
	{ 0, 0 } /* 0x0600006D System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::Contains(Mono.Data.SqliteClient.SqliteParameter) */,
	{ 0, 0 } /* 0x0600006E System.Collections.IEnumerator Mono.Data.SqliteClient.SqliteParameterCollection::GetEnumerator() */,
	{ 0, 0 } /* 0x0600006F System.Int32 Mono.Data.SqliteClient.SqliteParameterCollection::IndexOf(System.Object) */,
	{ 0, 0 } /* 0x06000070 System.Int32 Mono.Data.SqliteClient.SqliteParameterCollection::IndexOf(System.String) */,
	{ 0, 0 } /* 0x06000071 System.Int32 Mono.Data.SqliteClient.SqliteParameterCollection::IndexOf(Mono.Data.SqliteClient.SqliteParameter) */,
	{ 0, 0 } /* 0x06000072 System.Void Mono.Data.SqliteClient.SqliteParameterCollection::Insert(System.Int32,System.Object) */,
	{ 0, 0 } /* 0x06000073 System.Void Mono.Data.SqliteClient.SqliteParameterCollection::Remove(System.Object) */,
	{ 0, 0 } /* 0x06000074 System.Void Mono.Data.SqliteClient.SqliteParameterCollection::RemoveAt(System.Int32) */,
	{ 0, 0 } /* 0x06000075 System.Void Mono.Data.SqliteClient.SqliteParameterCollection::RemoveAt(System.String) */,
	{ 0, 0 } /* 0x06000076 System.Void Mono.Data.SqliteClient.SqliteParameterCollection::RemoveAt(Mono.Data.SqliteClient.SqliteParameter) */,
	{ 0, 0 } /* 0x06000077 System.String Mono.Data.SqliteClient.SqliteParameter::get_ParameterName() */,
	{ 0, 0 } /* 0x06000078 System.Void Mono.Data.SqliteClient.SqliteParameter::set_ParameterName(System.String) */,
	{ 0, 0 } /* 0x06000079 System.Object Mono.Data.SqliteClient.SqliteParameter::get_Value() */,
};
#else
static const Il2CppMethodExecutionContextInfoIndex g_methodExecutionContextInfoIndexes[1] = { { 0, 0} };
#endif
#if IL2CPP_MONO_DEBUGGER
extern Il2CppSequencePoint g_sequencePointsMono_Data_SqliteClient[];
Il2CppSequencePoint g_sequencePointsMono_Data_SqliteClient[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#else
extern Il2CppSequencePoint g_sequencePointsMono_Data_SqliteClient[];
Il2CppSequencePoint g_sequencePointsMono_Data_SqliteClient[1] = { { 0, 0, 0, 0, 0, 0, 0, kSequencePointKind_Normal, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppCatchPoint g_catchPoints[] = {
{ 15268, 3799, 118, 0, -1 },
{ 15268, 3965, 131, 0, -1 },
};
#else
static const Il2CppCatchPoint g_catchPoints[1] = { { 0, 0, 0, 0, } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#else
static const Il2CppSequencePointSourceFile g_sequencePointSourceFiles[1] = { NULL, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#else
static const Il2CppTypeSourceFilePair g_typeSourceFiles[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#else
static const Il2CppMethodScope g_methodScopes[1] = { { 0, 0 } };
#endif
#if IL2CPP_MONO_DEBUGGER
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[121] = 
{
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteCommand::.ctor(System.String,Mono.Data.SqliteClient.SqliteConnection) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteCommand::.ctor(System.String,Mono.Data.SqliteClient.SqliteConnection,System.Data.IDbTransaction) */,
	{ 0, 0, 0 } /* System.Object Mono.Data.SqliteClient.SqliteCommand::System.ICloneable.Clone() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteCommand::set_CommandText(System.String) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteConnection Mono.Data.SqliteClient.SqliteCommand::get_Connection() */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteParameterCollection Mono.Data.SqliteClient.SqliteCommand::get_Parameters() */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.SqliteCommand::NumChanges() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteCommand::BindParameters3(System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteCommand::GetNextStatement(System.IntPtr,System.IntPtr&,System.IntPtr&) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteCommand::ExecuteStatement(System.IntPtr) */,
	{ 0, 0, 0 } /* System.Boolean Mono.Data.SqliteClient.SqliteCommand::ExecuteStatement(System.IntPtr,System.Int32&,System.IntPtr&,System.IntPtr&) */,
	{ 0, 0, 0 } /* System.String Mono.Data.SqliteClient.SqliteCommand::BindParameters2() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteCommand::Prepare() */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.SqliteCommand::ExecuteNonQuery() */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteDataReader Mono.Data.SqliteClient.SqliteCommand::ExecuteReader(System.Data.CommandBehavior) */,
	{ 0, 0, 0 } /* System.Data.Common.DbDataReader Mono.Data.SqliteClient.SqliteCommand::ExecuteDbDataReader(System.Data.CommandBehavior) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteDataReader Mono.Data.SqliteClient.SqliteCommand::ExecuteReader(System.Data.CommandBehavior,System.Boolean,System.Int32&) */,
	{ 0, 0, 0 } /* System.String Mono.Data.SqliteClient.SqliteCommand::GetError3() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteConnection::.ctor() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteConnection::.ctor(System.String) */,
	{ 0, 0, 0 } /* System.Object Mono.Data.SqliteClient.SqliteConnection::System.ICloneable.Clone() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteConnection::Dispose(System.Boolean) */,
	{ 0, 0, 0 } /* System.String Mono.Data.SqliteClient.SqliteConnection::get_ConnectionString() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteConnection::set_ConnectionString(System.String) */,
	{ 0, 0, 0 } /* System.Data.ConnectionState Mono.Data.SqliteClient.SqliteConnection::get_State() */,
	{ 0, 0, 0 } /* System.Text.Encoding Mono.Data.SqliteClient.SqliteConnection::get_Encoding() */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.SqliteConnection::get_Version() */,
	{ 0, 0, 0 } /* System.IntPtr Mono.Data.SqliteClient.SqliteConnection::get_Handle() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteConnection::SetConnectionString(System.String) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteConnection::StartExec() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteConnection::EndExec() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteConnection::Close() */,
	{ 0, 0, 0 } /* System.Data.Common.DbCommand Mono.Data.SqliteClient.SqliteConnection::CreateDbCommand() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteConnection::Open() */,
	{ 0, 0, 0 } /* System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite_open(System.String,System.Int32,System.IntPtr&) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.Sqlite::sqlite_close(System.IntPtr) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite_changes(System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.Sqlite::sqliteFree(System.IntPtr) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite_compile(System.IntPtr,System.IntPtr,System.IntPtr&,System.IntPtr&,System.IntPtr&) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite_step(System.IntPtr,System.Int32&,System.IntPtr&,System.IntPtr&) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite_finalize(System.IntPtr,System.IntPtr&) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.Sqlite::sqlite_busy_timeout(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_open16(System.String,System.IntPtr&) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.Sqlite::sqlite3_close(System.IntPtr) */,
	{ 0, 0, 0 } /* System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_errmsg16(System.IntPtr) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_changes(System.IntPtr) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_prepare16(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr&,System.IntPtr&) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_step(System.IntPtr) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_finalize(System.IntPtr) */,
	{ 0, 0, 0 } /* System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_column_name16(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_column_text16(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_column_blob(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_column_bytes16(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_column_count(System.IntPtr) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_column_type(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.Int64 Mono.Data.SqliteClient.Sqlite::sqlite3_column_int64(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.Double Mono.Data.SqliteClient.Sqlite::sqlite3_column_double(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_column_decltype16(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.Sqlite::sqlite3_bind_parameter_count(System.IntPtr) */,
	{ 0, 0, 0 } /* System.IntPtr Mono.Data.SqliteClient.Sqlite::sqlite3_bind_parameter_name(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_blob(System.IntPtr,System.Int32,System.Byte[],System.Int32,System.IntPtr) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_double(System.IntPtr,System.Int32,System.Double) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_int(System.IntPtr,System.Int32,System.Int32) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_int64(System.IntPtr,System.Int32,System.Int64) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_null(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* Mono.Data.SqliteClient.SqliteError Mono.Data.SqliteClient.Sqlite::sqlite3_bind_text16(System.IntPtr,System.Int32,System.String,System.Int32,System.IntPtr) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.Sqlite::sqlite3_busy_timeout(System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.IntPtr Mono.Data.SqliteClient.Sqlite::StringToHeap(System.String,System.Text.Encoding) */,
	{ 0, 0, 0 } /* System.String Mono.Data.SqliteClient.Sqlite::HeapToString(System.IntPtr,System.Text.Encoding) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteDataReader::.ctor(Mono.Data.SqliteClient.SqliteCommand,System.IntPtr,System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.SqliteDataReader::get_FieldCount() */,
	{ 0, 0, 0 } /* System.Boolean Mono.Data.SqliteClient.SqliteDataReader::get_IsClosed() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteDataReader::ReadpVm(System.IntPtr,System.Int32,Mono.Data.SqliteClient.SqliteCommand) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteDataReader::ReadingDone() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteDataReader::Close() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteDataReader::Dispose(System.Boolean) */,
	{ 0, 0, 0 } /* System.Collections.IEnumerator Mono.Data.SqliteClient.SqliteDataReader::GetEnumerator() */,
	{ 0, 0, 0 } /* System.Boolean Mono.Data.SqliteClient.SqliteDataReader::NextResult() */,
	{ 0, 0, 0 } /* System.Boolean Mono.Data.SqliteClient.SqliteDataReader::Read() */,
	{ 0, 0, 0 } /* System.String Mono.Data.SqliteClient.SqliteDataReader::GetDataTypeName(System.Int32) */,
	{ 0, 0, 0 } /* System.Type Mono.Data.SqliteClient.SqliteDataReader::GetFieldType(System.Int32) */,
	{ 0, 0, 0 } /* System.Int16 Mono.Data.SqliteClient.SqliteDataReader::GetInt16(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.SqliteDataReader::GetInt32(System.Int32) */,
	{ 0, 0, 0 } /* System.String Mono.Data.SqliteClient.SqliteDataReader::GetName(System.Int32) */,
	{ 0, 0, 0 } /* System.String Mono.Data.SqliteClient.SqliteDataReader::GetString(System.Int32) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.SqliteDataReader::GetValues(System.Object[]) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteSyntaxException::.ctor(System.String) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteExecutionException::.ctor() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteExecutionException::.ctor(System.String) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteBusyException::.ctor() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteBusyException::.ctor(System.String) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameterCollection::.ctor() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameterCollection::CheckSqliteParam(System.Object) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameterCollection::RecreateNamedHash() */,
	{ 0, 0, 0 } /* System.String Mono.Data.SqliteClient.SqliteParameterCollection::GenerateParameterName() */,
	{ 0, 0, 0 } /* System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::isPrefixed(System.String) */,
	{ 0, 0, 0 } /* System.Data.Common.DbParameter Mono.Data.SqliteClient.SqliteParameterCollection::GetParameter(System.Int32) */,
	{ 0, 0, 0 } /* System.Data.Common.DbParameter Mono.Data.SqliteClient.SqliteParameterCollection::GetParameter(System.String) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameterCollection::SetParameter(System.Int32,System.Data.Common.DbParameter) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.SqliteParameterCollection::get_Count() */,
	{ 0, 0, 0 } /* System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::get_IsFixedSize() */,
	{ 0, 0, 0 } /* System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::get_IsReadOnly() */,
	{ 0, 0, 0 } /* System.Object Mono.Data.SqliteClient.SqliteParameterCollection::get_SyncRoot() */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.SqliteParameterCollection::Add(System.Object) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameterCollection::Clear() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameterCollection::CopyTo(System.Array,System.Int32) */,
	{ 0, 0, 0 } /* System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::Contains(System.Object) */,
	{ 0, 0, 0 } /* System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::Contains(System.String) */,
	{ 0, 0, 0 } /* System.Boolean Mono.Data.SqliteClient.SqliteParameterCollection::Contains(Mono.Data.SqliteClient.SqliteParameter) */,
	{ 0, 0, 0 } /* System.Collections.IEnumerator Mono.Data.SqliteClient.SqliteParameterCollection::GetEnumerator() */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.SqliteParameterCollection::IndexOf(System.Object) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.SqliteParameterCollection::IndexOf(System.String) */,
	{ 0, 0, 0 } /* System.Int32 Mono.Data.SqliteClient.SqliteParameterCollection::IndexOf(Mono.Data.SqliteClient.SqliteParameter) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameterCollection::Insert(System.Int32,System.Object) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameterCollection::Remove(System.Object) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameterCollection::RemoveAt(System.Int32) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameterCollection::RemoveAt(System.String) */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameterCollection::RemoveAt(Mono.Data.SqliteClient.SqliteParameter) */,
	{ 0, 0, 0 } /* System.String Mono.Data.SqliteClient.SqliteParameter::get_ParameterName() */,
	{ 0, 0, 0 } /* System.Void Mono.Data.SqliteClient.SqliteParameter::set_ParameterName(System.String) */,
	{ 0, 0, 0 } /* System.Object Mono.Data.SqliteClient.SqliteParameter::get_Value() */,
};
#else
static const Il2CppMethodHeaderInfo g_methodHeaderInfos[1] = { { 0, 0, 0 } };
#endif
IL2CPP_EXTERN_C const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationMono_Data_SqliteClient;
const Il2CppDebuggerMetadataRegistration g_DebuggerMetadataRegistrationMono_Data_SqliteClient = 
{
	(Il2CppMethodExecutionContextInfo*)g_methodExecutionContextInfos,
	(Il2CppMethodExecutionContextInfoIndex*)g_methodExecutionContextInfoIndexes,
	(Il2CppMethodScope*)g_methodScopes,
	(Il2CppMethodHeaderInfo*)g_methodHeaderInfos,
	(Il2CppSequencePointSourceFile*)g_sequencePointSourceFiles,
	0,
	(Il2CppSequencePoint*)g_sequencePointsMono_Data_SqliteClient,
	2,
	(Il2CppCatchPoint*)g_catchPoints,
	0,
	(Il2CppTypeSourceFilePair*)g_typeSourceFiles,
	(const char**)g_methodExecutionContextInfoStrings,
};
