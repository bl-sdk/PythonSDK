#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UInterpTrackTeleport()
{
    class_< UInterpTrackTeleport, bases< UInterpTrack >  , boost::noncopyable>("UInterpTrackTeleport", no_init)
        .def_readwrite("TeleportKeys", &UInterpTrackTeleport::TeleportKeys)
        .def("StaticClass", &UInterpTrackTeleport::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}