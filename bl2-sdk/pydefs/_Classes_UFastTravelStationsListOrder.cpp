#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFastTravelStationsListOrder(py::module &m)
{
    py::class_< UFastTravelStationsListOrder,  UGBXDefinition   >(m, "UFastTravelStationsListOrder")
        .def_readwrite("FastTravelStationOrderList", &UFastTravelStationsListOrder::FastTravelStationOrderList)
        .def_readwrite("DlcExpansion", &UFastTravelStationsListOrder::DlcExpansion)
          ;
}