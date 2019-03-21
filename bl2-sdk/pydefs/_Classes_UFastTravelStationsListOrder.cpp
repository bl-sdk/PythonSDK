#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFastTravelStationsListOrder()
{
    class_< UFastTravelStationsListOrder, bases< UGBXDefinition >  , boost::noncopyable>("UFastTravelStationsListOrder", no_init)
        .def_readwrite("FastTravelStationOrderList", &UFastTravelStationsListOrder::FastTravelStationOrderList)
        .def_readwrite("DlcExpansion", &UFastTravelStationsListOrder::DlcExpansion)
        .def("StaticClass", &UFastTravelStationsListOrder::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}