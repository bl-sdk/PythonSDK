#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDistributionVectorParticleParameter(py::module &m)
{
    py::class_< UDistributionVectorParticleParameter,  UDistributionVectorParameterBase   >(m, "UDistributionVectorParticleParameter")
          ;
}