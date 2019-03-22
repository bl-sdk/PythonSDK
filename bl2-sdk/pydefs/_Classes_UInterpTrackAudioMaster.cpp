#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackAudioMaster(py::module &m)
{
    py::class_< UInterpTrackAudioMaster,  UInterpTrack   >(m, "UInterpTrackAudioMaster")
        .def_readwrite("VectorTrack", &UInterpTrackVectorBase::VectorTrack)
        .def_readwrite("CurveTension", &UInterpTrackVectorBase::CurveTension)
        .def("StaticClass", &UInterpTrackAudioMaster::StaticClass, py::return_value_policy::reference)
          ;
}