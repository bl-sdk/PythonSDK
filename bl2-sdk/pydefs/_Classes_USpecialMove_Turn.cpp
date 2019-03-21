#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_Turn()
{
    class_< USpecialMove_Turn, bases< USpecialMove_Motion >  , boost::noncopyable>("USpecialMove_Turn", no_init)
        .def("StaticClass", &USpecialMove_Turn::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}