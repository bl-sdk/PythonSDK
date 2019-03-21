#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstFloatParticleParam()
{
    class_< UInterpTrackInstFloatParticleParam, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstFloatParticleParam", no_init)
        .def_readwrite("ResetFloat", &UInterpTrackInstFloatParticleParam::ResetFloat)
        .def("StaticClass", &UInterpTrackInstFloatParticleParam::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}