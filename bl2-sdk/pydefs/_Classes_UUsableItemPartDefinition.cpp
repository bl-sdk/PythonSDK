#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UUsableItemPartDefinition()
{
    py::class_< UUsableItemPartDefinition,  UItemPartDefinition   >("UUsableItemPartDefinition")
        .def("StaticClass", &UUsableItemPartDefinition::StaticClass, py::return_value_policy::reference)
        .def("OnUsed", &UUsableItemPartDefinition::OnUsed)
        .staticmethod("StaticClass")
  ;
}