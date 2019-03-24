#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UActorFactoryVehicleSpawnStationTerminal(py::module &m)
{
    py::class_< UActorFactoryVehicleSpawnStationTerminal,  UActorFactory   >(m, "UActorFactoryVehicleSpawnStationTerminal")
		.def_static("StaticClass", &UActorFactoryVehicleSpawnStationTerminal::StaticClass, py::return_value_policy::reference)
        .def_readwrite("Definition", &UActorFactoryInteractiveObject::Definition)
          ;
}