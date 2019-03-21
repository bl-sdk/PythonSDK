#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAudioMaster()
{
    py::class_< UInterpTrackInstAudioMaster,  UInterpTrackInst   >("UInterpTrackInstAudioMaster")
        .def("StaticClass", &UInterpTrackInstAudioMaster::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}