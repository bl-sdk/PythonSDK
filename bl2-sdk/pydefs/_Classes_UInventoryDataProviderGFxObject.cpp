#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInventoryDataProviderGFxObject()
{
    class_< UInventoryDataProviderGFxObject, bases< UGFxObject >  , boost::noncopyable>("UInventoryDataProviderGFxObject", no_init)
        .def_readwrite("OwningMovie", &UInventoryDataProviderGFxObject::OwningMovie)
        .def_readwrite("OwningPanel", &UInventoryDataProviderGFxObject::OwningPanel)
        .def_readwrite("HeavyweightArray", &UInventoryDataProviderGFxObject::HeavyweightArray)
        .def_readwrite("LightweightArray", &UInventoryDataProviderGFxObject::LightweightArray)
        .def_readwrite("CategoryLabelsArray", &UInventoryDataProviderGFxObject::CategoryLabelsArray)
        .def_readwrite("UnloadableCount", &UInventoryDataProviderGFxObject::UnloadableCount)
        .def_readwrite("BaseOwningMovie", &UDeferredDataProviderGFxObject::BaseOwningMovie)
        .def_readwrite("CachedObjects", &UDeferredDataProviderGFxObject::CachedObjects)
        .def("StaticClass", &UInventoryDataProviderGFxObject::StaticClass, return_value_policy< reference_existing_object >())
        .def("OnTrashFavChanged", &UInventoryDataProviderGFxObject::OnTrashFavChanged)
        .def("GetEntryKindAtIndex", &UInventoryDataProviderGFxObject::GetEntryKindAtIndex)
        .def("AddDataEntry", &UInventoryDataProviderGFxObject::AddDataEntry)
        .def("EmptyData", &UInventoryDataProviderGFxObject::EmptyData)
        .def("FindIndexOfThing", &UInventoryDataProviderGFxObject::FindIndexOfThing)
        .def("GetInventoryAtIndex", &UInventoryDataProviderGFxObject::GetInventoryAtIndex, return_value_policy< reference_existing_object >())
        .def("Init", &UInventoryDataProviderGFxObject::Init)
        .def("GetLength", &UDeferredDataProviderGFxObject::GetLength)
        .def("eventInvalidate", &UDeferredDataProviderGFxObject::eventInvalidate)
        .def("RequestItemRange", &UDeferredDataProviderGFxObject::RequestItemRange, return_value_policy< reference_existing_object >())
        .def("RequestItemAt", &UDeferredDataProviderGFxObject::RequestItemAt, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}