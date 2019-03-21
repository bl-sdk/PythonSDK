#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeScaleByTime()
{
    class_< UParticleModuleSizeScaleByTime, bases< UParticleModuleSizeBase >  , boost::noncopyable>("UParticleModuleSizeScaleByTime", no_init)
        .def_readwrite("SizeScaleByTime", &UParticleModuleSizeScaleByTime::SizeScaleByTime)
        .def("StaticClass", &UParticleModuleSizeScaleByTime::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}