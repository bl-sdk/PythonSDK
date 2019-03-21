#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackSlomo()
{
    class_< UInterpTrackSlomo, bases< UInterpTrackFloatBase >  , boost::noncopyable>("UInterpTrackSlomo", no_init)
        .def("StaticClass", &UInterpTrackSlomo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}