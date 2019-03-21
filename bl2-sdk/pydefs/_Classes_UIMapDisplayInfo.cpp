#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UIMapDisplayInfo()
{
    class_< UIMapDisplayInfo, bases< UInterface >  , boost::noncopyable>("UIMapDisplayInfo", no_init)
        .def("StaticClass", &UIMapDisplayInfo::StaticClass, return_value_policy< reference_existing_object >())
        .def("eventGetMapDisplayName", &UIMapDisplayInfo::eventGetMapDisplayName)
        .def("eventGetMapDisplayHeader", &UIMapDisplayInfo::eventGetMapDisplayHeader)
        .staticmethod("StaticClass")
  ;
}