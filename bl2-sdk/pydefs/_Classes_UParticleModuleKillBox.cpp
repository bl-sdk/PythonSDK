#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleKillBox(py::object m)
{
    py::class_< UParticleModuleKillBox,  UParticleModuleKillBase   >(m, "UParticleModuleKillBox")
        .def_readwrite("LowerLeftCorner", &UParticleModuleKillBox::LowerLeftCorner)
        .def_readwrite("UpperRightCorner", &UParticleModuleKillBox::UpperRightCorner)
        .def("StaticClass", &UParticleModuleKillBox::StaticClass, py::return_value_policy::reference)
          ;
}