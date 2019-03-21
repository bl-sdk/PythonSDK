#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstMorphWeight()
{
    class_< UInterpTrackInstMorphWeight, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstMorphWeight", no_init)
        .def("StaticClass", &UInterpTrackInstMorphWeight::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}