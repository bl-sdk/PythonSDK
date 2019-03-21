#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIUISubMenuNavigation()
{
    class_< UIUISubMenuNavigation, bases< UInterface >  , boost::noncopyable>("UIUISubMenuNavigation", no_init)
        .def("StaticClass", &UIUISubMenuNavigation::StaticClass, return_value_policy< reference_existing_object >())
        .def("ActivateLastSubMenu", &UIUISubMenuNavigation::ActivateLastSubMenu)
        .def("ActivateFirstSubMenu", &UIUISubMenuNavigation::ActivateFirstSubMenu)
        .staticmethod("StaticClass")
  ;
}