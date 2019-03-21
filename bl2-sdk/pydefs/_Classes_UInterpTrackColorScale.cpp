#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackColorScale()
{
    py::class_< UInterpTrackColorScale,  UInterpTrackVectorBase   >("UInterpTrackColorScale")
        .def("StaticClass", &UInterpTrackColorScale::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}