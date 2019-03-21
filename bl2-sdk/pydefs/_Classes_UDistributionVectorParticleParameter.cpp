#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDistributionVectorParticleParameter()
{
    class_< UDistributionVectorParticleParameter, bases< UDistributionVectorParameterBase >  , boost::noncopyable>("UDistributionVectorParticleParameter", no_init)
        .def("StaticClass", &UDistributionVectorParticleParameter::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}