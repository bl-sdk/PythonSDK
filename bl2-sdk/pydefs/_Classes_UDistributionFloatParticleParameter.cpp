#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionFloatParticleParameter()
{
    class_< UDistributionFloatParticleParameter, bases< UDistributionFloatParameterBase >  , boost::noncopyable>("UDistributionFloatParticleParameter", no_init)
        .def("StaticClass", &UDistributionFloatParticleParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}