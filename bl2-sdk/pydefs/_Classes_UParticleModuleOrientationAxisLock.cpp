#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleOrientationAxisLock()
{
    class_< UParticleModuleOrientationAxisLock, bases< UParticleModuleOrientationBase >  , boost::noncopyable>("UParticleModuleOrientationAxisLock", no_init)
        .def_readwrite("LockAxisFlags", &UParticleModuleOrientationAxisLock::LockAxisFlags)
        .def("StaticClass", &UParticleModuleOrientationAxisLock::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}