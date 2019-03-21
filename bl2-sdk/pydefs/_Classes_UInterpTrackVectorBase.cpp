#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackVectorBase()
{
    class_< UInterpTrackVectorBase, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackVectorBase", no_init)
        .def_readwrite("VectorTrack", &UInterpTrackVectorBase::VectorTrack)
        .def_readwrite("CurveTension", &UInterpTrackVectorBase::CurveTension)
        .def("StaticClass", &UInterpTrackVectorBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}