#include "stdafx.h"
// Using =======================================================================
using namespace boost::python;

// Module ======================================================================
void Export_pystes_UDownloadableCustomizationSetDefinition()
{
    class_< UDownloadableCustomizationSetDefinition, bases< UDownloadableContentDefinition >  , boost::noncopyable>("UDownloadableCustomizationSetDefinition", no_init)
        .def_readwrite("ProductID", &UDownloadableCustomizationSetDefinition::ProductID)
        .def_readwrite("NumCustomizations", &UDownloadableCustomizationSetDefinition::NumCustomizations)
        .def("StaticClass", &UDownloadableCustomizationSetDefinition::StaticClass, return_value_policy< reference_existing_object >())
        .def("CanUse", &UDownloadableCustomizationSetDefinition::CanUse)
        .staticmethod("StaticClass")
  ;
}