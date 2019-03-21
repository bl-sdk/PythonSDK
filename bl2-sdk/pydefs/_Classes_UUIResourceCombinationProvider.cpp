#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIResourceCombinationProvider()
{
    class_< UUIResourceCombinationProvider, bases< UUIDataProvider >  , boost::noncopyable>("UUIResourceCombinationProvider", no_init)
        .def_readwrite("VfTable_IUIListElementProvider", &UUIResourceCombinationProvider::VfTable_IUIListElementProvider)
        .def_readwrite("VfTable_IUIListElementCellProvider", &UUIResourceCombinationProvider::VfTable_IUIListElementCellProvider)
        .def_readwrite("StaticDataProvider", &UUIResourceCombinationProvider::StaticDataProvider)
        .def_readwrite("ProfileProvider", &UUIResourceCombinationProvider::ProfileProvider)
        .def("StaticClass", &UUIResourceCombinationProvider::StaticClass, return_value_policy< reference_existing_object >())
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