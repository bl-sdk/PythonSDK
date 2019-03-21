#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxAccountData()
{
    py::class_< UGearboxAccountData,  UObject   >("UGearboxAccountData")
        .def_readwrite("RequestId", &UGearboxAccountData::RequestId)
        .def_readwrite("PlatformLoginName", &UGearboxAccountData::PlatformLoginName)
        .def_readwrite("NextEntitlementUpdateTime", &UGearboxAccountData::NextEntitlementUpdateTime)
        .def_readwrite("Entitlements", &UGearboxAccountData::Entitlements)
        .def_readwrite("Offers", &UGearboxAccountData::Offers)
        .def_readwrite("EntitlementsUpdatedDelegates", &UGearboxAccountData::EntitlementsUpdatedDelegates)
        .def_readwrite("Services", &UGearboxAccountData::Services)
        .def("StaticClass", &UGearboxAccountData::StaticClass, py::return_value_policy::reference)
        .def("CountEntitlement", &UGearboxAccountData::CountEntitlement)
        .def("GetTotalGoldenKeyCount", &UGearboxAccountData::GetTotalGoldenKeyCount)
        .def("GetGoldenKeyCount", &UGearboxAccountData::GetGoldenKeyCount)
        .def("HasGoldenKey", &UGearboxAccountData::HasGoldenKey)
        .def("HasDeveloperSkin", &UGearboxAccountData::HasDeveloperSkin)
        .def("IsDeveloper", &UGearboxAccountData::IsDeveloper)
        .def("MarkOffersNotified", &UGearboxAccountData::MarkOffersNotified)
        .def("GetUnnotifiedOffers", &UGearboxAccountData::GetUnnotifiedOffers)
        .def("GetEntitlementWithName", &UGearboxAccountData::GetEntitlementWithName, py::return_value_policy::reference)
        .def("GetEntitlementWithId", &UGearboxAccountData::GetEntitlementWithId, py::return_value_policy::reference)
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
        .def("eventGetService", &UGearboxAccountData::eventGetService, py::return_value_policy::reference)
        .def("Clear", &UGearboxAccountData::Clear)
        .def("ExtractArchwayResultJson", &UGearboxAccountData::ExtractArchwayResultJson)
        .def("ExtractArchwayResult", &UGearboxAccountData::ExtractArchwayResult)
        .staticmethod("StaticClass")
  ;
}