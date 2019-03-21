#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleCrewAnimSetLookupTable()
{
    py::class_< UVehicleCrewAnimSetLookupTable,  UObject   >("UVehicleCrewAnimSetLookupTable")
        .def_readwrite("Mappings", &UVehicleCrewAnimSetLookupTable::Mappings)
        .def("StaticClass", &UVehicleCrewAnimSetLookupTable::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}