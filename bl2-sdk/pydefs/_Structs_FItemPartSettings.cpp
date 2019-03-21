#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FItemPartSettings()
{
    class_< FItemPartSettings >("FItemPartSettings", no_init)
        .def_readwrite("PartList", &FItemPartSettings::PartList)
        .def_readwrite("Part", &FItemPartSettings::Part)
        .def_readwrite("PartName", &FItemPartSettings::PartName)
  ;
}