#include "stdafx.h"
// Using =======================================================================
namespace py = pybind11;

// Module ======================================================================
void Export_pystes_UResourceDefinition()
{
    py::class_< UResourceDefinition,  UGBXDefinition   >("UResourceDefinition")
        .def_readwrite("ResourceName", &UResourceDefinition::ResourceName)
        .def_readwrite("DefaultResourcePoolClass", &UResourceDefinition::DefaultResourcePoolClass)
        .def_readwrite("DefaultResourcePoolDefinition", &UResourceDefinition::DefaultResourcePoolDefinition)
        .def_readwrite("ResourceContextResolver", &UResourceDefinition::ResourceContextResolver)
        .def("StaticClass", &UResourceDefinition::StaticClass, py::return_value_policy::reference)
        .staticmethod("StaticClass")
  ;
}