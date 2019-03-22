#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSound(py::module &m)
{
    py::class_< UInterpTrackInstSound,  UInterpTrackInst   >(m, "UInterpTrackInstSound")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstSound::LastUpdatePosition)
        .def_readwrite("PlayAudioComp", &UInterpTrackInstSound::PlayAudioComp)
          ;
}