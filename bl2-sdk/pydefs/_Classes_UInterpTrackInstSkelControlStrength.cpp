#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstSkelControlStrength()
{
    class_< UInterpTrackInstSkelControlStrength, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstSkelControlStrength", no_init)
        .def("StaticClass", &UInterpTrackInstSkelControlStrength::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}