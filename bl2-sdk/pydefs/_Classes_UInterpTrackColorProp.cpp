#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackColorProp()
{
    class_< UInterpTrackColorProp, bases< UInterpTrackVectorBase >  , boost::noncopyable>("UInterpTrackColorProp", no_init)
        .def_readwrite("PropertyName", &UInterpTrackColorProp::PropertyName)
        .def("StaticClass", &UInterpTrackColorProp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}