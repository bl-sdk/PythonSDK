#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInst()
{
    py::class_< UInterpTrackInst,  UObject   >("UInterpTrackInst")
        .def("StaticClass", &UInterpTrackInst::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}