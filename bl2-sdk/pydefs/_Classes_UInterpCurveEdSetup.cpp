#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpCurveEdSetup(py::module &m)
{
    py::class_< UInterpCurveEdSetup,  UObject   >(m, "UInterpCurveEdSetup")
        .def_readwrite("Tabs", &UInterpCurveEdSetup::Tabs)
        .def_readwrite("ActiveTab", &UInterpCurveEdSetup::ActiveTab)
          ;
}