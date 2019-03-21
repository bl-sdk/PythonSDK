#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleCameraOffset()
{
    class_< UParticleModuleCameraOffset, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleCameraOffset", no_init)
        .def_readwrite("CameraOffset", &UParticleModuleCameraOffset::CameraOffset)
        .def_readwrite("UpdateMethod", &UParticleModuleCameraOffset::UpdateMethod)
        .def("StaticClass", &UParticleModuleCameraOffset::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}