#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowAnimNodeSlot()
{
    class_< UWillowAnimNodeSlot, bases< UAnimNodeSlot >  , boost::noncopyable>("UWillowAnimNodeSlot", no_init)
        .def("StaticClass", &UWillowAnimNodeSlot::StaticClass, return_value_policy< reference_existing_object >())
        .def("StopCustomAnimationOnLastFrame", &UWillowAnimNodeSlot::StopCustomAnimationOnLastFrame)
        .staticmethod("StaticClass")
  ;
}