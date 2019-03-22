#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UItemPartListDefinition(py::module &m)
{
    py::class_< UItemPartListDefinition,  UGBXDefinition   >(m, "UItemPartListDefinition")
        .def_readwrite("VfTable_IIConstructObject", &UItemPartListDefinition::VfTable_IIConstructObject)
        .def_readwrite("WeightedParts", &UItemPartListDefinition::WeightedParts)
        .def_readwrite("ConsolidatedAttributeInitData", &UItemPartListDefinition::ConsolidatedAttributeInitData)
        .def("StaticClass", &UItemPartListDefinition::StaticClass, py::return_value_policy::reference)
          ;
}