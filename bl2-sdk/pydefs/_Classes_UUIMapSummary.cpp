#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UUIMapSummary()
{
    class_< UUIMapSummary, bases< UUIResourceDataProvider >  , boost::noncopyable>("UUIMapSummary", no_init)
        .def_readwrite("MapName", &UUIMapSummary::MapName)
        .def_readwrite("ScreenshotPathName", &UUIMapSummary::ScreenshotPathName)
        .def_readwrite("DisplayName", &UUIMapSummary::DisplayName)
        .def_readwrite("Description", &UUIMapSummary::Description)
        .def("StaticClass", &UUIMapSummary::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}