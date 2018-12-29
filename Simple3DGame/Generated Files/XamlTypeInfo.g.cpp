﻿//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------
#include "pch.h"
#include "XamlTypeInfo.g.h"

#include "App.xaml.h"
#include "DirectXPage.xaml.h"
#include "XamlBindingInfo.g.hpp"
#include "App.g.hpp"
#include "DirectXPage.g.hpp"

template<typename T>
::Platform::Object^ ActivateType()
{
    return ref new T;
}

template<typename TInstance, typename TItem>
void CollectionAdd(::Platform::Object^ instance, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Append((TItem)item);
}

template<typename TInstance, typename TKey, typename TItem>
void DictionaryAdd(::Platform::Object^ instance, ::Platform::Object^ key, ::Platform::Object^ item)
{
    safe_cast<TInstance^>(instance)->Insert((TKey)key, (TItem)item);
}

template<typename T>
::Platform::Object^ FromStringConverter(::XamlTypeInfo::InfoProvider::XamlUserType^ userType, ::Platform::String^ input)
{
    return ref new ::Platform::Box<T>((T)userType->CreateEnumUIntFromString(input));
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_level_no(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->level_no);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_enabled(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->enabled);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_Score(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->Score);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_current_level(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->current_level);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_score(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->score);
}

template<typename TDeclaringType, typename TValue>
::Platform::Object^ GetValueTypeMember_Index(::Platform::Object^ instance)
{
    return ref new ::Platform::Box<TValue>(safe_cast<TDeclaringType^>(instance)->Index);
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_new_visible(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->new_visible;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_opaic(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->opaic;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Name(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Name;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Image2(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Image2;
}

template<typename TDeclaringType>
::Platform::Object^ GetReferenceTypeMember_Image(::Platform::Object^ instance)
{
    return safe_cast<TDeclaringType^>(instance)->Image;
}

template<typename TDeclaringType, typename TValue>
void SetValueTypeMember_level_no(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->level_no = safe_cast<::Platform::IBox<TValue>^>(value)->Value;
}

template<typename TDeclaringType, typename TValue>
void SetValueTypeMember_enabled(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->enabled = safe_cast<::Platform::IBox<TValue>^>(value)->Value;
}

template<typename TDeclaringType, typename TValue>
void SetValueTypeMember_Score(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Score = safe_cast<::Platform::IBox<TValue>^>(value)->Value;
}

template<typename TDeclaringType, typename TValue>
void SetValueTypeMember_current_level(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->current_level = safe_cast<::Platform::IBox<TValue>^>(value)->Value;
}

template<typename TDeclaringType, typename TValue>
void SetValueTypeMember_score(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->score = safe_cast<::Platform::IBox<TValue>^>(value)->Value;
}

template<typename TDeclaringType, typename TValue>
void SetValueTypeMember_Index(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Index = safe_cast<::Platform::IBox<TValue>^>(value)->Value;
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_new_visible(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->new_visible = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_opaic(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->opaic = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_Name(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Name = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_Image2(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Image2 = safe_cast<TValue^>(value);
}

template<typename TDeclaringType, typename TValue>
void SetReferenceTypeMember_Image(::Platform::Object^ instance, ::Platform::Object^ value)
{
    safe_cast<TDeclaringType^>(instance)->Image = safe_cast<TValue^>(value);
}

enum TypeInfo_Flags
{
    TypeInfo_Flags_None                 = 0x00,
    TypeInfo_Flags_IsLocalType          = 0x01,
    TypeInfo_Flags_IsSystemType         = 0x02,
    TypeInfo_Flags_IsReturnTypeStub     = 0x04,
    TypeInfo_Flags_IsBindable           = 0x08,
    TypeInfo_Flags_IsMarkupExtension    = 0x10, 
};

struct TypeInfo
{
    PCWSTR  typeName;
    PCWSTR contentPropertyName;
    ::Platform::Object^ (*activator)();
    void (*collectionAdd)(::Platform::Object^, ::Platform::Object^);
    void (*dictionaryAdd)(::Platform::Object^, ::Platform::Object^, ::Platform::Object^);
    ::Platform::Object^ (*fromStringConverter)(::XamlTypeInfo::InfoProvider::XamlUserType^, ::Platform::String^);
    int     baseTypeIndex;
    int     firstMemberIndex;
    int     firstEnumValueIndex;
    int     createFromStringIndex;
    ::Windows::UI::Xaml::Interop::TypeKind kindofType;
    unsigned int flags;
};

const TypeInfo TypeInfos[] = 
{
    //   0
    L"Int32", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //   1
    L"Object", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //   2
    L"String", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //   3
    L"Boolean", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //   4
    L"Simple3DGame.City", L"",
    &ActivateType<::Simple3DGame::City>, nullptr, nullptr, nullptr,
    1, // Object
    0, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_IsBindable | TypeInfo_Flags_None,
    //   5
    L"Simple3DGame.PaintList", L"",
    &ActivateType<::Simple3DGame::PaintList>, nullptr, nullptr, nullptr,
    1, // Object
    8, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_IsBindable | TypeInfo_Flags_None,
    //   6
    L"Simple3DGame.PlayerList", L"",
    &ActivateType<::Simple3DGame::PlayerList>, nullptr, nullptr, nullptr,
    1, // Object
    11, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_IsBindable | TypeInfo_Flags_None,
    //   7
    L"Simple3DGame.DirectXPage", L"",
    &ActivateType<::Simple3DGame::DirectXPage>, nullptr, nullptr, nullptr,
    8, // Windows.UI.Xaml.Controls.Page
    15, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_IsLocalType | TypeInfo_Flags_None,
    //   8
    L"Windows.UI.Xaml.Controls.Page", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    15, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //   9
    L"Windows.UI.Xaml.Controls.UserControl", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1,
    15, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Metadata,
    TypeInfo_Flags_IsSystemType | TypeInfo_Flags_None,
    //  Last type here is for padding
    L"", L"",
    nullptr, nullptr, nullptr, nullptr,
    -1, 
    15, 0, -1, ::Windows::UI::Xaml::Interop::TypeKind::Custom,
    TypeInfo_Flags_None,
};

const UINT TypeInfoLookup[] = { 
      0,   //   0
      0,   //   1
      0,   //   2
      0,   //   3
      0,   //   4
      0,   //   5
      1,   //   6
      3,   //   7
      4,   //   8
      4,   //   9
      4,   //  10
      4,   //  11
      4,   //  12
      4,   //  13
      4,   //  14
      4,   //  15
      4,   //  16
      4,   //  17
      5,   //  18
      5,   //  19
      5,   //  20
      5,   //  21
      5,   //  22
      6,   //  23
      7,   //  24
      8,   //  25
      8,   //  26
      8,   //  27
      8,   //  28
      8,   //  29
      9,   //  30
      9,   //  31
      9,   //  32
      9,   //  33
      9,   //  34
      9,   //  35
      9,   //  36
     10,   //  37
};

struct MemberInfo 
{
    PCWSTR shortName;
    ::Platform::Object^ (*getter)(::Platform::Object^);
    void (*setter)(::Platform::Object^, ::Platform::Object^);
    int typeIndex;
    int targetTypeIndex;
    bool isReadOnly;
    bool isDependencyProperty;
    bool isAttachable;
};

const MemberInfo MemberInfos[] = 
{
    //   0 - Simple3DGame.City.new_visible
    L"new_visible",
    &GetReferenceTypeMember_new_visible<::Simple3DGame::City>,
    &SetReferenceTypeMember_new_visible<::Simple3DGame::City, ::Platform::String>,
    2, // String
    -1,
    false, false, false,
    //   1 - Simple3DGame.City.opaic
    L"opaic",
    &GetReferenceTypeMember_opaic<::Simple3DGame::City>,
    &SetReferenceTypeMember_opaic<::Simple3DGame::City, ::Platform::String>,
    2, // String
    -1,
    false, false, false,
    //   2 - Simple3DGame.City.level_no
    L"level_no",
    &GetValueTypeMember_level_no<::Simple3DGame::City, ::default::int32>,
    &SetValueTypeMember_level_no<::Simple3DGame::City, ::default::int32>,
    0, // Int32
    -1,
    false, false, false,
    //   3 - Simple3DGame.City.enabled
    L"enabled",
    &GetValueTypeMember_enabled<::Simple3DGame::City, ::Platform::Boolean>,
    &SetValueTypeMember_enabled<::Simple3DGame::City, ::Platform::Boolean>,
    3, // Boolean
    -1,
    false, false, false,
    //   4 - Simple3DGame.City.Score
    L"Score",
    &GetValueTypeMember_Score<::Simple3DGame::City, ::default::int32>,
    &SetValueTypeMember_Score<::Simple3DGame::City, ::default::int32>,
    0, // Int32
    -1,
    false, false, false,
    //   5 - Simple3DGame.City.Name
    L"Name",
    &GetReferenceTypeMember_Name<::Simple3DGame::City>,
    &SetReferenceTypeMember_Name<::Simple3DGame::City, ::Platform::String>,
    2, // String
    -1,
    false, false, false,
    //   6 - Simple3DGame.City.Image2
    L"Image2",
    &GetReferenceTypeMember_Image2<::Simple3DGame::City>,
    &SetReferenceTypeMember_Image2<::Simple3DGame::City, ::Platform::String>,
    2, // String
    -1,
    false, false, false,
    //   7 - Simple3DGame.City.Image
    L"Image",
    &GetReferenceTypeMember_Image<::Simple3DGame::City>,
    &SetReferenceTypeMember_Image<::Simple3DGame::City, ::Platform::String>,
    2, // String
    -1,
    false, false, false,
    //   8 - Simple3DGame.PaintList.Image
    L"Image",
    &GetReferenceTypeMember_Image<::Simple3DGame::PaintList>,
    &SetReferenceTypeMember_Image<::Simple3DGame::PaintList, ::Platform::String>,
    2, // String
    -1,
    false, false, false,
    //   9 - Simple3DGame.PaintList.Name
    L"Name",
    &GetReferenceTypeMember_Name<::Simple3DGame::PaintList>,
    &SetReferenceTypeMember_Name<::Simple3DGame::PaintList, ::Platform::String>,
    2, // String
    -1,
    false, false, false,
    //  10 - Simple3DGame.PaintList.Index
    L"Index",
    &GetValueTypeMember_Index<::Simple3DGame::PaintList, ::default::int32>,
    &SetValueTypeMember_Index<::Simple3DGame::PaintList, ::default::int32>,
    0, // Int32
    -1,
    false, false, false,
    //  11 - Simple3DGame.PlayerList.current_level
    L"current_level",
    &GetValueTypeMember_current_level<::Simple3DGame::PlayerList, ::default::int32>,
    &SetValueTypeMember_current_level<::Simple3DGame::PlayerList, ::default::int32>,
    0, // Int32
    -1,
    false, false, false,
    //  12 - Simple3DGame.PlayerList.score
    L"score",
    &GetValueTypeMember_score<::Simple3DGame::PlayerList, ::default::int32>,
    &SetValueTypeMember_score<::Simple3DGame::PlayerList, ::default::int32>,
    0, // Int32
    -1,
    false, false, false,
    //  13 - Simple3DGame.PlayerList.Name
    L"Name",
    &GetReferenceTypeMember_Name<::Simple3DGame::PlayerList>,
    &SetReferenceTypeMember_Name<::Simple3DGame::PlayerList, ::Platform::String>,
    2, // String
    -1,
    false, false, false,
    //  14 - Simple3DGame.PlayerList.Index
    L"Index",
    &GetValueTypeMember_Index<::Simple3DGame::PlayerList, ::default::int32>,
    &SetValueTypeMember_Index<::Simple3DGame::PlayerList, ::default::int32>,
    0, // Int32
    -1,
    false, false, false,
};

PCWSTR GetShortName(PCWSTR longName)
{
    PCWSTR separator = wcsrchr(longName, '.');
    return separator != nullptr ? separator + 1: longName;
}

const TypeInfo* GetTypeInfo(::Platform::String^ typeName)
{
    auto typeNameLength = typeName->Length();
    if (typeNameLength < _countof(TypeInfoLookup) - 1)
    {
        for (UINT i = TypeInfoLookup[typeNameLength]; i < TypeInfoLookup[typeNameLength+1]; i++)
        {
            if (typeName == ::Platform::StringReference(TypeInfos[i].typeName))
            {
                return &TypeInfos[i];
            }
        }
    }
    return nullptr;
}

const MemberInfo* GetMemberInfo(::Platform::String^ longMemberName)
{
    auto lastDotIndex = longMemberName->Length();
    while (true)
    {
        if (longMemberName->Data()[lastDotIndex] == '.')
        {
            const TypeInfo* pTypeInfo = GetTypeInfo(ref new ::Platform::String(longMemberName->Data(), lastDotIndex));
            const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
            if (pTypeInfo)
            {
                PCWSTR shortMemberName = GetShortName(longMemberName->Data());
                for (int i = pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
                {
                    if (wcscmp(shortMemberName, MemberInfos[i].shortName) == 0)
                    {
                        return &MemberInfos[i];
                    }
                }
            }
            break;
        }
        if (lastDotIndex == 0)
        {
            break;
        }
        lastDotIndex--;
    }
    return nullptr;
}

::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::OtherProviders::get()
{
    if(_otherProviders == nullptr)
    {
        auto otherProviders = ref new ::Platform::Collections::Vector<::Windows::UI::Xaml::Markup::IXamlMetadataProvider^>();
        _otherProviders = otherProviders;
    }
    return _otherProviders;
}

::Windows::UI::Xaml::Markup::IXamlType^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlType(::Platform::String^ typeName)
{
    const TypeInfo* pTypeInfo = GetTypeInfo(typeName);
    const TypeInfo* pNextTypeInfo = pTypeInfo + 1;
    if (pTypeInfo == nullptr || pNextTypeInfo == nullptr)
    {
        return nullptr;
    }
    else if (pTypeInfo->flags & TypeInfo_Flags_IsSystemType)
    {
        return ref new ::XamlTypeInfo::InfoProvider::XamlSystemBaseType(typeName);
    }
    else
    {
        ::XamlTypeInfo::InfoProvider::XamlUserType^ userType = ref new ::XamlTypeInfo::InfoProvider::XamlUserType(
            this, 
            ::Platform::StringReference(pTypeInfo->typeName), 
            this->GetXamlTypeByName(::Platform::StringReference(pTypeInfo->baseTypeIndex >= 0 ? TypeInfos[pTypeInfo->baseTypeIndex].typeName : L"")));
        userType->KindOfType = pTypeInfo->kindofType;
        userType->Activator = pTypeInfo->activator;
        userType->CollectionAdd = pTypeInfo->collectionAdd;
        userType->DictionaryAdd = pTypeInfo->dictionaryAdd;
        userType->FromStringConverter = pTypeInfo->fromStringConverter;
        userType->ContentPropertyName = ::Platform::StringReference(pTypeInfo->contentPropertyName);
        userType->IsLocalType = pTypeInfo->flags & TypeInfo_Flags_IsLocalType;
        userType->IsReturnTypeStub = pTypeInfo->flags & TypeInfo_Flags_IsReturnTypeStub;
        userType->IsBindable = pTypeInfo->flags & TypeInfo_Flags_IsBindable;
        userType->IsMarkupExtension = pTypeInfo->flags & TypeInfo_Flags_IsMarkupExtension;
        userType->CreateFromStringMethod = nullptr;
        int nextMemberIndex = pTypeInfo->firstMemberIndex;
        for (int i=pTypeInfo->firstMemberIndex; i < pNextTypeInfo->firstMemberIndex; i++)
        {
            userType->AddMemberName(::Platform::StringReference(MemberInfos[i].shortName));
            nextMemberIndex++;
        }
        return userType;
    }
}

::Windows::UI::Xaml::Markup::IXamlMember^ ::XamlTypeInfo::InfoProvider::XamlTypeInfoProvider::CreateXamlMember(::Platform::String^ longMemberName)
{
    ::XamlTypeInfo::InfoProvider::XamlMember^ xamlMember = nullptr;
    const MemberInfo* pMemberInfo = GetMemberInfo(longMemberName);
    if (pMemberInfo != nullptr)
    {
        xamlMember = ref new ::XamlTypeInfo::InfoProvider::XamlMember(
            this,
            ::Platform::StringReference(pMemberInfo->shortName),
            ::Platform::StringReference(TypeInfos[pMemberInfo->typeIndex].typeName));
        xamlMember->Getter = pMemberInfo->getter;
        xamlMember->Setter = pMemberInfo->setter;
        xamlMember->TargetTypeName = pMemberInfo->targetTypeIndex >= 0 ? ::Platform::StringReference(TypeInfos[pMemberInfo->targetTypeIndex].typeName) : L"";
        xamlMember->IsReadOnly = pMemberInfo->isReadOnly;
        xamlMember->IsDependencyProperty = pMemberInfo->isDependencyProperty;
        xamlMember->IsAttachable = pMemberInfo->isAttachable;
    }
    return xamlMember;
}
