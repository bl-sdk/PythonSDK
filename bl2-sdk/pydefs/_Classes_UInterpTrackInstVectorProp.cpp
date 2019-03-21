#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstVectorProp()
{
    class_< UInterpTrackInstVectorProp, bases< UInterpTrackInstProperty >  , boost::noncopyable>("UInterpTrackInstVectorProp", no_init)
        .def_readwrite("VectorProp", &UInterpTrackInstVectorProp::VectorProp)
        .def_readwrite("ResetVector", &UInterpTrackInstVectorProp::ResetVector)
        .def("StaticClass", &UInterpTrackInstVectorProp::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}