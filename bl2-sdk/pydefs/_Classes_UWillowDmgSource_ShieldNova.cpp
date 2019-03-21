#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowDmgSource_ShieldNova()
{
    class_< UWillowDmgSource_ShieldNova, bases< UWillowDmgSource_Shield >  , boost::noncopyable>("UWillowDmgSource_ShieldNova", no_init)
        .def("StaticClass", &UWillowDmgSource_ShieldNova::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}