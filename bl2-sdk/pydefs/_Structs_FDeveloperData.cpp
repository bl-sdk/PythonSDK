#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FDeveloperData()
{
    class_< FDeveloperData >("FDeveloperData", no_init)
        .def_readwrite("Gamertag", &FDeveloperData::Gamertag)
        .def_readwrite("UniqueId", &FDeveloperData::UniqueId)
        .def_readwrite("Platform", &FDeveloperData::Platform)
        .def_readwrite("UnlocksGamerpics", &FDeveloperData::UnlocksGamerpics)
  ;
}