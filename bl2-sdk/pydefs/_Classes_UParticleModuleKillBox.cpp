#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleKillBox()
{
    class_< UParticleModuleKillBox, bases< UParticleModuleKillBase >  , boost::noncopyable>("UParticleModuleKillBox", no_init)
        .def_readwrite("LowerLeftCorner", &UParticleModuleKillBox::LowerLeftCorner)
        .def_readwrite("UpperRightCorner", &UParticleModuleKillBox::UpperRightCorner)
        .def("StaticClass", &UParticleModuleKillBox::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}