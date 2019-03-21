#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UWillowPopulationPointPreviewComponent()
{
    class_< UWillowPopulationPointPreviewComponent, bases< UWillowPreviewComponent >  , boost::noncopyable>("UWillowPopulationPointPreviewComponent", no_init)
        .def_readwrite("PointDef", &UWillowPopulationPointPreviewComponent::PointDef)
        .def("StaticClass", &UWillowPopulationPointPreviewComponent::StaticClass, return_value_policy< reference_existing_object >())
        .staticmethod("StaticClass")
  ;
}