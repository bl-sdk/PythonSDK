#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleCameraBase(py::module &m)
{
    py::class_< UParticleModuleCameraBase,  UParticleModule   >(m, "UParticleModuleCameraBase")
        .def("StaticClass", &UParticleModuleCameraBase::StaticClass, py::return_value_policy::reference)
          ;
}