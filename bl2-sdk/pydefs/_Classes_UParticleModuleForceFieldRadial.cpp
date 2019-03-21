#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleForceFieldRadial(py::object m)
{
    py::class_< UParticleModuleForceFieldRadial,  UParticleModuleForceFieldBase   >(m, "UParticleModuleForceFieldRadial")
        .def("StaticClass", &UParticleModuleForceFieldRadial::StaticClass, py::return_value_policy::reference)
          ;
}