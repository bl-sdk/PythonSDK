#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FHostMigrationState()
{
    class_< FHostMigrationState >("FHostMigrationState", no_init)
        .def_readwrite("HostMigrationProgress", &FHostMigrationState::HostMigrationProgress)
        .def_readwrite("HostMigrationElapsedTime", &FHostMigrationState::HostMigrationElapsedTime)
        .def_readwrite("HostMigrationTravelCountdown", &FHostMigrationState::HostMigrationTravelCountdown)
        .def_readwrite("HostMigrationTravelURL", &FHostMigrationState::HostMigrationTravelURL)
  ;
}