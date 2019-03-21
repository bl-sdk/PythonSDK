#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSkelControlScale()
{
    py::class_< UInterpTrackInstSkelControlScale,  UInterpTrackInst   >("UInterpTrackInstSkelControlScale")
        .def("StaticClass", &UInterpTrackInstSkelControlScale::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}