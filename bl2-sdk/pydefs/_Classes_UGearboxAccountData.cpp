#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UGearboxAccountData()
{
    class_< UGearboxAccountData, bases< UObject >  , boost::noncopyable>("UGearboxAccountData", no_init)
        .def_readwrite("RequestId", &UGearboxAccountData::RequestId)
        .def_readwrite("PlatformLoginName", &UGearboxAccountData::PlatformLoginName)
        .def_readwrite("NextEntitlementUpdateTime", &UGearboxAccountData::NextEntitlementUpdateTime)
        .def_readwrite("Entitlements", &UGearboxAccountData::Entitlements)
        .def_readwrite("Offers", &UGearboxAccountData::Offers)
        .def_readwrite("EntitlementsUpdatedDelegates", &UGearboxAccountData::EntitlementsUpdatedDelegates)
        .def_readwrite("Services", &UGearboxAccountData::Services)
        .def("StaticClass", &UGearboxAccountData::StaticClass, return_value_policy< reference_existing_object >())
        .def("CountEntitlement", &UGearboxAccountData::CountEntitlement)
        .def("GetTotalGoldenKeyCount", &UGearboxAccountData::GetTotalGoldenKeyCount)
        .def("GetGoldenKeyCount", &UGearboxAccountData::GetGoldenKeyCount)
        .def("HasGoldenKey", &UGearboxAccountData::HasGoldenKey)
        .def("HasDeveloperSkin", &UGearboxAccountData::HasDeveloperSkin)
        .def("IsDeveloper", &UGearboxAccountData::IsDeveloper)
        .def("MarkOffersNotified", &UGearboxAccountData::MarkOffersNotified)
        .def("GetUnnotifiedOffers", &UGearboxAccountData::GetUnnotifiedOffers)
        .def("GetEntitlementWithName", &UGearboxAccountData::GetEntitlementWithName, return_value_policy< reference_existing_object >())
        .def("GetEntitlementWithId", &UGearboxAccountData::GetEntitlementWithId, return_value_policy< reference_existing_object >())
        .def("HasEntitlement", &UGearboxAccountData::HasEntitlement)
        .def("RemoveEntitlement", &UGearboxAccountData::RemoveEntitlement)
        .def("ReplaceEntitlements", &UGearboxAccountData::ReplaceEntitlements)
        .def("ReplaceServices", &UGearboxAccountData::ReplaceServices)
        .def("HandleReloadEntitlementsResponse", &UGearboxAccountData::HandleReloadEntitlementsResponse)
        .def("ReloadEntitlements", &UGearboxAccountData::ReloadEntitlements)
        .def("ResetEntitlementUpdateTimer", &UGearboxAccountData::ResetEntitlementUpdateTimer)
        .def("CanReloadEntitlements", &UGearboxAccountData::CanReloadEntitlements)
        .def("TriggerEntitlementsUpdatedDelegates", &UGearboxAccountData::TriggerEntitlementsUpdatedDelegates)
        .def("ClearEntitlementsUpdatedDelegate", &UGearboxAccountData::ClearEntitlementsUpdatedDelegate)
        .def("AddEntitlementsUpdatedDelegate", &UGearboxAccountData::AddEntitlementsUpdatedDelegate)
        .def("eventGetService", &UGearboxAccountData::eventGetService, return_value_policy< reference_existing_object >())
        .def("Clear", &UGearboxAccountData::Clear)
        .def("ExtractArchwayResultJson", &UGearboxAccountData::ExtractArchwayResultJson)
        .def("ExtractArchwayResult", &UGearboxAccountData::ExtractArchwayResult)
        .staticmethod("StaticClass")
  ;
}