#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIResourceCombinationProvider()
{
    py::class_< UUIResourceCombinationProvider,  UUIDataProvider   >("UUIResourceCombinationProvider")
        .def_readwrite("VfTable_IUIListElementProvider", &UUIResourceCombinationProvider::VfTable_IUIListElementProvider)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIResourceCombinationProvider::VfTable_IUIListElementCellProvider)
        .def_readwrite("StaticDataProvider", &UUIResourceCombinationProvider::StaticDataProvider)
        .def_readwrite("ProfileProvider", &UUIResourceCombinationProvider::ProfileProvider)
        .def("StaticClass", &UUIResourceCombinationProvider::StaticClass, py::return_value_policy::reference)
        .def("ReplaceProviderCollection", &UUIResourceCombinationProvider::ReplaceProviderCollection)
        .def("ReplaceProviderValue", &UUIResourceCombinationProvider::ReplaceProviderValue)
        .def("ClearProviderReferences", &UUIResourceCombinationProvider::ClearProviderReferences)
        .def("eventGetCellFieldValue", &UUIResourceCombinationProvider::eventGetCellFieldValue)
        .def("eventGetCellFieldType", &UUIResourceCombinationProvider::eventGetCellFieldType)
        .def("eventGetElementCellTags", &UUIResourceCombinationProvider::eventGetElementCellTags)
        .def("eventGetElementCellValueProvider", &UUIResourceCombinationProvider::eventGetElementCellValueProvider)
        .def("eventGetElementCellSchemaProvider", &UUIResourceCombinationProvider::eventGetElementCellSchemaProvider)
        .def("eventIsElementEnabled", &UUIResourceCombinationProvider::eventIsElementEnabled)
        .def("eventGetListElements", &UUIResourceCombinationProvider::eventGetListElements)
        .def("eventGetElementCount", &UUIResourceCombinationProvider::eventGetElementCount)
        .def("eventGetElementProviderTags", &UUIResourceCombinationProvider::eventGetElementProviderTags)
        .def("eventInitializeProvider", &UUIResourceCombinationProvider::eventInitializeProvider)
        .staticmethod("StaticClass")
  ;
}