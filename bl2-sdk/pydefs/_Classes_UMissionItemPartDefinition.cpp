#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionItemPartDefinition()
{
    py::class_< UMissionItemPartDefinition,  UUsableItemPartDefinition   >("UMissionItemPartDefinition")
        .def("StaticClass", &UMissionItemPartDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}