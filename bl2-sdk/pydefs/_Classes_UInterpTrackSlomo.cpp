#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackSlomo()
{
    py::class_< UInterpTrackSlomo,  UInterpTrackFloatBase   >("UInterpTrackSlomo")
        .def("StaticClass", &UInterpTrackSlomo::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}