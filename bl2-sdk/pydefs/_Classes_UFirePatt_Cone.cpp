#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UFirePatt_Cone()
{
    class_< UFirePatt_Cone, bases< UFiringPattern >  , boost::noncopyable>("UFirePatt_Cone", no_init)
        .def_readwrite("ConeDegrees", &UFirePatt_Cone::ConeDegrees)
        .def_readwrite("ShotSpreadType", &UFirePatt_Cone::ShotSpreadType)
        .def("StaticClass", &UFirePatt_Cone::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}