#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionFloatParticleParameter(py::module &m)
{
    py::class_< UDistributionFloatParticleParameter,  UDistributionFloatParameterBase   >(m, "UDistributionFloatParticleParameter")
        .def("StaticClass", &UDistributionFloatParticleParameter::StaticClass, py::return_value_policy::reference)
          ;
}