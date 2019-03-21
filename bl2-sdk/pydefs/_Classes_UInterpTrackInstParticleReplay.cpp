#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstParticleReplay()
{
    py::class_< UInterpTrackInstParticleReplay,  UInterpTrackInst   >("UInterpTrackInstParticleReplay")
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstParticleReplay::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstParticleReplay::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}