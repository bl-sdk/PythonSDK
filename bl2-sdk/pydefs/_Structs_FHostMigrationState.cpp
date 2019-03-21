#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_FHostMigrationState(py::object m)
{
    py::class_< FHostMigrationState >(m, "FHostMigrationState")
        .def_readwrite("HostMigrationProgress", &FHostMigrationState::HostMigrationProgress)
        .def_readwrite("HostMigrationElapsedTime", &FHostMigrationState::HostMigrationElapsedTime)
        .def_readwrite("HostMigrationTravelCountdown", &FHostMigrationState::HostMigrationTravelCountdown)
        .def_readwrite("HostMigrationTravelURL", &FHostMigrationState::HostMigrationTravelURL)
  ;
}