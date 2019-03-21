#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UMapInfo()
{
    class_< UMapInfo, bases< UObject >  , boost::noncopyable>("UMapInfo", no_init)
        .def("StaticClass", &UMapInfo::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}