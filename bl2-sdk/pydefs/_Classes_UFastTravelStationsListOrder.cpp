#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFastTravelStationsListOrder(py::module &m)
{
    py::class_< UFastTravelStationsListOrder,  UGBXDefinition   >(m, "UFastTravelStationsListOrder")
		.def_static("StaticClass", &UFastTravelStationsListOrder::StaticClass, py::return_value_policy::reference)
        .def_readwrite("FastTravelStationOrderList", &UFastTravelStationsListOrder::FastTravelStationOrderList)
        .def_readwrite("DlcExpansion", &UFastTravelStationsListOrder::DlcExpansion)
          ;
}