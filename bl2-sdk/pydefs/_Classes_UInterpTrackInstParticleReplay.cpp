#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstParticleReplay(py::module &m)
{
    py::class_< UInterpTrackInstParticleReplay,  UInterpTrackInst   >(m, "UInterpTrackInstParticleReplay")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstParticleReplay::LastUpdatePosition)
          ;
}