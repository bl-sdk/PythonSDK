#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackFloatBase()
{
    class_< UInterpTrackFloatBase, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackFloatBase", no_init)
        .def_readwrite("FloatTrack", &UInterpTrackFloatBase::FloatTrack)
        .def_readwrite("CurveTension", &UInterpTrackFloatBase::CurveTension)
        .def("StaticClass", &UInterpTrackFloatBase::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}