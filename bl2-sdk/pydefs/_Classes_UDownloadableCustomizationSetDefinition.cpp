#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UDownloadableCustomizationSetDefinition(py::object m)
{
    py::class_< UDownloadableCustomizationSetDefinition,  UDownloadableContentDefinition   >(m, "UDownloadableCustomizationSetDefinition")
        .def_readwrite("ProductID", &UDownloadableCustomizationSetDefinition::ProductID)
        .def_readwrite("NumCustomizations", &UDownloadableCustomizationSetDefinition::NumCustomizations)
        .def("StaticClass", &UDownloadableCustomizationSetDefinition::StaticClass, py::return_value_policy::reference)
        .def("CanUse", &UDownloadableCustomizationSetDefinition::CanUse)
          ;
}