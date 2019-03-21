#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIControllerLocator()
{
    class_< UIControllerLocator, bases< UInterface >  , boost::noncopyable>("UIControllerLocator", no_init)
        .def("StaticClass", &UIControllerLocator::StaticClass, return_value_policy< reference_existing_object >())
        .def("GetAWillowMind", &UIControllerLocator::GetAWillowMind, return_value_policy< reference_existing_object >())
        .def("GetAWillowPlayerController", &UIControllerLocator::GetAWillowPlayerController, return_value_policy< reference_existing_object >())
        .def("GetABaseController", &UIControllerLocator::GetABaseController, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}