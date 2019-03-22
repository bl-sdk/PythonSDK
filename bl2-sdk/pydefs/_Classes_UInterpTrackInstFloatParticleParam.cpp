#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFloatParticleParam(py::module &m)
{
    py::class_< UInterpTrackInstFloatParticleParam,  UInterpTrackInst   >(m, "UInterpTrackInstFloatParticleParam")
        .def_readwrite("ResetFloat", &UInterpTrackInstFloatParticleParam::ResetFloat)
        .def("StaticClass", &UInterpTrackInstFloatParticleParam::StaticClass, py::return_value_policy::reference)
          ;
}