#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UAnimNotify_ForceField()
{
    class_< UAnimNotify_ForceField, bases< UAnimNotify >  , boost::noncopyable>("UAnimNotify_ForceField", no_init)
        .def_readwrite("ForceFieldComponent", &UAnimNotify_ForceField::ForceFieldComponent)
        .def_readwrite("SocketName", &UAnimNotify_ForceField::SocketName)
        .def_readwrite("BoneName", &UAnimNotify_ForceField::BoneName)
        .def("StaticClass", &UAnimNotify_ForceField::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}