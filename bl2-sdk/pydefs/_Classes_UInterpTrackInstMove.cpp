#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstMove()
{
    class_< UInterpTrackInstMove, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstMove", no_init)
        .def_readwrite("ResetLocation", &UInterpTrackInstMove::ResetLocation)
        .def_readwrite("ResetRotation", &UInterpTrackInstMove::ResetRotation)
        .def_readonly("UnknownData00", &UInterpTrackInstMove::UnknownData00)
        .def_readwrite("InitialTM", &UInterpTrackInstMove::InitialTM)
        .def_readwrite("InitialQuat", &UInterpTrackInstMove::InitialQuat)
        .def("StaticClass", &UInterpTrackInstMove::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}