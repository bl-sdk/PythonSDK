#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UInterpTrackFloatParticleParam()
{
    py::class_< UInterpTrackFloatParticleParam,  UInterpTrackFloatBase   >("UInterpTrackFloatParticleParam")
        .def_readwrite("ParamName", &UInterpTrackFloatParticleParam::ParamName)
        .def("StaticClass", &UInterpTrackFloatParticleParam::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}