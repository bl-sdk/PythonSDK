#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSubUVMovie()
{
    class_< UParticleModuleSubUVMovie, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleSubUVMovie", no_init)
        .def_readwrite("FrameRate", &UParticleModuleSubUVMovie::FrameRate)
        .def_readwrite("StartingFrame", &UParticleModuleSubUVMovie::StartingFrame)
        .def_readwrite("SubImageIndex", &UParticleModuleSubUV::SubImageIndex)
        .def("StaticClass", &UParticleModuleSubUVMovie::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}