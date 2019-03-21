#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeBlendThirdPersonMenu()
{
    class_< UWillowAnimNodeBlendThirdPersonMenu, bases< UAnimNodeBlendList >  , boost::noncopyable>("UWillowAnimNodeBlendThirdPersonMenu", no_init)
        .def_readwrite("BlendTime", &UWillowAnimNodeBlendThirdPersonMenu::BlendTime)
        .def("StaticClass", &UWillowAnimNodeBlendThirdPersonMenu::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}