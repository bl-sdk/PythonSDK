#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleMeshRotationRateOverLife(py::object m)
{
    py::class_< UParticleModuleMeshRotationRateOverLife,  UParticleModuleRotationRateBase   >(m, "UParticleModuleMeshRotationRateOverLife")
        .def_readwrite("RotRate", &UParticleModuleMeshRotationRateOverLife::RotRate)
        .def("StaticClass", &UParticleModuleMeshRotationRateOverLife::StaticClass, py::return_value_policy::reference)
          ;
}