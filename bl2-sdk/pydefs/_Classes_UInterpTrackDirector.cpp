#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackDirector()
{
    py::class_< UInterpTrackDirector,  UInterpTrack   >("UInterpTrackDirector")
        .def_readwrite("CutTrack", &UInterpTrackDirector::CutTrack)
        .def("StaticClass", &UInterpTrackDirector::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}