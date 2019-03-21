#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryDataProviderGFxObject(py::object m)
{
    py::class_< UInventoryDataProviderGFxObject,  UGFxObject   >(m, "UInventoryDataProviderGFxObject")
        .def_readwrite("OwningMovie", &UInventoryDataProviderGFxObject::OwningMovie)
        .def_readwrite("OwningPanel", &UInventoryDataProviderGFxObject::OwningPanel)
        .def_readwrite("HeavyweightArray", &UInventoryDataProviderGFxObject::HeavyweightArray)
        .def_readwrite("LightweightArray", &UInventoryDataProviderGFxObject::LightweightArray)
        .def_readwrite("CategoryLabelsArray", &UInventoryDataProviderGFxObject::CategoryLabelsArray)
        .def_readwrite("UnloadableCount", &UInventoryDataProviderGFxObject::UnloadableCount)
        .def_readwrite("BaseOwningMovie", &UDeferredDataProviderGFxObject::BaseOwningMovie)
        .def_readwrite("CachedObjects", &UDeferredDataProviderGFxObject::CachedObjects)
        .def("StaticClass", &UInventoryDataProviderGFxObject::StaticClass, py::return_value_policy::reference)
        .def("OnTrashFavChanged", &UInventoryDataProviderGFxObject::OnTrashFavChanged)
        .def("GetEntryKindAtIndex", &UInventoryDataProviderGFxObject::GetEntryKindAtIndex)
        .def("AddDataEntry", &UInventoryDataProviderGFxObject::AddDataEntry)
        .def("EmptyData", &UInventoryDataProviderGFxObject::EmptyData)
        .def("FindIndexOfThing", &UInventoryDataProviderGFxObject::FindIndexOfThing)
        .def("GetInventoryAtIndex", &UInventoryDataProviderGFxObject::GetInventoryAtIndex, py::return_value_policy::reference)
        .def("Init", &UInventoryDataProviderGFxObject::Init)
        .def("GetLength", &UDeferredDataProviderGFxObject::GetLength)
        .def("eventInvalidate", &UDeferredDataProviderGFxObject::eventInvalidate)
        .def("RequestItemRange", &UDeferredDataProviderGFxObject::RequestItemRange, py::return_value_policy::reference)
        .def("RequestItemAt", &UDeferredDataProviderGFxObject::RequestItemAt, py::return_value_policy::reference)
          ;
}