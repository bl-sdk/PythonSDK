#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_FNavigationArea()
{
    class_< FNavigationArea >("FNavigationArea", no_init)
        .def_readwrite("AreaName", &FNavigationArea::AreaName)
        .def_readwrite("AreaColor", &FNavigationArea::AreaColor)
  ;
}