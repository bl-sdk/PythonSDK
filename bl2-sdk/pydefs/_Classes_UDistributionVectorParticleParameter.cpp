#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorParticleParameter()
{
    py::class_< UDistributionVectorParticleParameter,  UDistributionVectorParameterBase   >("UDistributionVectorParticleParameter")
        .def("StaticClass", &UDistributionVectorParticleParameter::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}