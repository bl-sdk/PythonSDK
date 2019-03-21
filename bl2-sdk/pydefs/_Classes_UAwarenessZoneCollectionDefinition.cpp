#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAwarenessZoneCollectionDefinition(py::object m)
{
    py::class_< UAwarenessZoneCollectionDefinition,  UGBXDefinition   >(m, "UAwarenessZoneCollectionDefinition")
        .def_readwrite("DefaultAwarenessZones", &UAwarenessZoneCollectionDefinition::DefaultAwarenessZones)
        .def_readwrite("CollectionName", &UAwarenessZoneCollectionDefinition::CollectionName)
        .def("StaticClass", &UAwarenessZoneCollectionDefinition::StaticClass, py::return_value_policy::reference)
          ;
}