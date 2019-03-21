#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackFloatParticleParam()
{
    class_< UInterpTrackFloatParticleParam, bases< UInterpTrackFloatBase >  , boost::noncopyable>("UInterpTrackFloatParticleParam", no_init)
        .def_readwrite("ParamName", &UInterpTrackFloatParticleParam::ParamName)
        .def("StaticClass", &UInterpTrackFloatParticleParam::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}