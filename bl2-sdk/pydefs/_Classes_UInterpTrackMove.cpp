#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackMove()
{
    class_< UInterpTrackMove, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackMove", no_init)
        .def_readwrite("PosTrack", &UInterpTrackMove::PosTrack)
        .def_readwrite("EulerTrack", &UInterpTrackMove::EulerTrack)
        .def_readwrite("LookupTrack", &UInterpTrackMove::LookupTrack)
        .def_readwrite("LookAtGroupName", &UInterpTrackMove::LookAtGroupName)
        .def_readwrite("LinCurveTension", &UInterpTrackMove::LinCurveTension)
        .def_readwrite("AngCurveTension", &UInterpTrackMove::AngCurveTension)
        .def_readwrite("MoveFrame", &UInterpTrackMove::MoveFrame)
        .def_readwrite("RotMode", &UInterpTrackMove::RotMode)
        .def("StaticClass", &UInterpTrackMove::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}