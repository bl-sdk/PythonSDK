#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_USpecialMove_Dodge()
{
    class_< USpecialMove_Dodge, bases< USpecialMove_Motion >  , boost::noncopyable>("USpecialMove_Dodge", no_init)
        .def("StaticClass", &USpecialMove_Dodge::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}