#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackFloatParticleParam(py::module &m)
{
    py::class_< UInterpTrackFloatParticleParam,  UInterpTrackFloatBase   >(m, "UInterpTrackFloatParticleParam")
        .def_readwrite("ParamName", &UInterpTrackFloatParticleParam::ParamName)
          ;
}