#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUIResourceCombinationProvider(py::module &m)
{
    py::class_< UUIResourceCombinationProvider,  UUIDataProvider   >(m, "UUIResourceCombinationProvider")
		.def_static("StaticClass", &UUIResourceCombinationProvider::StaticClass, py::return_value_policy::reference)
        .def_readwrite("VfTable_IUIListElementProvider", &UUIResourceCombinationProvider::VfTable_IUIListElementProvider)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIResourceCombinationProvider::VfTable_IUIListElementCellProvider)
        .def_readwrite("StaticDataProvider", &UUIResourceCombinationProvider::StaticDataProvider)
        .def_readwrite("ProfileProvider", &UUIResourceCombinationProvider::ProfileProvider)
        .def("ReplaceProviderCollection", &UUIResourceCombinationProvider::ReplaceProviderCollection)
        .def("ReplaceProviderValue", &UUIResourceCombinationProvider::ReplaceProviderValue)
        .def("ClearProviderReferences", &UUIResourceCombinationProvider::ClearProviderReferences)
        .def("eventGetCellFieldValue", &UUIResourceCombinationProvider::eventGetCellFieldValue)
        .def("eventGetCellFieldType", [](UUIResourceCombinationProvider &self , struct FName FieldName, struct FName CellTag) { unsigned char* pyFieldType = (unsigned char*)malloc(sizeof(unsigned char)) ;  bool ret =  self.eventGetCellFieldType(FieldName, CellTag, pyFieldType); return py::make_tuple(ret, *pyFieldType); })
        .def("eventGetElementCellTags", &UUIResourceCombinationProvider::eventGetElementCellTags)
        .def("eventGetElementCellValueProvider", [](UUIResourceCombinationProvider &self , struct FName FieldName, int ListIndex) { class UUIListElementCellProvider** pyout_ValueProvider = 0 ;  bool ret =  self.eventGetElementCellValueProvider(FieldName, ListIndex, pyout_ValueProvider); return py::make_tuple(ret, *pyout_ValueProvider); })
        .def("eventGetElementCellSchemaProvider", [](UUIResourceCombinationProvider &self , struct FName FieldName) { class UUIListElementCellProvider** pyout_SchemaProvider = 0 ;  bool ret =  self.eventGetElementCellSchemaProvider(FieldName, pyout_SchemaProvider); return py::make_tuple(ret, *pyout_SchemaProvider); })
        .def("eventIsElementEnabled", &UUIResourceCombinationProvider::eventIsElementEnabled)
        .def("eventGetListElements", &UUIResourceCombinationProvider::eventGetListElements)
        .def("eventGetElementCount", &UUIResourceCombinationProvider::eventGetElementCount)
        .def("eventGetElementProviderTags", &UUIResourceCombinationProvider::eventGetElementProviderTags)
        .def("eventInitializeProvider", &UUIResourceCombinationProvider::eventInitializeProvider)
          ;
}