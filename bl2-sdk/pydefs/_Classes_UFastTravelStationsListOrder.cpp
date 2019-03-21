#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UFastTravelStationsListOrder(py::object m)
{
    py::class_< UFastTravelStationsListOrder,  UGBXDefinition   >(m, "UFastTravelStationsListOrder")
        .def_readwrite("FastTravelStationOrderList", &UFastTravelStationsListOrder::FastTravelStationOrderList)
        .def_readwrite("DlcExpansion", &UFastTravelStationsListOrder::DlcExpansion)
        .def("StaticClass", &UFastTravelStationsListOrder::StaticClass, py::return_value_policy::reference)
          ;
}