#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_AHybridNavigationArea()
{
    class_< AHybridNavigationArea, bases< AInfo >  , boost::noncopyable>("AHybridNavigationArea", no_init)
        .def_readwrite("CustomAreaName", &AHybridNavigationArea::CustomAreaName)
        .def_readwrite("AreaColor", &AHybridNavigationArea::AreaColor)
        .def("StaticClass", &AHybridNavigationArea::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAreaName", &AHybridNavigationArea::GetAreaName)
        .staticmethod("StaticClass")
  ;
}