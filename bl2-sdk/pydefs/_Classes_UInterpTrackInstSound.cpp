#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSound()
{
    py::class_< UInterpTrackInstSound,  UInterpTrackInst   >("UInterpTrackInstSound")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstSound::LastUpdatePosition)
        .def_readwrite("PlayAudioComp", &UInterpTrackInstSound::PlayAudioComp)
        .def("StaticClass", &UInterpTrackInstSound::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}