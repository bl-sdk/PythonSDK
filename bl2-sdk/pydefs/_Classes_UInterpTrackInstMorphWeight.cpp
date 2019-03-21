#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstMorphWeight()
{
    py::class_< UInterpTrackInstMorphWeight,  UInterpTrackInst   >("UInterpTrackInstMorphWeight")
        .def("StaticClass", &UInterpTrackInstMorphWeight::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}