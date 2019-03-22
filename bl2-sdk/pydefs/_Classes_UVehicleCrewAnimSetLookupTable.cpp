#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UVehicleCrewAnimSetLookupTable(py::module &m)
{
    py::class_< UVehicleCrewAnimSetLookupTable,  UObject   >(m, "UVehicleCrewAnimSetLookupTable")
        .def_readwrite("Mappings", &UVehicleCrewAnimSetLookupTable::Mappings)
          ;
}