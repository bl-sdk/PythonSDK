#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFastTravelStationsListOrder()
{
    py::class_< UFastTravelStationsListOrder,  UGBXDefinition   >("UFastTravelStationsListOrder")
        .def_readwrite("FastTravelStationOrderList", &UFastTravelStationsListOrder::FastTravelStationOrderList)
        .def_readwrite("DlcExpansion", &UFastTravelStationsListOrder::DlcExpansion)
        .def("StaticClass", &UFastTravelStationsListOrder::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}