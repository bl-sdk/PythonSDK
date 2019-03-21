#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAction_BurrowIdle()
{
    class_< UAction_BurrowIdle, bases< UAction_Idle >  , boost::noncopyable>("UAction_BurrowIdle", no_init)
        .def("StaticClass", &UAction_BurrowIdle::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}