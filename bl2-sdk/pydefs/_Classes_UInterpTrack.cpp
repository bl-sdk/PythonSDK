#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrack()
{
    class_< UInterpTrack, bases< UObject >  , boost::noncopyable>("UInterpTrack", no_init)
        .def_readwrite("VfTable_FInterpEdInputInterface", &UInterpTrack::VfTable_FInterpEdInputInterface)
        .def_readwrite("CurveEdVTable", &UInterpTrack::CurveEdVTable)
        .def_readwrite("SubTracks", &UInterpTrack::SubTracks)
        .def_readwrite("TrackInstClass", &UInterpTrack::TrackInstClass)
        .def_readwrite("ActiveCondition", &UInterpTrack::ActiveCondition)
        .def_readwrite("TrackPlayDirection", &UInterpTrack::TrackPlayDirection)
        .def_readwrite("TrackTitle", &UInterpTrack::TrackTitle)
        .def("StaticClass", &UInterpTrack::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}