#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstColorScale()
{
    py::class_< UInterpTrackInstColorScale,  UInterpTrackInst   >("UInterpTrackInstColorScale")
        .def("StaticClass", &UInterpTrackInstColorScale::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}