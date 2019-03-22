#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UMissionItemPartDefinition(py::module &m)
{
    py::class_< UMissionItemPartDefinition,  UUsableItemPartDefinition   >(m, "UMissionItemPartDefinition")
        .def("StaticClass", &UMissionItemPartDefinition::StaticClass, py::return_value_policy::reference)
          ;
}