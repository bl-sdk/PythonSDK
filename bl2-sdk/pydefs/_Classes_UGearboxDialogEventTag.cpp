#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UGearboxDialogEventTag()
{
    py::class_< UGearboxDialogEventTag,  UGBXDefinition   >("UGearboxDialogEventTag")
        .def_readwrite("Priority", &UGearboxDialogEventTag::Priority)
        .def("StaticClass", &UGearboxDialogEventTag::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}