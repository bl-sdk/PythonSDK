#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackMoveAxis()
{
    class_< UInterpTrackMoveAxis, bases< UInterpTrackFloatBase >  , boost::noncopyable>("UInterpTrackMoveAxis", no_init)
        .def_readwrite("MoveAxis", &UInterpTrackMoveAxis::MoveAxis)
        .def_readwrite("LookupTrack", &UInterpTrackMoveAxis::LookupTrack)
        .def("StaticClass", &UInterpTrackMoveAxis::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}