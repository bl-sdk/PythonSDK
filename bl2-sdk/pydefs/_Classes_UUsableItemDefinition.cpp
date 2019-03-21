#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUsableItemDefinition()
{
    py::class_< UUsableItemDefinition,  UItemDefinition   >("UUsableItemDefinition")
        .def_readwrite("UsedStatId", &UUsableItemDefinition::UsedStatId)
        .def("StaticClass", &UUsableItemDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnUsed", &UUsableItemDefinition::OnUsed)
        .staticmethod("StaticClass")
  ;
}