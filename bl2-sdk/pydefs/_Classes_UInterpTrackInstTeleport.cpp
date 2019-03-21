#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackInstTeleport()
{
    class_< UInterpTrackInstTeleport, bases< UInterpTrackInst >  , boost::noncopyable>("UInterpTrackInstTeleport", no_init)
        .def_readwrite("ResetLocation", &UInterpTrackInstTeleport::ResetLocation)
        .def_readwrite("ResetRotation", &UInterpTrackInstTeleport::ResetRotation)
        .def_readwrite("LastUpdatePosition", &UInterpTrackInstTeleport::LastUpdatePosition)
        .def("StaticClass", &UInterpTrackInstTeleport::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}