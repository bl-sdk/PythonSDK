#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpCurveEdSetup(py::module &m)
{
    py::class_< UInterpCurveEdSetup,  UObject   >(m, "UInterpCurveEdSetup")
		.def_static("StaticClass", &UInterpCurveEdSetup::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Tabs", &UInterpCurveEdSetup::Tabs)
        .def_readwrite("ActiveTab", &UInterpCurveEdSetup::ActiveTab)
          ;
}