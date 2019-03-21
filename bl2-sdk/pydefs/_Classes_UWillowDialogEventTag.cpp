#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UWillowDialogEventTag()
{
    py::class_< UWillowDialogEventTag,  UGearboxDialogEventTag   >("UWillowDialogEventTag")
        .def("StaticClass", &UWillowDialogEventTag::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}