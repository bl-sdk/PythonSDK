#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstAnimControl()
{
    class_< UInterpTrackInstAnimControl, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstAnimControl", no_init)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstAnimControl::LastUpdatePosition)
        .def_readwrite("ResetLocation", &UInterpTrackInstAnimControl::ResetLocation)
        .def_readwrite("ResetRotation", &UInterpTrackInstAnimControl::ResetRotation)
        .def("StaticClass", &UInterpTrackInstAnimControl::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}