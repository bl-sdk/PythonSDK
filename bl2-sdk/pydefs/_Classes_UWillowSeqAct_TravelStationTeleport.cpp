#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowSeqAct_TravelStationTeleport()
{
    class_< UWillowSeqAct_TravelStationTeleport, bases< USequenceAction >  , boost::noncopyable>("UWillowSeqAct_TravelStationTeleport", no_init)
        .def("StaticClass", &UWillowSeqAct_TravelStationTeleport::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}