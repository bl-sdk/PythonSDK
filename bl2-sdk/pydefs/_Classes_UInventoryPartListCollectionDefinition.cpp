#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInventoryPartListCollectionDefinition()
{
    py::class_< UInventoryPartListCollectionDefinition,  UGBXDefinition   >("UInventoryPartListCollectionDefinition")
        .def_readwrite("PartReplacementMode", &UInventoryPartListCollectionDefinition::PartReplacementMode)
        .def_readwrite("ConsolidatedAttributeInitData", &UInventoryPartListCollectionDefinition::ConsolidatedAttributeInitData)
        .def("StaticClass", &UInventoryPartListCollectionDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}