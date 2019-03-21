#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleCameraBase()
{
    class_< UParticleModuleCameraBase, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleCameraBase", no_init)
        .def("StaticClass", &UParticleModuleCameraBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}