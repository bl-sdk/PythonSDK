#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_Pistol()
{
    class_< UWillowDmgSource_Pistol, bases< UWillowDmgSource_Bullet >  , boost::noncopyable>("UWillowDmgSource_Pistol", no_init)
        .def("StaticClass", &UWillowDmgSource_Pistol::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}