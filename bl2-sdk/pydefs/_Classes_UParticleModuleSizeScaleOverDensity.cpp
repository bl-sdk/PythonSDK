#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UParticleModuleSizeScaleOverDensity()
{
    class_< UParticleModuleSizeScaleOverDensity, bases< UParticleModule >  , boost::noncopyable>("UParticleModuleSizeScaleOverDensity", no_init)
        .def_readwrite("SizeScaleOverDensity", &UParticleModuleSizeScaleOverDensity::SizeScaleOverDensity)
        .def("StaticClass", &UParticleModuleSizeScaleOverDensity::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}