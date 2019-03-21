#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpCurveEdSetup()
{
    py::class_< UInterpCurveEdSetup,  UObject   >("UInterpCurveEdSetup")
        .def_readwrite("Tabs", &UInterpCurveEdSetup::Tabs)
        .def_readwrite("ActiveTab", &UInterpCurveEdSetup::ActiveTab)
        .def("StaticClass", &UInterpCurveEdSetup::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}