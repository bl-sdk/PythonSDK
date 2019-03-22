#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UAwarenessZoneCollectionDefinition(py::module &m)
{
    py::class_< UAwarenessZoneCollectionDefinition,  UGBXDefinition   >(m, "UAwarenessZoneCollectionDefinition")
        .def_readwrite("DefaultAwarenessZones", &UAwarenessZoneCollectionDefinition::DefaultAwarenessZones)
        .def_readwrite("CollectionName", &UAwarenessZoneCollectionDefinition::CollectionName)
          ;
}