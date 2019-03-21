#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UVehicleCrewAnimSetLookupTable()
{
    class_< UVehicleCrewAnimSetLookupTable, bases< UObject >  , boost::noncopyable>("UVehicleCrewAnimSetLookupTable", no_init)
        .def_readwrite("Mappings", &UVehicleCrewAnimSetLookupTable::Mappings)
        .def("StaticClass", &UVehicleCrewAnimSetLookupTable::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}