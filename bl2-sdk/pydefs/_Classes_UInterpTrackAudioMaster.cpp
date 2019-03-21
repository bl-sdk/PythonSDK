#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackAudioMaster()
{
    py::class_< UInterpTrackAudioMaster,  UInterpTrack   >("UInterpTrackAudioMaster")
        .def_readwrite("VectorTrack", &UInterpTrackVectorBase::VectorTrack)
        .def_readwrite("CurveTension", &UInterpTrackVectorBase::CurveTension)
        .def("StaticClass", &UInterpTrackAudioMaster::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}