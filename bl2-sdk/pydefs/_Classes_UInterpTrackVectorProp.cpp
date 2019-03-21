#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackVectorProp()
{
    class_< UInterpTrackVectorProp, bases< UInterpTrackVectorBase >  , boost::noncopyable>("UInterpTrackVectorProp", no_init)
        .def_readwrite("PropertyName", &UInterpTrackVectorProp::PropertyName)
        .def("StaticClass", &UInterpTrackVectorProp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}