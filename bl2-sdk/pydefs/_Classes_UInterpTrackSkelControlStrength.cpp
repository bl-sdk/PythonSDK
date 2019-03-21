#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackSkelControlStrength()
{
    class_< UInterpTrackSkelControlStrength, bases< UInterpTrackFloatBase >  , boost::noncopyable>("UInterpTrackSkelControlStrength", no_init)
        .def_readwrite("SkelControlName", &UInterpTrackSkelControlStrength::SkelControlName)
        .def("StaticClass", &UInterpTrackSkelControlStrength::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}