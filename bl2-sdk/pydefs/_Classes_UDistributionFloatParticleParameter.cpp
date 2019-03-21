#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatParticleParameter()
{
    py::class_< UDistributionFloatParticleParameter,  UDistributionFloatParameterBase   >("UDistributionFloatParticleParameter")
        .def("StaticClass", &UDistributionFloatParticleParameter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}