#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUVMovie()
{
    py::class_< UParticleModuleSubUVMovie,  UParticleModule   >("UParticleModuleSubUVMovie")
        .def_readwrite("FrameRate", &UParticleModuleSubUVMovie::FrameRate)
        .def_readwrite("StartingFrame", &UParticleModuleSubUVMovie::StartingFrame)
        .def_readwrite("SubImageIndex", &UParticleModuleSubUV::SubImageIndex)
        .def("StaticClass", &UParticleModuleSubUVMovie::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}