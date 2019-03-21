#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAttackLocation_Height()
{
    class_< UAttackLocation_Height, bases< UAttackLocation >  , boost::noncopyable>("UAttackLocation_Height", no_init)
        .def_readwrite("Restriction", &UAttackLocation_Height::Restriction)
        .def_readwrite("Height", &UAttackLocation_Height::Height)
        .def("StaticClass", &UAttackLocation_Height::StaticClass, return_value_policy< reference_existing_object >())
        .def("ValidLocation", &UAttackLocation_Height::ValidLocation)
        .staticmethod("StaticClass")
  ;
}