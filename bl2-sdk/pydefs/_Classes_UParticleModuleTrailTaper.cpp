#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleTrailTaper()
{
    class_< UParticleModuleTrailTaper, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleTrailTaper", no_init)
        .def_readwrite("TaperMethod", &UParticleModuleTrailTaper::TaperMethod)
        .def_readwrite("TaperFactor", &UParticleModuleTrailTaper::TaperFactor)
        .def("StaticClass", &UParticleModuleTrailTaper::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}